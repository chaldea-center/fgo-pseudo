bool RectExtension__HasAnyIntersects(
        UnityEngine_Rect_o self,
        UnityEngine_Rect_array *rects,
        bool allowInverse,
        const MethodInfo *method)
{
  unsigned int max_length; // w8
  float v5; // s4
  float v6; // s5
  float m_Width; // s6
  float m_Height; // s7
  float m_XMin; // s2
  float m_YMin; // s3
  float v11; // s6
  float v12; // s7
  unsigned int v13; // w10
  int v14; // w9
  float *v15; // x10
  float v16; // s16
  float v17; // s18
  float v18; // s17
  float v19; // s19
  float v20; // s20
  float v21; // s21
  float v22; // s23
  float v23; // s22
  float v24; // s21
  float v25; // s20

  if ( !rects )
    sub_1C7BD40(0, allowInverse);
  max_length = rects->max_length;
  v5 = self.fields.m_XMin + self.fields.m_Width;
  v6 = self.fields.m_YMin + self.fields.m_Height;
  m_Width = self.fields.m_XMin - (float)(self.fields.m_XMin + self.fields.m_Width);
  m_Height = self.fields.m_YMin - (float)(self.fields.m_YMin + self.fields.m_Height);
  if ( self.fields.m_XMin > (float)(self.fields.m_XMin + self.fields.m_Width) )
  {
    m_XMin = self.fields.m_XMin + self.fields.m_Width;
  }
  else
  {
    m_Width = self.fields.m_Width;
    m_XMin = self.fields.m_XMin;
  }
  if ( self.fields.m_YMin > v6 )
  {
    m_YMin = self.fields.m_YMin + self.fields.m_Height;
  }
  else
  {
    m_Height = self.fields.m_Height;
    m_YMin = self.fields.m_YMin;
  }
  v11 = m_XMin + m_Width;
  v12 = m_YMin + m_Height;
  v13 = max_length - 1;
  do
  {
    v14 = v13;
    if ( (v13 & 0x80000000) != 0 )
      break;
    if ( v13 >= max_length )
      sub_1C7BD48(rects);
    v15 = (float *)(&rects->obj + v13);
    v17 = v15[8];
    v16 = v15[9];
    v19 = v15[10];
    v18 = v15[11];
    if ( allowInverse )
    {
      v20 = v17 + v19;
      v21 = v16 + v18;
      if ( v17 > (float)(v17 + v19) )
      {
        v19 = v17 - (float)(v17 + v19);
        v17 = v20;
      }
      if ( v16 > v21 )
      {
        v18 = v16 - (float)(v16 + v18);
        v16 = v21;
      }
      v22 = v12;
      v23 = v11;
      v24 = m_XMin;
      v25 = m_YMin;
    }
    else
    {
      v22 = v6;
      v23 = v5;
      v24 = self.fields.m_XMin;
      v25 = self.fields.m_YMin;
    }
    v13 = v14 - 1;
  }
  while ( v16 >= v22 || v17 >= v23 || (float)(v17 + v19) <= v24 || (float)(v16 + v18) <= v25 );
  return v14 >= 0;
}


bool RectExtension__IsContain(UnityEngine_Rect_o self, UnityEngine_Rect_o b, const MethodInfo *method)
{
  bool result; // w0

  if ( b.fields.m_XMin < self.fields.m_XMin )
    return 0;
  result = 0;
  if ( b.fields.m_YMin >= self.fields.m_YMin
    && (float)(self.fields.m_Width + self.fields.m_XMin) >= (float)(b.fields.m_Width + b.fields.m_XMin) )
  {
    return (float)(self.fields.m_Height + self.fields.m_YMin) >= (float)(b.fields.m_Height + b.fields.m_YMin);
  }
  return result;
}