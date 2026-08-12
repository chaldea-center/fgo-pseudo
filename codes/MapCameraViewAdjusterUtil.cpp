void MapCameraViewAdjusterUtil___cctor(const MethodInfo *method)
{
  if ( (byte_596FA4B & 1) == 0 )
  {
    sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_596FA4B = 1;
  }
  *MapCameraViewAdjusterUtil_TypeInfo->static_fields = (struct MapCameraViewAdjusterUtil_StaticFields)0x3D4CCCCD41A00000LL;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
        MapCamera_o *camera,
        UnityEngine_Rect_array *rectsOnMap,
        UnityEngine_Rect_array *rects2DUI,
        int32_t *failedReason,
        const MethodInfo *method)
{
  MapCamera_o *v8; // x22
  float m_Height; // s9
  float m_Width; // s10
  UnityEngine_Vector2_o v11; // x1
  UnityEngine_Vector2_o v12; // kr20_8
  float v13; // s8
  const MethodInfo *v14; // x2
  float v15; // s3
  float v16; // s9
  float v17; // s10
  float v18; // s1
  bool v19; // nf
  float v20; // s11
  float v21; // s10
  float x; // s9
  float y; // s8
  UnityEngine_Vector2_o Size; // kr28_8
  struct MapZoom_o *mZoom; // x8
  MapCameraViewAdjusterUtil_c *v26; // x0
  float mZoomMax; // s8
  MapCamera_c *klass; // x8
  MapCamera_o *v29; // x22
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 i; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  int v48; // w22
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  float v57; // [xsp+18h] [xbp-B8h]
  float v58; // [xsp+1Ch] [xbp-B4h]
  float v59; // [xsp+20h] [xbp-B0h]
  float v60; // [xsp+24h] [xbp-ACh]
  float v61; // [xsp+28h] [xbp-A8h]
  float v62; // [xsp+2Ch] [xbp-A4h]
  float m_YMin; // [xsp+30h] [xbp-A0h]
  float m_XMin; // [xsp+34h] [xbp-9Ch]
  __int64 v65; // [xsp+48h] [xbp-88h]
  UnityEngine_Vector3_o v66; // 0:kr10_12.12
  UnityEngine_Rect_o CoveringRect; // 0:kr00_16.16
  UnityEngine_Rect_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v73; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = camera;
  if ( (byte_596FA47 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_596FA47 = 1;
  }
  *failedReason = 0;
  if ( !rectsOnMap )
    goto LABEL_64;
  if ( !rectsOnMap->max_length )
  {
    Size = FSWindowUtil__GetSize(0);
    x = Size.fields.x;
    y = Size.fields.y;
    v21 = Size.fields.y * -0.5;
    v20 = Size.fields.x * -0.5;
    goto LABEL_61;
  }
  if ( !v8 )
    goto LABEL_64;
  m_Width = v8->fields.mMvBrakeRect.fields.m_Width;
  m_Height = v8->fields.mMvBrakeRect.fields.m_Height;
  m_YMin = v8->fields.mMvBrakeRect.fields.m_YMin;
  m_XMin = v8->fields.mMvBrakeRect.fields.m_XMin;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, rectsOnMap, rects2DUI);
  v12 = FSWindowUtil__GetSize(0);
  v61 = m_Height;
  v13 = (float)(m_Height * v12.fields.x) / v12.fields.y;
  if ( m_Width <= v13 )
  {
    v13 = m_Width;
    m_Height = (float)(m_Width * v12.fields.y) / v12.fields.x;
  }
  v62 = m_Width;
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, (const MethodInfo *)*(_QWORD *)&v11);
  v15 = m_Height;
  v16 = CoveringRect.fields.m_XMin + (float)(CoveringRect.fields.m_Width * 0.5);
  v17 = CoveringRect.fields.m_YMin + (float)(CoveringRect.fields.m_Height * 0.5);
  v18 = v13 * 0.5;
  v19 = v13 < CoveringRect.fields.m_Width || v15 < CoveringRect.fields.m_Height;
  v20 = v16 - v18;
  if ( v19 )
  {
    v21 = v17 - (float)(v15 * 0.5);
    x = v13;
    *failedReason = 2;
    y = v15;
    goto LABEL_61;
  }
  mZoom = v8->fields.mZoom;
  v57 = v17 - (float)(v15 * 0.5);
  v58 = v16 - v18;
  v59 = v15;
  v60 = v13;
  if ( !mZoom )
    goto LABEL_64;
  v26 = MapCameraViewAdjusterUtil_TypeInfo;
  mZoomMax = mZoom->fields.mZoomMax;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, rectsOnMap, v14);
    v26 = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v72.fields.m_YMin = m_YMin;
  v72.fields.m_XMin = m_XMin;
  v72.fields.m_Height = v61;
  v72.fields.m_Width = v62;
  *(_QWORD *)&v66.fields.x = v26;
  LODWORD(v66.fields.z) = (_DWORD)rectsOnMap;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            1.0,
                            mZoomMax,
                            v26->static_fields->CHECK_ZOOM_INTERVAL,
                            v26->static_fields->CHECK_OFFSET_INTERVAL,
                            v72,
                            v66,
                            v14);
  if ( !camera )
