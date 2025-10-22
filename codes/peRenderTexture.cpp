void peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5A18F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16273/*"_MainCamVPMatrix"*/);
    sub_1C3E564(&StringLiteral_16316/*"_ParallelViewMatrix"*/);
    sub_1C3E564(&StringLiteral_16315/*"_ParallelProjectionMatrix"*/);
    byte_4C5A18F = 1;
  }
  this->fields.changeCullingMask = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_C13620;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.boundsUpdateCount = -1;
  v5 = StringLiteral_16273/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16273/*"_MainCamVPMatrix"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.MainCamVPMat, v5, v2, v3);
  v6 = StringLiteral_16316/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16316/*"_ParallelViewMatrix"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ParallelViewMat, v6, v7, v8);
  v9 = StringLiteral_16315/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16315/*"_ParallelProjectionMatrix"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ParallelProjectionMat, v9, v10, v11);
  *(_QWORD *)&this->fields._RBindex = 0x6E0000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Bounds_o *peRenderTexture__CalcRendererBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o bounds; // [xsp+8h] [xbp-28h] BYREF

  memset(&bounds, 0, sizeof(bounds));
  peRenderTexture__CalcRendererBounds_47295268(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void peRenderTexture__CalcRendererBounds_47295268(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  peRenderTexture_o *v6; // x20
  Il2CppObject *Component_object; // x22
  float v8; // s9
  float32x2_t v9; // d8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v11; // d1
  unsigned __int64 v12; // d1
  __int128 v13; // q0
  float z; // s5
  float32x2_t v15; // d6
  float v16; // s7
  int8x8_t v17; // d20
  int8x8_t v18; // d4
  float v19; // s6
  int8x8_t v20; // d18
  float v21; // s5
  int8x8_t v22; // d0
  float v23; // s1
  int8x8_t v24; // d2
  int8x8_t v25; // d3
  float32x2_t v26; // d2
  float32x2_t v27; // d3
  float v28; // s4
  float32x2_t v29; // d3
  float v30; // s4
  float32x2_t v31; // d2
  float v32; // s5
  int8x8_t v33; // d6
  int8x8_t v34; // d2
  float v35; // s3
  float v36; // s4
  float32x2_t v37; // d6
  float32x2_t v38; // d0
  float v39; // s2
  float32x2_t v40; // d0
  float v41; // s1
  __int64 v42; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  UnityEngine_Component_o *v52; // x0
  __int64 v53; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x20
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  UnityEngine_Bounds_o v63; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v64; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4C5A18D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (peRenderTexture_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C5A18D = 1;
  }
  if ( !obj )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (peRenderTexture_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_54;
    if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)Component_object, 0) )
    {
      v8 = bounds->fields.m_Extents.fields.x + bounds->fields.m_Extents.fields.x;
      v9.n64_u64[0] = vadd_f32(
                        *(float32x2_t *)&bounds->fields.m_Extents.fields.y,
                        *(float32x2_t *)&bounds->fields.m_Extents.fields.y).n64_u64[0];
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v11.n64_u64[0] = vsub_f32(v9, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v12 = vmul_f32(v11, v11).n64_u64[0];
      if ( (float)(*((float *)&v12 + 1)
                 + (float)((float)((float)(v8 - static_fields->zeroVector.fields.x)
                                 * (float)(v8 - static_fields->zeroVector.fields.x))
                         + *(float *)&v12)) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v64, (UnityEngine_Renderer_o *)Component_object, 0);
        z = bounds->fields.m_Center.fields.z;
        v15.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v16 = bounds->fields.m_Extents.fields.z;
        v17.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v15).n64_u64[0];
        v18.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v15).n64_u64[0];
        v19 = z - v16;
        v20.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v64.fields.m_Center.fields.x,
                           *(float32x2_t *)&v64.fields.m_Extents.fields.x).n64_u64[0];
        v21 = z + v16;
        v22.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v64.fields.m_Center.fields.x,
                           *(float32x2_t *)&v64.fields.m_Extents.fields.x).n64_u64[0];
        v23 = v64.fields.m_Center.fields.z + v64.fields.m_Extents.fields.z;
        v24.n64_u64[0] = vcgt_f32(v20, v17).n64_u64[0];
        v25.n64_u64[0] = vcgt_f32(v18, v20).n64_u64[0];
        if ( v19 >= (float)(v64.fields.m_Center.fields.z - v64.fields.m_Extents.fields.z) )
          v19 = v64.fields.m_Center.fields.z - v64.fields.m_Extents.fields.z;
        v26.n64_u64[0] = vbsl_s8(v24, v17, v20).n64_u64[0];
        v27.n64_u64[0] = vbsl_s8(v25, v18, v20).n64_u64[0];
        if ( v21 <= (float)(v64.fields.m_Center.fields.z - v64.fields.m_Extents.fields.z) )
          v28 = v64.fields.m_Center.fields.z - v64.fields.m_Extents.fields.z;
        else
          v28 = v21;
        v29.n64_u64[0] = vmul_f32(vsub_f32(v27, v26), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v30 = (float)(v28 - v19) * 0.5;
        v31.n64_u64[0] = vadd_f32(v26, v29).n64_u64[0];
        v32 = v19 + v30;
        v33.n64_u64[0] = vsub_f32(v31, v29).n64_u64[0];
        v34.n64_u64[0] = vadd_f32(v29, v31).n64_u64[0];
        v35 = v32 - v30;
        v36 = v30 + v32;
        v37.n64_u64[0] = vbsl_s8(vcgt_f32(v22, v33), v33, v22).n64_u64[0];
        v38.n64_u64[0] = vbsl_s8(vcgt_f32(v34, v22), v34, v22).n64_u64[0];
        if ( v35 >= v23 )
          v39 = v64.fields.m_Center.fields.z + v64.fields.m_Extents.fields.z;
        else
          v39 = v35;
        if ( v36 > v23 )
          v23 = v36;
        v40.n64_u64[0] = vmul_f32(vsub_f32(v38, v37), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v41 = (float)(v23 - v39) * 0.5;
        *(float32x2_t *)&bounds->fields.m_Extents.fields.x = v40;
        bounds->fields.m_Extents.fields.z = v41;
        *(float32x2_t *)&bounds->fields.m_Center.fields.x = vadd_f32(v37, v40);
        bounds->fields.m_Center.fields.z = v39 + v41;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v63, (UnityEngine_Renderer_o *)Component_object, 0);
        v13 = *(_OWORD *)&v63.fields.m_Center.fields.x;
        v64 = v63;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v63.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v13;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0);
  if ( !this )
LABEL_54:
    sub_1C3E7C0(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v45 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_30;
      }
      v47 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_30:
      v47 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8))
        & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v50 = (System_Collections_IEnumerator_c **)&v48->_1.interfaceOffsets->offset;
      while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 2;
        if ( !v49 )
          goto LABEL_37;
      }
      v51 = (__int64)&v48->vtable[*(_DWORD *)v50 + 1];
    }
    else
    {
LABEL_37:
      v51 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v52 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v51)(
                                       Enumerator,
                                       *(_QWORD *)(v51 + 8));
    if ( !v52 )
      goto LABEL_53;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v52->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v52->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3EA80(v52);
LABEL_53:
      sub_1C3E7C0(v52, v53);
    }
    gameObject = UnityEngine_Component__get_gameObject(v52, 0);
    peRenderTexture__CalcRendererBounds_47295268(v6, gameObject, bounds, v56);
  }
  v57 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v57 )
  {
    v58 = *(_QWORD *)v57;
    v59 = v57;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_48;
      }
      v62 = v58 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_48:
      v62 = sub_1C8ED7C(v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void peRenderTexture__CreatePVMatrix(
        peRenderTexture_o *this,
        UnityEngine_Vector3_o in_center,
        UnityEngine_Vector3_o in_LeftTop,
        UnityEngine_Vector3_o in_RightBottom,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  float v8; // s8
  float v9; // s9
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v12; // x1
  UnityEngine_Camera_o *v13; // x0
  UnityEngine_Vector4_o v14; // q0 OVERLAPPED
  __int128 v15; // q2
  __int128 v16; // q3
  float v17; // s1
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float w; // s8
  float v22; // s13
  float v23; // s14
  float v24; // s15
  float v25; // s9
  UnityEngine_Vector4_o v26; // q0 OVERLAPPED
  __int128 v27; // q2
  __int128 v28; // q3
  float v29; // s1
  float v30; // s8
  float v31; // s10
  peRenderTexture_o *v32; // x0
  const MethodInfo *v33; // x1
  __int128 v34; // q0
  __int128 v35; // q2
  __int128 v36; // q3
  UnityEngine_Matrix4x4_o v37; // [xsp+0h] [xbp-370h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+40h] [xbp-330h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+80h] [xbp-2F0h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+C0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+100h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+140h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+180h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+1C0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+200h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+240h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+280h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+2C0h] [xbp-B0h] BYREF
  float v49; // [xsp+348h] [xbp-28h]
  float v50; // [xsp+34Ch] [xbp-24h]
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v8 = in_center.fields.y;
  v9 = in_center.fields.x;
  if ( (byte_4C5A18E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A18E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    v13 = this->fields.targetCamera;
    if ( !v13
      || (v49 = v9,
          v50 = v8,
          UnityEngine_Camera__get_projectionMatrix(&v47, v13, 0),
          v45 = v47,
          UnityEngine_GL__GetGPUProjectionMatrix(&v46, &v45, 1, 0),
          v47 = v46,
          (v13 = this->fields.targetCamera) == 0) )
    {
      sub_1C3E7C0(v13, v12);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v46, v13, 0);
    v42 = v46;
    v43 = v47;
    UnityEngine_Matrix4x4__op_Multiply(&v44, &v43, &v42, 0);
    v14 = *(UnityEngine_Vector4_o *)&v44.fields.m03;
    v16 = *(_OWORD *)&v44.fields.m00;
    v15 = *(_OWORD *)&v44.fields.m01;
    v46 = v44;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = *(_OWORD *)&v44.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03 = v14;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = v16;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v15;
    v41 = v46;
    LODWORD(v16) = 1.0;
    v14.fields.x = x;
    v17 = y;
    *(float *)&v15 = z;
    v51 = UnityEngine_Matrix4x4__op_Multiply_71270644(&v41, v14, 0);
    v18 = v51.fields.x;
    v19 = v51.fields.y;
    v20 = v51.fields.z;
    w = v51.fields.w;
    v51 = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03;
    *(UnityEngine_Vector4_o *)&v51.fields.z = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m00;
    *(UnityEngine_Vector4_o *)&v51.fields.w = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m01;
    *(_OWORD *)&v40.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(UnityEngine_Vector4_o *)&v40.fields.m03 = v51;
    *(UnityEngine_Vector4_o *)&v40.fields.m00 = *(UnityEngine_Vector4_o *)&v51.fields.z;
    *(UnityEngine_Vector4_o *)&v40.fields.m01 = *(UnityEngine_Vector4_o *)&v51.fields.w;
    v51.fields.w = 1.0;
    v51.fields.x = in_RightBottom.fields.x;
    v51.fields.y = in_RightBottom.fields.y;
    v51.fields.z = in_RightBottom.fields.z;
    v52 = UnityEngine_Matrix4x4__op_Multiply_71270644(&v40, v51, 0);
    v22 = v52.fields.x / v52.fields.w;
    v23 = v52.fields.y / v52.fields.w;
    v52.fields.x = v49;
    v52.fields.y = v50;
    v24 = v52.fields.z / v52.fields.w;
    v52.fields.z = 0.0;
    v25 = v52.fields.w / v52.fields.w;
    UnityEngine_Matrix4x4__Translate(&v39, *(UnityEngine_Vector3_o *)&v52.fields.x, 0);
    v26 = *(UnityEngine_Vector4_o *)&v39.fields.m03;
    v28 = *(_OWORD *)&v39.fields.m00;
    v27 = *(_OWORD *)&v39.fields.m01;
    v44 = v39;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = *(_OWORD *)&v39.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03 = v26;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = v28;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v27;
    v38 = v44;
    v26.fields.x = v18 / w;
    v29 = v19 / w;
    *(float *)&v27 = v20 / w;
    *(float *)&v28 = w / w;
    v53 = UnityEngine_Matrix4x4__op_Multiply_71270644(&v38, v26, 0);
    v30 = v53.fields.x;
    v31 = v53.fields.y;
    v53 = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03;
    *(UnityEngine_Vector4_o *)&v53.fields.z = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m00;
    *(UnityEngine_Vector4_o *)&v53.fields.w = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m01;
    *(_OWORD *)&v37.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(UnityEngine_Vector4_o *)&v37.fields.m03 = v53;
    *(UnityEngine_Vector4_o *)&v37.fields.m00 = *(UnityEngine_Vector4_o *)&v53.fields.z;
    *(UnityEngine_Vector4_o *)&v37.fields.m01 = *(UnityEngine_Vector4_o *)&v53.fields.w;
    v53.fields.x = v22;
    v53.fields.y = v23;
    v53.fields.z = v24;
    v53.fields.w = v25;
    v54 = UnityEngine_Matrix4x4__op_Multiply_71270644(&v37, v53, 0);
    peRenderTexture__orthogonalMatrix(&v48, v32, v30, v54.fields.x, v54.fields.y, v31, v33);
    v34 = *(_OWORD *)&v48.fields.m03;
    v36 = *(_OWORD *)&v48.fields.m00;
    v35 = *(_OWORD *)&v48.fields.m01;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = *(_OWORD *)&v48.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = v34;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = v36;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v35;
  }
}


void peRenderTexture__LateUpdate(peRenderTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t boundsUpdateCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Object_o *boardrenderer; // x20
  __int64 v9; // x1
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v12; // s8
  float aspect; // s0
  float v14; // s9
  float v15; // s0
  float v16; // s10
  float farClipPlane; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-300h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+40h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+80h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+C0h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+100h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+140h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+180h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+1C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+200h] [xbp-100h]
  UnityEngine_Matrix4x4_o v31; // [xsp+240h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+280h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5A186 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16323/*"_ProjectorMatrixVP"*/);
    sub_1C3E564(&StringLiteral_16324/*"_ProjectorPos"*/);
    byte_4C5A186 = 1;
  }
  if ( this->fields.isInitialized )
  {
    peRenderTexture__updateLayer(this, method);
    if ( this->fields._boundsUpdateCount )
    {
      peRenderTexture__updateBounds(this, v3);
      boundsUpdateCount = this->fields._boundsUpdateCount;
      v5 = __OFSUB__(boundsUpdateCount, 1);
      v6 = boundsUpdateCount - 1;
      if ( v6 < 0 == v5 )
        this->fields._boundsUpdateCount = v6;
    }
    peRenderTexture__updateTransform(this, v3);
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boardrenderer, 0, 0) )
      {
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v35.fields.m_XMin = 0.0;
        v35.fields.m_YMin = 0.0;
        v35.fields.m_Width = 1.0;
        v35.fields.m_Height = 1.0;
        UnityEngine_Camera__set_rect(transform, v35, 0);
        v33.fields.x = 1.0;
        v33.fields.y = 1.0;
        v33.fields.z = -1.0;
        UnityEngine_Matrix4x4__Scale(&v32, v33, 0);
        v30 = v32;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v32, (UnityEngine_Transform_o *)transform, 0);
        v28 = v32;
        v29 = v30;
        UnityEngine_Matrix4x4__op_Multiply(&v31, &v29, &v28, 0);
        v32 = v31;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v12 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v14 = aspect;
        v15 = UnityEngine_Camera__get_nearClipPlane(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v16 = v15;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0);
        UnityEngine_Matrix4x4__Perspective(&v27, v12, v14, v16, farClipPlane, 0);
        v31 = v27;
        v26 = v27;
        UnityEngine_GL__GetGPUProjectionMatrix(&v27, &v26, 1, 0);
        v31 = v27;
        if ( !byte_4C509A7 )
        {
          sub_1C3E564(&UnityEngine_Vector4_TypeInfo);
          byte_4C509A7 = 1;
        }
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
        if ( !transform )
          goto LABEL_30;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
        transform = (UnityEngine_Camera_o *)this->fields.boardrenderer;
        if ( !transform )
          goto LABEL_30;
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)transform, 0);
        v24 = v31;
        v23 = v32;
        transform = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v25, &v24, &v23, 0);
        v27 = v25;
        if ( !sharedMaterial
          || (v22 = v27,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16323/*"_ProjectorMatrixVP"*/, &v22, 0),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0)) == 0 )
        {
LABEL_30:
          sub_1C3E7C0(transform, v9);
        }
        v36.fields.w = 1.0;
        v36.fields.x = x;
        v36.fields.y = y;
        v36.fields.z = z;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16324/*"_ProjectorPos"*/,
          v36,
          0);
      }
    }
  }
}


