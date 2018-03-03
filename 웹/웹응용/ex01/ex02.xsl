<?xml version="1.0" encoding="EUC-KR" ?>

<xsl:stylesheet version="1.0" 
      xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <memo>
    <header>
       <xsl:apply-templates select="방명록/성명" />
    </header>
    <body>
       <par>
          <xsl:value-of select="방명록/내용"/>
       </par>
    </body>
  </memo>
</xsl:template>

<xsl:template match="성명">
  <name>
    <xsl:value-of select="이름" />
  </name>
</xsl:template>

</xsl:stylesheet>