LABEL_64:
    sub_2213CDC(camera, rectsOnMap);
  klass = camera->klass;
  v29 = camera;
  v30 = *(unsigned __int16 *)&camera->klass->_2.rank;
  if ( *(_WORD *)&camera->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Rect__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Rect__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_25;
    }
    v32 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v32 = sub_224BC3C(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v33 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  v65 = v33;
  if ( !v33 )
    sub_2213CDC(0, v34);
  for ( i = v33; ; i = v65 )
  {
    v36 = *(_QWORD *)i;
    v37 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_33;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_33:
      v39 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(i, *(_QWORD *)(v39 + 8));
    if ( (v40 & 1) == 0 )
    {
      y = 0.0;
      x = 0.0;
      v21 = 0.0;
      v20 = 0.0;
      v48 = 8;
      goto LABEL_51;
    }
    if ( !v65 )
      sub_2213CDC(v40, v41);
    v42 = *(_QWORD *)v65;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v44 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_41;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_41:
      v45 = sub_224BC3C(v65, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v68.fields.m_XMin = (*(float (__fastcall **)(__int64, _QWORD))v45)(v65, *(_QWORD *)(v45 + 8));
    v20 = v68.fields.m_XMin;
    v21 = v68.fields.m_YMin;
    x = v68.fields.m_Width;
    y = v68.fields.m_Height;
    if ( RectExtension__IsContain(v68, CoveringRect, 0) )
    {
      v73.fields.m_XMin = v20;
      v73.fields.m_YMin = v21;
      v73.fields.m_Width = x;
      v73.fields.m_Height = y;
      v69.fields.m_YMin = m_YMin;
      v69.fields.m_XMin = m_XMin;
      v69.fields.m_Height = v61;
      v69.fields.m_Width = v62;
      if ( RectExtension__IsContain(v69, v73, 0) )
      {
        if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v46, v47);
        v70.fields.m_XMin = v20;
        v70.fields.m_YMin = v21;
        v70.fields.m_Width = x;
        v70.fields.m_Height = y;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(rectsOnMap, rects2DUI, v70, v47) )
          break;
      }
    }
  }
  v48 = 7;
LABEL_51:
  if ( v65 )
  {
    v49 = *(_QWORD *)v65;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_56;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_56:
      v52 = sub_224BC3C(v65, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v52)(v65, *(_QWORD *)(v52 + 8));
  }
  if ( (v48 | 8) == 8 )
  {
    v21 = v57;
    v20 = v58;
    y = v59;
    x = v60;
    *failedReason = 1;
  }
LABEL_61:
  result.fields.m_XMin = v20;
  result.fields.m_YMin = v21;
  result.fields.m_Width = x;
  result.fields.m_Height = y;
  return result;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__CalculateLostSomeRectsAllowedCameraRect(
        MapCamera_o *camera,
        UnityEngine_Rect_array *rectsOnMap,
        UnityEngine_Rect_array *rects2DUI,
        UnityEngine_Rect_array *essentialRectsOnMap,
        int32_t *failedReason,
        const MethodInfo *method)
{
  MapCamera_o *v10; // x23
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s14
  float m_Height; // s15
  UnityEngine_Vector2_o v15; // x1
  UnityEngine_Vector2_o Size; // kr30_8
  float v17; // s8
  float v18; // s11
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  int32_t v22; // w8
  float v23; // s10
  float v24; // s9
  float v25; // s8
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  float v28; // s8
  MapCameraViewAdjusterUtil_c *v29; // x0
  MapCamera_c *klass; // x8
  MapCamera_o *v31; // x22
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 i; // x22
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  float v48; // s1
  float v49; // s2
  float v50; // s3
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int v53; // w22
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  float v62; // [xsp+28h] [xbp-B8h]
  float v63; // [xsp+2Ch] [xbp-B4h]
  float v64; // [xsp+30h] [xbp-B0h]
  float v65; // [xsp+34h] [xbp-ACh]
  __int64 v66; // [xsp+58h] [xbp-88h]
  UnityEngine_Vector3_o v67; // 0:kr20_12.12
  UnityEngine_Rect_o CoveringRect; // 0:kr00_16.16
  UnityEngine_Rect_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v74; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v10 = camera;
  if ( (byte_596FA48 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_596FA48 = 1;
  }
  *failedReason = 0;
  if ( !v10 )
    goto LABEL_65;
  m_XMin = v10->fields.mMvBrakeRect.fields.m_XMin;
  m_YMin = v10->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = v10->fields.mMvBrakeRect.fields.m_Width;
  m_Height = v10->fields.mMvBrakeRect.fields.m_Height;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, rectsOnMap, rects2DUI);
  Size = FSWindowUtil__GetSize(0);
  v17 = m_Height;
  v18 = (float)(m_Height * Size.fields.x) / Size.fields.y;
  if ( m_Width <= v18 )
  {
    v18 = m_Width;
    v17 = (float)(m_Width * Size.fields.y) / Size.fields.x;
  }
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(essentialRectsOnMap, (const MethodInfo *)*(_QWORD *)&v15);
  if ( v18 < CoveringRect.fields.m_Width || v17 < CoveringRect.fields.m_Height )
  {
    v22 = 2;
    v23 = (float)(CoveringRect.fields.m_XMin + (float)(CoveringRect.fields.m_Width * 0.5)) - (float)(v18 * 0.5);
    v24 = (float)(CoveringRect.fields.m_YMin + (float)(CoveringRect.fields.m_Height * 0.5)) - (float)(v17 * 0.5);
LABEL_61:
    *failedReason = v22;
    goto LABEL_62;
  }
  v63 = v17;
  v65 = v18;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v19, v20);
  MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, v19);
  v25 = v17 * 0.5;
  v64 = v18 * 0.5;
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v62 = v25;
  v28 = v18 / FSWindowUtil__GetSize(0).fields.x;
  v29 = MapCameraViewAdjusterUtil_TypeInfo;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v26, v27);
    v29 = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v73.fields.m_XMin = m_XMin;
  v73.fields.m_YMin = m_YMin;
  v73.fields.m_Width = m_Width;
  v73.fields.m_Height = m_Height;
  *(_QWORD *)&v67.fields.x = v29;
  LODWORD(v67.fields.z) = v26;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            v28,
                            v28,
                            1.0,
                            v29->static_fields->CHECK_OFFSET_INTERVAL,
                            v73,
                            v67,
                            v27);
  if ( !camera )
