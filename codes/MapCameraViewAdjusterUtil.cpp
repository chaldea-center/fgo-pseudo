void MapCameraViewAdjusterUtil___cctor(const MethodInfo *method)
{
  if ( (byte_596FA4B & 1) == 0 )
  {
    sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_596FA4B = 1;
  }
  *MapCameraViewAdjusterUtil_TypeInfo->static_fields = (struct MapCameraViewAdjusterUtil_StaticFields)0x3D4CCCCD41A00000LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
        MapCamera_o *camera,
        UnityEngine_Rect_array *rectsOnMap,
        UnityEngine_Rect_array *rects2DUI,
        int32_t *failedReason,
        const MethodInfo *method)
{
  UnityEngine_Rect_array *v7; // x1
  UnityEngine_Rect_array *v8; // x21
  MapCamera_o *v9; // x22
  float m_Height; // s9
  float m_Width; // s10
  __int64 v12; // x1
  UnityEngine_Vector2_o v13; // x1
  UnityEngine_Vector2_o v14; // kr00_8
  float v15; // s8
  const MethodInfo *v16; // x2
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  float v21; // s3
  float v22; // s9
  float v23; // s10
  float v24; // s1
  bool v25; // nf
  float v26; // s11
  float v27; // s10
  float x; // s9
  float y; // s8
  UnityEngine_Vector2_o Size; // kr08_8
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s8
  __int64 v33; // x1
  MapCamera_c *klass; // x8
  MapCamera_o *v35; // x22
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 i; // x22
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  int v54; // w22
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  float v59; // s0
  float v60; // s1
  float v61; // s2
  float v62; // s3
  __int64 v63; // x1
  float v64; // [xsp+18h] [xbp-B8h]
  float v65; // [xsp+1Ch] [xbp-B4h]
  float v66; // [xsp+20h] [xbp-B0h]
  float v67; // [xsp+24h] [xbp-ACh]
  float v68; // [xsp+28h] [xbp-A8h]
  float v69; // [xsp+2Ch] [xbp-A4h]
  float m_YMin; // [xsp+30h] [xbp-A0h]
  float m_XMin; // [xsp+34h] [xbp-9Ch]
  __int64 v72; // [xsp+48h] [xbp-88h]
  UnityEngine_Rect_o CoveringRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v78; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v79; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v80; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = v7;
  v9 = camera;
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
  if ( !v8 )
    goto LABEL_64;
  if ( !v8->max_length )
  {
    Size = FSWindowUtil__GetSize(0);
    x = Size.fields.x;
    y = Size.fields.y;
    v27 = Size.fields.y * -0.5;
    v26 = Size.fields.x * -0.5;
    goto LABEL_61;
  }
  if ( !v9 )
    goto LABEL_64;
  m_Width = v9->fields.mMvBrakeRect.fields.m_Width;
  m_Height = v9->fields.mMvBrakeRect.fields.m_Height;
  m_YMin = v9->fields.mMvBrakeRect.fields.m_YMin;
  m_XMin = v9->fields.mMvBrakeRect.fields.m_XMin;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v12, rects2DUI);
  v14 = FSWindowUtil__GetSize(0);
  v68 = m_Height;
  v15 = (float)(m_Height * v14.fields.x) / v14.fields.y;
  if ( m_Width <= v15 )
  {
    v15 = m_Width;
    m_Height = (float)(m_Width * v14.fields.y) / v14.fields.x;
  }
  v69 = m_Width;
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(v8, (const MethodInfo *)*(_QWORD *)&v13);
  v17 = CoveringRect.fields.m_XMin;
  v18 = CoveringRect.fields.m_YMin;
  v19 = CoveringRect.fields.m_Width;
  v20 = CoveringRect.fields.m_Height;
  CoveringRect.fields.m_YMin = CoveringRect.fields.m_Width * 0.5;
  CoveringRect.fields.m_Width = CoveringRect.fields.m_Height * 0.5;
  v21 = m_Height;
  v22 = CoveringRect.fields.m_XMin + CoveringRect.fields.m_YMin;
  v23 = v18 + CoveringRect.fields.m_Width;
  v24 = v15 * 0.5;
  v25 = v15 < v19 || v21 < v20;
  v26 = v22 - v24;
  if ( v25 )
  {
    v27 = v23 - (float)(v21 * 0.5);
    x = v15;
    *failedReason = 2;
    y = v21;
    goto LABEL_61;
  }
  mZoom = v9->fields.mZoom;
  v64 = v23 - (float)(v21 * 0.5);
  v65 = v22 - v24;
  v66 = v21;
  v67 = v15;
  if ( !mZoom )
    goto LABEL_64;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil_TypeInfo;
  mZoomMax = mZoom->fields.mZoomMax;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v33, v16);
    camera = (MapCamera_o *)MapCameraViewAdjusterUtil_TypeInfo;
  }
  v78.fields.m_YMin = m_YMin;
  v78.fields.m_XMin = m_XMin;
  v78.fields.m_Height = v68;
  v78.fields.m_Width = v69;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            1.0,
                            mZoomMax,
                            *((float *)&camera[1].fields.mMapBg->klass + 1),
                            *(float *)&camera[1].fields.mMapBg->klass,
                            v78,
                            *(UnityEngine_Vector3_o *)&camera,
                            v16);
  if ( !camera )
