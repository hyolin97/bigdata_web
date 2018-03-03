<?xml version="1.0" encoding="EUC-KR"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="list/news/title">
  <HTML>
    <BODY>
      <h1><font size="20" color="pink" ><xsl:value-of select="list/news/title"/></font></h1>

      
    </BODY>
  </HTML>
</xsl:template>

</xsl:stylesheet>