LABEL_65:
    sub_2213CDC(camera, rectsOnMap);
  klass = camera->klass;
  v31 = camera;
  v32 = *(unsigned __int16 *)&camera->klass->_2.rank;
  if ( *(_WORD *)&camera->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Rect__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Rect__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_25;
    }
    v34 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v34 = sub_224BC3C(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  v66 = v35;
  if ( !v35 )
    sub_2213CDC(0, v36);
  for ( i = v35; ; i = v66 )
  {
    v38 = *(_QWORD *)i;
    v39 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_33;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_33:
      v41 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(i, *(_QWORD *)(v41 + 8));
    if ( (v42 & 1) == 0 )
    {
      v17 = 0.0;
      v18 = 0.0;
      v24 = 0.0;
      v23 = 0.0;
      v53 = 9;
      goto LABEL_51;
    }
    if ( !v66 )
      sub_2213CDC(v42, v43);
    v44 = *(_QWORD *)v66;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v46 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_41;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_41:
      v47 = sub_224BC3C(v66, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v23 = (*(float (__fastcall **)(__int64, _QWORD))v47)(v66, *(_QWORD *)(v47 + 8));
    v24 = v48;
    v18 = v49;
    v17 = v50;
    v69.fields.m_XMin = m_XMin;
    v69.fields.m_YMin = m_YMin;
    v69.fields.m_Width = m_Width;
    v69.fields.m_Height = m_Height;
    v74.fields.m_XMin = v23;
    v74.fields.m_YMin = v24;
    v74.fields.m_Width = v18;
    v74.fields.m_Height = v17;
    if ( RectExtension__IsContain(v69, v74, 0) )
    {
      v70.fields.m_XMin = v23;
      v70.fields.m_YMin = v24;
      v70.fields.m_Width = v18;
      v70.fields.m_Height = v17;
      if ( RectExtension__IsContain(v70, CoveringRect, 0) )
      {
        if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v51, v52);
        v71.fields.m_XMin = v23;
        v71.fields.m_YMin = v24;
        v71.fields.m_Width = v18;
        v71.fields.m_Height = v17;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(essentialRectsOnMap, rects2DUI, v71, v52) )
          break;
      }
    }
  }
  v53 = 8;
LABEL_51:
  if ( v66 )
  {
    v54 = *(_QWORD *)v66;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_56;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_56:
      v57 = sub_224BC3C(v66, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v66, *(_QWORD *)(v57 + 8));
  }
  if ( v53 == 9 )
  {
    v22 = 1;
    v18 = v65;
    v23 = (float)(CoveringRect.fields.m_XMin + (float)(CoveringRect.fields.m_Width * 0.5)) - v64;
    v17 = v63;
    v24 = (float)(CoveringRect.fields.m_YMin + (float)(CoveringRect.fields.m_Height * 0.5)) - v62;
    goto LABEL_61;
  }