LABEL_64:
    sub_2213CDC(camera, v63);
  klass = camera->klass;
  v35 = camera;
  v36 = *(unsigned __int16 *)&camera->klass->_2.rank;
  if ( *(_WORD *)&camera->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Rect__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Rect__TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_25;
    }
    v38 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v38 = sub_224BC3C(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v39 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  v72 = v39;
  if ( !v39 )
    sub_2213CDC(0, v40);
  for ( i = v39; ; i = v72 )
  {
    v42 = *(_QWORD *)i;
    v43 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_33;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_33:
      v45 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(i, *(_QWORD *)(v45 + 8));
    if ( (v46 & 1) == 0 )
    {
      y = 0.0;
      x = 0.0;
      v27 = 0.0;
      v26 = 0.0;
      v54 = 8;
      goto LABEL_51;
    }
    if ( !v72 )
      sub_2213CDC(v46, v47);
    v48 = *(_QWORD *)v72;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v50 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_41;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_41:
      v51 = sub_224BC3C(v72, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v74.fields.m_XMin = (*(float (__fastcall **)(__int64, _QWORD))v51)(v72, *(_QWORD *)(v51 + 8));
    v79.fields.m_XMin = v17;
    v79.fields.m_YMin = v18;
    v79.fields.m_Width = v19;
    v79.fields.m_Height = v20;
    v26 = v74.fields.m_XMin;
    v27 = v74.fields.m_YMin;
    x = v74.fields.m_Width;
    y = v74.fields.m_Height;
    if ( RectExtension__IsContain(v74, v79, 0) )
    {
      v80.fields.m_XMin = v26;
      v80.fields.m_YMin = v27;
      v80.fields.m_Width = x;
      v80.fields.m_Height = y;
      v75.fields.m_YMin = m_YMin;
      v75.fields.m_XMin = m_XMin;
      v75.fields.m_Height = v68;
      v75.fields.m_Width = v69;
      if ( RectExtension__IsContain(v75, v80, 0) )
      {
        if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v52, v53);
        v76.fields.m_XMin = v26;
        v76.fields.m_YMin = v27;
        v76.fields.m_Width = x;
        v76.fields.m_Height = y;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(v8, rects2DUI, v76, v53) )
          break;
      }
    }
  }
  v54 = 7;
LABEL_51:
  if ( v72 )
  {
    v55 = *(_QWORD *)v72;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_56;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_56:
      v58 = sub_224BC3C(v72, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v58)(v72, *(_QWORD *)(v58 + 8));
  }
  if ( (v54 | 8) == 8 )
  {
    v27 = v64;
    v26 = v65;
    y = v66;
    x = v67;
    *failedReason = 1;
  }
