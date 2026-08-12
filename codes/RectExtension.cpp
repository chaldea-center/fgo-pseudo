// local variable allocation has failed, the output may be wrong!
bool RectExtension__HasAnyIntersects(
        UnityEngine_Rect_o self,
        UnityEngine_Rect_array *rects,
        bool allowInverse,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v5; // x8
  float v6; // s4
  float m_YMin; // s6
  __int64 v8; // x10
  float *p_m_Height; // x11
  float m_Width; // s7
  float m_XMin; // s2
  float m_Height; // s5
  float v13; // s7
  float v14; // s16
  float v15; // s17
  float v16; // s18
  float v17; // s19
  float v18; // s21
  float v19; // s22
  bool v20; // cc
  float v21; // s20
  float v22; // s22
  float v23; // s21
  float v24; // s23
  float v25; // s18
  bool v26; // nf
  bool v27; // cc

  if ( !rects )
    sub_2213CDC(0, allowInverse);
  max_length = rects->max_length;
  v5 = (unsigned int)(max_length - 1);
  if ( (int)max_length - 1 < 0 )
    return 0;
  v6 = self.fields.m_XMin + self.fields.m_Width;
  m_YMin = self.fields.m_YMin + self.fields.m_Height;
  v8 = v5 + 1;
  p_m_Height = &rects->m_Items[(unsigned int)v5].fields.m_Height;
  if ( self.fields.m_XMin <= (float)(self.fields.m_XMin + self.fields.m_Width) )
    m_Width = self.fields.m_Width;
  else
    m_Width = self.fields.m_XMin - (float)(self.fields.m_XMin + self.fields.m_Width);
  if ( self.fields.m_XMin <= (float)(self.fields.m_XMin + self.fields.m_Width) )
    m_XMin = self.fields.m_XMin;
  else
    m_XMin = self.fields.m_XMin + self.fields.m_Width;
  m_Height = self.fields.m_YMin - m_YMin;
  if ( self.fields.m_YMin <= m_YMin )
  {
    m_Height = self.fields.m_Height;
    m_YMin = self.fields.m_YMin;
  }
  v13 = m_XMin + m_Width;
  while ( 1 )
  {
    if ( (unsigned int)rects->max_length <= v5 )
      sub_2213CE4(rects);
    v15 = *(p_m_Height - 3);
    v14 = *(p_m_Height - 2);
    v17 = *(p_m_Height - 1);
    v16 = *p_m_Height;
    if ( allowInverse )
    {
      v18 = v14 + v16;
      v19 = v15 - (float)(v15 + v17);
      v20 = v15 <= (float)(v15 + v17);
      if ( v15 > (float)(v15 + v17) )
        v15 = v15 + v17;
      v21 = v13;
      if ( !v20 )
        v17 = v19;
      v22 = m_XMin;
      if ( v14 > v18 )
      {
        v16 = v14 - (float)(v14 + v16);
        v14 = v18;
      }
      v23 = m_YMin;
      v24 = m_Height;
    }
    else
    {
      v21 = v6;
      v22 = self.fields.m_XMin;
      v23 = self.fields.m_YMin;
      v24 = self.fields.m_Height;
    }
    v25 = v14 + v16;
    v26 = (float)(v15 + v17) > v22 && v15 < v21;
    v27 = !v26 || v25 <= v23;
    if ( !v27 && v14 < (float)(v23 + v24) )
      break;
    v20 = v8-- <= 1;
    p_m_Height -= 4;
    if ( v20 )
      return 0;
  }
  return 1;
}


bool RectExtension__IsContain(UnityEngine_Rect_o self, UnityEngine_Rect_o b, const MethodInfo *method)
{
  bool v3; // nf
  bool result; // w0

  result = b.fields.m_XMin >= self.fields.m_XMin
        && ((float)(self.fields.m_Width + self.fields.m_XMin) >= (float)(b.fields.m_Width + b.fields.m_XMin)
          ? (v3 = b.fields.m_YMin < self.fields.m_YMin)
          : (v3 = 1),
            !v3)
        && (float)(self.fields.m_Height + self.fields.m_YMin) >= (float)(b.fields.m_Height + b.fields.m_YMin);
  return result;
}