LABEL_62:
  result.fields.m_XMin = v23;
  result.fields.m_YMin = v24;
  result.fields.m_Width = v18;
  result.fields.m_Height = v17;
  return result;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__CreateCoveringRect(
        UnityEngine_Rect_array *rects,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x9
  int8x8_t v3; // d0
  float32x2_t v4; // d2
  unsigned __int64 v5; // x8
  float *p_m_Width; // x10
  int8x8_t v7; // d1
  float32x2_t v8; // d2
  bool v9; // cc
  float32x2_t v10; // t1
  int8x8_t v11; // d1
  int8x8_t v12; // d2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !rects )
    sub_2213CDC(0, method);
  max_length = rects->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      goto LABEL_12;
    v3.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_XMin;
    v4.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_Width;
    v5 = (unsigned int)(max_length - 1);
    if ( (int)v5 >= 1 )
    {
      p_m_Width = &rects->m_Items[(unsigned int)v5].fields.m_Width;
      while ( v5 < (unsigned int)rects->max_length )
      {
        v7.n64_u64[0] = *(_QWORD *)(p_m_Width - 2);
        v8.n64_u64[0] = vadd_f32(v3, v4).n64_u64[0];
        v9 = (__int64)v5-- <= 1;
        v3.n64_u64[0] = vbsl_s8(vcgt_f32(v3, v7), v7, v3).n64_u64[0];
        v10.n64_u64[0] = *(unsigned __int64 *)p_m_Width;
        p_m_Width -= 4;
        v11.n64_u64[0] = vadd_f32(v7, v10).n64_u64[0];
        v12.n64_u64[0] = vadd_f32(v3, vsub_f32(v8, v3)).n64_u64[0];
        v4.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v11, v12), v11, v12), v3).n64_u64[0];
        if ( v9 )
          goto LABEL_11;
      }
LABEL_12:
      sub_2213CE4(rects);
    }
  }
  else
  {
    v4.n64_u64[0] = 0;
    v3.n64_u64[0] = 0;
  }
LABEL_11:
  LODWORD(result.fields.m_YMin) = v3.n64_u32[1];
  LODWORD(result.fields.m_Height) = v4.n64_u32[1];
  result.fields.m_XMin = v3.n64_f32[0];
  result.fields.m_Width = v4.n64_f32[0];
  return result;
}


