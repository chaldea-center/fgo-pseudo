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

  if ( (byte_4C3AD84 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16261/*"_MainCamVPMatrix"*/);
    sub_1C32C20(&StringLiteral_16304/*"_ParallelViewMatrix"*/);
    sub_1C32C20(&StringLiteral_16303/*"_ParallelProjectionMatrix"*/);
    byte_4C3AD84 = 1;
  }
  this->fields.changeCullingMask = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_C0E030;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.boundsUpdateCount = -1;
  v5 = StringLiteral_16261/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16261/*"_MainCamVPMatrix"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.MainCamVPMat, v5, v2, v3);
  v6 = StringLiteral_16304/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16304/*"_ParallelViewMatrix"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ParallelViewMat, v6, v7, v8);
  v9 = StringLiteral_16303/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16303/*"_ParallelProjectionMatrix"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ParallelProjectionMat, v9, v10, v11);
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
  peRenderTexture__CalcRendererBounds_47101200(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void peRenderTexture__CalcRendererBounds_47101200(
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
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 v46; // x0
  System_Collections_IEnumerator_c *v47; // x8
  __int64 v48; // x9
  System_Collections_IEnumerator_c **v49; // x10
  __int64 v50; // x0
  UnityEngine_Component_o *v51; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v54; // x3
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x20
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  UnityEngine_Bounds_o v61; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v62; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4C3AD82 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (peRenderTexture_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C3AD82 = 1;
  }
  if ( !obj )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v11.n64_u64[0] = vsub_f32(v9, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v12 = vmul_f32(v11, v11).n64_u64[0];
      if ( (float)(*((float *)&v12 + 1)
                 + (float)((float)((float)(v8 - static_fields->zeroVector.fields.x)
                                 * (float)(v8 - static_fields->zeroVector.fields.x))
                         + *(float *)&v12)) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v62, (UnityEngine_Renderer_o *)Component_object, 0);
        z = bounds->fields.m_Center.fields.z;
        v15.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v16 = bounds->fields.m_Extents.fields.z;
        v17.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v15).n64_u64[0];
        v18.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v15).n64_u64[0];
        v19 = z - v16;
        v20.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v62.fields.m_Center.fields.x,
                           *(float32x2_t *)&v62.fields.m_Extents.fields.x).n64_u64[0];
        v21 = z + v16;
        v22.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v62.fields.m_Center.fields.x,
                           *(float32x2_t *)&v62.fields.m_Extents.fields.x).n64_u64[0];
        v23 = v62.fields.m_Center.fields.z + v62.fields.m_Extents.fields.z;
        v24.n64_u64[0] = vcgt_f32(v20, v17).n64_u64[0];
        v25.n64_u64[0] = vcgt_f32(v18, v20).n64_u64[0];
        if ( v19 >= (float)(v62.fields.m_Center.fields.z - v62.fields.m_Extents.fields.z) )
          v19 = v62.fields.m_Center.fields.z - v62.fields.m_Extents.fields.z;
        v26.n64_u64[0] = vbsl_s8(v24, v17, v20).n64_u64[0];
        v27.n64_u64[0] = vbsl_s8(v25, v18, v20).n64_u64[0];
        if ( v21 <= (float)(v62.fields.m_Center.fields.z - v62.fields.m_Extents.fields.z) )
          v28 = v62.fields.m_Center.fields.z - v62.fields.m_Extents.fields.z;
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
          v39 = v62.fields.m_Center.fields.z + v62.fields.m_Extents.fields.z;
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
        UnityEngine_Renderer__get_bounds(&v61, (UnityEngine_Renderer_o *)Component_object, 0);
        v13 = *(_OWORD *)&v61.fields.m_Center.fields.x;
        v62 = v61;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v61.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v13;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0);
  if ( !this )
LABEL_54:
    sub_1C32E7C(this);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        p_offset += 4;
        if ( !v44 )
          goto LABEL_30;
      }
      v46 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_30:
      v46 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8))
        & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    v48 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
      while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 2;
        if ( !v48 )
          goto LABEL_37;
      }
      v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1];
    }
    else
    {
LABEL_37:
      v50 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v51 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                       Enumerator,
                                       *(_QWORD *)(v50 + 8));
    if ( !v51 )
      goto LABEL_53;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v51->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v51->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3313C(v51);
LABEL_53:
      sub_1C32E7C(v51);
    }
    gameObject = UnityEngine_Component__get_gameObject(v51, 0);
    peRenderTexture__CalcRendererBounds_47101200(v6, gameObject, bounds, v54);
  }
  v55 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v55 )
  {
    v56 = *(_QWORD *)v55;
    v57 = v55;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_48;
      }
      v60 = v56 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_48:
      v60 = sub_1C83438(v55, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
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
  UnityEngine_Camera_o *v12; // x0
  UnityEngine_Vector4_o v13; // q0 OVERLAPPED
  __int128 v14; // q2
  __int128 v15; // q3
  float v16; // s1
  float v17; // s10
  float v18; // s11
  float v19; // s12
  float w; // s8
  float v21; // s13
  float v22; // s14
  float v23; // s15
  float v24; // s9
  UnityEngine_Vector4_o v25; // q0 OVERLAPPED
  __int128 v26; // q2
  __int128 v27; // q3
  float v28; // s1
  float v29; // s8
  float v30; // s10
  peRenderTexture_o *v31; // x0
  const MethodInfo *v32; // x1
  __int128 v33; // q0
  __int128 v34; // q2
  __int128 v35; // q3
  UnityEngine_Matrix4x4_o v36; // [xsp+0h] [xbp-370h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+40h] [xbp-330h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+80h] [xbp-2F0h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+C0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+100h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+140h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+180h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+1C0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+200h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+240h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+280h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+2C0h] [xbp-B0h] BYREF
  float v48; // [xsp+348h] [xbp-28h]
  float v49; // [xsp+34Ch] [xbp-24h]
  UnityEngine_Vector4_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v8 = in_center.fields.y;
  v9 = in_center.fields.x;
  if ( (byte_4C3AD83 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD83 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    v12 = this->fields.targetCamera;
    if ( !v12
      || (v48 = v9,
          v49 = v8,
          UnityEngine_Camera__get_projectionMatrix(&v46, v12, 0),
          v44 = v46,
          UnityEngine_GL__GetGPUProjectionMatrix(&v45, &v44, 1, 0),
          v46 = v45,
          (v12 = this->fields.targetCamera) == 0) )
    {
      sub_1C32E7C(v12);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v45, v12, 0);
    v41 = v45;
    v42 = v46;
    UnityEngine_Matrix4x4__op_Multiply(&v43, &v42, &v41, 0);
    v13 = *(UnityEngine_Vector4_o *)&v43.fields.m03;
    v15 = *(_OWORD *)&v43.fields.m00;
    v14 = *(_OWORD *)&v43.fields.m01;
    v45 = v43;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = *(_OWORD *)&v43.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03 = v13;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = v15;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v14;
    v40 = v45;
    LODWORD(v15) = 1.0;
    v13.fields.x = x;
    v16 = y;
    *(float *)&v14 = z;
    v50 = UnityEngine_Matrix4x4__op_Multiply_71152720(&v40, v13, 0);
    v17 = v50.fields.x;
    v18 = v50.fields.y;
    v19 = v50.fields.z;
    w = v50.fields.w;
    v50 = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03;
    *(UnityEngine_Vector4_o *)&v50.fields.z = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m00;
    *(UnityEngine_Vector4_o *)&v50.fields.w = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m01;
    *(_OWORD *)&v39.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(UnityEngine_Vector4_o *)&v39.fields.m03 = v50;
    *(UnityEngine_Vector4_o *)&v39.fields.m00 = *(UnityEngine_Vector4_o *)&v50.fields.z;
    *(UnityEngine_Vector4_o *)&v39.fields.m01 = *(UnityEngine_Vector4_o *)&v50.fields.w;
    v50.fields.w = 1.0;
    v50.fields.x = in_RightBottom.fields.x;
    v50.fields.y = in_RightBottom.fields.y;
    v50.fields.z = in_RightBottom.fields.z;
    v51 = UnityEngine_Matrix4x4__op_Multiply_71152720(&v39, v50, 0);
    v21 = v51.fields.x / v51.fields.w;
    v22 = v51.fields.y / v51.fields.w;
    v51.fields.x = v48;
    v51.fields.y = v49;
    v23 = v51.fields.z / v51.fields.w;
    v51.fields.z = 0.0;
    v24 = v51.fields.w / v51.fields.w;
    UnityEngine_Matrix4x4__Translate(&v38, *(UnityEngine_Vector3_o *)&v51.fields.x, 0);
    v25 = *(UnityEngine_Vector4_o *)&v38.fields.m03;
    v27 = *(_OWORD *)&v38.fields.m00;
    v26 = *(_OWORD *)&v38.fields.m01;
    v43 = v38;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = *(_OWORD *)&v38.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03 = v25;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = v27;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v26;
    v37 = v43;
    v25.fields.x = v17 / w;
    v28 = v18 / w;
    *(float *)&v26 = v19 / w;
    *(float *)&v27 = w / w;
    v52 = UnityEngine_Matrix4x4__op_Multiply_71152720(&v37, v25, 0);
    v29 = v52.fields.x;
    v30 = v52.fields.y;
    v52 = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03;
    *(UnityEngine_Vector4_o *)&v52.fields.z = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m00;
    *(UnityEngine_Vector4_o *)&v52.fields.w = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m01;
    *(_OWORD *)&v36.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(UnityEngine_Vector4_o *)&v36.fields.m03 = v52;
    *(UnityEngine_Vector4_o *)&v36.fields.m00 = *(UnityEngine_Vector4_o *)&v52.fields.z;
    *(UnityEngine_Vector4_o *)&v36.fields.m01 = *(UnityEngine_Vector4_o *)&v52.fields.w;
    v52.fields.x = v21;
    v52.fields.y = v22;
    v52.fields.z = v23;
    v52.fields.w = v24;
    v53 = UnityEngine_Matrix4x4__op_Multiply_71152720(&v36, v52, 0);
    peRenderTexture__orthogonalMatrix(&v47, v31, v29, v53.fields.x, v53.fields.y, v30, v32);
    v33 = *(_OWORD *)&v47.fields.m03;
    v35 = *(_OWORD *)&v47.fields.m00;
    v34 = *(_OWORD *)&v47.fields.m01;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = *(_OWORD *)&v47.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = v33;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = v35;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v34;
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
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v11; // s8
  float aspect; // s0
  float v13; // s9
  float v14; // s0
  float v15; // s10
  float farClipPlane; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v21; // [xsp+0h] [xbp-300h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+40h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+80h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+C0h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+100h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+140h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+180h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+1C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+200h] [xbp-100h]
  UnityEngine_Matrix4x4_o v30; // [xsp+240h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+280h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3AD7B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16311/*"_ProjectorMatrixVP"*/);
    sub_1C32C20(&StringLiteral_16312/*"_ProjectorPos"*/);
    byte_4C3AD7B = 1;
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
        v34.fields.m_XMin = 0.0;
        v34.fields.m_YMin = 0.0;
        v34.fields.m_Width = 1.0;
        v34.fields.m_Height = 1.0;
        UnityEngine_Camera__set_rect(transform, v34, 0);
        v32.fields.x = 1.0;
        v32.fields.y = 1.0;
        v32.fields.z = -1.0;
        UnityEngine_Matrix4x4__Scale(&v31, v32, 0);
        v29 = v31;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v31, (UnityEngine_Transform_o *)transform, 0);
        v27 = v31;
        v28 = v29;
        UnityEngine_Matrix4x4__op_Multiply(&v30, &v28, &v27, 0);
        v31 = v30;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v11 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v13 = aspect;
        v14 = UnityEngine_Camera__get_nearClipPlane(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v15 = v14;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0);
        UnityEngine_Matrix4x4__Perspective(&v26, v11, v13, v15, farClipPlane, 0);
        v30 = v26;
        v25 = v26;
        UnityEngine_GL__GetGPUProjectionMatrix(&v26, &v25, 1, 0);
        v30 = v26;
        if ( !byte_4C316D7 )
        {
          sub_1C32C20(&UnityEngine_Vector4_TypeInfo);
          byte_4C316D7 = 1;
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
        v23 = v30;
        v22 = v31;
        transform = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v24, &v23, &v22, 0);
        v26 = v24;
        if ( !sharedMaterial
          || (v21 = v26,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16311/*"_ProjectorMatrixVP"*/, &v21, 0),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0)) == 0 )
        {
LABEL_30:
          sub_1C32E7C(transform);
        }
        v35.fields.w = 1.0;
        v35.fields.x = x;
        v35.fields.y = y;
        v35.fields.z = z;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16312/*"_ProjectorPos"*/,
          v35,
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
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *renderTexture; // x20
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3AD7D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD7D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
      *p_rasterCamera = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rasterCamera, 0, v7, v8);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
      goto LABEL_18;
    p_renderTexture = &this->fields.renderTexture;
    v5 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v5 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v5, 0);
      v11 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(v11, 0);
      *p_renderTexture = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.renderTexture, 0, v12, v13);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          targetChangeLayerObjects,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v18,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v18.fields._current )
            sub_1C32E7C(0);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v18.fields._current, v15);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v18,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetChangeLayerObjects, 0, v16, v17);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_1C32E7C(v5);
  }
}


void peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Object_o *v5; // x21
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Object_o *v30; // x22
  _BOOL8 v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v36; // x23
  UnityEngine_Object_o *v37; // x23
  UnityEngine_Object_o *v38; // x21
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v43; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  UnityEngine_Component_o *v51; // x8
  UnityEngine_Transform_o *v52; // x20
  UnityEngine_Transform_o *v53; // x20
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3AD7C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_Camera___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    byte_4C3AD7C = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v56, 0, sizeof(v56));
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
        v5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
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
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetCamera, (int32_t)Component_object, v7, v8);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetCamera, (int32_t)main, v12, v13);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_85;
      v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_85;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
      }
      else
      {
        v15 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0);
      }
      this->fields.targetObject = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)v15, v16, v17);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0, 0) )
    {
      v20 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v20;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardrenderer, (int32_t)v20, v21, v22);
    }
    v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetChangeLayerObjects, (int32_t)v23, v24, v25);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v55;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields._current, v26) )
      {
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v55,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v56 = v55;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v56,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v56.fields._current;
          v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !v28 )
            sub_1C32E7C(0);
          v29 = UnityEngine_GameObject__get_transform(v28, 0);
          if ( !v29 )
            sub_1C32E7C(0);
          v30 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v29, (System_String_o *)current, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v31 = UnityEngine_Object__op_Inequality(v30, 0, 0);
          if ( v31 )
          {
            if ( !v30 )
              sub_1C32E7C(v31);
            v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
            peRenderTexture__registChangeLayerObjects(this, v32, v33);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0, 0) )
        {
          v36 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v36, 0, 0) )
            goto LABEL_80;
        }
        v37 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v37, 0, 0) )
          goto LABEL_80;
        v38 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v38, 0, 0) )
          goto LABEL_80;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v43 = (UnityEngine_RenderTexture_o *)sub_1C32E6C(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_71130328(v43, textureWidth, textureHeight, textureDepth, textureFormat, 0);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v43;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.renderTexture, (int32_t)v43, v45, v46);
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
            v47 = (Il2CppObject *)this->fields.targetCamera;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v48 = UnityEngine_Object__Instantiate_object_(
                    v47,
                    (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v48;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rasterCamera, (int32_t)v48, v49, v50);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
              v51 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v52 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v51, 0);
                if ( v52 )
                {
                  UnityEngine_Transform__SetParent(v52, (UnityEngine_Transform_o *)gameObject, 0);
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
                          v53 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0);
                          if ( gameObject )
                          {
                            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
                            if ( v53 )
                            {
                              v59.fields.z = position.fields.z + this->fields.cameraOffset.fields.z;
                              v59.fields.y = position.fields.y + this->fields.cameraOffset.fields.y;
                              v59.fields.x = position.fields.x + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v53, v59, 0);
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
                                    (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
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
    sub_1C32E7C(gameObject);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o **v9; // x20
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v12; // x23
  System_Collections_Generic_List_object__o *v13; // x21
  UnityEngine_GameObject_o *v14; // x23
  peRenderTexture_ChangeLayerObject_o *v15; // x22
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  System_Collections_IEnumerator_c *v28; // x8
  __int64 v29; // x9
  System_Collections_IEnumerator_c **v30; // x10
  __int64 v31; // x0
  UnityEngine_Component_o *v32; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x2
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x20
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4C3AD7E & 1) == 0 )
  {
    sub_1C32C20(&peRenderTexture_ChangeLayerObject_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    sub_1C32C20(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__);
    sub_1C32C20(&peRenderTexture___c__DisplayClass48_0_TypeInfo);
    byte_4C3AD7E = 1;
  }
  v5 = sub_1C32E6C(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = gameObject;
  v9 = (UnityEngine_GameObject_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)gameObject, v7, v8);
  transform = *(UnityEngine_GameObject_o **)(v5 + 16);
  if ( !transform )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_object____ctor(
      v12,
      (Il2CppObject *)v5,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0);
    if ( !targetChangeLayerObjects )
      goto LABEL_46;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v12,
            (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v13 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v14 = *v9;
      v15 = (peRenderTexture_ChangeLayerObject_o *)sub_1C32E6C(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v15, v14, v16);
      if ( v13 )
      {
        items = v13->fields._items;
        v20 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v13->fields._version;
        if ( items )
        {
          size = v13->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v15,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v15;
            sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
          }
          goto LABEL_15;
        }
      }
LABEL_46:
      sub_1C32E7C(transform);
    }
  }
