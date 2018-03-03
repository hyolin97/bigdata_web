<?xml version="1.0" encoding="EUC-KR"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <HTML>
    <BODY>
      <h1><xsl:value-of select="news-data/title"/></h1>

      <p><xsl:value-of select="news-data/sub-title"/><br/></p>
    </BODY>
  </HTML>
</xsl:template>

</xsl:stylesheet>