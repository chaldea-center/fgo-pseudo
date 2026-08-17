void peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5973E9B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16913/*"_MainCamVPMatrix"*/);
    sub_2213A60(&StringLiteral_16957/*"_ParallelViewMatrix"*/);
    sub_2213A60(&StringLiteral_16956/*"_ParallelProjectionMatrix"*/);
    byte_5973E9B = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_16913/*"_MainCamVPMatrix"*/;
  this->fields.changeCullingMask = -1;
  this->fields.boundsUpdateCount = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_E9CC20;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.MainCamVPMat = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.MainCamVPMat, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16957/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16957/*"_ParallelViewMatrix"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ParallelViewMat, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_16956/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16956/*"_ParallelProjectionMatrix"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ParallelProjectionMat,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v7; // x8
  UnityEngine_Bounds_o bounds; // [xsp+8h] [xbp-28h] BYREF

  memset(&bounds, 0, sizeof(bounds));
  peRenderTexture__CalcRendererBounds_54446784(this, obj, &bounds, v4);
  v7 = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v7;
  return result;
}


void peRenderTexture__CalcRendererBounds_54446784(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  peRenderTexture_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *Component_object; // x22
  float32x2_t v9; // d9
  float v10; // s8
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  __int64 v13; // x8
  float z; // s2
  float v15; // s3
  float v16; // s0
  float v17; // s7
  float32x2_t v18; // d17
  int8x8_t v19; // d18
  float v20; // s2
  int8x8_t v21; // d4
  int8x8_t v22; // d19
  int8x8_t v23; // d16
  int8x8_t v24; // d17
  int8x8_t v25; // d3
  float32x2_t v26; // d3
  float v27; // s2
  float32x2_t v28; // d6
  float v29; // s7
  float32x2_t v30; // d3
  float v31; // s1
  float v32; // s2
  int8x8_t v33; // d5
  int8x8_t v34; // d3
  int8x8_t v35; // d6
  int8x8_t v36; // d7
  float32x2_t v37; // d5
  float32x2_t v38; // d3
  float32x2_t v39; // d2
  float v40; // s0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v42; // x1
  System_Collections_IEnumerator_o *v43; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v45; // x9
  int *p_offset; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_IEnumerator_o *v50; // x21
  System_Collections_IEnumerator_c *v51; // x8
  __int64 v52; // x9
  System_Collections_IEnumerator_c **v53; // x10
  __int64 v54; // x0
  UnityEngine_Component_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v60; // x3
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x20
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  UnityEngine_Bounds_o v67; // [xsp+0h] [xbp-70h] BYREF
  __int64 v68; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_IEnumerator_o *v69; // [xsp+38h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_5973E99 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (peRenderTexture_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_5973E99 = 1;
  }
  v69 = 0;
  v68 = 0;
  if ( !obj )
    goto LABEL_56;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (peRenderTexture_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_56;
    if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)Component_object, 0) )
    {
      v9.n64_u64[0] = vadd_f32(
                        *(float32x2_t *)&bounds->fields.m_Extents.fields.x,
                        *(float32x2_t *)&bounds->fields.m_Extents.fields.x).n64_u64[0];
      v10 = bounds->fields.m_Extents.fields.z + bounds->fields.m_Extents.fields.z;
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
      v12.n64_u64[0] = vsub_f32(v9, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
      if ( (float)((float)((float)(v10 - static_fields[1].n64_f32[0]) * (float)(v10 - static_fields[1].n64_f32[0]))
                 + vaddv_f32(vmul_f32(v12, v12))) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v67, (UnityEngine_Renderer_o *)Component_object, 0);
        z = bounds->fields.m_Center.fields.z;
        v15 = bounds->fields.m_Extents.fields.z;
        v16 = v67.fields.m_Center.fields.z + v67.fields.m_Extents.fields.z;
        v17 = z - v15;
        v18.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v19.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v67.fields.m_Center.fields.x,
                           *(float32x2_t *)&v67.fields.m_Extents.fields.x).n64_u64[0];
        v20 = z + v15;
        v21.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v67.fields.m_Center.fields.x,
                           *(float32x2_t *)&v67.fields.m_Extents.fields.x).n64_u64[0];
        v22.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v18).n64_u64[0];
        v23.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v18).n64_u64[0];
        v24.n64_u64[0] = vcgt_f32(v23, v19).n64_u64[0];
        v25.n64_u64[0] = vcgt_f32(v19, v22).n64_u64[0];
        if ( v17 >= (float)(v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z) )
          v17 = v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z;
        if ( v20 <= (float)(v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z) )
          v20 = v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z;
        v26.n64_u64[0] = vbsl_s8(v25, v22, v19).n64_u64[0];
        v27 = (float)(v20 - v17) * 0.5;
        v28.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v24, v23, v19), v26), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v29 = v17 + v27;
        v30.n64_u64[0] = vadd_f32(v26, v28).n64_u64[0];
        v31 = v29 - v27;
        v32 = v27 + v29;
        v33.n64_u64[0] = vsub_f32(v30, v28).n64_u64[0];
        v34.n64_u64[0] = vadd_f32(v28, v30).n64_u64[0];
        v35.n64_u64[0] = vcgt_f32(v21, v33).n64_u64[0];
        v36.n64_u64[0] = vcgt_f32(v34, v21).n64_u64[0];
        if ( v31 >= v16 )
          v31 = v67.fields.m_Center.fields.z + v67.fields.m_Extents.fields.z;
        v37.n64_u64[0] = vbsl_s8(v35, v33, v21).n64_u64[0];
        v38.n64_u64[0] = vbsl_s8(v36, v34, v21).n64_u64[0];
        if ( v32 > v16 )
          v16 = v32;
        v39.n64_u64[0] = vmul_f32(vsub_f32(v38, v37), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v40 = (float)(v16 - v31) * 0.5;
        *(float32x2_t *)&bounds->fields.m_Extents.fields.x = v39;
        bounds->fields.m_Extents.fields.z = v40;
        *(float32x2_t *)&bounds->fields.m_Center.fields.x = vadd_f32(v37, v39);
        bounds->fields.m_Center.fields.z = v31 + v40;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v67, (UnityEngine_Renderer_o *)Component_object, 0);
        v13 = *(_QWORD *)&v67.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = *(_OWORD *)&v67.fields.m_Center.fields.x;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = v13;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0);
  if ( !this )
LABEL_56:
    sub_2213CDC(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  v69 = Enumerator;
  *(_QWORD *)&v67.fields.m_Center.fields.x = 0;
  *(_QWORD *)&v67.fields.m_Center.fields.z = &v69;
  *(_QWORD *)&v67.fields.m_Extents.fields.y = &v68;
  while ( 1 )
  {
    v43 = v69;
    if ( !v69 )
      goto LABEL_53;
    klass = v69->klass;
    v45 = *(unsigned __int16 *)&v69->klass->_2.rank;
    if ( *(_WORD *)&v69->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_29;
      }
      v47 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_29:
      v47 = sub_224BC3C(v69, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
    if ( (v48 & 1) == 0 )
      break;
    v50 = v69;
    if ( !v69 )
      sub_2213CDC(v48, v49);
    v51 = v69->klass;
    v52 = *(unsigned __int16 *)&v69->klass->_2.rank;
    if ( *(_WORD *)&v69->klass->_2.rank )
    {
      v53 = (System_Collections_IEnumerator_c **)&v51->_1.interfaceOffsets->offset;
      while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 2;
        if ( !v52 )
          goto LABEL_37;
      }
      v54 = (__int64)&v51->vtable[*(_DWORD *)v53 + 1];
    }
    else
    {
LABEL_37:
      v54 = sub_224BC3C(v69, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v55 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(
                                       v50,
                                       *(_QWORD *)(v54 + 8));
    if ( !v55 )
      sub_2213CDC(0, v56);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v55->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v55->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v55, UnityEngine_Transform_TypeInfo, v57);
LABEL_53:
      sub_2213CDC(Enumerator, v42);
    }
    gameObject = UnityEngine_Component__get_gameObject(v55, 0);
    peRenderTexture__CalcRendererBounds_54446784(v6, gameObject, bounds, v60);
  }
  v61 = sub_2213BB4(v69, System_IDisposable_TypeInfo);
  v68 = v61;
  if ( v61 )
  {
    v62 = *(_QWORD *)v61;
    v63 = v61;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_48;
      }
      v66 = v62 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_48:
      v66 = sub_224BC3C(v61, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
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
  int v12; // w8
  __int64 v13; // x1
  UnityEngine_Camera_o *v14; // x0
  UnityEngine_Vector4_o v15; // q0 OVERLAPPED
  __int128 v16; // q1
  __int128 v17; // q2
  __int128 v18; // q3
  float v19; // s10
  float v20; // s11
  float v21; // s12
  float w; // s8
  float v23; // s15
  float v24; // s13
  float v25; // s14
  float v26; // s9
  UnityEngine_Vector4_o v27; // q0 OVERLAPPED
  __int128 v28; // q1
  __int128 v29; // q2
  __int128 v30; // q3
  float v31; // s8
  float v32; // s10
  peRenderTexture_o *v33; // x0
  const MethodInfo *v34; // x1
  __int128 v35; // q1
  __int128 v36; // q2
  UnityEngine_Matrix4x4_o v37; // [xsp+0h] [xbp-3B0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+40h] [xbp-370h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+80h] [xbp-330h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+C0h] [xbp-2F0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+100h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+140h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+180h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+1C0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+200h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+240h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+280h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+2C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+300h] [xbp-B0h] BYREF
  float v50; // [xsp+388h] [xbp-28h]
  float v51; // [xsp+38Ch] [xbp-24h]
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v8 = in_center.fields.y;
  v9 = in_center.fields.x;
  if ( (byte_5973E9A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E9A = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  v12 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v49, 0, sizeof(v49));
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    v14 = this->fields.targetCamera;
    if ( !v14
      || (v50 = v9,
          v51 = v8,
          UnityEngine_Camera__get_projectionMatrix(&v48, v14, 0),
          v46 = v48,
          UnityEngine_GL__GetGPUProjectionMatrix(&v47, &v46, 1, 0),
          (v14 = this->fields.targetCamera) == 0) )
    {
      sub_2213CDC(v14, v13);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v45, v14, 0);
    v43 = v47;
    v42 = v45;
    UnityEngine_Matrix4x4__op_Multiply(&v44, &v43, &v42, 0);
    v15 = *(UnityEngine_Vector4_o *)&v44.fields.m00;
    v16 = *(_OWORD *)&v44.fields.m01;
    v17 = *(_OWORD *)&v44.fields.m02;
    v18 = *(_OWORD *)&v44.fields.m03;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = *(_OWORD *)&v44.fields.m00;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v16;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = v17;
    *(_OWORD *)&this->fields.MainCamVP.fields.m03 = v18;
    *(UnityEngine_Vector4_o *)&v41.fields.m00 = v15;
    *(_OWORD *)&v41.fields.m01 = v16;
    v15.fields.x = x;
    *(float *)&v16 = y;
    *(_OWORD *)&v41.fields.m02 = v17;
    *(_OWORD *)&v41.fields.m03 = v18;
    *(float *)&v17 = z;
    LODWORD(v18) = 1.0;
    v52 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v41, v15, 0);
    v19 = v52.fields.x;
    v20 = v52.fields.y;
    *(UnityEngine_Vector4_o *)&v52.fields.y = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m01;
    v21 = v52.fields.z;
    w = v52.fields.w;
    v52.fields.w = 1.0;
    *(_OWORD *)&v40.fields.m00 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
    *(UnityEngine_Vector4_o *)&v40.fields.m01 = *(UnityEngine_Vector4_o *)&v52.fields.y;
    v52 = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03;
    v52.fields.y = in_RightBottom.fields.y;
    *(_OWORD *)&v40.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(UnityEngine_Vector4_o *)&v40.fields.m03 = v52;
    v52.fields.x = in_RightBottom.fields.x;
    v52.fields.z = in_RightBottom.fields.z;
    v53 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v40, v52, 0);
    v23 = v53.fields.z / v53.fields.w;
    v53.fields.z = 0.0;
    v24 = v53.fields.x / v53.fields.w;
    v53.fields.x = v50;
    v25 = v53.fields.y / v53.fields.w;
    v53.fields.y = v51;
    v26 = v53.fields.w / v53.fields.w;
    UnityEngine_Matrix4x4__Translate(&v39, *(UnityEngine_Vector3_o *)&v53.fields.x, 0);
    v27 = *(UnityEngine_Vector4_o *)&v39.fields.m00;
    v28 = *(_OWORD *)&v39.fields.m01;
    v29 = *(_OWORD *)&v39.fields.m02;
    v30 = *(_OWORD *)&v39.fields.m03;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = *(_OWORD *)&v39.fields.m00;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v28;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = v29;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m03 = v30;
    *(UnityEngine_Vector4_o *)&v38.fields.m00 = v27;
    *(_OWORD *)&v38.fields.m01 = v28;
    v27.fields.x = v19 / w;
    *(float *)&v28 = v20 / w;
    *(_OWORD *)&v38.fields.m02 = v29;
    *(_OWORD *)&v38.fields.m03 = v30;
    *(float *)&v29 = v21 / w;
    *(float *)&v30 = w / w;
    v54 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v38, v27, 0);
    v31 = v54.fields.x;
    v32 = v54.fields.y;
    *(UnityEngine_Vector4_o *)&v54.fields.y = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m01;
    v54.fields.w = v26;
    *(_OWORD *)&v37.fields.m00 = *(_OWORD *)&this->fields.orthoViewMat.fields.m00;
    *(UnityEngine_Vector4_o *)&v37.fields.m01 = *(UnityEngine_Vector4_o *)&v54.fields.y;
    *(UnityEngine_Vector4_o *)&v54.fields.z = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03;
    v54.fields.y = v25;
    *(_OWORD *)&v37.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(UnityEngine_Vector4_o *)&v37.fields.m03 = *(UnityEngine_Vector4_o *)&v54.fields.z;
    v54.fields.x = v24;
    v54.fields.z = v23;
    v55 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v37, v54, 0);
    peRenderTexture__orthogonalMatrix(&v49, v33, v31, v55.fields.x, v55.fields.y, v32, v34);
    v35 = *(_OWORD *)&v49.fields.m01;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = *(_OWORD *)&v49.fields.m00;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v35;
    v36 = *(_OWORD *)&v49.fields.m03;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = *(_OWORD *)&v49.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = v36;
  }
}


void peRenderTexture__LateUpdate(peRenderTexture_o *this, const MethodInfo *method)
{
  _BOOL4 isInitialized; // w8
  const MethodInfo *v4; // x1
  int32_t boundsUpdateCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  __int64 v8; // x1
  UnityEngine_Object_o *rasterCamera; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int64 v12; // x1
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v15; // s8
  float aspect; // s0
  float v17; // s9
  float v18; // s0
  float v19; // s10
  float farClipPlane; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v25; // [xsp+0h] [xbp-3C0h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+40h] [xbp-380h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+80h] [xbp-340h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+C0h] [xbp-300h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+100h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+140h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+180h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+1C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+200h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+240h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+280h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v36[3]; // [xsp+2C0h] [xbp-100h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973E92 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16964/*"_ProjectorMatrixVP"*/);
    sub_2213A60(&StringLiteral_16965/*"_ProjectorPos"*/);
    byte_5973E92 = 1;
  }
  isInitialized = this->fields.isInitialized;
  memset(&v36[1], 0, 128);
  if ( isInitialized )
  {
    peRenderTexture__updateLayer(this, method);
    if ( this->fields._boundsUpdateCount )
    {
      peRenderTexture__updateBounds(this, v4);
      boundsUpdateCount = this->fields._boundsUpdateCount;
      v6 = __OFSUB__(boundsUpdateCount, 1);
      v7 = boundsUpdateCount - 1;
      if ( v7 < 0 == v6 )
        this->fields._boundsUpdateCount = v7;
    }
    peRenderTexture__updateTransform(this, v4);
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(boardrenderer, 0, 0) )
      {
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v39.fields.m_XMin = 0.0;
        v39.fields.m_YMin = 0.0;
        v39.fields.m_Width = 1.0;
        v39.fields.m_Height = 1.0;
        UnityEngine_Camera__set_rect(transform, v39, 0);
        v37.fields.x = 1.0;
        v37.fields.y = 1.0;
        v37.fields.z = -1.0;
        UnityEngine_Matrix4x4__Scale(v36, v37, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v35, (UnityEngine_Transform_o *)transform, 0);
        v33 = v36[0];
        v32 = v35;
        UnityEngine_Matrix4x4__op_Multiply(&v34, &v33, &v32, 0);
        transform = this->fields.rasterCamera;
        v36[2] = v34;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v15 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v17 = aspect;
        v18 = UnityEngine_Camera__get_nearClipPlane(transform, 0);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v19 = v18;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0);
        UnityEngine_Matrix4x4__Perspective(&v31, v15, v17, v19, farClipPlane, 0);
        v29 = v31;
        v36[1] = v31;
        UnityEngine_GL__GetGPUProjectionMatrix(&v30, &v29, 1, 0);
        v36[1] = v30;
        if ( !byte_5969DBE )
        {
          sub_2213A60(&UnityEngine_Vector4_TypeInfo);
          byte_5969DBE = 1;
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
        v27 = v36[1];
        v26 = v36[2];
        transform = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v28, &v27, &v26, 0);
        if ( !sharedMaterial
          || (v25 = v28,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16964/*"_ProjectorMatrixVP"*/, &v25, 0),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0)) == 0 )
        {
LABEL_30:
          sub_2213CDC(transform, v12);
        }
        v40.fields.x = x;
        v40.fields.y = y;
        v40.fields.z = z;
        v40.fields.w = 1.0;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16965/*"_ProjectorPos"*/,
          v40,
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
  _BOOL4 isInitialized; // w8
  struct UnityEngine_Camera_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *renderTexture; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973E94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E94 = 1;
  }
  isInitialized = this->fields.isInitialized;
  memset(&v33, 0, sizeof(v33));
  if ( isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
      *p_rasterCamera = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rasterCamera, 0, v10, v11, v12, v13, v14, v15);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
      goto LABEL_18;
    v7 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v7 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v7, 0);
      v18 = (UnityEngine_Object_o *)this->fields.renderTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__DestroyImmediate_83460132(v18, 0);
      this->fields.renderTexture = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture, 0, v19, v20, v21, v22, v23, v24);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v33,
          targetChangeLayerObjects,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v33,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v33.fields._current )
            sub_2213CDC(0, v26);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v33.fields._current, v26);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v33,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetChangeLayerObjects,
          0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_2213CDC(v7, v6);
  }
}


void peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  _BOOL4 isInitialized; // w8
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *transform; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x21
  struct UnityEngine_GameObject_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  const MethodInfo *v52; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x1
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  UnityEngine_Object_o *v59; // x22
  _BOOL8 v60; // x0
  __int64 v61; // x1
  UnityEngine_GameObject_o *v62; // x0
  const MethodInfo *v63; // x2
  __int64 v64; // x1
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  __int64 v67; // x1
  UnityEngine_Object_o *v68; // x23
  UnityEngine_Object_o *v69; // x23
  __int64 v70; // x1
  UnityEngine_Object_o *v71; // x21
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  UnityEngine_RenderTexture_o *v76; // x26
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x1
  Il2CppObject *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  UnityEngine_Component_o *v92; // x8
  UnityEngine_Transform_o *v93; // x20
  UnityEngine_Transform_o *v94; // x20
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973E93 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_RenderTexture_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    byte_5973E93 = 1;
  }
  isInitialized = this->fields.isInitialized;
  memset(&v98, 0, sizeof(v98));
  memset(&v97, 0, sizeof(v97));
  if ( !isInitialized )
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Equality(transform, 0, 0) )
      {
        v9 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
        }
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(transform, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !transform )
          goto LABEL_85;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetCamera,
          (int32_t)Component_object,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
    }
    p_targetCamera = &this->fields.targetCamera;
    targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(targetCamera, 0, 0) )
    {
      main = UnityEngine_Camera__get_main(0);
      *p_targetCamera = main;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.targetCamera,
        (int32_t)main,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_85;
      v28 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_85;
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
      }
      else
      {
        v29 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0);
      }
      this->fields.targetObject = v29;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
        (int32_t)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0, 0) )
    {
      v38 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v38;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardrenderer,
        (int32_t)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v45;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetChangeLayerObjects,
      (int32_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v96,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v98 = v96;
      v96.fields._list = 0;
      *(_QWORD *)&v96.fields._index = &v98;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v98,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)v98.fields._current, v52);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v98,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v96,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v97 = v96;
        v96.fields._list = 0;
        *(_QWORD *)&v96.fields._index = &v97;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v97,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v97.fields._current;
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !v54 )
            sub_2213CDC(0, v55);
          v56 = UnityEngine_GameObject__get_transform(v54, 0);
          if ( !v56 )
            sub_2213CDC(0, v57);
          v59 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v56, (System_String_o *)current, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
          v60 = UnityEngine_Object__op_Inequality(v59, 0, 0);
          if ( v60 )
          {
            if ( !v59 )
              sub_2213CDC(v60, v61);
            v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0);
            peRenderTexture__registChangeLayerObjects(this, v62, v63);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v97,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0, 0) )
        {
          v68 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
          if ( !UnityEngine_Object__op_Equality(v68, 0, 0) )
            goto LABEL_80;
        }
        v69 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
        if ( !UnityEngine_Object__op_Inequality(v69, 0, 0) )
          goto LABEL_80;
        v71 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
        if ( !UnityEngine_Object__op_Inequality(v71, 0, 0) )
          goto LABEL_80;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        v76 = (UnityEngine_RenderTexture_o *)sub_2213CCC(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_83340172(v76, textureWidth, textureHeight, textureDepth, textureFormat, 0);
        this->fields.renderTexture = v76;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture,
          (int32_t)v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
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
            v84 = (Il2CppObject *)this->fields.targetCamera;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
            v85 = UnityEngine_Object__Instantiate_object_(
                    v84,
                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v85;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.rasterCamera,
              (int32_t)v85,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
              v92 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v93 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v92, 0);
                if ( v93 )
                {
                  UnityEngine_Transform__SetParent(v93, (UnityEngine_Transform_o *)gameObject, 0);
                  gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
                  if ( *p_rasterCamera )
                  {
                    UnityEngine_Camera__set_targetTexture(
                      (UnityEngine_Camera_o *)gameObject,
                      this->fields.renderTexture,
                      0);
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
                          v94 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0);
                          if ( gameObject )
                          {
                            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
                            if ( v94 )
                            {
                              v100.fields.z = position.fields.z + this->fields.cameraOffset.fields.z;
                              v100.fields.y = position.fields.y + this->fields.cameraOffset.fields.y;
                              v100.fields.x = position.fields.x + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v94, v100, 0);
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
                                    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
                                    (UnityEngine_Texture_o *)this->fields.renderTexture,
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
    sub_2213CDC(gameObject, v4);
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
  __int128 v15; // q1
  __int128 v16; // q2
  UnityEngine_Matrix4x4_o v17; // [xsp+0h] [xbp-90h] BYREF

  v7 = right - left;
  v13 = top - bottom;
  memset(&v17, 0, sizeof(v17));
  UnityEngine_Matrix4x4__set_Item(&v17, 0, 2.0 / (float)(right - left), 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 1, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 2, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 3, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 4, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 5, 2.0 / v13, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 6, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 7, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 8, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 9, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 10, 1.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 11, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 12, (float)-(float)(left + right) / v7, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 13, (float)-(float)(bottom + top) / v13, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 14, 0.0, 0);
  UnityEngine_Matrix4x4__set_Item(&v17, 15, 1.0, 0);
  v15 = *(_OWORD *)&v17.fields.m01;
  *(_OWORD *)&retstr->fields.m00 = *(_OWORD *)&v17.fields.m00;
  *(_OWORD *)&retstr->fields.m01 = v15;
  v16 = *(_OWORD *)&v17.fields.m03;
  *(_OWORD *)&retstr->fields.m02 = *(_OWORD *)&v17.fields.m02;
  *(_OWORD *)&retstr->fields.m03 = v16;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o **v14; // x20
  __int64 v15; // x1
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  UnityEngine_GameObject_o *v20; // x23
  peRenderTexture_ChangeLayerObject_o *v21; // x22
  const MethodInfo *v22; // x2
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v34; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v36; // x9
  int *p_offset; // x10
  __int64 v38; // x0
  System_Collections_IEnumerator_c *v39; // x8
  __int64 v40; // x9
  System_Collections_IEnumerator_c **v41; // x10
  __int64 v42; // x0
  UnityEngine_Component_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x20
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Collections_IEnumerator_o *v55; // [xsp+28h] [xbp-38h]

  if ( (byte_5973E95 & 1) == 0 )
  {
    sub_2213A60(&peRenderTexture_ChangeLayerObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__);
    sub_2213A60(&peRenderTexture___c__DisplayClass48_0_TypeInfo);
    byte_5973E95 = 1;
  }
  v5 = sub_2213CCC(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_48;
  *(_QWORD *)(v5 + 16) = gameObject;
  v14 = (UnityEngine_GameObject_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)gameObject, v8, v9, v10, v11, v12, v13);
  transform = *(UnityEngine_GameObject_o **)(v5 + 16);
  if ( !transform )
    goto LABEL_48;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v18 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0);
    if ( !targetChangeLayerObjects )
      goto LABEL_48;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v19 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v20 = *v14;
      v21 = (peRenderTexture_ChangeLayerObject_o *)sub_2213CCC(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v21, v20, v22);
      if ( v19 )
      {
        items = v19->fields._items;
        v30 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v21,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v21;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v21, v23, v24, v25, v26, v27, v28);
          }
          goto LABEL_15;
        }
      }