LABEL_15:
  transform = *v9;
  if ( !*v9 )
    goto LABEL_46;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_46;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_22;
      }
      v27 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_22:
      v27 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8))
        & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v30 = (System_Collections_IEnumerator_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_29;
      }
      v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1];
    }
    else
    {
LABEL_29:
      v31 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v32 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(
                                       Enumerator,
                                       *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_45;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v32->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v32->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3313C(v32);
LABEL_45:
      sub_1C32E7C(v32);
    }
    v34 = UnityEngine_Component__get_gameObject(v32, 0);
    peRenderTexture__registChangeLayerObjects(this, v34, v35);
  }
  v36 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v36 )
  {
    v37 = *(_QWORD *)v36;
    v38 = v36;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_40;
      }
      v41 = v37 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_40:
      v41 = sub_1C83438(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
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
  __int64 RBindex; // x8
  unsigned int v12; // w10
  char *v13; // x20
  __int64 LTindex; // x9
  float *v15; // x10
  __int64 v16; // x9
  float v17; // s15
  float targetBoundsOffsetY; // s12
  float targetBoundsOffsetX; // s13
  float v20; // s11
  __int64 v21; // x8
  float *v22; // x8
  __int64 v23; // x8
  float *v24; // x8
  float v25; // [xsp+8h] [xbp-1C8h]
  float v26; // [xsp+Ch] [xbp-1C4h]
  float v27; // [xsp+10h] [xbp-1C0h]
  float v28; // [xsp+14h] [xbp-1BCh]
  float m20; // [xsp+18h] [xbp-1B8h]
  float value; // [xsp+1Ch] [xbp-1B4h]
  UnityEngine_Matrix4x4_o value_4; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+A0h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+E0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o bounds; // [xsp+120h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3AD80 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4C3AD80 = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_47101200(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  m10 = bounds.fields.m10;
  m30 = bounds.fields.m30;
  v7 = *(_QWORD *)&bounds.fields.m01;
  m20 = bounds.fields.m20;
  value = bounds.fields.m00;
  if ( !byte_4C313CF )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313CF = 1;
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
                               (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  RBindex = this->fields._RBindex;
  v12 = *((_DWORD *)Component_object + 6);
  v13 = Component_object;
  if ( (unsigned int)RBindex >= v12 || (LTindex = this->fields._LTindex, (unsigned int)LTindex >= v12) )
LABEL_36:
    sub_1C32E84(Component_object);
  v15 = (float *)&Component_object[12 * RBindex];
  v16 = (__int64)&Component_object[12 * LTindex + 32];
  v17 = v15[8];
  v25 = *(float *)(v16 + 8);
  v26 = v15[10];
  v27 = *(float *)(v16 + 4);
  v28 = *(float *)&Component_object[12 * RBindex + 36];
  if ( !byte_4C313CF )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313CF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_4C313CF )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313CF = 1;
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
  v20 = sqrtf(v9) * 0.5;
  v36.fields.x = (float)(sqrtf(
                           (float)((float)((float)(m20 + *((float *)&v7 + 1)) - (float)(m20 - *((float *)&v7 + 1)))
                                 * (float)((float)(m20 + *((float *)&v7 + 1)) - (float)(m20 - *((float *)&v7 + 1))))
                         + (float)((float)((float)((float)(value - m30) - (float)(value + m30))
                                         * (float)((float)(value - m30) - (float)(value + m30)))
                                 + (float)((float)(v8 - v8) * (float)(v8 - v8))))
                       + targetBoundsOffsetX)
               / sqrtf(
                   (float)((float)((float)(v17 - *(float *)&v7) * (float)(v17 - *(float *)&v7))
                         + (float)((float)(v26 - v25) * (float)(v26 - v25)))
                 + 0.0);
  v36.fields.y = (float)((float)(v20 + v20) + targetBoundsOffsetY)
               / sqrtf(
                   (float)((float)((float)(v17 - v17) * (float)(v17 - v17))
                         + (float)((float)(v28 - v27) * (float)(v28 - v27)))
                 + 0.0);
  v36.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v36, 0);
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  v37.fields.y = (float)(v8 - v20) - v20;
  v37.fields.z = m20;
  v37.fields.x = value;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_object, v37, 0);
  this->fields.targetBoundsCenter.fields.x = value;
  this->fields.targetBoundsCenter.fields.y = v8 - v20;
  this->fields.targetBoundsCenter.fields.z = m20;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v34,
                               (UnityEngine_Transform_o *)Component_object,
                               0);
  bounds = v34;
  v21 = this->fields._RBindex;
  if ( (unsigned int)v21 >= *((_DWORD *)v13 + 6) )
    goto LABEL_36;
  v22 = (float *)&v13[12 * v21];
  v38.fields.x = v22[8];
  v38.fields.y = v22[9];
  v38.fields.z = v22[10];
  v33 = bounds;
  v38.fields.w = 1.0;
  v39 = UnityEngine_Matrix4x4__op_Multiply_71152720(&v33, v38, 0);
  this->fields.targetBoundsRB.fields.x = v39.fields.x;
  this->fields.targetBoundsRB.fields.y = v39.fields.y;
  this->fields.targetBoundsRB.fields.z = v39.fields.z;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object
    || (Component_object = (char *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     0)) == 0 )
  {
LABEL_35:
    sub_1C32E7C(Component_object);
  }
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v32,
                               (UnityEngine_Transform_o *)Component_object,
                               0);
  v34 = v32;
  v23 = this->fields._LTindex;
  if ( (unsigned int)v23 >= *((_DWORD *)v13 + 6) )
    goto LABEL_36;
  v24 = (float *)&v13[12 * v23];
  v40.fields.x = v24[8];
  v40.fields.y = v24[9];
  v40.fields.z = v24[10];
  value_4 = v34;
  v40.fields.w = 1.0;
  v41 = UnityEngine_Matrix4x4__op_Multiply_71152720(&value_4, v40, 0);
  this->fields.targetBoundsLT.fields.x = v41.fields.x;
  this->fields.targetBoundsLT.fields.y = v41.fields.y;
  this->fields.targetBoundsLT.fields.z = v41.fields.z;
}


void peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  int32_t changeCullingMask; // w1
  _BOOL8 v7; // x0
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

  if ( (byte_4C3AD7F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD7F = 1;
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
      changeCullingMask = this->fields.changeCullingMask;
      if ( cullingMask != changeCullingMask )
      {
        targetChangeLayerObjects = this->fields.rasterCamera;
        if ( !targetChangeLayerObjects )
          goto LABEL_29;
        UnityEngine_Camera__set_cullingMask(targetChangeLayerObjects, changeCullingMask, 0);
      }
    }
  }
  targetChangeLayerObjects = (UnityEngine_Camera_o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_29:
    sub_1C32E7C(targetChangeLayerObjects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v7 )
      break;
    current = v18.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v18.fields._current )
        sub_1C32E7C(v7);
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
        sub_1C32E7C(v11);
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
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v8; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v10; // q1
  __int128 v11; // q2
  __int128 v12; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v14; // x0
  __int128 v15; // q1
  __int128 v16; // q2
  __int128 v17; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v19; // x0
  __int128 v20; // q1
  __int128 v21; // q2
  __int128 v22; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v25; // q1
  __int128 v26; // q2
  __int128 v27; // q3
  System_String_o *v28; // x1
  __int128 v29; // q1
  __int128 v30; // q2
  __int128 v31; // q3
  System_String_o *v32; // x1
  __int128 v33; // q1
  __int128 v34; // q2
  __int128 v35; // q3
  System_String_o *v36; // x1
  UnityEngine_Matrix4x4_o v37; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+110h] [xbp-1B0h]
  UnityEngine_Matrix4x4_o v42; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+190h] [xbp-130h]
  UnityEngine_Matrix4x4_o v44; // [xsp+1D0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+210h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+250h] [xbp-70h] BYREF

  if ( (byte_4C3AD81 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD81 = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    targetChangeLayerObjects,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  *(_OWORD *)&v46.fields._list = *(_OWORD *)&v45.fields.m00;
  v46.fields._current = *(Il2CppObject **)&v45.fields.m01;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v46.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v46.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( v8 )
      {
        if ( !monitor )
          sub_1C32E7C(v8);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v10 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v11 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v12 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v45.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v45.fields.m03 = v10;
        *(_OWORD *)&v45.fields.m00 = v11;
        *(_OWORD *)&v45.fields.m01 = v12;
        if ( !sharedMaterial )
          sub_1C32E7C(0);
        v44 = v45;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v44, 0);
        v14 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v15 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v16 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v17 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v43.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v43.fields.m03 = v15;
        *(_OWORD *)&v43.fields.m00 = v16;
        *(_OWORD *)&v43.fields.m01 = v17;
        if ( !v14 )
          sub_1C32E7C(0);
        v42 = v43;
        UnityEngine_Material__SetMatrix(v14, ParallelViewMat, &v42, 0);
        v19 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        v20 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v21 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v22 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v41.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v41.fields.m03 = v20;
        *(_OWORD *)&v41.fields.m00 = v21;
        *(_OWORD *)&v41.fields.m01 = v22;
        if ( !v19 )
          sub_1C32E7C(0);
        v40 = v41;
        UnityEngine_Material__SetMatrix(v19, ParallelProjectionMat, &v40, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
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
      v25 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v26 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v27 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v28 = this->fields.MainCamVPMat;
      *(_OWORD *)&v45.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v45.fields.m03 = v25;
      *(_OWORD *)&v45.fields.m00 = v26;
      *(_OWORD *)&v45.fields.m01 = v27;
      if ( targetChangeLayerObjects )
      {
        v39 = v45;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v28, &v39, 0);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0);
          v29 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v30 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v31 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v32 = this->fields.ParallelViewMat;
          *(_OWORD *)&v43.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v43.fields.m03 = v29;
          *(_OWORD *)&v43.fields.m00 = v30;
          *(_OWORD *)&v43.fields.m01 = v31;
          if ( targetChangeLayerObjects )
          {
            v38 = v43;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v32, &v38, 0);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0);
              v33 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v34 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v35 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v36 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v41.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v41.fields.m03 = v33;
              *(_OWORD *)&v41.fields.m00 = v34;
              *(_OWORD *)&v41.fields.m01 = v35;
              if ( targetChangeLayerObjects )
              {
                v37 = v41;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v36, &v37, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C32E7C(targetChangeLayerObjects);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)gameObject, v5, v6);
  peRenderTexture_ChangeLayerObject__Initialize(this, v7);
}


void peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x8

  if ( (byte_4C3AD88 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD88 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v6 = this->fields.gameObject;
    if ( v6 )
    {
      v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(v6, 0);
      v7 = this->fields.gameObject;
      this->fields.prevLayer = (int)v6;
      if ( v7 )
      {
        if ( UnityEngine_GameObject__get_layer(v7, 0) == layer )
          return;
        v6 = this->fields.gameObject;
        if ( v6 )
        {
          UnityEngine_GameObject__set_layer(v6, layer, 0);
          return;
        }
      }
    }
    sub_1C32E7C(v6);
  }
}


void peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x21
  UnityEngine_Object_o *changeMaterial; // x22
  UnityEngine_Material_o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v12; // x8
  UnityEngine_Material_o *v13; // x19

  if ( (byte_4C3AD8A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD8A = 1;
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
      v7 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71086868(v7, material, 0);
      this->fields.changeMaterial = v7;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeMaterial, (int32_t)v7, v8, v9);
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
        v12 = this->fields.orgMaterial;
        if ( v12 )
        {
          v13 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v12, 0);
          if ( v13 )
          {
            UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)sharedMaterial, 0);
            return;
          }
        }
      }
LABEL_19:
      sub_1C32E7C(sharedMaterial);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3AD87 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD87 = 1;
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
    UnityEngine_Object__DestroyImmediate_71223828(v5, 0);
    *p_changeMaterial = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeMaterial, 0, v6, v7);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    if ( !*p_renderer )
      sub_1C32E7C(0);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0);
  }
  this->fields.orgMaterial = 0;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_1C32BC4((CGThumbnailListItem_o *)p_orgMaterial, 0, v10, v11);
  *(p_orgMaterial - 1) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)p_renderer, 0, v13, v14);
}


