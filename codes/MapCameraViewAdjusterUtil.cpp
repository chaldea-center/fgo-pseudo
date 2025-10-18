void MapCameraViewAdjusterUtil___cctor(const MethodInfo *method)
{
  if ( (byte_4C4224B & 1) == 0 )
  {
    sub_1C37058(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4C4224B = 1;
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
  MapCamera_o *v8; // x20
  float m_YMin; // s8
  float m_XMin; // s13
  float m_Width; // s9
  float m_Height; // s10
  MapCameraViewAdjusterUtil_c *v13; // x0
  float x; // s11
  float y; // s10
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  float v18; // s14
  float v19; // s15
  float v20; // s8
  float v21; // s9
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s10
  MapCamera_c *klass; // x8
  MapCamera_o *v25; // x20
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  UnityEngine_Vector2_o Size; // kr00_8
  float v30; // s13
  float v31; // s12
  int32_t v32; // w8
  __int64 v33; // x20
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  long double v42; // q0 OVERLAPPED
  float v43; // s1
  float v44; // s2
  float v45; // s3
  const MethodInfo *v46; // x2
  int v47; // w22
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  float v52; // s0
  float v53; // s1
  float v54; // s2
  float v55; // s3
  float v56; // [xsp+10h] [xbp-A0h]
  float v57; // [xsp+14h] [xbp-9Ch]
  float v58; // [xsp+18h] [xbp-98h]
  float v59; // [xsp+1Ch] [xbp-94h]
  float v60; // [xsp+20h] [xbp-90h]
  float brakeRect; // [xsp+24h] [xbp-8Ch]
  float v62; // [xsp+28h] [xbp-88h]
  float v63; // [xsp+2Ch] [xbp-84h]
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o CoveringRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v71; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v72; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = camera;
  if ( (byte_4C42247 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_1C37058(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4C42247 = 1;
  }
  *failedReason = 0;
  if ( !rectsOnMap )
    goto LABEL_53;
  if ( !rectsOnMap->max_length )
  {
    Size = FSWindowUtil__GetSize(0);
    x = Size.fields.x;
    y = Size.fields.y;
    v30 = Size.fields.x * -0.5;
    v31 = Size.fields.y * -0.5;
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
  v64.fields.m_XMin = m_XMin;
  v64.fields.m_YMin = m_YMin;
  v64.fields.m_Width = m_Width;
  v64.fields.m_Height = m_Height;
  v62 = m_Width;
  v63 = m_YMin;
  brakeRect = m_Height;
  v65 = MapCameraViewAdjusterUtil__ResizedToViewAspectRect(v64, (const MethodInfo *)v13);
  x = v65.fields.m_Width;
  y = v65.fields.m_Height;
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, v16);
  v18 = CoveringRect.fields.m_XMin;
  v19 = CoveringRect.fields.m_YMin;
  v20 = CoveringRect.fields.m_Width;
  v21 = CoveringRect.fields.m_Height;
  v59 = x;
  v57 = (float)(CoveringRect.fields.m_YMin + (float)(CoveringRect.fields.m_Height * 0.5)) - (float)(y * 0.5);
  v58 = (float)(CoveringRect.fields.m_XMin + (float)(CoveringRect.fields.m_Width * 0.5)) - (float)(x * 0.5);
  if ( x < CoveringRect.fields.m_Width || y < CoveringRect.fields.m_Height )
  {
    v32 = 2;
LABEL_51:
    *failedReason = v32;
    v31 = v57;
    v30 = v58;
    goto LABEL_52;
  }
  mZoom = v8->fields.mZoom;
  v56 = y;
  if ( !mZoom )
    goto LABEL_53;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil_TypeInfo;
  mZoomMax = mZoom->fields.mZoomMax;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    camera = (MapCamera_o *)MapCameraViewAdjusterUtil_TypeInfo;
  }
  v70.fields.m_Width = v62;
  v70.fields.m_YMin = v63;
  v70.fields.m_Height = brakeRect;
  v70.fields.m_XMin = m_XMin;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            1.0,
                            mZoomMax,
                            *((float *)&camera[1].fields.mMapBg->klass + 1),
                            *(float *)&camera[1].fields.mMapBg->klass,
                            v70,
                            *(UnityEngine_Vector3_o *)&camera,
                            v17);
  if ( !camera )
LABEL_53:
    sub_1C372B4(camera);
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
        goto LABEL_18;
    }
    v28 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_18:
    v28 = sub_1C87870(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v60 = m_XMin;
  v33 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( !v33 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_27;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_27:
      v37 = sub_1C87870(v33, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Rect__c **)v40 - 1) != System_Collections_Generic_IEnumerator_Rect__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_34;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_34:
      v41 = sub_1C87870(v33, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v42 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v41)(v33, *(_QWORD *)(v41 + 8));
    v30 = *(float *)&v42;
    v31 = v43;
    x = v44;
    y = v45;
    v71.fields.m_XMin = v18;
    v71.fields.m_YMin = v19;
    v71.fields.m_Width = v20;
    v71.fields.m_Height = v21;
    if ( RectExtension__IsContain(*(UnityEngine_Rect_o *)&v42, v71, 0) )
    {
      v67.fields.m_XMin = v60;
      v67.fields.m_Height = brakeRect;
      v67.fields.m_Width = v62;
      v67.fields.m_YMin = v63;
      v72.fields.m_XMin = v30;
      v72.fields.m_YMin = v31;
      v72.fields.m_Width = x;
      v72.fields.m_Height = y;
      if ( RectExtension__IsContain(v67, v72, 0) )
      {
        if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
        v68.fields.m_XMin = v30;
        v68.fields.m_YMin = v31;
        v68.fields.m_Width = x;
        v68.fields.m_Height = y;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(rectsOnMap, rects2DUI, v68, v46) )
        {
          v47 = 7;
          goto LABEL_43;
        }
      }
    }
  }
  y = 0.0;
  v47 = 8;
  x = 0.0;
  v31 = 0.0;
  v30 = 0.0;
LABEL_43:
  v48 = *(_QWORD *)v33;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_47;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_47:
    v51 = sub_1C87870(v33, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v51)(v33, *(_QWORD *)(v51 + 8));
  if ( (v47 | 8) == 8 )
  {
    x = v59;
    y = v56;
    v32 = 1;
    goto LABEL_51;
  }
LABEL_52:
  v52 = v30;
  v53 = v31;
  v54 = x;
  v55 = y;
  result.fields.m_Height = v55;
  result.fields.m_Width = v54;
  result.fields.m_YMin = v53;
  result.fields.m_XMin = v52;
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
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  MapCameraViewAdjusterUtil_c *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  float v18; // s4
  float v19; // s5
  const MethodInfo *v20; // x2
  float x; // s0
  UnityEngine_Vector3_o v22; // x0
  float v23; // s12
  MapCamera_c *klass; // x8
  MapCamera_o *v25; // x22
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  int32_t v29; // w8
  float v30; // v2.s[1]
  unsigned __int64 v31; // d0
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  long double v41; // q0 OVERLAPPED
  float v42; // s1
  float v43; // s13
  float v44; // s2
  float v45; // s14
  float v46; // s3
  float v47; // s12
  float v48; // s1
  float v49; // s2
  float v50; // s3
  const MethodInfo *v51; // x2
  float v52; // s0
  int v53; // w21
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  float v58; // s1
  float v59; // s2
  float v60; // s3
  float32x2_t v61; // [xsp+10h] [xbp-110h]
  float v62; // [xsp+20h] [xbp-100h]
  float v63; // [xsp+30h] [xbp-F0h]
  float b; // [xsp+40h] [xbp-E0h]
  float v65; // [xsp+50h] [xbp-D0h]
  float v66; // [xsp+60h] [xbp-C0h]
  float v67; // [xsp+70h] [xbp-B0h]
  float cameraRect; // [xsp+80h] [xbp-A0h]
  float cameraRecta; // [xsp+80h] [xbp-A0h]
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o CoveringRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v77; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Rect_o v78; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v10 = camera;
  if ( (byte_4C42248 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Rect__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Rect__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    camera = (MapCamera_o *)sub_1C37058(&MapCameraViewAdjusterUtil_TypeInfo);
    byte_4C42248 = 1;
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
  v70.fields.m_XMin = m_XMin;
  v70.fields.m_YMin = m_YMin;
  v70.fields.m_Width = m_Width;
  v70.fields.m_Height = m_Height;
  v71 = MapCameraViewAdjusterUtil__ResizedToViewAspectRect(v70, (const MethodInfo *)v15);
  v63 = v71.fields.m_Width;
  v62 = v71.fields.m_Height;
  CoveringRect = MapCameraViewAdjusterUtil__CreateCoveringRect(essentialRectsOnMap, v16);
  v18 = v62;
  v19 = v63;
  v67 = CoveringRect.fields.m_XMin;
  v65 = CoveringRect.fields.m_YMin;
  v66 = CoveringRect.fields.m_Width;
  if ( v63 < CoveringRect.fields.m_Width || v62 < CoveringRect.fields.m_Height )
  {
    v29 = 2;
    v30 = CoveringRect.fields.m_Height;
    v31 = vsub_f32(
            vadd_f32(
              *(float32x2_t *)&CoveringRect.fields.m_XMin,
              vmul_f32(*(float32x2_t *)&CoveringRect.fields.m_Width, (float32x2_t)0x3F0000003F000000LL)),
            vmul_f32((float32x2_t)__PAIR64__(LODWORD(v62), LODWORD(v63)), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
LABEL_51:
    v43 = *((float *)&v31 + 1);
    v45 = v19;
    v47 = v18;
    *failedReason = v29;
    goto LABEL_52;
  }
  b = CoveringRect.fields.m_Height;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  MapCameraViewAdjusterUtil__CreateCoveringRect(rectsOnMap, v17);
  v61.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(v62), LODWORD(v63)), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  x = FSWindowUtil__GetSize(0).fields.x;
  *(_QWORD *)&v22.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  v23 = v63 / x;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(_QWORD *)&v22.fields.x = MapCameraViewAdjusterUtil_TypeInfo;
  }
  v76.fields.m_XMin = m_XMin;
  v76.fields.m_YMin = m_YMin;
  v76.fields.m_Width = m_Width;
  v76.fields.m_Height = m_Height;
  camera = (MapCamera_o *)MapCameraViewAdjusterUtil__GenerateCameraRects(
                            v23,
                            v23,
                            1.0,
                            **(float **)(*(_QWORD *)&v22.fields.x + 184LL),
                            v76,
                            v22,
                            v20);
  if ( !camera )
LABEL_53:
    sub_1C372B4(camera);
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
    v28 = sub_1C87870(camera, System_Collections_Generic_IEnumerable_Rect__TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(MapCamera_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( !v32 )
    sub_1C372B4(0);
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
      v36 = sub_1C87870(v32, System_Collections_IEnumerator_TypeInfo, 0);
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
      v40 = sub_1C87870(v32, System_Collections_Generic_IEnumerator_Rect__TypeInfo, 0);
    }
    v41 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v42;
    v45 = v44;
    v47 = v46;
    v77.fields.m_XMin = *(float *)&v41;
    *(float *)&v41 = m_XMin;
    v48 = m_YMin;
    v49 = m_Width;
    v50 = m_Height;
    v77.fields.m_YMin = v43;
    v77.fields.m_Width = v45;
    v77.fields.m_Height = v47;
    cameraRect = v77.fields.m_XMin;
    if ( RectExtension__IsContain(*(UnityEngine_Rect_o *)&v41, v77, 0) )
    {
      v78.fields.m_XMin = v67;
      v73.fields.m_XMin = cameraRect;
      v73.fields.m_YMin = v43;
      v73.fields.m_Width = v45;
      v73.fields.m_Height = v47;
      v78.fields.m_YMin = v65;
      v78.fields.m_Width = v66;
      v78.fields.m_Height = b;
      if ( RectExtension__IsContain(v73, v78, 0) )
      {
        if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
        v74.fields.m_XMin = cameraRect;
        v74.fields.m_YMin = v43;
        v74.fields.m_Width = v45;
        v74.fields.m_Height = v47;
        if ( !MapCameraViewAdjusterUtil__HasAnyIntersects(essentialRectsOnMap, rects2DUI, v74, v51) )
        {
          v52 = cameraRect;
          v53 = 8;
          goto LABEL_43;
        }
      }
    }
  }
  v47 = 0.0;
  v53 = 9;
  v45 = 0.0;
  v43 = 0.0;
  v52 = 0.0;
LABEL_43:
  v54 = *(_QWORD *)v32;
  cameraRecta = v52;
  v55 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_47;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_47:
    v57 = sub_1C87870(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v32, *(_QWORD *)(v57 + 8));
  *(float *)&v31 = cameraRecta;
  if ( v53 == 9 )
  {
    v19 = v63;
    v29 = 1;
    v18 = v62;
    v31 = vsub_f32(
            vadd_f32(
              (float32x2_t)__PAIR64__(LODWORD(v65), LODWORD(v67)),
              vmul_f32((float32x2_t)__PAIR64__(LODWORD(b), LODWORD(v66)), (float32x2_t)0x3F0000003F000000LL)),
            v61).n64_u64[0];
    goto LABEL_51;
  }
LABEL_52:
  v58 = v43;
  v59 = v45;
  v60 = v47;
  result.fields.m_XMin = *(float *)&v31;
  result.fields.m_Height = v60;
  result.fields.m_Width = v59;
  result.fields.m_YMin = v58;
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
  float v12; // s1
  float v13; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !rects )
    sub_1C372B4(0);
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
      sub_1C372BC(rects);
    }
    v10.n64_u64[0] = *(unsigned __int64 *)&rects->m_Items[0].fields.m_XMin;
  }
  else
  {
    v4.n64_u64[0] = 0;
    v10.n64_u64[0] = 0;
  }