// attributes: thunk
void peRenderTexture__OnEnable(peRenderTexture_o *this, const MethodInfo *method)
{
  peRenderTexture__finalize(this, method);
}


// attributes: thunk
void peRenderTexture__Update(peRenderTexture_o *this, const MethodInfo *method)
{
  peRenderTexture__initialize(this, method);
}


void peRenderTexture__finalize(peRenderTexture_o *this, const MethodInfo *method)
{
  struct UnityEngine_Camera_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *renderTexture; // x20
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C5A188 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A188 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71341752(gameObject, 0);
      *p_rasterCamera = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rasterCamera, 0, v8, v9);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
      goto LABEL_18;
    p_renderTexture = &this->fields.renderTexture;
    v6 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v6 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v6, 0);
      v12 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71341752(v12, 0);
      *p_renderTexture = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.renderTexture, 0, v13, v14);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          targetChangeLayerObjects,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v19.fields._current )
            sub_1C3E7C0(0, v16);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v19.fields._current, v16);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetChangeLayerObjects, 0, v17, v18);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_1C3E7C0(v6, v5);
  }
}


void peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Object_o *v6; // x21
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  const MethodInfo *v37; // x2
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v40; // x23
  UnityEngine_Object_o *v41; // x23
  UnityEngine_Object_o *v42; // x21
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v47; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x23
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UnityEngine_Component_o *v55; // x8
  UnityEngine_Transform_o *v56; // x20
  UnityEngine_Transform_o *v57; // x20
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5A187 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C3E564(&StringLiteral_16274/*"_MainTex"*/);
    byte_4C5A187 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v60, 0, sizeof(v60));
  if ( !this->fields.isInitialized )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.targetCameraPath, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_85;
      transform = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)gameObject,
                                            this->fields.targetCameraPath,
                                            0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(transform, 0, 0) )
      {
        v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(transform, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !transform )
          goto LABEL_85;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetCamera, (int32_t)Component_object, v8, v9);
      }
    }
    p_targetCamera = &this->fields.targetCamera;
    targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(targetCamera, 0, 0) )
    {
      main = UnityEngine_Camera__get_main(0);
      *p_targetCamera = main;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetCamera, (int32_t)main, v13, v14);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_85;
      v15 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_85;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
      }
      else
      {
        v16 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0);
      }
      this->fields.targetObject = v16;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)v16, v17, v18);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0, 0) )
    {
      v21 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v21;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.boardrenderer, (int32_t)v21, v22, v23);
    }
    v24 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v24;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetChangeLayerObjects, (int32_t)v24, v25, v26);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v59;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields._current, v27) )
      {
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v60 = v59;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v60,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v60.fields._current;
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !v29 )
            sub_1C3E7C0(0, v30);
          v31 = UnityEngine_GameObject__get_transform(v29, 0);
          if ( !v31 )
            sub_1C3E7C0(0, v32);
          v33 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v31, (System_String_o *)current, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v34 = UnityEngine_Object__op_Inequality(v33, 0, 0);
          if ( v34 )
          {
            if ( !v33 )
              sub_1C3E7C0(v34, v35);
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0);
            peRenderTexture__registChangeLayerObjects(this, v36, v37);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v60,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0, 0) )
        {
          v40 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v40, 0, 0) )
            goto LABEL_80;
        }
        v41 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v41, 0, 0) )
          goto LABEL_80;
        v42 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v42, 0, 0) )
          goto LABEL_80;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v47 = (UnityEngine_RenderTexture_o *)sub_1C3E7B0(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_71248252(v47, textureWidth, textureHeight, textureDepth, textureFormat, 0);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v47;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.renderTexture, (int32_t)v47, v49, v50);
        gameObject = (UnityEngine_GameObject_o *)this->fields.renderTexture;
        if ( gameObject )
        {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)gameObject, this->fields.textureFilterMode, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.renderTexture;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *))gameObject->klass[1]._1.element_class)(
              gameObject,
              (unsigned int)this->fields.textureDimension,
              gameObject->klass[1]._1.castClass);
            v51 = (Il2CppObject *)this->fields.targetCamera;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v52 = UnityEngine_Object__Instantiate_object_(
                    v51,
                    (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v52;
            sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rasterCamera, (int32_t)v52, v53, v54);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
              v55 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v56 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v55, 0);
                if ( v56 )
                {
                  UnityEngine_Transform__SetParent(v56, (UnityEngine_Transform_o *)gameObject, 0);
                  gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
                  if ( *p_rasterCamera )
                  {
                    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)gameObject, *p_renderTexture, 0);
                    gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
                    if ( *p_rasterCamera )
                    {
                      UnityEngine_Camera__set_renderingPath(
                        (UnityEngine_Camera_o *)gameObject,
                        this->fields.cameraRenderingPath,
                        0);
                      gameObject = (UnityEngine_GameObject_o *)this->fields.rasterCamera;
                      if ( gameObject )
                      {
                        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
                        if ( *p_rasterCamera )
                        {
                          v57 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0);
                          if ( gameObject )
                          {
                            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
                            if ( v57 )
                            {
                              v63.fields.z = position.fields.z + this->fields.cameraOffset.fields.z;
                              v63.fields.y = position.fields.y + this->fields.cameraOffset.fields.y;
                              v63.fields.x = position.fields.x + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v57, v63, 0);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.boardrenderer;
                              if ( gameObject )
                              {
                                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                           (UnityEngine_Renderer_o *)gameObject,
                                                                           0);
                                if ( gameObject )
                                {
                                  UnityEngine_Material__SetTexture(
                                    (UnityEngine_Material_o *)gameObject,
                                    (System_String_o *)StringLiteral_16274/*"_MainTex"*/,
                                    (UnityEngine_Texture_o *)*p_renderTexture,
                                    0);
LABEL_80:
                                  boundsUpdateCount = this->fields.boundsUpdateCount;
                                  this->fields.isInitialized = 1;
                                  this->fields._boundsUpdateCount = boundsUpdateCount;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_85:
    sub_1C3E7C0(gameObject, v4);
  }
}


UnityEngine_Matrix4x4_o *peRenderTexture__orthogonalMatrix(
        UnityEngine_Matrix4x4_o *__return_ptr retstr,
        peRenderTexture_o *this,
        float left,
        float right,
        float bottom,
        float top,
        const MethodInfo *method)
{
  float v7; // s13
  float v13; // s12
  UnityEngine_Matrix4x4_o *result; // x0
  __int128 v15; // q0
  __int128 v16; // q2
  __int128 v17; // q3
  UnityEngine_Matrix4x4_o v18; // [xsp+0h] [xbp-90h] BYREF

  v7 = right - left;
  v13 = top - bottom;
  memset(&v18, 0, sizeof(v18));
  UnityEngine_Matrix4x4__set_Item(&v18, 0, 2.0 / (float)(right - left), 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 1, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 2, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 3, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 4, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 5, 2.0 / v13, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 6, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 7, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 8, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 9, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 10, 1.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 11, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 12, (float)-(float)(left + right) / v7, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 13, (float)-(float)(bottom + top) / v13, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 14, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v18, 15, 1.0, 0);
  v15 = *(_OWORD *)&v18.fields.m03;
  v17 = *(_OWORD *)&v18.fields.m00;
  v16 = *(_OWORD *)&v18.fields.m01;
  *(_OWORD *)&retstr->fields.m02 = *(_OWORD *)&v18.fields.m02;
  *(_OWORD *)&retstr->fields.m03 = v15;
  *(_OWORD *)&retstr->fields.m00 = v17;
  *(_OWORD *)&retstr->fields.m01 = v16;
  return result;
}


void peRenderTexture__registChangeLayerObjects(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  __int64 v5; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o **v10; // x20
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v13; // x23
  System_Collections_Generic_List_object__o *v14; // x21
  UnityEngine_GameObject_o *v15; // x23
  peRenderTexture_ChangeLayerObject_o *v16; // x22
  const MethodInfo *v17; // x2
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  __int64 v24; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  System_Collections_IEnumerator_c *v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v37; // x0
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x20
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4C5A189 & 1) == 0 )
  {
    sub_1C3E564(&peRenderTexture_ChangeLayerObject_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    sub_1C3E564(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__);
    sub_1C3E564(&peRenderTexture___c__DisplayClass48_0_TypeInfo);
    byte_4C5A189 = 1;
  }
  v5 = sub_1C3E7B0(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = gameObject;
  v10 = (UnityEngine_GameObject_o **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)gameObject, v8, v9);
  transform = *(UnityEngine_GameObject_o **)(v5 + 16);
  if ( !transform )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v13 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0);
    if ( !targetChangeLayerObjects )
      goto LABEL_46;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v14 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v15 = *v10;
      v16 = (peRenderTexture_ChangeLayerObject_o *)sub_1C3E7B0(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v16, v15, v17);
      if ( v14 )
      {
        items = v14->fields._items;
        v21 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v14->fields._version;
        if ( items )
        {
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v16,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v16;
            sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
          }
          goto LABEL_15;
        }
      }