LABEL_48:
      sub_2213CDC(transform, v7);
    }
  }
LABEL_15:
  transform = *v14;
  if ( !*v14 )
    goto LABEL_48;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_48;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
  v55 = Enumerator;
  while ( 1 )
  {
    if ( !v55 )
      goto LABEL_46;
    klass = v55->klass;
    v36 = *(unsigned __int16 *)&v55->klass->_2.rank;
    if ( *(_WORD *)&v55->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_23;
      }
      v38 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_23:
      v38 = sub_224BC3C(v55, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v38)(v55, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = v55->klass;
    v40 = *(unsigned __int16 *)&v55->klass->_2.rank;
    if ( *(_WORD *)&v55->klass->_2.rank )
    {
      v41 = (System_Collections_IEnumerator_c **)&v39->_1.interfaceOffsets->offset;
      while ( *(v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 2;
        if ( !v40 )
          goto LABEL_30;
      }
      v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 1];
    }
    else
    {
LABEL_30:
      v42 = sub_224BC3C(v55, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v43 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v42)(
                                       v55,
                                       *(_QWORD *)(v42 + 8));
    if ( !v43 )
      sub_2213CDC(0, v44);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v43->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v43->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v43, UnityEngine_Transform_TypeInfo, v45);
LABEL_46:
      sub_2213CDC(Enumerator, v34);
    }
    v47 = UnityEngine_Component__get_gameObject(v43, 0);
    peRenderTexture__registChangeLayerObjects(this, v47, v48);
  }
  v49 = sub_2213BB4(v55, System_IDisposable_TypeInfo);
  if ( v49 )
  {
    v50 = *(_QWORD *)v49;
    v51 = v49;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_41;
      }
      v54 = v50 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_41:
      v54 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
  }
}


void peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  __int64 v5; // x1
  __int64 v6; // kr00_8
  __int64 v7; // kr08_8
  __int64 v8; // kr10_8
  float v9; // s10
  UnityEngine_MeshFilter_o *Component_object; // x0
  __int64 v11; // x1
  int32_t RBindex; // w8
  unsigned int klass; // w10
  UnityEngine_MeshFilter_o *v14; // x20
  int32_t LTindex; // w9
  void **p_monitor; // x21
  float *v17; // x10
  float *v18; // x9
  float v19; // s15
  float targetBoundsOffsetY; // s12
  float targetBoundsOffsetX; // s13
  float v22; // s11
  float v23; // s10
  int32_t v24; // w8
  float *v25; // x8
  int32_t v26; // w8
  float *v27; // x8
  float v28; // [xsp+0h] [xbp-190h]
  float v29; // [xsp+4h] [xbp-18Ch]
  float v30; // [xsp+8h] [xbp-188h]
  float v31; // [xsp+Ch] [xbp-184h]
  UnityEngine_Matrix4x4_o v32; // [xsp+10h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+50h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+90h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o bounds; // [xsp+D0h] [xbp-C0h] BYREF
  float v36; // [xsp+158h] [xbp-38h]
  float v37; // [xsp+15Ch] [xbp-34h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973E97 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_5973E97 = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_54446784(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  v6 = *(_QWORD *)&bounds.fields.m00;
  v7 = *(_QWORD *)&bounds.fields.m20;
  v8 = *(_QWORD *)&bounds.fields.m01;
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  v9 = *((float *)&v6 + 1) + *(float *)&v8;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_MeshFilter__get_sharedMesh(Component_object, 0);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Mesh__get_vertices(
                                                   (UnityEngine_Mesh_o *)Component_object,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  RBindex = this->fields._RBindex;
  klass = (unsigned int)Component_object[1].klass;
  v14 = Component_object;
  if ( RBindex >= klass || (LTindex = this->fields._LTindex, v37 = *((float *)&v8 + 1), LTindex >= klass) )
LABEL_33:
    sub_2213CE4(Component_object);
  p_monitor = &Component_object[1].monitor;
  v18 = (float *)&Component_object[1].monitor + 3 * LTindex;
  v17 = (float *)&Component_object[1].monitor + 3 * RBindex;
  v19 = *v17;
  v29 = v18[2];
  v30 = v17[2];
  v36 = v17[1];
  v28 = *v18;
  v31 = v18[1];
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
    if ( !byte_5969ADE )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADE = 1;
    }
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Component_object,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  v22 = sqrtf(*((float *)&v6 + 1)) * 0.5;
  v38.fields.x = (float)(sqrtf(
                           (float)((float)((float)(*(float *)&v7 + v37) - (float)(*(float *)&v7 - v37))
                                 * (float)((float)(*(float *)&v7 + v37) - (float)(*(float *)&v7 - v37)))
                         + (float)((float)((float)((float)(*(float *)&v6 - *((float *)&v7 + 1))
                                                 - (float)(*(float *)&v6 + *((float *)&v7 + 1)))
                                         * (float)((float)(*(float *)&v6 - *((float *)&v7 + 1))
                                                 - (float)(*(float *)&v6 + *((float *)&v7 + 1))))
                                 + (float)((float)(v9 - v9) * (float)(v9 - v9))))
                       + targetBoundsOffsetX)
               / sqrtf((float)((float)(v19 - v28) * (float)(v19 - v28)) + (float)((float)(v30 - v29) * (float)(v30 - v29)));
  v38.fields.z = 1.0;
  v38.fields.y = (float)((float)(v22 + v22) + targetBoundsOffsetY)
               / sqrtf((float)((float)(v19 - v19) * (float)(v19 - v19)) + (float)((float)(v36 - v31) * (float)(v36 - v31)));
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v38, 0);
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Component_object,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  v23 = v9 - *((float *)&v6 + 1);
  LODWORD(v39.fields.x) = v6;
  LODWORD(v39.fields.z) = v7;
  v39.fields.y = v23 - *((float *)&v6 + 1);
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_object, v39, 0);
  LODWORD(this->fields.targetBoundsCenter.fields.x) = v6;
  this->fields.targetBoundsCenter.fields.y = v23;
  LODWORD(this->fields.targetBoundsCenter.fields.z) = v7;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Component_object,
                                                   0);
  if ( !Component_object )
    goto LABEL_32;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Transform__get_localToWorldMatrix(
                                                   &bounds,
                                                   (UnityEngine_Transform_o *)Component_object,
                                                   0);
  v24 = this->fields._RBindex;
  if ( (unsigned int)v24 >= LODWORD(v14[1].klass) )
    goto LABEL_33;
  v25 = (float *)p_monitor + 3 * v24;
  v40.fields.x = *v25;
  v40.fields.y = v25[1];
  v40.fields.z = v25[2];
  v34 = bounds;
  v40.fields.w = 1.0;
  v41 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v34, v40, 0);
  this->fields.targetBoundsRB.fields.x = v41.fields.x;
  this->fields.targetBoundsRB.fields.y = v41.fields.y;
  this->fields.targetBoundsRB.fields.z = v41.fields.z;
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !Component_object
    || (Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Component_object,
                                                         0)) == 0 )
  {
LABEL_32:
    sub_2213CDC(Component_object, v11);
  }
  Component_object = (UnityEngine_MeshFilter_o *)UnityEngine_Transform__get_localToWorldMatrix(
                                                   &v33,
                                                   (UnityEngine_Transform_o *)Component_object,
                                                   0);
  v26 = this->fields._LTindex;
  if ( (unsigned int)v26 >= LODWORD(v14[1].klass) )
    goto LABEL_33;
  v27 = (float *)p_monitor + 3 * v26;
  v42.fields.x = *v27;
  v42.fields.y = v27[1];
  v42.fields.z = v27[2];
  v32 = v33;
  v42.fields.w = 1.0;
  v43 = UnityEngine_Matrix4x4__op_Multiply_83361300(&v32, v42, 0);
  this->fields.targetBoundsLT.fields.x = v43.fields.x;
  this->fields.targetBoundsLT.fields.y = v43.fields.y;
  this->fields.targetBoundsLT.fields.z = v43.fields.z;
}


void peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  _BOOL4 changeCullingMaskEnabled; // w8
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5973E96 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E96 = 1;
  }
  changeCullingMaskEnabled = this->fields.changeCullingMaskEnabled;
  memset(&v19, 0, sizeof(v19));
  if ( changeCullingMaskEnabled )
  {
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(targetChangeLayerObjects, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v7 )
      break;
    current = v19.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v19.fields._current )
        sub_2213CDC(v7, v8);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v19.fields._current,
        this->fields.changeLayer,
        v9);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v12 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0, 0);
    if ( v12 )
    {
      if ( !current )
        sub_2213CDC(v12, v13);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, v13) )
      {
        v15 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, v14);
        if ( v15 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            v17);
        }
        else if ( v15 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, v16);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x8
  float z; // s6
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int64 v12; // x1
  __int128 v13; // q1
  System_String_o *MainCamVPMat; // x1
  __int128 v15; // q2
  UnityEngine_Material_o *v16; // x0
  __int64 v17; // x1
  __int128 v18; // q1
  System_String_o *ParallelViewMat; // x1
  __int128 v20; // q2
  UnityEngine_Material_o *v21; // x0
  __int64 v22; // x1
  __int128 v23; // q1
  System_String_o *ParallelProjectionMat; // x1
  __int128 v25; // q2
  __int64 v26; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v28; // q1
  System_String_o *v29; // x1
  __int128 v30; // q2
  __int128 v31; // q1
  System_String_o *v32; // x1
  __int128 v33; // q2
  __int128 v34; // q1
  System_String_o *v35; // x1
  __int128 v36; // q2
  UnityEngine_Vector3_o in_RightBottom; // [xsp+0h] [xbp-210h]
  UnityEngine_Matrix4x4_o v38; // [xsp+10h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+50h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+90h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+D0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+110h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+150h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+198h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+1B0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o targetBoundsCenter; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o targetBoundsLT; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5973E98 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E98 = 1;
  }
  targetBoundsCenter = this->fields.targetBoundsCenter;
  targetBoundsLT = this->fields.targetBoundsLT;
  v3 = *(_QWORD *)&this->fields.targetBoundsRB.fields.x;
  z = this->fields.targetBoundsRB.fields.z;
  memset(&v45, 0, sizeof(v45));
  in_RightBottom.fields.z = z;
  *(_QWORD *)&in_RightBottom.fields.x = v3;
  peRenderTexture__CreatePVMatrix(this, targetBoundsCenter, targetBoundsLT, in_RightBottom, method);
  targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    targetChangeLayerObjects,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v45 = v44;
  v44.fields._list = 0;
  *(_QWORD *)&v44.fields._index = &v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v45.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v45.fields._current[1].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      v9 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( v9 )
      {
        if ( !monitor )
          sub_2213CDC(v9, v10);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        if ( !sharedMaterial )
          sub_2213CDC(0, v12);
        v13 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v43.fields.m00 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
        *(_OWORD *)&v43.fields.m01 = v13;
        v15 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        *(_OWORD *)&v43.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v43.fields.m03 = v15;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v43, 0);
        v16 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        if ( !v16 )
          sub_2213CDC(0, v17);
        v18 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v42.fields.m00 = *(_OWORD *)&this->fields.orthoViewMat.fields.m00;
        *(_OWORD *)&v42.fields.m01 = v18;
        v20 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        *(_OWORD *)&v42.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v42.fields.m03 = v20;
        UnityEngine_Material__SetMatrix(v16, ParallelViewMat, &v42, 0);
        v21 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0);
        if ( !v21 )
          sub_2213CDC(0, v22);
        v23 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v41.fields.m00 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00;
        *(_OWORD *)&v41.fields.m01 = v23;
        v25 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        *(_OWORD *)&v41.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v41.fields.m03 = v25;
        UnityEngine_Material__SetMatrix(v21, ParallelProjectionMat, &v41, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0, 0) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
    if ( targetChangeLayerObjects )
    {
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                0);
      if ( targetChangeLayerObjects )
      {
        v28 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        v29 = this->fields.MainCamVPMat;
        *(_OWORD *)&v40.fields.m00 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
        *(_OWORD *)&v40.fields.m01 = v28;
        v30 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        *(_OWORD *)&v40.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v40.fields.m03 = v30;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v29, &v40, 0);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0);
          if ( targetChangeLayerObjects )
          {
            v31 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
            v32 = this->fields.ParallelViewMat;
            *(_OWORD *)&v39.fields.m00 = *(_OWORD *)&this->fields.orthoViewMat.fields.m00;
            *(_OWORD *)&v39.fields.m01 = v31;
            v33 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
            *(_OWORD *)&v39.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
            *(_OWORD *)&v39.fields.m03 = v33;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v32, &v39, 0);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0);
              if ( targetChangeLayerObjects )
              {
                v34 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
                v35 = this->fields.ParallelProjectionMat;
                *(_OWORD *)&v38.fields.m00 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00;
                *(_OWORD *)&v38.fields.m01 = v34;
                v36 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
                *(_OWORD *)&v38.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
                *(_OWORD *)&v38.fields.m03 = v36;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v35, &v38, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_2213CDC(targetChangeLayerObjects, v5);
  }
}


void peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.gameObject = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
  peRenderTexture_ChangeLayerObject__Initialize(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x8

  if ( (byte_5973E9F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E9F = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
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
    sub_2213CDC(v7, v6);
  }
}


void peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *changeMaterial; // x22
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Renderer_o *sharedMaterial; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v19; // x8
  UnityEngine_Material_o *v20; // x19

  if ( (byte_5973EA1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EA1 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, material);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Equality(changeMaterial, 0, 0) )
    {
      v9 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83274924(v9, material, 0);
      this->fields.changeMaterial = v9;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.changeMaterial,
        (int32_t)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    sharedMaterial = this->fields.renderer;
    if ( !sharedMaterial )
      goto LABEL_19;
    UnityEngine_Renderer__set_sharedMaterial(sharedMaterial, this->fields.changeMaterial, 0);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(orgMaterial, 0, 0) )
    {
      sharedMaterial = this->fields.renderer;
      if ( sharedMaterial )
      {
        sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(sharedMaterial, 0);
        v19 = this->fields.orgMaterial;
        if ( v19 )
        {
          v20 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v19, 0);
          if ( v20 )
          {
            UnityEngine_Material__set_mainTexture(v20, (UnityEngine_Texture_o *)sharedMaterial, 0);
            return;
          }
        }
      }
LABEL_19:
      sub_2213CDC(sharedMaterial, v8);
    }
  }
}


