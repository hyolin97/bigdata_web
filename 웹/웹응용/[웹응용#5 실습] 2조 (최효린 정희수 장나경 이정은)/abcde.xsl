<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
<html>
<body>
<xsl:apply-templates select="list/news/title"/><br/>
</body>
</html>
</xsl:template>

<xsl:template match="list/news/title">
	<p>
	<xsl:value-of select="."/>
	</p>
</xsl:template>


</xsl:stylesheet>