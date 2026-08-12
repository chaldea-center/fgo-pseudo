void BitmapFontProperties___ctor(BitmapFontProperties_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BitmapFontProperties_BitmapFontInfo_o *BitmapFontProperties__Find(
        BitmapFontProperties_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BitmapFontProperties_BitmapFontInfo_array *bitmapFontInfos; // x8
  int max_length; // w9
  int v5; // w11

  bitmapFontInfos = this->fields.bitmapFontInfos;
  if ( !bitmapFontInfos )
    goto LABEL_10;
  max_length = bitmapFontInfos->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_2213CE4(this);
      this = (BitmapFontProperties_o *)bitmapFontInfos->m_Items[v5];
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == type )
        return (BitmapFontProperties_BitmapFontInfo_o *)this;
      if ( (max_length & ~(max_length >> 31)) == ++v5 )
        return 0;
    }
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&type);
  }
  return 0;
}


void BitmapFontProperties_BitmapFontInfo___ctor(BitmapFontProperties_BitmapFontInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}