LABEL_61:
  v59 = v26;
  v60 = v27;
  v61 = x;
  v62 = y;
  result.fields.m_Height = v62;
  result.fields.m_Width = v61;
  result.fields.m_YMin = v60;
  result.fields.m_XMin = v59;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Vector2_o Size; // kr00_8
  float v17; // s8
  float v18; // s11
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  int32_t v22; // w8
  float v23; // s10
  float v24; // s9
  float v25; // s8
  const MethodInfo *v27; // x2
  float v28; // s8
  UnityEngine_Vector3_o v29; // x0 OVERLAPPED
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
  float v58; // s0
  float v59; // s1
  float v60; // s2
  float v61; // s3
  float v62; // [xsp+28h] [xbp-B8h]
  float v63; // [xsp+2Ch] [xbp-B4h]
  float v64; // [xsp+30h] [xbp-B0h]
  float v65; // [xsp+34h] [xbp-ACh]
  float v66; // [xsp+38h] [xbp-A8h]
  float v67; // [xsp+3Ch] [xbp-A4h]
  float v68; // [xsp+40h] [xbp-A0h]
  float v69; // [xsp+44h] [xbp-9Ch]
  __int64 v70; // [xsp+58h] [xbp-88h]
  UnityEngine_Rect_o CoveringRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v77; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v78; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

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
  v66 = CoveringRect.fields.m_Height;
  v67 = CoveringRect.fields.m_Width;
  v68 = CoveringRect.fields.m_YMin;
  v69 = CoveringRect.fields.m_XMin;
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
  *(_QWORD *)&v29.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&v29.fields.z, v27);
    *(_QWORD *)&v29.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v76.fields.m_XMin = m_XMin;
  v76.fields.m_YMin = m_YMin;
  v76.fields.m_Width = m_Width;
  v76.fields.m_Height = m_Height;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            v28,
                            v28,
                            1.0,
                            **(float **)(*(_QWORD *)&v29.fields.x + 184LL),
                            v76,
                            v29,
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
  v70 = v35;
  if ( !v35 )
    sub_2213CDC(0, v36);
  for ( i = v35; ; i = v70 )
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
    if ( !v70 )
      sub_2213CDC(v42, v43);
    v44 = *(_QWORD *)v70;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
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
      v47 = sub_224BC3C(v70, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v23 = (*(float (__fastcall **)(__int64, _QWORD))v47)(v70, *(_QWORD *)(v47 + 8));
    v24 = v48;
    v18 = v49;
    v17 = v50;
    v72.fields.m_XMin = m_XMin;
    v72.fields.m_YMin = m_YMin;
    v72.fields.m_Width = m_Width;
    v72.fields.m_Height = m_Height;
    v77.fields.m_XMin = v23;
    v77.fields.m_YMin = v24;
    v77.fields.m_Width = v18;
    v77.fields.m_Height = v17;
    if ( RectExtension__IsContain(v72, v77, 0) )
    {
      v73.fields.m_XMin = v23;
      v73.fields.m_YMin = v24;
      v73.fields.m_Width = v18;
      v73.fields.m_Height = v17;
      v78.fields.m_YMin = v68;
      v78.fields.m_XMin = v69;
      v78.fields.m_Height = v66;
      v78.fields.m_Width = v67;
      if ( RectExtension__IsContain(v73, v78, 0) )
      {
        if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v51, v52);
        v74.fields.m_XMin = v23;
        v74.fields.m_YMin = v24;
        v74.fields.m_Width = v18;
        v74.fields.m_Height = v17;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(essentialRectsOnMap, rects2DUI, v74, v52) )
          break;
      }
    }
  }
  v53 = 8;
LABEL_51:
  if ( v70 )
  {
    v54 = *(_QWORD *)v70;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
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
      v57 = sub_224BC3C(v70, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v70, *(_QWORD *)(v57 + 8));
  }
  if ( v53 == 9 )
  {
    v22 = 1;
    v18 = v65;
    v23 = (float)(v69 + (float)(v67 * 0.5)) - v64;
    v17 = v63;
    v24 = (float)(v68 + (float)(v66 * 0.5)) - v62;
    goto LABEL_61;
  }