LABEL_46:
      sub_1C3E7C0(transform, v7);
    }
  }
LABEL_15:
  transform = *v10;
  if ( !*v10 )
    goto LABEL_46;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_46;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_22;
      }
      v29 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_22:
      v29 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8))
        & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_29;
      }
      v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1];
    }
    else
    {
LABEL_29:
      v33 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       Enumerator,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      goto LABEL_45;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v34->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3EA80(v34);
LABEL_45:
      sub_1C3E7C0(v34, v35);
    }
    v37 = UnityEngine_Component__get_gameObject(v34, 0);
    peRenderTexture__registChangeLayerObjects(this, v37, v38);
  }
  v39 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v39 )
  {
    v40 = *(_QWORD *)v39;
    v41 = v39;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_40;
      }
      v44 = v40 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_40:
      v44 = sub_1C8ED7C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  }
}


void peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  float m10; // s8
  float m30; // s14
  __int64 v7; // kr00_8
  float v8; // s10
  float v9; // s8
  char *Component_object; // x0
  __int64 v11; // x1
  __int64 RBindex; // x8
  unsigned int v13; // w10
  char *v14; // x20
  __int64 LTindex; // x9
  float *v16; // x10
  __int64 v17; // x9
  float v18; // s15
  float targetBoundsOffsetY; // s12
  float targetBoundsOffsetX; // s13
  float v21; // s11
  __int64 v22; // x8
  float *v23; // x8
  __int64 v24; // x8
  float *v25; // x8
  float v26; // [xsp+8h] [xbp-1C8h]
  float v27; // [xsp+Ch] [xbp-1C4h]
  float v28; // [xsp+10h] [xbp-1C0h]
  float v29; // [xsp+14h] [xbp-1BCh]
  float m20; // [xsp+18h] [xbp-1B8h]
  float value; // [xsp+1Ch] [xbp-1B4h]
  UnityEngine_Matrix4x4_o value_4; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+A0h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+E0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o bounds; // [xsp+120h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5A18B & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4C5A18B = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_47295268(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  m10 = bounds.fields.m10;
  m30 = bounds.fields.m30;
  v7 = *(_QWORD *)&bounds.fields.m01;
  m20 = bounds.fields.m20;
  value = bounds.fields.m00;
  if ( !byte_4C5069F )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C5069F = 1;
  }
  v8 = m10 + *(float *)&v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( (float)(m10 - *(float *)&v7) >= -0.5 )
    v9 = (float)(v8 - (float)(m10 - *(float *)&v7)) * (float)(v8 - (float)(m10 - *(float *)&v7));
  else
    v9 = (float)(v8 + 0.5) * (float)(v8 + 0.5);
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  RBindex = this->fields._RBindex;
  v13 = *((_DWORD *)Component_object + 6);
  v14 = Component_object;
  if ( (unsigned int)RBindex >= v13 || (LTindex = this->fields._LTindex, (unsigned int)LTindex >= v13) )
