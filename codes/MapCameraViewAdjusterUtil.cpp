void MapCameraViewAdjusterUtil___cctor(const MethodInfo *method)
{
  if ( (byte_4D2FC87 & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4D2FC87 = 1;
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
  MapCamera_o *v8; // x20
  float m_YMin; // s8
  float m_XMin; // s13
  float m_Width; // s9
  float m_Height; // s10
  MapCameraViewAdjusterUtil_c *v13; // x0
  float y; // s10
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct MapZoom_o *mZoom; // x8
  MapCameraViewAdjusterUtil_c *v18; // x0
  float mZoomMax; // s10
  MapCamera_c *klass; // x8
  MapCamera_o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Vector2_o Size; // kr40_8
  float x; // s11
  float v27; // s13
  float v28; // s12
  int32_t v29; // w8
  __int64 v30; // x1
  __int64 v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  long double v40; // q0
  float v41; // s1
  float v42; // s2
  float v43; // s3
  const MethodInfo *v44; // x2
  int v45; // w22
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  float v54; // [xsp+20h] [xbp-90h]
  float brakeRect; // [xsp+24h] [xbp-8Ch]
  UnityEngine_Vector3_o v56; // 0:kr20_12.12
  UnityEngine_Rect_o v57; // 0:kr00_16.16
  UnityEngine_Rect_o CoveringRect; // 0:kr10_16.16
  UnityEngine_Rect_o v59; // 0:kr30_16.16
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v65; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = camera;
  if ( (byte_4D2FC83 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_1C93AD4(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4D2FC83 = 1;
  }
  *failedReason = 0;
  if ( !rectsOnMap )
    goto LABEL_53;
  if ( !rectsOnMap->max_length )
  {
    Size = FSWindowUtil__GetSize(0);
    x = Size.fields.x;
    y = Size.fields.y;
    v27 = Size.fields.x * -0.5;
    v28 = Size.fields.y * -0.5;
    goto LABEL_52;
  }
  if ( !v8 )
    goto LABEL_53;
  m_XMin = v8->fields.mMvBrakeRect.fields.m_XMin;
  m_YMin = v8->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = v8->fields.mMvBrakeRect.fields.m_Width;
  m_Height = v8->fields.mMvBrakeRect.fields.m_Height;
  v13 = MapCameraViewAdjusterUtil_TypeInfo;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v60.fields.m_XMin = m_XMin;
  v60.fields.m_YMin = m_YMin;
  v60.fields.m_Width = m_Width;
  v60.fields.m_Height = m_Height;
  brakeRect = m_Height;
  v57 = MapCameraViewAdjusterUtil__ResizedToViewAspectRect(v60, (const MethodInfo *)v13);
  y = v57.fields.m_Height;
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, v15);
  if ( v57.fields.m_Width < CoveringRect.fields.m_Width || v57.fields.m_Height < CoveringRect.fields.m_Height )
  {
    x = v57.fields.m_Width;
    v29 = 2;
LABEL_51:
    *failedReason = v29;
    v28 = (float)(CoveringRect.fields.m_YMin + (float)(CoveringRect.fields.m_Height * 0.5))
        - (float)(v57.fields.m_Height * 0.5);
    v27 = (float)(CoveringRect.fields.m_XMin + (float)(CoveringRect.fields.m_Width * 0.5))
        - (float)(v57.fields.m_Width * 0.5);
    goto LABEL_52;
  }
  mZoom = v8->fields.mZoom;
  if ( !mZoom )
    goto LABEL_53;
  v18 = MapCameraViewAdjusterUtil_TypeInfo;
  mZoomMax = mZoom->fields.mZoomMax;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    v18 = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v64.fields.m_Width = m_Width;
  v64.fields.m_YMin = m_YMin;
  v64.fields.m_Height = brakeRect;
  v64.fields.m_XMin = m_XMin;
  *(_QWORD *)&v56.fields.x = v18;
  LODWORD(v56.fields.z) = (_DWORD)rectsOnMap;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            1.0,
                            mZoomMax,
                            v18->static_fields->CHECK_ZOOM_INTERVAL,
                            v18->static_fields->CHECK_OFFSET_INTERVAL,
                            v64,
                            v56,
                            v16);
  if ( !camera )
LABEL_53:
    sub_1C93D2C(camera, rectsOnMap);
  klass = camera->klass;
  v21 = camera;
  v22 = *(unsigned __int16 *)&camera->klass->_2.rank;
  if ( *(_WORD *)&camera->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Rect__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Rect__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_18;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_18:
    v24 = sub_1C69E5C(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v54 = m_XMin;
  v31 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  if ( !v31 )
    sub_1C93D2C(0, v30);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_27;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_27:
      v35 = sub_1C69E5C(v31, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v38 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_34;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_34:
      v39 = sub_1C69E5C(v31, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v40 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v39)(v31, *(_QWORD *)(v39 + 8));
    v27 = *(float *)&v40;
    v28 = v41;
    x = v42;
    y = v43;
    v59.fields.m_XMin = *(float *)&v40;
    v59.fields.m_YMin = v41;
    v59.fields.m_Width = v42;
    v59.fields.m_Height = v43;
    if ( RectExtension__IsContain(v59, CoveringRect, 0) )
    {
      v61.fields.m_XMin = v54;
      v61.fields.m_Height = brakeRect;
      v61.fields.m_Width = m_Width;
      v61.fields.m_YMin = m_YMin;
      v65.fields.m_XMin = v27;
      v65.fields.m_YMin = v28;
      v65.fields.m_Width = x;
      v65.fields.m_Height = y;
      if ( RectExtension__IsContain(v61, v65, 0) )
      {
        if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
        v62.fields.m_XMin = v27;
        v62.fields.m_YMin = v28;
        v62.fields.m_Width = x;
        v62.fields.m_Height = y;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(rectsOnMap, rects2DUI, v62, v44) )
        {
          v45 = 7;
          goto LABEL_43;
        }
      }
    }
  }
  y = 0.0;
  v45 = 8;
  x = 0.0;
  v28 = 0.0;
  v27 = 0.0;
LABEL_43:
  v46 = *(_QWORD *)v31;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_47;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_47:
    v49 = sub_1C69E5C(v31, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v31, *(_QWORD *)(v49 + 8));
  if ( (v45 | 8) == 8 )
  {
    x = v57.fields.m_Width;
    y = v57.fields.m_Height;
    v29 = 1;
    goto LABEL_51;
  }
LABEL_52:
  result.fields.m_XMin = v27;
  result.fields.m_YMin = v28;
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
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  MapCameraViewAdjusterUtil_c *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  float v18; // s4
  float v19; // s5
  const MethodInfo *v21; // x2
  float x; // s0
  float v23; // s12
  MapCamera_c *klass; // x8
  MapCamera_o *v25; // x22
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  int32_t v29; // w8
  unsigned __int64 v30; // d0
  __int64 v31; // x1
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  long double v41; // q0
  float v42; // s1
  float v43; // s13
  float v44; // s2
  float v45; // s14
  float v46; // s3
  float v47; // s12
  const MethodInfo *v48; // x2
  float v49; // s0
  int v50; // w21
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  float32x2_t v58; // d2
  float32x2_t v59; // [xsp+10h] [xbp-110h]
  float cameraRect; // [xsp+80h] [xbp-A0h]
  float cameraRecta; // [xsp+80h] [xbp-A0h]
  UnityEngine_Vector3_o v62; // 0:x0.12
  UnityEngine_Rect_o v63; // 0:kr00_16.16
  UnityEngine_Rect_o CoveringRect; // 0:kr10_16.16
  UnityEngine_Rect_o v65; // 0:kr30_16.16
  UnityEngine_Rect_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v71; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v10 = camera;
  if ( (byte_4D2FC84 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_1C93AD4(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4D2FC84 = 1;
  }
  *failedReason = 0;
  if ( !v10 )
    goto LABEL_53;
  m_XMin = v10->fields.mMvBrakeRect.fields.m_XMin;
  m_YMin = v10->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = v10->fields.mMvBrakeRect.fields.m_Width;
  m_Height = v10->fields.mMvBrakeRect.fields.m_Height;
  v15 = MapCameraViewAdjusterUtil_TypeInfo;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v66.fields.m_XMin = m_XMin;
  v66.fields.m_YMin = m_YMin;
  v66.fields.m_Width = m_Width;
  v66.fields.m_Height = m_Height;
  v63 = MapCameraViewAdjusterUtil__ResizedToViewAspectRect(v66, (const MethodInfo *)v15);
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(essentialRectsOnMap, v16);
  v58.n64_u32[0] = LODWORD(CoveringRect.fields.m_Width);
  v18 = v63.fields.m_Height;
  v19 = v63.fields.m_Width;
  if ( v63.fields.m_Width < CoveringRect.fields.m_Width || v63.fields.m_Height < CoveringRect.fields.m_Height )
  {
    v29 = 2;
    v58.n64_u32[1] = LODWORD(CoveringRect.fields.m_Height);
    v30 = vsub_f32(
            vadd_f32(*(float32x2_t *)&CoveringRect.fields.m_XMin, vmul_f32(v58, (float32x2_t)0x3F0000003F000000LL)),
            vmul_f32(*(float32x2_t *)&v63.fields.m_Width, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
LABEL_51:
    v43 = *((float *)&v30 + 1);
    v45 = v19;
    v47 = v18;
    *failedReason = v29;
    goto LABEL_52;
  }
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, v17);
  v59.n64_u64[0] = vmul_f32(*(float32x2_t *)&v63.fields.m_Width, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  if ( !byte_4D2A13D )
  {
    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
    byte_4D2A13D = 1;
  }
  x = FSWindowUtil__GetSize(0).fields.x;
  *(_QWORD *)&v62.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  v23 = v63.fields.m_Width / x;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(_QWORD *)&v62.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v70.fields.m_XMin = m_XMin;
  v70.fields.m_YMin = m_YMin;
  v70.fields.m_Width = m_Width;
  v70.fields.m_Height = m_Height;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            v23,
                            v23,
                            1.0,
                            **(float **)(*(_QWORD *)&v62.fields.x + 184LL),
                            v70,
                            v62,
                            v21);
  if ( !camera )
LABEL_53:
    sub_1C93D2C(camera, rectsOnMap);
  klass = camera->klass;
  v25 = camera;
  v26 = *(unsigned __int16 *)&camera->klass->_2.rank;
  if ( *(_WORD *)&camera->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Rect__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Rect__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_19;
    }
    v28 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_19:
    v28 = sub_1C69E5C(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( !v32 )
    sub_1C93D2C(0, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_27;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_27:
      v36 = sub_1C69E5C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v39 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_34:
      v40 = sub_1C69E5C(v32, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v41 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v42;
    v45 = v44;
    v47 = v46;
    v71.fields.m_XMin = *(float *)&v41;
    v71.fields.m_YMin = v42;
    v71.fields.m_Width = v44;
    v71.fields.m_Height = v46;
    cameraRect = *(float *)&v41;
    v65.fields.m_XMin = m_XMin;
    v65.fields.m_YMin = m_YMin;
    v65.fields.m_Width = m_Width;
    v65.fields.m_Height = m_Height;
    if ( RectExtension__IsContain(v65, v71, 0) )
    {
      v67.fields.m_XMin = cameraRect;
      v67.fields.m_YMin = v43;
      v67.fields.m_Width = v45;
      v67.fields.m_Height = v47;
      if ( RectExtension__IsContain(v67, CoveringRect, 0) )
      {
        if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
        v68.fields.m_XMin = cameraRect;
        v68.fields.m_YMin = v43;
        v68.fields.m_Width = v45;
        v68.fields.m_Height = v47;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(essentialRectsOnMap, rects2DUI, v68, v48) )
        {
          v49 = cameraRect;
          v50 = 8;
          goto LABEL_43;
        }
      }
    }
  }
  v47 = 0.0;
  v50 = 9;
  v45 = 0.0;
  v43 = 0.0;
  v49 = 0.0;
LABEL_43:
  v51 = *(_QWORD *)v32;
  cameraRecta = v49;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_47;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_47:
    v54 = sub_1C69E5C(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v32, *(_QWORD *)(v54 + 8));
  *(float *)&v30 = cameraRecta;
  if ( v50 == 9 )
  {
    v19 = v63.fields.m_Width;
    v29 = 1;
    v18 = v63.fields.m_Height;
    v30 = vsub_f32(
            vadd_f32(
              *(float32x2_t *)&CoveringRect.fields.m_XMin,
              vmul_f32(*(float32x2_t *)&CoveringRect.fields.m_Width, (float32x2_t)0x3F0000003F000000LL)),
            v59).n64_u64[0];
    goto LABEL_51;
  }
LABEL_52:
  result.fields.m_YMin = v43;
  result.fields.m_Width = v45;
  result.fields.m_Height = v47;
  result.fields.m_XMin = *(float *)&v30;
  return result;
}


UnityEngine_Rect_o MapCameraViewAdjusterUtil__CreateCoveringRect(
        UnityEngine_Rect_array *rects,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x9
  int8x8_t v3; // d1
  float32x2_t v4; // d2
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  float32x2_t *p_m_Width; // x10
  int8x8_t v8; // d0
  int8x8_t v9; // d3
  float32x2_t v10; // d0
  int8x8_t v11; // d1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !rects )
    sub_1C93D2C(0, method);
  max_length = rects->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      goto LABEL_12;
    v3.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_XMin;
    v4.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_Width;
    v5 = max_length - 1;
    if ( (int)max_length - 1 >= 1 )
    {
      v6 = v5;
      p_m_Width = (float32x2_t *)&rects->m_Items[v5].fields.m_Width;
      while ( v6 < (unsigned int)rects->max_length )
      {
        v8.n64_u64[0] = p_m_Width[-1].n64_u64[0];
        --v6;
        v9.n64_u64[0] = vadd_f32(v8, (float32x2_t)p_m_Width->n64_u64[0]).n64_u64[0];
        v10.n64_u64[0] = vbsl_s8(vcgt_f32(v3, v8), v8, v3).n64_u64[0];
        v11.n64_u64[0] = vadd_f32(v10, vsub_f32(vadd_f32(v3, v4), v10)).n64_u64[0];
        v4.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v9, v11), v9, v11), v10).n64_u64[0];
        p_m_Width -= 2;
        v3.n64_u64[0] = v10.n64_u64[0];
        if ( (int)v6 <= 0 )
          goto LABEL_11;
      }
LABEL_12:
      sub_1C93D34(rects);
    }
    v10.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_XMin;
  }
  else
  {
    v4.n64_u64[0] = 0;
    v10.n64_u64[0] = 0;
  }
LABEL_11:
  LODWORD(result.fields.m_YMin) = v10.n64_u32[1];
  LODWORD(result.fields.m_Height) = v4.n64_u32[1];
  result.fields.m_XMin = v10.n64_f32[0];
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
  float m_YMin; // [xsp+Ch] [xbp-64h]
  float m_Width; // [xsp+58h] [xbp-18h]
  float m_Height; // [xsp+5Ch] [xbp-14h]
  __int64 v17; // [xsp+70h] [xbp+0h]
  int v18; // [xsp+78h] [xbp+8h]

  m_Width = brakeRect.fields.m_Width;
  m_Height = brakeRect.fields.m_Height;
  m_YMin = brakeRect.fields.m_YMin;
  m_XMin = brakeRect.fields.m_XMin;
  if ( (byte_4D2FC85 & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_4D2FC85 = 1;
  }
  v12 = sub_1C93D20(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = -2;
  *(_DWORD *)(v12 + 36) = System_Environment__get_CurrentManagedThreadId(0);
  *(float *)(v12 + 44) = ZoomMin;
  *(float *)(v12 + 88) = m_XMin;
  *(float *)(v12 + 92) = m_YMin;
  *(float *)(v12 + 124) = ZoomMax;
  *(float *)(v12 + 116) = ZoomInterval;
  *(float *)(v12 + 108) = offsetInterval;
  *(float *)(v12 + 96) = m_Width;
  *(float *)(v12 + 100) = m_Height;
  *(_QWORD *)(v12 + 60) = v17;
  *(_DWORD *)(v12 + 68) = v18;
  return (System_Collections_Generic_IEnumerable_Rect__o *)v12;
}


MapCameraViewAdjusterUtil_CameraDestinationInfo_o *MapCameraViewAdjusterUtil__GetSafeCameraDestination(
        MapCamera_o *camera,
        System_Nullable_Vector3__o expectedDestPos,
        System_Nullable_float__o expectedDestZoom,
        const MethodInfo *method)
{
  bool hasValue; // w20
  MapCamera_o *v5; // x19
  float Value; // s0
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s1
  float v9; // s8
  int v10; // w20
  unsigned __int64 ScrlPosVec3; // kr30_8
  float m_Width; // s2
  float m_Height; // s3
  float v14; // s4
  float v15; // s2
  float v16; // s3
  float v17; // s10
  float v18; // s9
  __int64 v19; // x19
  System_Nullable_Vector3__o v21; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v22; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v23; // 0:kr20_16.16

  hasValue = expectedDestZoom.fields.hasValue;
  v5 = camera;
  v21 = expectedDestPos;
  v22 = expectedDestZoom;
  if ( (byte_4D2FC86 & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_float__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_Value__);
    camera = (MapCamera_o *)sub_1C93AD4(&Method_System_Nullable_float__get_Value__);
    byte_4D2FC86 = 1;
  }
  if ( hasValue )
  {
    Value = System_Nullable_float___get_Value(
              (System_Nullable_float__o)&v22,
              (const MethodInfo_39A1F24 *)Method_System_Nullable_float__get_Value__);
    if ( !v5 )
      goto LABEL_32;
  }
  else
  {
    if ( !v5 || (camera = (MapCamera_o *)v5->fields.mZoom) == 0 )
LABEL_32:
      sub_1C93D2C(camera, *(_QWORD *)&expectedDestPos.fields.hasValue);
    Value = MapZoom__GetZoomSize((MapZoom_o *)camera, 0);
  }
  mZoom = v5->fields.mZoom;
  if ( !mZoom )
    goto LABEL_32;
  mZoomMax = mZoom->fields.mZoomMax;
  v9 = mZoomMax + mZoom->fields.mZoomMargin;
  if ( v9 <= Value )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( mZoomMax <= Value )
      v9 = mZoom->fields.mZoomMax;
    else
      v9 = Value;
  }
  if ( v21.fields.hasValue )
  {
    v23.fields.hasValue = (unsigned __int8)&v21;
    LODWORD(v23.fields.value.fields.x) = (unsigned __int64)&v21 >> 32;
    *(_QWORD *)&v23.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    ScrlPosVec3 = (unsigned __int64)System_Nullable_Vector3___get_Value(
                                      v23,
                                      *(const MethodInfo_39A43EC **)&expectedDestPos.fields.value.fields.y);
  }
  else
  {
    camera = (MapCamera_o *)v5->fields.mScrl;
    if ( !camera )
      goto LABEL_32;
    ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3((MapScroll_o *)camera, 0);
  }
  if ( v10 )
  {
    m_Width = v5->fields.mMvBrakeRect.fields.m_Width;
    m_Height = v5->fields.mMvBrakeRect.fields.m_Height;
  }
  else
  {
    m_Width = v5->fields.mMvLimitRect.fields.m_Width;
    m_Height = v5->fields.mMvLimitRect.fields.m_Height;
  }
  v14 = fmaxf(
          (float)(m_Width * 0.5) - (float)((float)(v9 * v5->fields._windowSize_k__BackingField.fields.x) * 0.5),
          0.01);
  v15 = fmaxf(
          (float)(m_Height * 0.5) - (float)((float)(v9 * v5->fields._windowSize_k__BackingField.fields.y) * 0.5),
          0.01);
  v16 = -v14;
  v17 = -v15;
  if ( *(float *)&ScrlPosVec3 <= v14 )
    v14 = *(float *)&ScrlPosVec3;
  if ( *(float *)&ScrlPosVec3 < v16 )
    v18 = v16;
  else
    v18 = v14;
  if ( *((float *)&ScrlPosVec3 + 1) >= v17 )
  {
    if ( *((float *)&ScrlPosVec3 + 1) <= v15 )
      v17 = *((float *)&ScrlPosVec3 + 1);
    else
      v17 = v15;
  }
  v19 = sub_1C93D20(MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  *(float *)(v19 + 16) = v18;
  *(float *)(v19 + 20) = v17;
  *(_DWORD *)(v19 + 24) = 0;
  *(float *)(v19 + 28) = v9;
  return (MapCameraViewAdjusterUtil_CameraDestinationInfo_o *)v19;
}


bool MapCameraViewAdjusterUtil__HasAnyIntersects(
        UnityEngine_Rect_array *containRects,
        UnityEngine_Rect_array *containRects2DUI,
        UnityEngine_Rect_o cameraRect,
        const MethodInfo *method)
{
  _BOOL8 HasAnyIntersects; // x0
  UnityEngine_Vector2_o v7; // x1
  int32x2_t v8; // d0
  float32x2_t v9; // d9
  unsigned int v10; // w8
  float32x2_t v11; // d8
  signed int v12; // w21
  float32x2_t *v13; // x8
  float32x2_t v14; // d0
  float m_Height; // [xsp+0h] [xbp-70h]
  float m_Width; // [xsp+10h] [xbp-60h]
  float m_YMin; // [xsp+20h] [xbp-50h]
  float m_XMin; // [xsp+30h] [xbp-40h]
  UnityEngine_Rect_o v20; // 0:kr00_16.16

  m_Height = cameraRect.fields.m_Height;
  m_Width = cameraRect.fields.m_Width;
  m_YMin = cameraRect.fields.m_YMin;
  m_XMin = cameraRect.fields.m_XMin;
  v8.n64_u32[0] = *(_QWORD *)&FSWindowUtil__GetSize(0);
  if ( !containRects2DUI )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(HasAnyIntersects, v7);
  v8.n64_f32[0] = m_Width / v8.n64_f32[0];
  v9.n64_u64[0] = vdup_lane_s32(v8, 0).n64_u64[0];
  v10 = LODWORD(containRects2DUI->max_length) - 1;
  v11.n64_u64[0] = vadd_f32(
                     (float32x2_t)__PAIR64__(LODWORD(m_YMin), LODWORD(m_XMin)),
                     vmul_f32(
                       (float32x2_t)__PAIR64__(LODWORD(m_Height), LODWORD(m_Width)),
                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  do
  {
    v12 = v10;
    if ( (v10 & 0x80000000) != 0 )
      break;
    if ( v10 >= LODWORD(containRects2DUI->max_length) )
      sub_1C93D34(HasAnyIntersects);
    v13 = (float32x2_t *)(&containRects2DUI->obj + v10);
    v14.n64_u64[0] = v13[4].n64_u64[0];
    *(float32x2_t *)&v20.fields.m_XMin = vadd_f32(v11, vmul_f32(v9, v14));
    *(float32x2_t *)&v20.fields.m_Width = vsub_f32(
                                            vadd_f32(v11, vmul_f32(v9, vadd_f32(v14, v13[5]))),
                                            *(float32x2_t *)&v20.fields.m_XMin);
    HasAnyIntersects = RectExtension__HasAnyIntersects(v20, containRects, 0, 0);
    v10 = v12 - 1;
  }
  while ( !HasAnyIntersects );
  return v12 >= 0;
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
    m_Height = (float)(m_Width * Size.fields.y) / Size.fields.x;
    result.fields.m_Width = m_Width;
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
  int32_t _1__state; // w8
  UnityEngine_Vector2_o Size; // kr00_8
  float ZoomMin; // s2
  int32_t y_5__13; // w9
  int32_t loopY_5__10; // w8
  int v8; // w10
  float m_XMin; // s4
  float m_YMin; // s5
  float32x2_t v11; // d0
  float offsetInterval; // s2
  float32x2_t v13; // d1
  float v14; // s6
  float v15; // s7
  float v16; // s4
  int32_t v17; // w8
  bool v18; // zf
  unsigned __int64 v19; // d4
  float v20; // s6
  int32_t v21; // w10
  float v22; // s3
  float v23; // s2
  int32_t v24; // w8
  int32_t v25; // w10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x9
  int v29; // w10
  int v30; // w8
  __int64 v31; // x9
  int *v32; // x10
  int v33; // w11
  int v34; // t1
  __int64 v35; // x8
  int v36; // w10
  int v37; // w9
  __int64 v38; // x8
  int *v39; // x10
  int v40; // w11
  int v41; // t1
  int v42; // w10
  int32_t v43; // w9
  int v44; // w14
  int v45; // w12
  int v46; // w14
  int v47; // w12
  float v48; // s0
  int32_t v49; // w9
  int v50; // w13
  int v51; // w11
  int v52; // w13
  int v53; // w11
  float32x2_t v54; // d4
  struct UnityEngine_Rect_o cameraRect_5__4; // q0
  float size_5__3; // s0
  float ZoomInterval; // s1
  float ZoomMax; // s0
  int32_t x_5__11; // w10

  if ( (byte_4D2FC88 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2FC88 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    y_5__13 = this->fields._y_5__13;
    loopY_5__10 = this->fields._loopY_5__10;
    this->fields.__1__state = -1;
    v8 = y_5__13 + 1;
    goto LABEL_50;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Size = FSWindowUtil__GetSize(0);
    ZoomMin = this->fields.ZoomMin;
    this->fields._windowSize_5__2 = Size;
    while ( 1 )
    {
      ZoomMax = this->fields.ZoomMax;
      this->fields._size_5__3 = ZoomMin;
      if ( ZoomMin > ZoomMax )
        break;
      m_XMin = this->fields.brakeRect.fields.m_XMin;
      m_YMin = this->fields.brakeRect.fields.m_YMin;
      v11.n64_u64[0] = vmul_n_f32((float32x2_t)this->fields._windowSize_5__2, ZoomMin).n64_u64[0];
      offsetInterval = this->fields.offsetInterval;
      v13.n64_u64[0] = vadd_f32(
                         *(float32x2_t *)&this->fields.center.fields.x,
                         vmul_f32(v11, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      v14 = m_XMin + this->fields.brakeRect.fields.m_Width;
      v15 = m_YMin + this->fields.brakeRect.fields.m_Height;
      v16 = (float)(m_XMin - v13.n64_f32[0]) / offsetInterval;
      v17 = (int)v16;
      v18 = v16 == INFINITY;
      v19 = vadd_f32(v11, v13).n64_u64[0];
      v20 = (float)(v14 - *(float *)&v19) / offsetInterval;
      if ( v18 )
        v17 = 0x80000000;
      v21 = (int)v20;
      if ( v20 == INFINITY )
        v21 = 0x80000000;
      v22 = (float)(m_YMin - v13.n64_f32[1]) / offsetInterval;
      this->fields._offsetXMinIndex_5__5 = v17;
      this->fields._offsetXMaxIndex_5__6 = v21;
      v23 = (float)(v15 - *((float *)&v19 + 1)) / offsetInterval;
      v24 = (int)v23;
      if ( v22 == INFINITY )
        v25 = 0x80000000;
      else
        v25 = (int)v22;
      if ( v23 == INFINITY )
        v24 = 0x80000000;
      *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_Width = v11;
      *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_XMin = v13;
      this->fields._offsetYMinIndex_5__7 = v25;
      this->fields._offsetYMaxIndex_5__8 = v24;
      v26 = sub_1C93B7C(int___TypeInfo, 3);
      if ( !v26 )
        goto LABEL_40;
      v28 = *(_QWORD *)(v26 + 24);
      if ( (unsigned int)v28 <= 1
        || (v29 = -this->fields._offsetXMinIndex_5__5, *(_DWORD *)(v26 + 36) = v29, (_DWORD)v28 == 2) )
      {
LABEL_39:
        sub_1C93D34(v26);
      }
      v30 = *(_DWORD *)(v26 + 32);
      *(_DWORD *)(v26 + 40) = this->fields._offsetXMaxIndex_5__6;
      if ( (int)v28 >= 2 )
      {
        if ( v30 < v29 )
          v30 = v29;
        v31 = (unsigned int)v28 - 2LL;
        if ( v31 )
        {
          v32 = (int *)(v26 + 40);
          do
          {
            v34 = *v32++;
            v33 = v34;
            if ( v34 > v30 )
              v30 = v33;
            --v31;
          }
          while ( v31 );
        }
      }
      this->fields._loopX_5__9 = (2 * v30) | 1;
      v26 = sub_1C93B7C(int___TypeInfo, 3);
      if ( !v26 )
LABEL_40:
        sub_1C93D2C(v26, v27);
      v35 = *(_QWORD *)(v26 + 24);
      if ( (unsigned int)v35 <= 1 )
        goto LABEL_39;
      v36 = -this->fields._offsetYMinIndex_5__7;
      *(_DWORD *)(v26 + 36) = v36;
      if ( (_DWORD)v35 == 2 )
        goto LABEL_39;
      v37 = *(_DWORD *)(v26 + 32);
      *(_DWORD *)(v26 + 40) = this->fields._offsetYMaxIndex_5__8;
      if ( (int)v35 >= 2 )
      {
        if ( v37 < v36 )
          v37 = v36;
        v38 = (unsigned int)v35 - 2LL;
        if ( v38 )
        {
          v39 = (int *)(v26 + 40);
          do
          {
            v41 = *v39++;
            v40 = v41;
            if ( v41 > v37 )
              v37 = v40;
            --v38;
          }
          while ( v38 );
        }
      }
      loopY_5__10 = (2 * v37) | 1;
      v42 = 0;
      this->fields._loopY_5__10 = loopY_5__10;
      while ( 1 )
      {
        v43 = v42;
        if ( v42 >= this->fields._loopX_5__9 )
          break;
        if ( v42 >= 0 )
          v44 = v42;
        else
          v44 = v42 + 1;
        ++v42;
        v45 = v43 + 2;
        v46 = v43 - (v44 & 0x7FFFFFFE);
        if ( v43 + 1 >= 0 )
          v45 = v43 + 1;
        v47 = (2 * v46 - 1) * (v45 >> 1);
        if ( v47 >= this->fields._offsetXMinIndex_5__5 && this->fields._offsetXMaxIndex_5__6 >= v47 )
        {
          v8 = 0;
          v48 = this->fields.center.fields.x + (float)(this->fields.offsetInterval * (float)v47);
          this->fields._x_5__11 = v43;
          this->fields._offsetX_5__12 = v48;
LABEL_50:
          while ( 1 )
          {
            v49 = v8;
            if ( v8 >= loopY_5__10 )
              break;
            if ( v8 >= 0 )
              v50 = v8;
            else
              v50 = v8 + 1;
            ++v8;
            v51 = v49 + 2;
            v52 = v49 - (v50 & 0x7FFFFFFE);
            if ( v49 + 1 >= 0 )
              v51 = v49 + 1;
            v53 = (2 * v52 - 1) * (v51 >> 1);
            if ( v53 >= this->fields._offsetYMinIndex_5__7 && this->fields._offsetYMaxIndex_5__8 >= v53 )
            {
              v54.n64_u32[0] = LODWORD(this->fields._offsetX_5__12);
              v54.n64_f32[1] = this->fields.center.fields.y + (float)(this->fields.offsetInterval * (float)v53);
              *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_XMin = vadd_f32(
                                                                               v54,
                                                                               vmul_f32(
                                                                                 *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_Width,
                                                                                 (float32x2_t)0xBF000000BF000000LL));
              cameraRect_5__4 = this->fields._cameraRect_5__4;
              this->fields._y_5__13 = v49;
              this->fields.__1__state = 1;
              this->fields.__2__current = cameraRect_5__4;
              return 1;
            }
          }
          x_5__11 = this->fields._x_5__11;
          this->fields._y_5__13 = v49;
          v42 = x_5__11 + 1;
        }
      }
      size_5__3 = this->fields._size_5__3;
      ZoomInterval = this->fields.ZoomInterval;
      this->fields._x_5__11 = v42;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_Width = 0;
      *(_QWORD *)&this->fields._cameraRect_5__4.fields.m_XMin = 0;
      ZoomMin = size_5__3 + ZoomInterval;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_Rect__o *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_Generic_IEnumerable_UnityEngine_Rect__GetEnumerator(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *v4; // x20
  __int64 v6; // x9

  if ( (byte_4D2FC8A & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_4D2FC8A = 1;
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
    v4 = (MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *)sub_1C93D20(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  v4->fields.ZoomMin = this->fields.__3__ZoomMin;
  v4->fields.ZoomMax = this->fields.__3__ZoomMax;
  v4->fields.ZoomInterval = this->fields.__3__ZoomInterval;
  v4->fields.offsetInterval = this->fields.__3__offsetInterval;
  v4->fields.brakeRect = this->fields.__3__brakeRect;
  v6 = *(_QWORD *)&this->fields.__3__center.fields.x;
  v4->fields.center.fields.z = this->fields.__3__center.fields.z;
  *(_QWORD *)&v4->fields.center.fields.x = v6;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_IEnumerator_get_Current(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Rect_o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4D2FC89 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Rect_TypeInfo);
    byte_4D2FC89 = 1;
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