LABEL_62:
  v58 = v23;
  v59 = v24;
  v60 = v18;
  v61 = v17;
  result.fields.m_Height = v61;
  result.fields.m_Width = v60;
  result.fields.m_YMin = v59;
  result.fields.m_XMin = v58;
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
  float v13; // s1
  float v14; // s3
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
  v13 = v3.n64_f32[1];
  v14 = v4.n64_f32[1];
  result.fields.m_Width = v4.n64_f32[0];
  result.fields.m_XMin = v3.n64_f32[0];
  result.fields.m_Height = v14;
  result.fields.m_YMin = v13;
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
  System_Collections_Generic_IEnumerable_Rect__o *result; // x0
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
  result = (System_Collections_Generic_IEnumerable_Rect__o *)v12;
  *(float *)(v12 + 88) = m_XMin;
  *(float *)(v12 + 92) = m_YMin;
  *(float *)(v12 + 124) = ZoomMax;
  *(float *)(v12 + 116) = ZoomInterval;
  *(float *)(v12 + 108) = offsetInterval;
  *(float *)(v12 + 96) = m_Width;
  *(float *)(v12 + 100) = m_Height;
  *(_QWORD *)(v12 + 60) = v18;
  *(_DWORD *)(v12 + 68) = v19;
  return result;
}


