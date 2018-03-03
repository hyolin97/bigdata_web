<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/list/news">
<html>
<head>


</head>
<body>

<xsl:apply-templates select="title"/><br/>
<xsl:apply-templates select="picture"/><br/>
<xsl:apply-templates select="reporter-name"/><br/>
</body>
</html>
</xsl:template>

<xsl:template match="title">
	<p>
		
		<xsl:value-of select="."/>
	</p>
</xsl:template>
<xsl:template match="picture">
	<img><xsl:attribute name="src">
		
		<xsl:value-of select="@href"/></xsl:attribute>
		</img><br/>
	
</xsl:template>
<xsl:template match="reporter-name">
	<p>
		
		<xsl:value-of select="."/>
	</p>
</xsl:template>


</xsl:stylesheet>