void peRenderTexture_ChangeLayerObject__Initialize(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3AD86 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD86 = 1;
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
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.renderer, (int32_t)Component_object, v6, v7),
          (layer = this->fields.gameObject) == 0)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_1C32E7C(layer);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
    this->fields.orgMaterial = sharedMaterial;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.orgMaterial, (int32_t)sharedMaterial, v10, v11);
  }
}


void peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  UnityEngine_Renderer_o *v4; // x0

  if ( (byte_4C3AD8B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD8B = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    v4 = this->fields.renderer;
    if ( !v4 )
      sub_1C32E7C(0);
    UnityEngine_Renderer__set_sharedMaterial(v4, this->fields.orgMaterial, 0);
  }
}


bool peRenderTexture_ChangeLayerObject__SyncLayer(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3AD89 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD89 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    return 0;
  v4 = this->fields.gameObject;
  if ( !v4 )
    goto LABEL_11;
  if ( UnityEngine_GameObject__get_layer(v4, 0) == this->fields.prevLayer )
    return 0;
  v4 = this->fields.gameObject;
  if ( !v4 )
LABEL_11:
    sub_1C32E7C(v4);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v4, 0);
  return 1;
}


int32_t peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3AD85 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD85 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    return -1;
  v4 = this->fields.gameObject;
  if ( !v4 )
    sub_1C32E7C(0);
  return UnityEngine_GameObject__get_layer(v4, 0);
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
  if ( (byte_4C3AD8C & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD8C = 1;
  }
  if ( !n )
    sub_1C32E7C(this);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0);
}