// local variable allocation has failed, the output may be wrong!
MapCameraViewAdjusterUtil_CameraDestinationInfo_o *MapCameraViewAdjusterUtil__GetSafeCameraDestination(
        MapCamera_o *camera,
        System_Nullable_Vector3__o expectedDestPos,
        System_Nullable_float__o expectedDestZoom,
        const MethodInfo *method)
{
  bool hasValue; // w21
  __int64 v5; // x1
  char v6; // w20
  MapCamera_o *v7; // x19
  __int64 v8; // x2
  System_Nullable_float__o v9; // x0
  float Value; // s0
  float v11; // s8
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s0
  float v14; // s9
  float v15; // s1
  const MethodInfo_45E916C *v16; // x2
  __int64 v17; // x9
  __int64 v18; // x8
  float y; // v0.s[1]
  float32x2_t v20; // d3
  int8x8_t v21; // d2
  int8x8_t v22; // d3
  int8x8_t v23; // d2
  int8x8_t v24; // d1
  unsigned __int64 v25; // d8
  __int64 v26; // x19
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *result; // x0
  __int64 v28; // x1
  float v29; // [xsp+0h] [xbp-60h]
  _QWORD v30[2]; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_float__o v31; // [xsp+38h] [xbp-28h] BYREF
  System_Nullable_Vector3__o v32; // 0:x0.16
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v31 = expectedDestZoom;
  hasValue = expectedDestZoom.fields.hasValue;
  v6 = v5;
  v7 = camera;
  v30[0] = v5;
  v30[1] = v8;
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
    v9 = (System_Nullable_float__o)&v31;
    Value = System_Nullable_float___get_Value(v9, (const MethodInfo_45E6930 *)Method_System_Nullable_float__get_Value__);
    if ( !v7 )
      goto LABEL_20;
  }
  else
  {
    if ( !v7 || (camera = (MapCamera_o *)v7->fields.mZoom) == 0 )
LABEL_20:
      sub_2213CDC(camera, v28);
    Value = MapZoom__GetZoomSize((MapZoom_o *)camera, 0);
  }
  v11 = Value;
  mZoom = v7->fields.mZoom;
  if ( !mZoom )
    goto LABEL_20;
  mZoomMax = mZoom->fields.mZoomMax;
  v14 = mZoomMax + mZoom->fields.mZoomMargin;
  v15 = v14;
  if ( v14 > v11 )
  {
    v15 = v11;
    if ( mZoomMax <= v11 )
      v15 = mZoom->fields.mZoomMax;
  }
  v29 = v15;
  if ( v6 )
  {
    *(_QWORD *)&v32.fields.hasValue = v30;
    *(_QWORD *)&v32.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    ScrlPosVec3 = System_Nullable_Vector3___get_Value(v32, v16);
  }
  else
  {
    camera = (MapCamera_o *)v7->fields.mScrl;
    if ( !camera )
      goto LABEL_20;
    ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)camera, 0);
  }
  v17 = 124;
  v18 = 128;
  if ( v14 > v11 )
  {
    v17 = 108;
    v18 = 112;
  }
  y = ScrlPosVec3.fields.y;
  v20.n64_u32[0] = *(_DWORD *)((char *)&v7->klass + v17);
  v20.n64_u32[1] = *(_DWORD *)((char *)&v7->klass + v18);
  v21.n64_u64[0] = vsub_f32(
                     vmul_f32(v20, (float32x2_t)0x3F0000003F000000LL),
                     vmul_f32(
                       vmul_n_f32((float32x2_t)v7->fields._windowSize_k__BackingField, v29),
                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v22.n64_u64[0] = vdup_n_s32(0x3C23D70Au).n64_u64[0];
  v23.n64_u64[0] = vbsl_s8(vcgt_f32(v22, v21), v22, v21).n64_u64[0];
  v24.n64_u64[0] = vneg_f32(v23).n64_u64[0];
  v25 = vbsl_s8(
          vcgt_f32(v24, *(float32x2_t *)&ScrlPosVec3.fields.x),
          v24,
          vbsl_s8(vcgt_f32(*(float32x2_t *)&ScrlPosVec3.fields.x, v23), v23, *(int8x8_t *)&ScrlPosVec3.fields.x)).n64_u64[0];
  v26 = sub_2213CCC(MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  *(_QWORD *)(v26 + 16) = v25;
  result = (MapCameraViewAdjusterUtil_CameraDestinationInfo_o *)v26;
  *(_DWORD *)(v26 + 24) = 0;
  *(float *)(v26 + 28) = v29;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  float32x2_t v13; // d1 OVERLAPPED
  float32x2_t v14; // d0
  unsigned __int64 v15; // d2
  int v16; // s3
  float m_Height; // [xsp+0h] [xbp-80h]
  float m_Width; // [xsp+10h] [xbp-70h]
  float m_YMin; // [xsp+20h] [xbp-60h]
  float m_XMin; // [xsp+30h] [xbp-50h]
  float v22; // [xsp+40h] [xbp-40h]

  m_Height = cameraRect.fields.m_Height;
  m_Width = cameraRect.fields.m_Width;
  m_YMin = cameraRect.fields.m_YMin;
  m_XMin = cameraRect.fields.m_XMin;
  LODWORD(v8) = *(_QWORD *)&FSWindowUtil__GetSize(0);
  if ( !containRects2DUI )
    sub_2213CDC(HasAnyIntersects, v7);
  max_length = containRects2DUI->max_length;
  v22 = m_Width / v8;
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
    v13.n64_u64[0] = vadd_f32(v12, v11[5]).n64_u64[0];
    v14.n64_u64[0] = vadd_f32(v10, vmul_n_f32(v12, v22)).n64_u64[0];
    v15 = vsub_f32(vadd_f32(v10, vmul_n_f32(v13, v22)), v14).n64_u64[0];
    v13.n64_u32[0] = v14.n64_u32[1];
    v16 = HIDWORD(v15);
    HasAnyIntersects = RectExtension__HasAnyIntersects(*(UnityEngine_Rect_o *)((char *)&v13 - 4), containRects, 0, 0);
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
  float v7; // s2
  float v8; // s1
  float v9; // s3
  float v10; // s0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = baseRect.fields.m_Height;
  m_Width = baseRect.fields.m_Width;
  m_YMin = baseRect.fields.m_YMin;
  m_XMin = baseRect.fields.m_XMin;
  Size = FSWindowUtil__GetSize(0);
  v7 = (float)(m_Height * Size.fields.x) / Size.fields.y;
  if ( m_Width <= v7 )
  {
    v7 = m_Width;
    m_Height = (float)(m_Width * Size.fields.y) / Size.fields.x;
  }
  v8 = m_YMin;
  v9 = m_Height;
  v10 = m_XMin;
  result.fields.m_Height = v9;
  result.fields.m_Width = v7;
  result.fields.m_YMin = v8;
  result.fields.m_XMin = v10;
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
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._position_k__BackingField.fields.x;
  y = this->fields._position_k__BackingField.fields.y;
  z = this->fields._position_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
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
  float *p_offsetInterval; // x8
  Il2CppClass *v15; // x0
  float32x2_t v16; // d2
  float32x4_t v17; // q2
  float32x4_t v18; // q3
  float32x4_t v19; // q2
  float32x4_t v20; // q2
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  int v24; // w8
  int *v25; // x10
  __int64 v26; // x9
  int v27; // w11
  int v28; // t1
  Il2CppClass *v29; // x0
  __int64 v30; // x9
  int v31; // w8
  int *v32; // x10
  __int64 v33; // x9
  int v34; // w11
  int v35; // t1
  int v36; // w10
  int v37; // w12
  int v38; // w13
  int v39; // w12
  int v40; // w12
  float size_5__3; // s0
  float ZoomInterval; // s1
  float ZoomMax; // s0
  bool result; // w0
  float offsetInterval; // s1
  int v46; // w11
  int v47; // w12
  int v48; // w11
  int v49; // w11
  int32_t x_5__11; // w10
  float v51; // s1
  float32x2_t v52; // d3
  float v53; // s0
  float32x2_t v54; // d1

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
  p_offsetInterval = &this->fields.offsetInterval;
  v15 = int___TypeInfo;
  v2.n128_u64[0] = vmul_n_f32((float32x2_t)this->fields._windowSize_5__2, ZoomMin).n64_u64[0];
  v16.n64_u64[0] = *(unsigned __int64 *)&this->fields.center.fields.x;
  *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_Width = v2.n128_u64[0];
  v3.n128_u64[0] = vadd_f32(v16, vmul_f32((float32x2_t)v2.n128_u64[0], (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
  v16.n64_u32[0] = LODWORD(this->fields.brakeRect.fields.m_YMin);
  v4.n128_f32[0] = v12.n128_f32[0] + this->fields.brakeRect.fields.m_Width;
  *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_XMin = v3.n128_u64[0];
  v12.n128_u32[1] = v4.n128_u32[0];
  v4.n128_u64[0] = vadd_f32((float32x2_t)v2.n128_u64[0], (float32x2_t)v3.n128_u64[0]).n64_u64[0];
  v12.n128_u64[1] = __PAIR64__(v16.n64_f32[0] + m_Height, v16.n64_u32[0]);
  v17 = vtrn1q_s32(vzip1q_s32(v3, v2), vzip1q_s32(v4, v2));
  v18 = vld1q_dup_f32(p_offsetInterval);
  v19 = vsubq_f32(v12, v17);
  v12.n128_u64[0] = 0x8000000080000000LL;
  v12.n128_u64[1] = 0x8000000080000000LL;
  v20 = vdivq_f32(v19, v18);
  *(int8x16_t *)&this->fields._offsetXMinIndex_5__5 = vbslq_s8(
                                                        vceqq_f32(v20, vdupq_n_s32(0x7F800000u)),
                                                        v12,
                                                        vcvtq_s32_f32(v20));
  v21 = sub_2213B20(v15, 3);
  if ( !v21 )
    goto LABEL_25;
  v23 = *(_QWORD *)(v21 + 24);
  if ( (unsigned int)v23 <= 1 )
    goto LABEL_24;
  *(_DWORD *)(v21 + 36) = -this->fields._offsetXMinIndex_5__5;
  if ( (_DWORD)v23 == 2 )
    goto LABEL_24;
  v24 = *(_DWORD *)(v21 + 32);
  *(_DWORD *)(v21 + 40) = this->fields._offsetXMaxIndex_5__6;
  if ( (int)v23 >= 2 )
  {
    v25 = (int *)(v21 + 36);
    v26 = (unsigned int)v23 - 1LL;
    do
    {
      v28 = *v25++;
      v27 = v28;
      if ( v28 > v24 )
        v24 = v27;
      --v26;
    }
    while ( v26 );
  }
  v29 = int___TypeInfo;
  this->fields._loopX_5__9 = (2 * v24) | 1;
  v21 = sub_2213B20(v29, 3);
  if ( !v21 )
LABEL_25:
    sub_2213CDC(v21, v22);
  v30 = *(_QWORD *)(v21 + 24);
  if ( (unsigned int)v30 <= 1 || (*(_DWORD *)(v21 + 36) = -this->fields._offsetYMinIndex_5__7, (_DWORD)v30 == 2) )
LABEL_24:
    sub_2213CE4(v21);
  v31 = *(_DWORD *)(v21 + 32);
  *(_DWORD *)(v21 + 40) = this->fields._offsetYMaxIndex_5__8;
  if ( (int)v30 >= 2 )
  {
    v32 = (int *)(v21 + 36);
    v33 = (unsigned int)v30 - 1LL;
    do
    {
      v35 = *v32++;
      v34 = v35;
      if ( v35 > v31 )
        v31 = v34;
      --v33;
    }
    while ( v33 );
  }
  v36 = 0;
  loopY_5__10 = (2 * v31) | 1;
  this->fields._loopY_5__10 = loopY_5__10;
  while ( 1 )
  {
LABEL_26:
    if ( v36 >= this->fields._loopX_5__9 )
    {
      size_5__3 = this->fields._size_5__3;
      ZoomInterval = this->fields.ZoomInterval;
      this->fields._x_5__11 = v36;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_Width = 0;
      ZoomMin = size_5__3 + ZoomInterval;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_XMin = 0;
      goto LABEL_35;
    }
    v37 = v36 & 1;
    if ( v36 < 0 )
      v37 = -v37;
    v38 = v36 + 2;
    v39 = 2 * v37;
    if ( v36 + 1 >= 0 )
      v38 = v36 + 1;
    v40 = (v39 - 1) * (v38 >> 1);
    if ( v40 >= this->fields._offsetXMinIndex_5__5 && this->fields._offsetXMaxIndex_5__6 >= v40 )
      break;
    ++v36;
  }
  offsetInterval = this->fields.offsetInterval;
  v11 = 0;
  this->fields._x_5__11 = v36;
  this->fields._offsetX_5__12 = this->fields.center.fields.x + (float)(offsetInterval * (float)v40);
  while ( 1 )
  {
LABEL_38:
    if ( v11 >= loopY_5__10 )
    {
      x_5__11 = this->fields._x_5__11;
      this->fields._y_5__13 = v11;
      v36 = x_5__11 + 1;
      goto LABEL_26;
    }
    v46 = v11 & 1;
    if ( v11 < 0 )
      v46 = -v46;
    v47 = v11 + 2;
    v48 = 2 * v46;
    if ( v11 + 1 >= 0 )
      v47 = v11 + 1;
    v49 = (v48 - 1) * (v47 >> 1);
    if ( v49 >= this->fields._offsetYMinIndex_5__7 && this->fields._offsetYMaxIndex_5__8 >= v49 )
      break;
    ++v11;
  }
  v51 = this->fields.offsetInterval;
  v52.n64_u64[0] = *(unsigned __int64 *)&this->fields._cameraRect_5__4.fields.m_Width;
  result = 1;
  this->fields._y_5__13 = v11;
  this->fields.__1__state = 1;
  v53 = this->fields.center.fields.y + (float)(v51 * (float)v49);
  v54.n64_u32[0] = LODWORD(this->fields._offsetX_5__12);
  v54.n64_f32[1] = v53;
  *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_XMin = vadd_f32(
                                                                   v54,
                                                                   vmul_f32(v52, (float32x2_t)0xBF000000BF000000LL));
  this->fields.__2__current = this->fields._cameraRect_5__4;
  return result;
}


System_Collections_Generic_IEnumerator_Rect__o *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_Generic_IEnumerable_UnityEngine_Rect__GetEnumerator(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *v4; // x20
  float _3__ZoomMax; // s1
  System_Collections_Generic_IEnumerator_Rect__o *result; // x0
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
  result = (System_Collections_Generic_IEnumerator_Rect__o *)v4;
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
  return result;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_Generic_IEnumerator_UnityEngine_Rect__get_Current(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.__2__current.fields.m_XMin;
  m_YMin = this->fields.__2__current.fields.m_YMin;
  m_Width = this->fields.__2__current.fields.m_Width;
  m_Height = this->fields.__2__current.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
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