LABEL_36:
    sub_1C3E7C8(Component_object, v11);
  v16 = (float *)&Component_object[12 * RBindex];
  v17 = (__int64)&Component_object[12 * LTindex + 32];
  v18 = v16[8];
  v26 = *(float *)(v17 + 8);
  v27 = v16[10];
  v28 = *(float *)(v17 + 4);
  v29 = *(float *)&Component_object[12 * RBindex + 36];
  if ( !byte_4C5069F )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C5069F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_4C5069F )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C5069F = 1;
    }
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  v21 = sqrtf(v9) * 0.5;
  v37.fields.x = (float)(sqrtf(
                           (float)((float)((float)(m20 + *((float *)&v7 + 1)) - (float)(m20 - *((float *)&v7 + 1)))
                                 * (float)((float)(m20 + *((float *)&v7 + 1)) - (float)(m20 - *((float *)&v7 + 1))))
                         + (float)((float)((float)((float)(value - m30) - (float)(value + m30))
                                         * (float)((float)(value - m30) - (float)(value + m30)))
                                 + (float)((float)(v8 - v8) * (float)(v8 - v8))))
                       + targetBoundsOffsetX)
               / sqrtf(
                   (float)((float)((float)(v18 - *(float *)&v7) * (float)(v18 - *(float *)&v7))
                         + (float)((float)(v27 - v26) * (float)(v27 - v26)))
                 + 0.0);
  v37.fields.y = (float)((float)(v21 + v21) + targetBoundsOffsetY)
               / sqrtf(
                   (float)((float)((float)(v18 - v18) * (float)(v18 - v18))
                         + (float)((float)(v29 - v28) * (float)(v29 - v28)))
                 + 0.0);
  v37.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v37, 0);
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  v38.fields.y = (float)(v8 - v21) - v21;
  v38.fields.z = m20;
  v38.fields.x = value;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_object, v38, 0);
  this->fields.targetBoundsCenter.fields.x = value;
  this->fields.targetBoundsCenter.fields.y = v8 - v21;
  this->fields.targetBoundsCenter.fields.z = m20;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v35,
                               (UnityEngine_Transform_o *)Component_object,
                               0);
  bounds = v35;
  v22 = this->fields._RBindex;
  if ( (unsigned int)v22 >= *((_DWORD *)v14 + 6) )
    goto LABEL_36;
  v23 = (float *)&v14[12 * v22];
  v39.fields.x = v23[8];
  v39.fields.y = v23[9];
  v39.fields.z = v23[10];
  v34 = bounds;
  v39.fields.w = 1.0;
  v40 = UnityEngine_Matrix4x4__op_Multiply_71270644(&v34, v39, 0);
  this->fields.targetBoundsRB.fields.x = v40.fields.x;
  this->fields.targetBoundsRB.fields.y = v40.fields.y;
  this->fields.targetBoundsRB.fields.z = v40.fields.z;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object
    || (Component_object = (char *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     0)) == 0 )
  {
LABEL_35:
    sub_1C3E7C0(Component_object, v11);
  }
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v33,
                               (UnityEngine_Transform_o *)Component_object,
                               0);
  v35 = v33;
  v24 = this->fields._LTindex;
  if ( (unsigned int)v24 >= *((_DWORD *)v14 + 6) )
    goto LABEL_36;
  v25 = (float *)&v14[12 * v24];
  v41.fields.x = v25[8];
  v41.fields.y = v25[9];
  v41.fields.z = v25[10];
  value_4 = v35;
  v41.fields.w = 1.0;
  v42 = UnityEngine_Matrix4x4__op_Multiply_71270644(&value_4, v41, 0);
  this->fields.targetBoundsLT.fields.x = v42.fields.x;
  this->fields.targetBoundsLT.fields.y = v42.fields.y;
  this->fields.targetBoundsLT.fields.z = v42.fields.z;
}


void peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C5A18A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A18A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.changeCullingMaskEnabled )
  {
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      targetChangeLayerObjects = this->fields.rasterCamera;
      if ( !targetChangeLayerObjects )
        goto LABEL_29;
      cullingMask = UnityEngine_Camera__get_cullingMask(targetChangeLayerObjects, 0);
      method = (const MethodInfo *)(unsigned int)this->fields.changeCullingMask;
      if ( cullingMask != (_DWORD)method )
      {
        targetChangeLayerObjects = this->fields.rasterCamera;
        if ( !targetChangeLayerObjects )
          goto LABEL_29;
        UnityEngine_Camera__set_cullingMask(targetChangeLayerObjects, (int32_t)method, 0);
      }
    }
  }
  targetChangeLayerObjects = (UnityEngine_Camera_o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_29:
    sub_1C3E7C0(targetChangeLayerObjects, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v6 )
      break;
    current = v18.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v18.fields._current )
        sub_1C3E7C0(v6, v7);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v18.fields._current,
        this->fields.changeLayer,
        v8);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0, 0);
    if ( v11 )
    {
      if ( !current )
        sub_1C3E7C0(v11, v12);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, v12) )
      {
        v14 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, v13);
        if ( v14 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            v16);
        }
        else if ( v14 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, v15);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v12; // q1
  __int128 v13; // q2
  __int128 v14; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v16; // x0
  __int128 v17; // q1
  __int128 v18; // q2
  __int128 v19; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v21; // x0
  __int128 v22; // q1
  __int128 v23; // q2
  __int128 v24; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v27; // q1
  __int128 v28; // q2
  __int128 v29; // q3
  __int128 v30; // q1
  __int128 v31; // q2
  __int128 v32; // q3
  __int128 v33; // q1
  __int128 v34; // q2
  __int128 v35; // q3
  UnityEngine_Matrix4x4_o v36; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+110h] [xbp-1B0h]
  UnityEngine_Matrix4x4_o v41; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+190h] [xbp-130h]
  UnityEngine_Matrix4x4_o v43; // [xsp+1D0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+210h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+250h] [xbp-70h] BYREF

  if ( (byte_4C5A18C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A18C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  peRenderTexture__CreatePVMatrix(
    this,
    this->fields.targetBoundsCenter,
    this->fields.targetBoundsLT,
    this->fields.targetBoundsRB,
    method);
  targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    targetChangeLayerObjects,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  *(_OWORD *)&v45.fields._list = *(_OWORD *)&v44.fields.m00;
  v45.fields._current = *(Il2CppObject **)&v44.fields.m01;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v45.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v45.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( v9 )
      {
        if ( !monitor )
          sub_1C3E7C0(v9, v10);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v12 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v13 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v14 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v44.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v44.fields.m03 = v12;
        *(_OWORD *)&v44.fields.m00 = v13;
        *(_OWORD *)&v44.fields.m01 = v14;
        if ( !sharedMaterial )
          sub_1C3E7C0(0, MainCamVPMat);
        v43 = v44;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v43, 0);
        v16 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v17 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v18 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v19 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v42.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v42.fields.m03 = v17;
        *(_OWORD *)&v42.fields.m00 = v18;
        *(_OWORD *)&v42.fields.m01 = v19;
        if ( !v16 )
          sub_1C3E7C0(0, ParallelViewMat);
        v41 = v42;
        UnityEngine_Material__SetMatrix(v16, ParallelViewMat, &v41, 0);
        v21 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v22 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v23 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v24 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v40.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v40.fields.m03 = v22;
        *(_OWORD *)&v40.fields.m00 = v23;
        *(_OWORD *)&v40.fields.m01 = v24;
        if ( !v21 )
          sub_1C3E7C0(0, ParallelProjectionMat);
        v39 = v40;
        UnityEngine_Material__SetMatrix(v21, ParallelProjectionMat, &v39, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0, 0) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
    if ( targetChangeLayerObjects )
    {
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                0);
      v27 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v28 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v29 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v3 = this->fields.MainCamVPMat;
      *(_OWORD *)&v44.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v44.fields.m03 = v27;
      *(_OWORD *)&v44.fields.m00 = v28;
      *(_OWORD *)&v44.fields.m01 = v29;
      if ( targetChangeLayerObjects )
      {
        v38 = v44;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v3, &v38, 0);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0);
          v30 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v31 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v32 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v3 = this->fields.ParallelViewMat;
          *(_OWORD *)&v42.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v42.fields.m03 = v30;
          *(_OWORD *)&v42.fields.m00 = v31;
          *(_OWORD *)&v42.fields.m01 = v32;
          if ( targetChangeLayerObjects )
          {
            v37 = v42;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v3, &v37, 0);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0);
              v33 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v34 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v35 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v3 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v40.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v40.fields.m03 = v33;
              *(_OWORD *)&v40.fields.m00 = v34;
              *(_OWORD *)&v40.fields.m01 = v35;
              if ( targetChangeLayerObjects )
              {
                v36 = v40;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v3, &v36, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C3E7C0(targetChangeLayerObjects, v3);
  }
}


void peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.gameObject = gameObject;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)gameObject, v5, v6);
  peRenderTexture_ChangeLayerObject__Initialize(this, v7);
}


void peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x8

  if ( (byte_4C5A193 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A193 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v7 = this->fields.gameObject;
    if ( v7 )
    {
      v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(v7, 0);
      v8 = this->fields.gameObject;
      this->fields.prevLayer = (int)v7;
      if ( v8 )
      {
        if ( UnityEngine_GameObject__get_layer(v8, 0) == layer )
          return;
        v7 = this->fields.gameObject;
        if ( v7 )
        {
          UnityEngine_GameObject__set_layer(v7, layer, 0);
          return;
        }
      }
    }
    sub_1C3E7C0(v7, v6);
  }
}


void peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x21
  UnityEngine_Object_o *changeMaterial; // x22
  __int64 v7; // x1
  UnityEngine_Material_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v13; // x8
  UnityEngine_Material_o *v14; // x19

  if ( (byte_4C5A195 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A195 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(changeMaterial, 0, 0) )
    {
      v8 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71204792(v8, material, 0);
      this->fields.changeMaterial = v8;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeMaterial, (int32_t)v8, v9, v10);
    }
    sharedMaterial = this->fields.renderer;
    if ( !sharedMaterial )
      goto LABEL_19;
    UnityEngine_Renderer__set_sharedMaterial(sharedMaterial, this->fields.changeMaterial, 0);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(orgMaterial, 0, 0) )
    {
      sharedMaterial = this->fields.renderer;
      if ( sharedMaterial )
      {
        sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(sharedMaterial, 0);
        v13 = this->fields.orgMaterial;
        if ( v13 )
        {
          v14 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v13, 0);
          if ( v14 )
          {
            UnityEngine_Material__set_mainTexture(v14, (UnityEngine_Texture_o *)sharedMaterial, 0);
            return;
          }
        }
      }