void peRenderTexture_ChangeLayerObject__Finalize(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_changeMaterial; // x20
  UnityEngine_Object_o *changeMaterial; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5973E9E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E9E = 1;
  }
  p_changeMaterial = &this->fields.changeMaterial;
  changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(changeMaterial, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__DestroyImmediate_83460132(v6, 0);
    *p_changeMaterial = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.changeMaterial, 0, v7, v8, v9, v10, v11, v12);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    if ( !*p_renderer )
      sub_2213CDC(0, v15);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0);
  }
  this->fields.orgMaterial = 0;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_orgMaterial, 0, v16, v17, v18, v19, v20, v21);
  *(p_orgMaterial - 1) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_renderer, 0, v23, v24, v25, v26, v27, v28);
}


void peRenderTexture_ChangeLayerObject__Initialize(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5973E9D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E9D = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    layer = this->fields.gameObject;
    if ( !layer
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               layer,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.renderer,
            (int32_t)Component_object,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (layer = this->fields.gameObject) == 0)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_2213CDC(layer, v4);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
    this->fields.orgMaterial = sharedMaterial;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.orgMaterial,
      (int32_t)sharedMaterial,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


void peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_5973EA2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EA2 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(renderer, 0, 0) )
  {
    v5 = this->fields.renderer;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UnityEngine_Renderer__set_sharedMaterial(v5, this->fields.orgMaterial, 0);
  }
}


bool peRenderTexture_ChangeLayerObject__SyncLayer(peRenderTexture_ChangeLayerObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  bool result; // w0
  int32_t layer; // w8

  if ( (byte_5973EA0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EA0 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(v5, v4);
  layer = UnityEngine_GameObject__get_layer(v5, 0);
  result = 1;
  this->fields.prevLayer = layer;
  return result;
}


int32_t peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5973E9C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E9C = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    return -1;
  v5 = this->fields.gameObject;
  if ( !v5 )
    sub_2213CDC(0, v4);
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
  if ( (byte_5973EA3 & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EA3 = 1;
  }
  if ( !n )
    sub_2213CDC(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, n);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0);
}