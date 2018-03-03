<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
<html>
   <body>
      <center><h1> ���� ��� </h1></center>
      <xsl:apply-templates />
   </body>
</html>
</xsl:template>

<xsl:template match="list">
   <xsl:for-each select="news">
      <p style="letter-spacing: 0.07em; line-height: 2em; text-indent: 5%; font-family: ���� ���, ����ü;">
      <font size="6px"></font><br/>
      
      <B>[����]:</B> <xsl:apply-templates select="title"/><br/>
      <B>[��¥]:</B> <xsl:apply-templates select="press"/><br/>
      <xsl:apply-templates select="picture"/><br/>
      <B>[����]:</B> <xsl:value-of select="reporter-name"/><br/>
      </p><br/><br/>
   </xsl:for-each>
</xsl:template>

<xsl:template match="title">
<a>      
   
   <xsl:value-of select="."/>
</a>
</xsl:template>
<xsl:template match = "press">
	
		<xsl:value-of select = "date"/>
	
	
</xsl:template>

<xsl:template match="list/news/picture">
<img><xsl:attribute name="src">
 <xsl:value-of select="@href" /></xsl:attribute>
   </img><br />
</xsl:template>
</xsl:stylesheet>