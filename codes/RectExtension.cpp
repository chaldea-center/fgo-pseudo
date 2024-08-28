// local variable allocation has failed, the output may be wrong!
bool __fastcall RectExtension__HasAnyIntersects(
        UnityEngine_Rect_o self,
        UnityEngine_Rect_array *rects,
        bool allowInverse,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w8
  float v5; // s4
  float v6; // s5
  float v7; // s6
  float v8; // s7
  float v9; // s2
  float m_XMin; // s2
  float v11; // s1
  float v12; // s3
  float v13; // s1
  float v14; // s3
  float v15; // s3
  float v16; // s6
  float v17; // s7
  il2cpp_array_size_t v18; // w10
  signed int v19; // w9
  float *v20; // x10
  float v21; // s16
  float v22; // s18
  float v23; // s17
  float v24; // s19
  float v25; // s20
  float v26; // s21
  bool v27; // cc
  float v28; // s23
  float v29; // s22
  float v30; // s21
  float m_YMin; // s20

  if ( !rects )
    sub_1B71828(0LL, allowInverse);
  max_length = rects->max_length;
  v5 = self.fields.m_XMin + self.fields.m_Width;
  v6 = self.fields.m_YMin + self.fields.m_Height;
  v7 = self.fields.m_XMin - (float)(self.fields.m_XMin + self.fields.m_Width);
  v8 = self.fields.m_YMin - (float)(self.fields.m_YMin + self.fields.m_Height);
  if ( self.fields.m_XMin <= (float)(self.fields.m_XMin + self.fields.m_Width) )
    v7 = v9;
  if ( self.fields.m_XMin <= (float)(self.fields.m_XMin + self.fields.m_Width) )
    m_XMin = self.fields.m_XMin;
  else
    m_XMin = self.fields.m_XMin + self.fields.m_Width;
  if ( v11 <= v6 )
    v8 = v12;
  if ( v13 <= v6 )
    v15 = v13;
  else
    v15 = v13 + v14;
  v16 = m_XMin + v7;
  v17 = v15 + v8;
  v18 = max_length - 1;
  do
  {
    v19 = v18;
    if ( (v18 & 0x80000000) != 0 )
      break;
    if ( v18 >= max_length )
      sub_1B71830(rects, allowInverse);
    v20 = (float *)(&rects->obj + v18);
    v22 = v20[8];
    v21 = v20[9];
    v24 = v20[10];
    v23 = v20[11];
    if ( allowInverse )
    {
      v25 = v22 + v24;
      v26 = v21 + v23;
      v27 = v22 <= (float)(v22 + v24);
      if ( v22 > (float)(v22 + v24) )
        v24 = v22 - (float)(v22 + v24);
      if ( !v27 )
        v22 = v25;
      if ( v21 > v26 )
        v23 = v21 - (float)(v21 + v23);
      if ( v21 > v26 )
        v21 = v26;
      v28 = v17;
      v29 = v16;
      v30 = m_XMin;
      m_YMin = v15;
    }
    else
    {
      v28 = v6;
      v29 = v5;
      v30 = self.fields.m_XMin;
      m_YMin = self.fields.m_YMin;
    }
    v18 = v19 - 1;
  }
  while ( v21 >= v28 || v22 >= v29 || (float)(v22 + v24) <= v30 || (float)(v21 + v23) <= m_YMin );
  return v19 >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RectExtension__IsContain(UnityEngine_Rect_o self, UnityEngine_Rect_o b, const MethodInfo *method)
{
  bool result; // w0
  float v4; // s1
  float v5; // s5
  float v6; // s1
  float v7; // s3
  float v8; // s5
  float v9; // s7

  if ( b.fields.m_XMin < self.fields.m_XMin )
    return 0;
  result = 0;
  if ( v5 >= v4 && (float)(self.fields.m_Width + self.fields.m_XMin) >= (float)(b.fields.m_Width + b.fields.m_XMin) )
    return (float)(v7 + v6) >= (float)(v9 + v8);
  return result;
}