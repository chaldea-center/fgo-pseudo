void BitmapFontProperties___ctor(BitmapFontProperties_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


BitmapFontProperties_BitmapFontInfo_o *BitmapFontProperties__Find(
        BitmapFontProperties_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BitmapFontProperties_BitmapFontInfo_array *bitmapFontInfos; // x8
  int max_length; // w9
  unsigned int v5; // w10

  bitmapFontInfos = this->fields.bitmapFontInfos;
  if ( !bitmapFontInfos )
    goto LABEL_11;
  max_length = bitmapFontInfos->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C372BC(this);
      this = (BitmapFontProperties_o *)bitmapFontInfos->m_Items[v5];
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == type )
        return (BitmapFontProperties_BitmapFontInfo_o *)this;
      if ( (int)++v5 >= max_length )
        return 0;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  return 0;
}


void BitmapFontProperties_BitmapFontInfo___ctor(BitmapFontProperties_BitmapFontInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}