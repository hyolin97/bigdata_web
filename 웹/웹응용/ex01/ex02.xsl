<?xml version="1.0" encoding="EUC-KR" ?>

<xsl:stylesheet version="1.0" 
      xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <memo>
    <header>
       <xsl:apply-templates select="����/����" />
    </header>
    <body>
       <par>
          <xsl:value-of select="����/����"/>
       </par>
    </body>
  </memo>
</xsl:template>

<xsl:template match="����">
  <name>
    <xsl:value-of select="�̸�" />
  </name>
</xsl:template>

</xsl:stylesheet>