LABEL_11:
  v12 = v10.n64_f32[1];
  v13 = v4.n64_f32[1];
  result.fields.m_Width = v4.n64_f32[0];
  result.fields.m_XMin = v10.n64_f32[0];
  result.fields.m_Height = v13;
  result.fields.m_YMin = v12;
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
  if ( (byte_4C42249 & 1) == 0 )
  {
    sub_1C37058(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_4C42249 = 1;
  }
  v12 = sub_1C372A4(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
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
  System_Nullable_float__o v6; // x0
  const MethodInfo_38CD384 *v7; // x2
  float Value; // s0
  struct MapZoom_o *mZoom; // x8
  float mZoomMax; // s1
  float v11; // s8
  int v12; // w20
  float m_Width; // s2
  float m_Height; // s3
  float x; // s4
  float v16; // s2
  float v17; // s3
  float y; // s10
  float v19; // s9
  __int64 v20; // x19
  System_Nullable_Vector3__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v23; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  hasValue = expectedDestZoom.fields.hasValue;
  v5 = camera;
  v22 = expectedDestPos;
  v23 = expectedDestZoom;
  if ( (byte_4C4224A & 1) == 0 )
  {
    sub_1C37058(&MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_Vector3__get_Value__);
    camera = (MapCamera_o *)sub_1C37058(&Method_System_Nullable_float__get_Value__);
    byte_4C4224A = 1;
  }
  if ( hasValue )
  {
    v6 = (System_Nullable_float__o)&v23;
    Value = System_Nullable_float___get_Value(v6, (const MethodInfo_38CAEBC *)Method_System_Nullable_float__get_Value__);
    if ( !v5 )
      goto LABEL_32;
  }
  else
  {
    if ( !v5 || (camera = (MapCamera_o *)v5->fields.mZoom) == 0 )
LABEL_32:
      sub_1C372B4(camera);
    Value = MapZoom__GetZoomSize((MapZoom_o *)camera, 0);
  }
  mZoom = v5->fields.mZoom;
  if ( !mZoom )
    goto LABEL_32;
  mZoomMax = mZoom->fields.mZoomMax;
  v11 = mZoomMax + mZoom->fields.mZoomMargin;
  if ( v11 <= Value )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( mZoomMax <= Value )
      v11 = mZoom->fields.mZoomMax;
    else
      v11 = Value;
  }
  if ( v22.fields.hasValue )
  {
    *(_QWORD *)&v24.fields.hasValue = &v22;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    ScrlPosVec3 = System_Nullable_Vector3___get_Value(v24, v7);
  }
  else
  {
    camera = (MapCamera_o *)v5->fields.mScrl;
    if ( !camera )
      goto LABEL_32;
    ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)camera, 0);
  }
  if ( v12 )
  {
    m_Width = v5->fields.mMvBrakeRect.fields.m_Width;
    m_Height = v5->fields.mMvBrakeRect.fields.m_Height;
  }
  else
  {
    m_Width = v5->fields.mMvLimitRect.fields.m_Width;
    m_Height = v5->fields.mMvLimitRect.fields.m_Height;
  }
  x = fmaxf(
        (float)(m_Width * 0.5) - (float)((float)(v11 * v5->fields._windowSize_k__BackingField.fields.x) * 0.5),
        0.01);
  v16 = fmaxf(
          (float)(m_Height * 0.5) - (float)((float)(v11 * v5->fields._windowSize_k__BackingField.fields.y) * 0.5),
          0.01);
  v17 = -x;
  y = -v16;
  if ( ScrlPosVec3.fields.x <= x )
    x = ScrlPosVec3.fields.x;
  if ( ScrlPosVec3.fields.x < v17 )
    v19 = v17;
  else
    v19 = x;
  if ( ScrlPosVec3.fields.y >= y )
  {
    if ( ScrlPosVec3.fields.y <= v16 )
      y = ScrlPosVec3.fields.y;
    else
      y = v16;
  }
  v20 = sub_1C372A4(MapCameraViewAdjusterUtil_CameraDestinationInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  *(float *)(v20 + 16) = v19;
  *(float *)(v20 + 20) = y;
  *(_DWORD *)(v20 + 24) = 0;
  *(float *)(v20 + 28) = v11;
  return (MapCameraViewAdjusterUtil_CameraDestinationInfo_o *)v20;
}