System_Collections_Generic_IEnumerable_Rect__o *MapCameraViewAdjusterUtil__GenerateCameraRects(
        float ZoomMin,
        float ZoomMax,
        float ZoomInterval,
        float offsetInterval,
        UnityEngine_Rect_o brakeRect,
        UnityEngine_Vector3_o center,
        const MethodInfo *method)
{
  float m_XMin; // s11
  __int64 v12; // x19
  int32_t CurrentManagedThreadId; // w0
  float m_YMin; // [xsp+Ch] [xbp-64h]
  float m_Width; // [xsp+58h] [xbp-18h]
  float m_Height; // [xsp+5Ch] [xbp-14h]
  __int64 v18; // [xsp+70h] [xbp+0h]
  int v19; // [xsp+78h] [xbp+8h]

  m_XMin = brakeRect.fields.m_XMin;
  m_Width = brakeRect.fields.m_Width;
  m_Height = brakeRect.fields.m_Height;
  m_YMin = brakeRect.fields.m_YMin;
  if ( (byte_596FA49 & 1) == 0 )
  {
    sub_2213A60(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_596FA49 = 1;
  }
  v12 = sub_2213CCC(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = -2;
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
  *(float *)(v12 + 44) = ZoomMin;
  *(_DWORD *)(v12 + 36) = CurrentManagedThreadId;
  *(float *)(v12 + 88) = m_XMin;
  *(float *)(v12 + 92) = m_YMin;
  *(float *)(v12 + 124) = ZoomMax;
  *(float *)(v12 + 116) = ZoomInterval;
  *(float *)(v12 + 108) = offsetInterval;
  *(float *)(v12 + 96) = m_Width;
  *(float *)(v12 + 100) = m_Height;
  *(_QWORD *)(v12 + 60) = v18;
  *(_DWORD *)(v12 + 68) = v19;
  return (System_Collections_Generic_IEnumerable_Rect__o *)v12;
}


MapCameraViewAdjusterUtil_CameraDestinationInfo_o *MapCameraViewAdjusterUtil__GetSafeCameraDestination(
        MapCamera_o *camera,
        System_Nullable_Vector3__o expectedDestPos,
        System_Nullable_float__o expectedDestZoom,
        const MethodInfo *method)
{
  bool hasValue; // w21
  bool v5; // w20
  MapCamera_o *v6; // x19
  float Value; // s0
  float v8; // s8
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s0
  float v11; // s9
  float v12; // s1
  __int64 v13; // x9
  __int64 v14; // x8
  float32x2_t v15; // d3
  int8x8_t v16; // d2
  int8x8_t v17; // d3
  int8x8_t v18; // d2
  int8x8_t v19; // d1
  unsigned __int64 v20; // d8
  __int64 v21; // x19
  int8x8_t v23; // d0
  unsigned __int32 v24; // s1
  unsigned __int64 v25; // kr00_8
  unsigned __int64 ScrlPosVec3; // kr30_8
  float v27; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector3__o v28; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_float__o v29; // [xsp+38h] [xbp-28h] BYREF
  System_Nullable_Vector3__o v30; // 0:kr20_16.16

  v29 = expectedDestZoom;
  hasValue = expectedDestZoom.fields.hasValue;
  v5 = expectedDestPos.fields.hasValue;
  v6 = camera;
  v28 = expectedDestPos;
  if ( (byte_596FA4A & 1) == 0 )
  {
    sub_2213A60(&MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_Value__);
    camera = (MapCamera_o *)sub_2213A60(&Method_System_Nullable_float__get_Value__);
    byte_596FA4A = 1;
  }
  if ( hasValue )
  {
    Value = System_Nullable_float___get_Value(
              (System_Nullable_float__o)&v29,
              (const MethodInfo_45E6930 *)Method_System_Nullable_float__get_Value__);
    if ( !v6 )
      goto LABEL_20;
  }
  else
  {
    if ( !v6 || (camera = (MapCamera_o *)v6->fields.mZoom) == 0 )
LABEL_20:
      sub_2213CDC(camera, *(_QWORD *)&expectedDestPos.fields.hasValue);
    Value = MapZoom__GetZoomSize((MapZoom_o *)camera, 0);
  }
  v8 = Value;
  mZoom = v6->fields.mZoom;
  if ( !mZoom )
    goto LABEL_20;
  mZoomMax = mZoom->fields.mZoomMax;
  v11 = mZoomMax + mZoom->fields.mZoomMargin;
  v12 = v11;
  if ( v11 > v8 )
  {
    v12 = v8;
    if ( mZoomMax <= v8 )
      v12 = mZoom->fields.mZoomMax;
  }
  v27 = v12;
  if ( v5 )
  {
    v30.fields.hasValue = (unsigned __int8)&v28;
    LODWORD(v30.fields.value.fields.x) = (unsigned __int64)&v28 >> 32;
    *(_QWORD *)&v30.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    v25 = (unsigned __int64)System_Nullable_Vector3___get_Value(
                              v30,
                              *(const MethodInfo_45E916C **)&expectedDestPos.fields.value.fields.y);
    v24 = HIDWORD(v25);
    v23.n64_u32[0] = v25;
  }
  else
  {
    camera = (MapCamera_o *)v6->fields.mScrl;
    if ( !camera )
      goto LABEL_20;
    ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3((MapScroll_o *)camera, 0);
    v24 = HIDWORD(ScrlPosVec3);
    v23.n64_u32[0] = ScrlPosVec3;
  }
  v13 = 124;
  v14 = 128;
  if ( v11 > v8 )
  {
    v13 = 108;
    v14 = 112;
  }
  v23.n64_u32[1] = v24;
  v15.n64_u32[0] = *(_DWORD *)((char *)&v6->klass + v13);
  v15.n64_u32[1] = *(_DWORD *)((char *)&v6->klass + v14);
  v16.n64_u64[0] = vsub_f32(
                     vmul_f32(v15, (float32x2_t)0x3F0000003F000000LL),
                     vmul_f32(
                       vmul_n_f32((float32x2_t)v6->fields._windowSize_k__BackingField, v27),
                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v17.n64_u64[0] = vdup_n_s32(0x3C23D70Au).n64_u64[0];
  v18.n64_u64[0] = vbsl_s8(vcgt_f32(v17, v16), v17, v16).n64_u64[0];
  v19.n64_u64[0] = vneg_f32(v18).n64_u64[0];
  v20 = vbsl_s8(vcgt_f32(v19, v23), v19, vbsl_s8(vcgt_f32(v23, v18), v18, v23)).n64_u64[0];
  v21 = sub_2213CCC(MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_QWORD *)(v21 + 16) = v20;
  *(_DWORD *)(v21 + 24) = 0;
  *(float *)(v21 + 28) = v27;
  return (MapCameraViewAdjusterUtil_CameraDestinationInfo_o *)v21;
}


bool MapCameraViewAdjusterUtil__HasAnyIntersects(
        UnityEngine_Rect_array *containRects,
        UnityEngine_Rect_array *containRects2DUI,
        UnityEngine_Rect_o cameraRect,
        const MethodInfo *method)
{
  _BOOL8 HasAnyIntersects; // x0
  UnityEngine_Vector2_o v7; // x1
  float v8; // s0
  unsigned int max_length; // w21
  float32x2_t v10; // d8
  float32x2_t *v11; // x8
  float32x2_t v12; // d0
  float m_Height; // [xsp+0h] [xbp-80h]
  float m_Width; // [xsp+10h] [xbp-70h]
  float m_YMin; // [xsp+20h] [xbp-60h]
  float m_XMin; // [xsp+30h] [xbp-50h]
  float v18; // [xsp+40h] [xbp-40h]
  UnityEngine_Rect_o v19; // 0:kr00_16.16

  m_Height = cameraRect.fields.m_Height;
  m_Width = cameraRect.fields.m_Width;
  m_YMin = cameraRect.fields.m_YMin;
  m_XMin = cameraRect.fields.m_XMin;
  LODWORD(v8) = *(_QWORD *)&FSWindowUtil__GetSize(0);
  if ( !containRects2DUI )
    sub_2213CDC(HasAnyIntersects, v7);
  max_length = containRects2DUI->max_length;
  v18 = m_Width / v8;
  v10.n64_u64[0] = vadd_f32(
                     (float32x2_t)__PAIR64__(LODWORD(m_YMin), LODWORD(m_XMin)),
                     vmul_f32(
                       (float32x2_t)__PAIR64__(LODWORD(m_Height), LODWORD(m_Width)),
                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  do
  {
    if ( (--max_length & 0x80000000) != 0 )
      break;
    if ( max_length >= LODWORD(containRects2DUI->max_length) )
      sub_2213CE4(HasAnyIntersects);
    v11 = (float32x2_t *)(&containRects2DUI->obj + max_length);
    v12.n64_u64[0] = v11[4].n64_u64[0];
    *(float32x2_t *)&v19.fields.m_XMin = vadd_f32(v10, vmul_n_f32(v12, v18));
    *(float32x2_t *)&v19.fields.m_Width = vsub_f32(
                                            vadd_f32(v10, vmul_n_f32(vadd_f32(v12, v11[5]), v18)),
                                            *(float32x2_t *)&v19.fields.m_XMin);
    HasAnyIntersects = RectExtension__HasAnyIntersects(v19, containRects, 0, 0);
  }
  while ( !HasAnyIntersects );
  return (max_length & 0x80000000) == 0;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__ResizedToViewAspectRect(
        UnityEngine_Rect_o baseRect,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s11
  float m_YMin; // s9
  float m_XMin; // s10
  UnityEngine_Vector2_o Size; // kr00_8
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = baseRect.fields.m_Height;
  m_Width = baseRect.fields.m_Width;
  m_YMin = baseRect.fields.m_YMin;
  m_XMin = baseRect.fields.m_XMin;
  Size = FSWindowUtil__GetSize(0);
  result.fields.m_Width = (float)(m_Height * Size.fields.x) / Size.fields.y;
  if ( m_Width <= result.fields.m_Width )
  {
    result.fields.m_Width = m_Width;
    m_Height = (float)(m_Width * Size.fields.y) / Size.fields.x;
  }
  result.fields.m_YMin = m_YMin;
  result.fields.m_Height = m_Height;
  result.fields.m_XMin = m_XMin;
  return result;
}


void MapCameraViewAdjusterUtil_CameraDestinationInfo___ctor(
        MapCameraViewAdjusterUtil_CameraDestinationInfo_o *this,
        UnityEngine_Vector3_o position,
        float size,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._position_k__BackingField.fields.x = x;
  this->fields._position_k__BackingField.fields.y = y;
  this->fields._position_k__BackingField.fields.z = z;
  this->fields._size_k__BackingField = size;
}


UnityEngine_Vector3_o MapCameraViewAdjusterUtil_CameraDestinationInfo__get_position(
        MapCameraViewAdjusterUtil_CameraDestinationInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields._position_k__BackingField.fields.x;
  result.fields.y = this->fields._position_k__BackingField.fields.y;
  result.fields.z = this->fields._position_k__BackingField.fields.z;
  return result;
}


float MapCameraViewAdjusterUtil_CameraDestinationInfo__get_size(
        MapCameraViewAdjusterUtil_CameraDestinationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._size_k__BackingField;
}


void MapCameraViewAdjusterUtil_CameraDestinationInfo__set_position(
        MapCameraViewAdjusterUtil_CameraDestinationInfo_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._position_k__BackingField = value;
}


void MapCameraViewAdjusterUtil_CameraDestinationInfo__set_size(
        MapCameraViewAdjusterUtil_CameraDestinationInfo_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._size_k__BackingField = value;
}


void MapCameraViewAdjusterUtil__GenerateCameraRects_d__5___ctor(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__MoveNext(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  int32x4_t v2; // q0
  int32x4_t v3; // q1
  int32x4_t v4; // q3
  int32_t _1__state; // w8
  UnityEngine_Vector2_o Size; // kr00_8
  float ZoomMin; // s2
  int32_t y_5__13; // w9
  int32_t loopY_5__10; // w8
  int32_t v11; // w9
  float32x4_t v12; // q4
  float m_Height; // s5
  Il2CppClass *v14; // x0
  float32x2_t v15; // d2
  float32x4_t v16; // q2
  float32x4_t v17; // q2
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  int v21; // w8
  int *v22; // x10
  __int64 v23; // x9
  int v24; // w11
  int v25; // t1
  Il2CppClass *v26; // x0
  __int64 v27; // x9
  int v28; // w8
  int *v29; // x10
  __int64 v30; // x9
  int v31; // w11
  int v32; // t1
  int v33; // w10
  int v34; // w12
  int v35; // w13
  int v36; // w12
  int v37; // w12
  float size_5__3; // s0
  float ZoomInterval; // s1
  float ZoomMax; // s0
  float offsetInterval; // s1
  int v43; // w11
  int v44; // w12
  int v45; // w11
  int v46; // w11
  int32_t x_5__11; // w10
  float v48; // s1
  float32x2_t v49; // d3
  float v50; // s0
  float32x2_t v51; // d1

  if ( (byte_596FA4C & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596FA4C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    y_5__13 = this->fields._y_5__13;
    loopY_5__10 = this->fields._loopY_5__10;
    this->fields.__1__state = -1;
    v11 = y_5__13 + 1;
    goto LABEL_38;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Size = FSWindowUtil__GetSize(0);
  ZoomMin = this->fields.ZoomMin;
  this->fields._windowSize_5__2 = Size;
LABEL_35:
  ZoomMax = this->fields.ZoomMax;
  this->fields._size_5__3 = ZoomMin;
  if ( ZoomMin > ZoomMax )
    return 0;
  v12.n128_u32[0] = LODWORD(this->fields.brakeRect.fields.m_XMin);
  m_Height = this->fields.brakeRect.fields.m_Height;
  v14 = int___TypeInfo;
  v2.n128_u64[0] = vmul_n_f32((float32x2_t)this->fields._windowSize_5__2, ZoomMin).n64_u64[0];
  v15.n64_u64[0] = *(unsigned __int64 *)&this->fields.center.fields.x;
  *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_Width = v2.n128_u64[0];
  v3.n128_u64[0] = vadd_f32(v15, vmul_f32((float32x2_t)v2.n128_u64[0], (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
  v15.n64_u32[0] = LODWORD(this->fields.brakeRect.fields.m_YMin);
  v4.n128_f32[0] = v12.n128_f32[0] + this->fields.brakeRect.fields.m_Width;
  *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_XMin = v3.n128_u64[0];
  v12.n128_u32[1] = v4.n128_u32[0];
  v4.n128_u64[0] = vadd_f32((float32x2_t)v2.n128_u64[0], (float32x2_t)v3.n128_u64[0]).n64_u64[0];
  v12.n128_u64[1] = __PAIR64__(v15.n64_f32[0] + m_Height, v15.n64_u32[0]);
  v16 = vsubq_f32(v12, vtrn1q_s32(vzip1q_s32(v3, v2), vzip1q_s32(v4, v2)));
  v12.n128_u64[0] = 0x8000000080000000LL;
  v12.n128_u64[1] = 0x8000000080000000LL;
  v17 = vdivq_f32(v16, vld1q_dup_f32(&this->fields.offsetInterval));
  *(int8x16_t *)&this->fields._offsetXMinIndex_5__5 = vbslq_s8(
                                                        vceqq_f32(v17, vdupq_n_s32(0x7F800000u)),
                                                        v12,
                                                        vcvtq_s32_f32(v17));
  v18 = sub_2213B20(v14, 3);
  if ( !v18 )
    goto LABEL_25;
  v20 = *(_QWORD *)(v18 + 24);
  if ( (unsigned int)v20 <= 1 )
    goto LABEL_24;
  *(_DWORD *)(v18 + 36) = -this->fields._offsetXMinIndex_5__5;
  if ( (_DWORD)v20 == 2 )
    goto LABEL_24;
  v21 = *(_DWORD *)(v18 + 32);
  *(_DWORD *)(v18 + 40) = this->fields._offsetXMaxIndex_5__6;
  if ( (int)v20 >= 2 )
  {
    v22 = (int *)(v18 + 36);
    v23 = (unsigned int)v20 - 1LL;
    do
    {
      v25 = *v22++;
      v24 = v25;
      if ( v25 > v21 )
        v21 = v24;
      --v23;
    }
    while ( v23 );
  }
  v26 = int___TypeInfo;
  this->fields._loopX_5__9 = (2 * v21) | 1;
  v18 = sub_2213B20(v26, 3);
  if ( !v18 )
LABEL_25:
    sub_2213CDC(v18, v19);
  v27 = *(_QWORD *)(v18 + 24);
  if ( (unsigned int)v27 <= 1 || (*(_DWORD *)(v18 + 36) = -this->fields._offsetYMinIndex_5__7, (_DWORD)v27 == 2) )
LABEL_24:
    sub_2213CE4(v18);
  v28 = *(_DWORD *)(v18 + 32);
  *(_DWORD *)(v18 + 40) = this->fields._offsetYMaxIndex_5__8;
  if ( (int)v27 >= 2 )
  {
    v29 = (int *)(v18 + 36);
    v30 = (unsigned int)v27 - 1LL;
    do
    {
      v32 = *v29++;
      v31 = v32;
      if ( v32 > v28 )
        v28 = v31;
      --v30;
    }
    while ( v30 );
  }
  v33 = 0;
  loopY_5__10 = (2 * v28) | 1;
  this->fields._loopY_5__10 = loopY_5__10;
  while ( 1 )
  {
LABEL_26:
    if ( v33 >= this->fields._loopX_5__9 )
    {
      size_5__3 = this->fields._size_5__3;
      ZoomInterval = this->fields.ZoomInterval;
      this->fields._x_5__11 = v33;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_Width = 0;
      ZoomMin = size_5__3 + ZoomInterval;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_XMin = 0;
      goto LABEL_35;
    }
    v34 = v33 & 1;
    if ( v33 < 0 )
      v34 = -v34;
    v35 = v33 + 2;
    v36 = 2 * v34;
    if ( v33 + 1 >= 0 )
      v35 = v33 + 1;
    v37 = (v36 - 1) * (v35 >> 1);
    if ( v37 >= this->fields._offsetXMinIndex_5__5 && this->fields._offsetXMaxIndex_5__6 >= v37 )
      break;
    ++v33;
  }
  offsetInterval = this->fields.offsetInterval;
  v11 = 0;
  this->fields._x_5__11 = v33;
  this->fields._offsetX_5__12 = this->fields.center.fields.x + (float)(offsetInterval * (float)v37);
  while ( 1 )
  {
LABEL_38:
    if ( v11 >= loopY_5__10 )
    {
      x_5__11 = this->fields._x_5__11;
      this->fields._y_5__13 = v11;
      v33 = x_5__11 + 1;
      goto LABEL_26;
    }
    v43 = v11 & 1;
    if ( v11 < 0 )
      v43 = -v43;
    v44 = v11 + 2;
    v45 = 2 * v43;
    if ( v11 + 1 >= 0 )
      v44 = v11 + 1;
    v46 = (v45 - 1) * (v44 >> 1);
    if ( v46 >= this->fields._offsetYMinIndex_5__7 && this->fields._offsetYMaxIndex_5__8 >= v46 )
      break;
    ++v11;
  }
  v48 = this->fields.offsetInterval;
  v49.n64_u64[0] = *(unsigned __int64 *)&this->fields._cameraRect_5__4.fields.m_Width;
  this->fields._y_5__13 = v11;
  this->fields.__1__state = 1;
  v50 = this->fields.center.fields.y + (float)(v48 * (float)v46);
  v51.n64_u32[0] = LODWORD(this->fields._offsetX_5__12);
  v51.n64_f32[1] = v50;
  *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_XMin = vadd_f32(
                                                                   v51,
                                                                   vmul_f32(v49, (float32x2_t)0xBF000000BF000000LL));
  this->fields.__2__current = this->fields._cameraRect_5__4;
  return 1;
}


System_Collections_Generic_IEnumerator_Rect__o *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_Generic_IEnumerable_UnityEngine_Rect__GetEnumerator(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *v4; // x20
  float _3__ZoomMax; // s1
  float _3__ZoomInterval; // s2
  float _3__offsetInterval; // s0
  __int64 v9; // x9

  if ( (byte_596FA4E & 1) == 0 )
  {
    sub_2213A60(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_596FA4E = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *)sub_2213CCC(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__ZoomMax = this->fields.__3__ZoomMax;
  _3__ZoomInterval = this->fields.__3__ZoomInterval;
  v4->fields.ZoomMin = this->fields.__3__ZoomMin;
  _3__offsetInterval = this->fields.__3__offsetInterval;
  v4->fields.ZoomMax = _3__ZoomMax;
  v4->fields.ZoomInterval = _3__ZoomInterval;
  v4->fields.offsetInterval = _3__offsetInterval;
  v4->fields.brakeRect = this->fields.__3__brakeRect;
  v9 = *(_QWORD *)&this->fields.__3__center.fields.x;
  v4->fields.center.fields.z = this->fields.__3__center.fields.z;
  *(_QWORD *)&v4->fields.center.fields.x = v9;
  return (System_Collections_Generic_IEnumerator_Rect__o *)v4;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_Generic_IEnumerator_UnityEngine_Rect__get_Current(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.m_XMin = this->fields.__2__current.fields.m_XMin;
  result.fields.m_YMin = this->fields.__2__current.fields.m_YMin;
  result.fields.m_Width = this->fields.__2__current.fields.m_Width;
  result.fields.m_Height = this->fields.__2__current.fields.m_Height;
  return result;
}


void __noreturn MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_IEnumerator_Reset(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_IEnumerator_get_Current(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Rect_o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_596FA4D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Rect_TypeInfo);
    byte_596FA4D = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Rect_TypeInfo, &_2__current);
}


void MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_IDisposable_Dispose(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  ;
}