setwd('C:\\easy_r')
#install.packages('foreign')
library(readxl)
library(foreign)
library(dplyr)
library(ggplot2)
library(readxl)
install.packages('outliers')
#1. read
raw_welfare <- read.csv('ddm2.csv', header=T)

welfare <- raw_welfare
# boxplot 그리기
ggplot(data= welfare, aes(x= sgg, y = ym)) + geom_boxplot()
# 3/4번째 수 산출
well2 <- welfare %>% 
  filter(!is.na(ym)) %>% 
  group_by(sgg) %>% summarise(quantile_ym= quantile(ym,3/4))
well2

well3 <- welfare %>% 
  filter(ym <-quantile(ym,3/4))

write.csv(well3,file='ddm_a.csv', row.names = TRUE)