// local variable allocation has failed, the output may be wrong!
bool MapCameraViewAdjusterUtil__HasAnyIntersects(
        UnityEngine_Rect_array *containRects,
        UnityEngine_Rect_array *containRects2DUI,
        UnityEngine_Rect_o cameraRect,
        const MethodInfo *method)
{
  _BOOL8 HasAnyIntersects; // x0
  int32x2_t v7; // d0
  float32x2_t v8; // d9
  unsigned int v9; // w8
  float32x2_t v10; // d8
  signed int v11; // w21
  float32x2_t *v12; // x8
  float32x2_t v13; // d0
  float32x2_t v14; // d1 OVERLAPPED
  float32x2_t v15; // d0
  unsigned __int64 v16; // d2
  int v17; // s3
  float m_Height; // [xsp+0h] [xbp-70h]
  float m_Width; // [xsp+10h] [xbp-60h]
  float m_YMin; // [xsp+20h] [xbp-50h]
  float m_XMin; // [xsp+30h] [xbp-40h]

  m_Height = cameraRect.fields.m_Height;
  m_Width = cameraRect.fields.m_Width;
  m_YMin = cameraRect.fields.m_YMin;
  m_XMin = cameraRect.fields.m_XMin;
  v7.n64_u32[0] = *(_QWORD *)&FSWindowUtil__GetSize(0);
  if ( !containRects2DUI )
    sub_1C372B4(HasAnyIntersects);
  v7.n64_f32[0] = m_Width / v7.n64_f32[0];
  v8.n64_u64[0] = vdup_lane_s32(v7, 0).n64_u64[0];
  v9 = LODWORD(containRects2DUI->max_length) - 1;
  v10.n64_u64[0] = vadd_f32(
                     (float32x2_t)__PAIR64__(LODWORD(m_YMin), LODWORD(m_XMin)),
                     vmul_f32(
                       (float32x2_t)__PAIR64__(LODWORD(m_Height), LODWORD(m_Width)),
                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  do
  {
    v11 = v9;
    if ( (v9 & 0x80000000) != 0 )
      break;
    if ( v9 >= LODWORD(containRects2DUI->max_length) )
      sub_1C372BC(HasAnyIntersects);
    v12 = (float32x2_t *)(&containRects2DUI->obj + v9);
    v13.n64_u64[0] = v12[4].n64_u64[0];
    v14.n64_u64[0] = vadd_f32(v13, v12[5]).n64_u64[0];
    v15.n64_u64[0] = vadd_f32(v10, vmul_f32(v8, v13)).n64_u64[0];
    v16 = vsub_f32(vadd_f32(v10, vmul_f32(v8, v14)), v15).n64_u64[0];
    v14.n64_u32[0] = v15.n64_u32[1];
    v17 = HIDWORD(v16);
    HasAnyIntersects = RectExtension__HasAnyIntersects(*(UnityEngine_Rect_o *)((char *)&v14 - 4), containRects, 0, 0);
    v9 = v11 - 1;
  }
  while ( !HasAnyIntersects );
  return v11 >= 0;
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
    m_Height = (float)(m_Width * Size.fields.y) / Size.fields.x;
    v7 = m_Width;
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
  __int64 v27; // x9
  int v28; // w10
  int v29; // w8
  __int64 v30; // x9
  int *v31; // x10
  int v32; // w11
  int v33; // t1
  __int64 v34; // x8
  int v35; // w10
  int v36; // w9
  __int64 v37; // x8
  int *v38; // x10
  int v39; // w11
  int v40; // t1
  int v41; // w10
  int32_t v42; // w9
  int v43; // w14
  int v44; // w12
  int v45; // w14
  int v46; // w12
  float v47; // s0
  int32_t v48; // w9
  int v49; // w13
  int v50; // w11
  int v51; // w13
  int v52; // w11
  float32x2_t v53; // d4
  struct UnityEngine_Rect_o cameraRect_5__4; // q0
  bool result; // w0
  float size_5__3; // s0
  float ZoomInterval; // s1
  float ZoomMax; // s0
  int32_t x_5__11; // w10

  if ( (byte_4C4224C & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C4224C = 1;
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
      v26 = sub_1C37100(int___TypeInfo, 3);
      if ( !v26 )
        goto LABEL_40;
      v27 = *(_QWORD *)(v26 + 24);
      if ( (unsigned int)v27 <= 1
        || (v28 = -this->fields._offsetXMinIndex_5__5, *(_DWORD *)(v26 + 36) = v28, (_DWORD)v27 == 2) )
      {
LABEL_39:
        sub_1C372BC(v26);
      }
      v29 = *(_DWORD *)(v26 + 32);
      *(_DWORD *)(v26 + 40) = this->fields._offsetXMaxIndex_5__6;
      if ( (int)v27 >= 2 )
      {
        if ( v29 < v28 )
          v29 = v28;
        v30 = (unsigned int)v27 - 2LL;
        if ( v30 )
        {
          v31 = (int *)(v26 + 40);
          do
          {
            v33 = *v31++;
            v32 = v33;
            if ( v33 > v29 )
              v29 = v32;
            --v30;
          }
          while ( v30 );
        }
      }
      this->fields._loopX_5__9 = (2 * v29) | 1;
      v26 = sub_1C37100(int___TypeInfo, 3);
      if ( !v26 )
LABEL_40:
        sub_1C372B4(v26);
      v34 = *(_QWORD *)(v26 + 24);
      if ( (unsigned int)v34 <= 1 )
        goto LABEL_39;
      v35 = -this->fields._offsetYMinIndex_5__7;
      *(_DWORD *)(v26 + 36) = v35;
      if ( (_DWORD)v34 == 2 )
        goto LABEL_39;
      v36 = *(_DWORD *)(v26 + 32);
      *(_DWORD *)(v26 + 40) = this->fields._offsetYMaxIndex_5__8;
      if ( (int)v34 >= 2 )
      {
        if ( v36 < v35 )
          v36 = v35;
        v37 = (unsigned int)v34 - 2LL;
        if ( v37 )
        {
          v38 = (int *)(v26 + 40);
          do
          {
            v40 = *v38++;
            v39 = v40;
            if ( v40 > v36 )
              v36 = v39;
            --v37;
          }
          while ( v37 );
        }
      }
      loopY_5__10 = (2 * v36) | 1;
      v41 = 0;
      this->fields._loopY_5__10 = loopY_5__10;
      while ( 1 )
      {
        v42 = v41;
        if ( v41 >= this->fields._loopX_5__9 )
          break;
        if ( v41 >= 0 )
          v43 = v41;
        else
          v43 = v41 + 1;
        ++v41;
        v44 = v42 + 2;
        v45 = v42 - (v43 & 0x7FFFFFFE);
        if ( v42 + 1 >= 0 )
          v44 = v42 + 1;
        v46 = (2 * v45 - 1) * (v44 >> 1);
        if ( v46 >= this->fields._offsetXMinIndex_5__5 && this->fields._offsetXMaxIndex_5__6 >= v46 )
        {
          v8 = 0;
          v47 = this->fields.center.fields.x + (float)(this->fields.offsetInterval * (float)v46);
          this->fields._x_5__11 = v42;
          this->fields._offsetX_5__12 = v47;
LABEL_50:
          while ( 1 )
          {
            v48 = v8;
            if ( v8 >= loopY_5__10 )
              break;
            if ( v8 >= 0 )
              v49 = v8;
            else
              v49 = v8 + 1;
            ++v8;
            v50 = v48 + 2;
            v51 = v48 - (v49 & 0x7FFFFFFE);
            if ( v48 + 1 >= 0 )
              v50 = v48 + 1;
            v52 = (2 * v51 - 1) * (v50 >> 1);
            if ( v52 >= this->fields._offsetYMinIndex_5__7 && this->fields._offsetYMaxIndex_5__8 >= v52 )
            {
              v53.n64_u32[0] = LODWORD(this->fields._offsetX_5__12);
              v53.n64_f32[1] = this->fields.center.fields.y + (float)(this->fields.offsetInterval * (float)v52);
              *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_XMin = vadd_f32(
                                                                               v53,
                                                                               vmul_f32(
                                                                                 *(float32x2_t *)&this->fields._cameraRect_5__4.fields.m_Width,
                                                                                 (float32x2_t)0xBF000000BF000000LL));
              cameraRect_5__4 = this->fields._cameraRect_5__4;
              result = 1;
              this->fields._y_5__13 = v48;
              this->fields.__1__state = 1;
              this->fields.__2__current = cameraRect_5__4;
              return result;
            }
          }
          x_5__11 = this->fields._x_5__11;
          this->fields._y_5__13 = v48;
          v41 = x_5__11 + 1;
        }
      }
      size_5__3 = this->fields._size_5__3;
      ZoomInterval = this->fields.ZoomInterval;
      this->fields._x_5__11 = v41;
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
  System_Collections_Generic_IEnumerator_Rect__o *result; // x0
  __int64 v6; // x9

  if ( (byte_4C4224E & 1) == 0 )
  {
    sub_1C37058(&MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    byte_4C4224E = 1;
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
    v4 = (MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *)sub_1C372A4(MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  result = (System_Collections_Generic_IEnumerator_Rect__o *)v4;
  v4->fields.ZoomMin = this->fields.__3__ZoomMin;
  v4->fields.ZoomMax = this->fields.__3__ZoomMax;
  v4->fields.ZoomInterval = this->fields.__3__ZoomInterval;
  v4->fields.offsetInterval = this->fields.__3__offsetInterval;
  v4->fields.brakeRect = this->fields.__3__brakeRect;
  v6 = *(_QWORD *)&this->fields.__3__center.fields.x;
  v4->fields.center.fields.z = this->fields.__3__center.fields.z;
  *(_QWORD *)&v4->fields.center.fields.x = v6;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_Collections_IEnumerator_get_Current(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  struct UnityEngine_Rect_o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C4224D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Rect_TypeInfo);
    byte_4C4224D = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Rect_TypeInfo, &_2__current, v2, v3, v4, v5, v6, v7);
}


void MapCameraViewAdjusterUtil__GenerateCameraRects_d__5__System_IDisposable_Dispose(
        MapCameraViewAdjusterUtil__GenerateCameraRects_d__5_o *this,
        const MethodInfo *method)
{
  ;
}