LABEL_19:
      sub_1C3E7C0(sharedMaterial, v7);
    }
  }
}


void peRenderTexture_ChangeLayerObject__Finalize(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_changeMaterial; // x20
  UnityEngine_Object_o *changeMaterial; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C5A192 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A192 = 1;
  }
  p_changeMaterial = &this->fields.changeMaterial;
  changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(changeMaterial, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71341752(v5, 0);
    *p_changeMaterial = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeMaterial, 0, v6, v7);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    if ( !*p_renderer )
      sub_1C3E7C0(0, v10);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0);
  }
  this->fields.orgMaterial = 0;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_1C3E508((CGThumbnailListItem_o *)p_orgMaterial, 0, v11, v12);
  *(p_orgMaterial - 1) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)p_renderer, 0, v14, v15);
}


void peRenderTexture_ChangeLayerObject__Initialize(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C5A191 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A191 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    layer = this->fields.gameObject;
    if ( !layer
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               layer,
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.renderer, (int32_t)Component_object, v7, v8),
          (layer = this->fields.gameObject) == 0)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_1C3E7C0(layer, v4);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
    this->fields.orgMaterial = sharedMaterial;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.orgMaterial, (int32_t)sharedMaterial, v11, v12);
  }
}


void peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4C5A196 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A196 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    v5 = this->fields.renderer;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    UnityEngine_Renderer__set_sharedMaterial(v5, this->fields.orgMaterial, 0);
  }
}


bool peRenderTexture_ChangeLayerObject__SyncLayer(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C5A194 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A194 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
    goto LABEL_11;
  if ( UnityEngine_GameObject__get_layer(v5, 0) == this->fields.prevLayer )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
LABEL_11:
    sub_1C3E7C0(v5, v4);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v5, 0);
  return 1;
}


int32_t peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C5A190 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A190 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    return -1;
  v5 = this->fields.gameObject;
  if ( !v5 )
    sub_1C3E7C0(0, v4);
  return UnityEngine_GameObject__get_layer(v5, 0);
}


void peRenderTexture___c__DisplayClass48_0___ctor(
        peRenderTexture___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool peRenderTexture___c__DisplayClass48_0___registChangeLayerObjects_b__0(
        peRenderTexture___c__DisplayClass48_0_o *this,
        peRenderTexture_ChangeLayerObject_o *n,
        const MethodInfo *method)
{
  peRenderTexture___c__DisplayClass48_0_o *v4; // x20
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v6; // x20

  v4 = this;
  if ( (byte_4C5A197 & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A197 = 1;
  }
  if ( !n )
    sub_1C3E7C0(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0);
}