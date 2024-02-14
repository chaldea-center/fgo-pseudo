// local variable allocation has failed, the output may be wrong!
bool __fastcall RectExtension__HasAnyIntersects(
        UnityEngine_Rect_o self,
        UnityEngine_Rect_array *rects,
        bool allowInverse,
        const MethodInfo *method)
{
  int v4; // s4
  UnityEngine_Rect_array *v8; // x19
  _BOOL4 v9; // w20
  il2cpp_array_size_t v10; // w21
  UnityEngine_Rect_o *v11; // x8
  UnityEngine_Rect_o *v12; // x22
  __int64 v14; // x0
  UnityEngine_Rect_o v15; // [xsp+0h] [xbp-30h] BYREF

  v15 = self;
  if ( !rects )
    sub_B0D97C(0LL);
  v8 = rects;
  v9 = allowInverse;
  v10 = rects->max_length - 1;
  v11 = &rects->m_Items[(int)v10 + 1];
  while ( (v10 & 0x80000000) == 0 )
  {
    if ( v10 >= v8->max_length )
    {
      v14 = sub_B0D9A8(rects);
      sub_B0D948(v14, 0LL);
    }
    --v10;
    v12 = v11 - 1;
    rects = (UnityEngine_Rect_array *)UnityEngine_Rect__Overlaps_34970720(
                                        *(UnityEngine_Rect_o *)((char *)v11 - 12),
                                        *(UnityEngine_Rect_o *)&v4,
                                        (bool)&v15,
                                        (const MethodInfo *)v9);
    v11 = v12;
    if ( ((unsigned __int8)rects & 1) != 0 )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RectExtension__IsContain(UnityEngine_Rect_o self, UnityEngine_Rect_o b, const MethodInfo *method)
{
  float m_XMin; // s8
  float xMin; // s0
  float v8; // s8
  float xMax; // s0
  float v13; // s8
  float yMin; // s0
  UnityEngine_Rect_o v19; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o anonymous0[3]; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  anonymous0[0] = self;
  v19 = b;
  v21.fields.m_XMin = UnityEngine_Rect__get_xMin(self, (const MethodInfo *)&v19);
  m_XMin = v21.fields.m_XMin;
  xMin = UnityEngine_Rect__get_xMin(v21, (const MethodInfo *)anonymous0);
  if ( m_XMin < xMin )
    return 0;
  v22.fields.m_XMin = UnityEngine_Rect__get_xMax(*(UnityEngine_Rect_o *)&xMin, (const MethodInfo *)anonymous0);
  v8 = v22.fields.m_XMin;
  xMax = UnityEngine_Rect__get_xMax(v22, (const MethodInfo *)&v19);
  if ( v8 < xMax )
    return 0;
  v23.fields.m_XMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&xMax, (const MethodInfo *)&v19);
  v13 = v23.fields.m_XMin;
  yMin = UnityEngine_Rect__get_yMin(v23, (const MethodInfo *)anonymous0);
  if ( v13 < yMin )
    return 0;
  v24.fields.m_XMin = UnityEngine_Rect__get_yMax(*(UnityEngine_Rect_o *)&yMin, (const MethodInfo *)anonymous0);
  return v24.fields.m_XMin >= UnityEngine_Rect__get_yMax(v24, (const MethodInfo *)&v19);
}