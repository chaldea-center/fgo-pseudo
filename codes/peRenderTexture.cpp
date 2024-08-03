void __fastcall peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF0AC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16192/*"_MainCamVPMatrix"*/, method);
    sub_1B640C8(&StringLiteral_16231/*"_ParallelViewMatrix"*/, v5);
    sub_1B640C8(&StringLiteral_16230/*"_ParallelProjectionMatrix"*/, v6);
    byte_49FF0AC = 1;
  }
  this->fields.changeCullingMask = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_BA42A0;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.boundsUpdateCount = -1;
  v7 = StringLiteral_16192/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16192/*"_MainCamVPMatrix"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.MainCamVPMat, v7, v2, v3);
  v8 = StringLiteral_16231/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16231/*"_ParallelViewMatrix"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ParallelViewMat, v8, v9, v10);
  v11 = StringLiteral_16230/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16230/*"_ParallelProjectionMatrix"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ParallelProjectionMat, v11, v12, v13);
  *(_QWORD *)&this->fields._RBindex = 0x6E0000000ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Bounds_o *__fastcall peRenderTexture__CalcRendererBounds(
        UnityEngine_Bounds_o *retstr,
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_Bounds_o *result; // x0
  __int128 v7; // q0
  UnityEngine_Bounds_o bounds; // [xsp+8h] [xbp-28h] BYREF

  memset(&bounds, 0, sizeof(bounds));
  peRenderTexture__CalcRendererBounds_43303948(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_43303948(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  peRenderTexture_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  __int64 v12; // x1
  float v13; // s9
  float32x2_t v14; // d8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v16; // d1
  unsigned __int64 v17; // d1
  __int128 v18; // q0
  float z; // s5
  float32x2_t v20; // d6
  float v21; // s7
  int8x8_t v22; // d20
  int8x8_t v23; // d4
  float v24; // s6
  int8x8_t v25; // d18
  float v26; // s5
  int8x8_t v27; // d0
  float v28; // s1
  int8x8_t v29; // d2
  int8x8_t v30; // d3
  float32x2_t v31; // d2
  float32x2_t v32; // d3
  float v33; // s4
  float32x2_t v34; // d3
  float v35; // s4
  float32x2_t v36; // d2
  float v37; // s5
  int8x8_t v38; // d6
  int8x8_t v39; // d2
  float v40; // s3
  float v41; // s4
  float32x2_t v42; // d6
  float32x2_t v43; // d0
  float v44; // s2
  float32x2_t v45; // d0
  float v46; // s1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v52; // x8
  __int64 v53; // x9
  System_Collections_IEnumerator_c **v54; // x10
  __int64 v55; // x0
  UnityEngine_Component_o *v56; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v59; // x3
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  UnityEngine_Bounds_o v66; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v67; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_49FF0AA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, obj);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    this = (peRenderTexture_o *)sub_1B640C8(&UnityEngine_Transform_TypeInfo, v10);
    byte_49FF0AA = 1;
  }
  if ( !obj )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (peRenderTexture_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_54;
    if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)Component_object, 0LL) )
    {
      v13 = bounds->fields.m_Extents.fields.x + bounds->fields.m_Extents.fields.x;
      v14.n64_u64[0] = vadd_f32(
                         *(float32x2_t *)&bounds->fields.m_Extents.fields.y,
                         *(float32x2_t *)&bounds->fields.m_Extents.fields.y).n64_u64[0];
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
        byte_49F7111 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v16.n64_u64[0] = vsub_f32(v14, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v17 = vmul_f32(v16, v16).n64_u64[0];
      if ( (float)(*((float *)&v17 + 1)
                 + (float)((float)((float)(v13 - static_fields->zeroVector.fields.x)
                                 * (float)(v13 - static_fields->zeroVector.fields.x))
                         + *(float *)&v17)) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v67, (UnityEngine_Renderer_o *)Component_object, 0LL);
        z = bounds->fields.m_Center.fields.z;
        v20.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v21 = bounds->fields.m_Extents.fields.z;
        v22.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v20).n64_u64[0];
        v23.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v20).n64_u64[0];
        v24 = z - v21;
        v25.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v67.fields.m_Center.fields.x,
                           *(float32x2_t *)&v67.fields.m_Extents.fields.x).n64_u64[0];
        v26 = z + v21;
        v27.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v67.fields.m_Center.fields.x,
                           *(float32x2_t *)&v67.fields.m_Extents.fields.x).n64_u64[0];
        v28 = v67.fields.m_Center.fields.z + v67.fields.m_Extents.fields.z;
        v29.n64_u64[0] = vcgt_f32(v25, v22).n64_u64[0];
        v30.n64_u64[0] = vcgt_f32(v23, v25).n64_u64[0];
        if ( v24 >= (float)(v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z) )
          v24 = v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z;
        v31.n64_u64[0] = vbsl_s8(v29, v22, v25).n64_u64[0];
        v32.n64_u64[0] = vbsl_s8(v30, v23, v25).n64_u64[0];
        if ( v26 <= (float)(v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z) )
          v33 = v67.fields.m_Center.fields.z - v67.fields.m_Extents.fields.z;
        else
          v33 = v26;
        v34.n64_u64[0] = vmul_f32(vsub_f32(v32, v31), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v35 = (float)(v33 - v24) * 0.5;
        v36.n64_u64[0] = vadd_f32(v31, v34).n64_u64[0];
        v37 = v24 + v35;
        v38.n64_u64[0] = vsub_f32(v36, v34).n64_u64[0];
        v39.n64_u64[0] = vadd_f32(v34, v36).n64_u64[0];
        v40 = v37 - v35;
        v41 = v35 + v37;
        v42.n64_u64[0] = vbsl_s8(vcgt_f32(v27, v38), v38, v27).n64_u64[0];
        v43.n64_u64[0] = vbsl_s8(vcgt_f32(v39, v27), v39, v27).n64_u64[0];
        if ( v40 >= v28 )
          v44 = v67.fields.m_Center.fields.z + v67.fields.m_Extents.fields.z;
        else
          v44 = v40;
        if ( v41 > v28 )
          v28 = v41;
        v45.n64_u64[0] = vmul_f32(vsub_f32(v43, v42), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v46 = (float)(v28 - v44) * 0.5;
        *(float32x2_t *)&bounds->fields.m_Extents.fields.x = v45;
        bounds->fields.m_Extents.fields.z = v46;
        *(float32x2_t *)&bounds->fields.m_Center.fields.x = vadd_f32(v42, v45);
        bounds->fields.m_Center.fields.z = v44 + v46;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v66, (UnityEngine_Renderer_o *)Component_object, 0LL);
        v18 = *(_OWORD *)&v66.fields.m_Center.fields.x;
        v67 = v66;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v66.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v18;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
LABEL_54:
    sub_1B64324(this);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v52 = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
      while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 2;
        if ( !v53 )
          goto LABEL_37;
      }
      v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
    }
    else
    {
LABEL_37:
      v55 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v56 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                       Enumerator,
                                       *(_QWORD *)(v55 + 8));
    if ( !v56 )
      goto LABEL_53;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v56->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v56->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v56);
LABEL_53:
      sub_1B64324(v56);
    }
    gameObject = UnityEngine_Component__get_gameObject(v56, 0LL);
    peRenderTexture__CalcRendererBounds_43303948(v6, gameObject, bounds, v59);
  }
  v60 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v60 )
  {
    v61 = *(_QWORD *)v60;
    v62 = v60;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_48;
      }
      v65 = v61 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_48:
      v65 = sub_1BB60A8(v60, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__CreatePVMatrix(
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
  if ( (byte_49FF0AB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF0AB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v12 = this->fields.targetCamera;
    if ( !v12
      || (v48 = v9,
          v49 = v8,
          UnityEngine_Camera__get_projectionMatrix(&v46, v12, 0LL),
          v44 = v46,
          UnityEngine_GL__GetGPUProjectionMatrix(&v45, &v44, 1, 0LL),
          v46 = v45,
          (v12 = this->fields.targetCamera) == 0LL) )
    {
      sub_1B64324(v12);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v45, v12, 0LL);
    v41 = v45;
    v42 = v46;
    UnityEngine_Matrix4x4__op_Multiply(&v43, &v42, &v41, 0LL);
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
    v50 = UnityEngine_Matrix4x4__op_Multiply_69056420(&v40, v13, 0LL);
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
    v51 = UnityEngine_Matrix4x4__op_Multiply_69056420(&v39, v50, 0LL);
    v21 = v51.fields.x / v51.fields.w;
    v22 = v51.fields.y / v51.fields.w;
    v51.fields.x = v48;
    v51.fields.y = v49;
    v23 = v51.fields.z / v51.fields.w;
    v51.fields.z = 0.0;
    v24 = v51.fields.w / v51.fields.w;
    UnityEngine_Matrix4x4__Translate(&v38, *(UnityEngine_Vector3_o *)&v51.fields.x, 0LL);
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
    v52 = UnityEngine_Matrix4x4__op_Multiply_69056420(&v37, v25, 0LL);
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
    v53 = UnityEngine_Matrix4x4__op_Multiply_69056420(&v36, v52, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__LateUpdate(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t boundsUpdateCount; // w8
  bool v7; // vf
  int32_t v8; // w8
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Object_o *boardrenderer; // x20
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v13; // s8
  float aspect; // s0
  float v15; // s9
  float v16; // s0
  float v17; // s10
  float farClipPlane; // s0
  __int64 v19; // x1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v27; // [xsp+0h] [xbp-300h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+40h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+80h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+C0h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+100h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+140h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+180h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+1C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+200h] [xbp-100h]
  UnityEngine_Matrix4x4_o v36; // [xsp+240h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+280h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF0A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_16238/*"_ProjectorMatrixVP"*/, v3);
    sub_1B640C8(&StringLiteral_16239/*"_ProjectorPos"*/, v4);
    byte_49FF0A3 = 1;
  }
  if ( this->fields.isInitialized )
  {
    peRenderTexture__updateLayer(this, method);
    if ( this->fields._boundsUpdateCount )
    {
      peRenderTexture__updateBounds(this, v5);
      boundsUpdateCount = this->fields._boundsUpdateCount;
      v7 = __OFSUB__(boundsUpdateCount, 1);
      v8 = boundsUpdateCount - 1;
      if ( v8 < 0 == v7 )
        this->fields._boundsUpdateCount = v8;
    }
    peRenderTexture__updateTransform(this, v5);
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
      {
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v39.fields.m_XMin = 0.0;
        v39.fields.m_YMin = 0.0;
        v39.fields.m_Width = 1.0;
        v39.fields.m_Height = 1.0;
        UnityEngine_Camera__set_rect(transform, v39, 0LL);
        v38.fields.x = 1.0;
        v38.fields.y = 1.0;
        v38.fields.z = -1.0;
        UnityEngine_Matrix4x4__Scale(&v37, v38, 0LL);
        v35 = v37;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v37, (UnityEngine_Transform_o *)transform, 0LL);
        v33 = v37;
        v34 = v35;
        UnityEngine_Matrix4x4__op_Multiply(&v36, &v34, &v33, 0LL);
        v37 = v36;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v13 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v15 = aspect;
        v16 = UnityEngine_Camera__get_nearClipPlane(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v17 = v16;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v32, v13, v15, v17, farClipPlane, 0LL);
        v36 = v32;
        v31 = v32;
        UnityEngine_GL__GetGPUProjectionMatrix(&v32, &v31, 1, 0LL);
        v36 = v32;
        if ( !byte_49F7417 )
        {
          sub_1B640C8(&UnityEngine_Vector4_TypeInfo, v19);
          byte_49F7417 = 1;
        }
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
        if ( !transform )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        transform = (UnityEngine_Camera_o *)this->fields.boardrenderer;
        if ( !transform )
          goto LABEL_30;
        v23 = v20;
        v24 = v21;
        v25 = v22;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)transform, 0LL);
        v29 = v36;
        v28 = v37;
        transform = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v30, &v29, &v28, 0LL);
        v32 = v30;
        if ( !sharedMaterial
          || (v27 = v32,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16238/*"_ProjectorMatrixVP"*/, &v27, 0LL),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0LL)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0LL)) == 0LL )
        {
LABEL_30:
          sub_1B64324(transform);
        }
        v40.fields.w = 1.0;
        v40.fields.x = v23;
        v40.fields.y = v24;
        v40.fields.z = v25;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16239/*"_ProjectorPos"*/,
          v40,
          0LL);
      }
    }
  }
}


// attributes: thunk
void __fastcall peRenderTexture__OnEnable(peRenderTexture_o *this, const MethodInfo *method)
{
  peRenderTexture__finalize(this, method);
}


// attributes: thunk
void __fastcall peRenderTexture__Update(peRenderTexture_o *this, const MethodInfo *method)
{
  peRenderTexture__initialize(this, method);
}


void __fastcall peRenderTexture__finalize(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Camera_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *renderTexture; // x20
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF0A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF0A5 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rasterCamera, 0, v11, v12);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0LL, 0LL) )
      goto LABEL_18;
    p_renderTexture = &this->fields.renderTexture;
    v9 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v9 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v9, 0LL);
      v15 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v15, 0LL);
      *p_renderTexture = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.renderTexture, 0, v16, v17);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v22,
          targetChangeLayerObjects,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v22.fields._current )
            sub_1B64324(0LL);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v22.fields._current, v19);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetChangeLayerObjects, 0, v20, v21);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_1B64324(v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Object_o *v20; // x21
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *v29; // x21
  struct UnityEngine_GameObject_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Transform_o *v46; // x0
  UnityEngine_Object_o *v47; // x22
  _BOOL8 v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x2
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v53; // x23
  UnityEngine_Object_o *v54; // x23
  UnityEngine_Object_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v62; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x23
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  UnityEngine_Component_o *v70; // x8
  UnityEngine_Transform_o *v71; // x20
  UnityEngine_Transform_o *v72; // x20
  float v73; // s0
  float v74; // s1
  float v75; // s2
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF0A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_Camera___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_RenderTexture_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v17);
    byte_49FF0A4 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v78, 0, sizeof(v78));
  if ( !this->fields.isInitialized )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.targetCameraPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      transform = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)gameObject,
                                            this->fields.targetCameraPath,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(transform, 0LL, 0LL) )
      {
        v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)v20,
                                                0LL);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(transform, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !transform )
          goto LABEL_85;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetCamera,
          (int32_t)Component_object,
          v22,
          v23);
      }
    }
    p_targetCamera = &this->fields.targetCamera;
    targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
    {
      main = UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = main;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetCamera, (int32_t)main, v27, v28);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      v29 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_85;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
      }
      else
      {
        v30 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
      }
      this->fields.targetObject = v30;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)v30, v31, v32);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0LL, 0LL) )
    {
      v37 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.boardrenderer, (int32_t)v37, v38, v39);
    }
    v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo,
                                                         v35,
                                                         v36);
    System_Collections_Generic_List_object____ctor(
      v40,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetChangeLayerObjects, (int32_t)v40, v41, v42);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v77,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v77;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields._current, v43) )
      {
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v77,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v78 = v77;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v78,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v78.fields._current;
          v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v45 )
            sub_1B64324(0LL);
          v46 = UnityEngine_GameObject__get_transform(v45, 0LL);
          if ( !v46 )
            sub_1B64324(0LL);
          v47 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v46, (System_String_o *)current, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v48 = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
          if ( v48 )
          {
            if ( !v47 )
              sub_1B64324(v48);
            v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v49, v50);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v78,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v53 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v53, 0LL, 0LL) )
            goto LABEL_80;
        }
        v54 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
          goto LABEL_80;
        v55 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
          goto LABEL_80;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v62 = (UnityEngine_RenderTexture_o *)sub_1B64314(UnityEngine_RenderTexture_TypeInfo, v56, v57);
        UnityEngine_RenderTexture___ctor_69034404(v62, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v62;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.renderTexture, (int32_t)v62, v64, v65);
        gameObject = (UnityEngine_GameObject_o *)this->fields.renderTexture;
        if ( gameObject )
        {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)gameObject, this->fields.textureFilterMode, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.renderTexture;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *))gameObject->klass[1]._1.castClass)(
              gameObject,
              (unsigned int)this->fields.textureDimension,
              gameObject->klass[1]._1.declaringType);
            v66 = (Il2CppObject *)this->fields.targetCamera;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v67 = UnityEngine_Object__Instantiate_object_(
                    v66,
                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v67;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rasterCamera, (int32_t)v67, v68, v69);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
              v70 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v71 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v70, 0LL);
                if ( v71 )
                {
                  UnityEngine_Transform__SetParent(v71, (UnityEngine_Transform_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
                  if ( *p_rasterCamera )
                  {
                    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)gameObject, *p_renderTexture, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
                    if ( *p_rasterCamera )
                    {
                      UnityEngine_Camera__set_renderingPath(
                        (UnityEngine_Camera_o *)gameObject,
                        this->fields.cameraRenderingPath,
                        0LL);
                      gameObject = (UnityEngine_GameObject_o *)this->fields.rasterCamera;
                      if ( gameObject )
                      {
                        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
                        if ( *p_rasterCamera )
                        {
                          v72 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0LL);
                          if ( gameObject )
                          {
                            *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Transform__get_position(
                                                               (UnityEngine_Transform_o *)gameObject,
                                                               0LL);
                            if ( v72 )
                            {
                              v80.fields.z = v75 + this->fields.cameraOffset.fields.z;
                              v80.fields.y = v74 + this->fields.cameraOffset.fields.y;
                              v80.fields.x = v73 + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v72, v80, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.boardrenderer;
                              if ( gameObject )
                              {
                                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                           (UnityEngine_Renderer_o *)gameObject,
                                                                           0LL);
                                if ( gameObject )
                                {
                                  UnityEngine_Material__SetTexture(
                                    (UnityEngine_Material_o *)gameObject,
                                    (System_String_o *)StringLiteral_16193/*"_MainTex"*/,
                                    (UnityEngine_Texture_o *)*p_renderTexture,
                                    0LL);
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
    sub_1B64324(gameObject);
  }
}


UnityEngine_Matrix4x4_o *__fastcall peRenderTexture__orthogonalMatrix(
        UnityEngine_Matrix4x4_o *retstr,
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
  UnityEngine_Matrix4x4__set_Item(&v18, 0, 2.0 / (float)(right - left), 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 1, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 2, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 3, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 4, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 5, 2.0 / v13, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 6, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 7, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 8, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 9, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 10, 1.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 11, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 12, (float)-(float)(left + right) / v7, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 13, (float)-(float)(bottom + top) / v13, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 14, 0.0, 0LL);
  UnityEngine_Matrix4x4__set_Item(&v18, 15, 1.0, 0LL);
  v15 = *(_OWORD *)&v18.fields.m03;
  v17 = *(_OWORD *)&v18.fields.m00;
  v16 = *(_OWORD *)&v18.fields.m01;
  *(_OWORD *)&retstr->fields.m02 = *(_OWORD *)&v18.fields.m02;
  *(_OWORD *)&retstr->fields.m03 = v15;
  *(_OWORD *)&retstr->fields.m00 = v17;
  *(_OWORD *)&retstr->fields.m01 = v16;
  return result;
}


void __fastcall peRenderTexture__registChangeLayerObjects(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  UnityEngine_GameObject_o *transform; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o **v19; // x20
  Il2CppObject *Component_object; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x21
  UnityEngine_GameObject_o *v28; // x23
  peRenderTexture_ChangeLayerObject_o *v29; // x22
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v42; // x8
  __int64 v43; // x9
  System_Collections_IEnumerator_c **v44; // x10
  __int64 v45; // x0
  UnityEngine_Component_o *v46; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x2
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x20
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0

  if ( (byte_49FF0A6 & 1) == 0 )
  {
    sub_1B640C8(&peRenderTexture_ChangeLayerObject_TypeInfo, gameObject);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v12);
    sub_1B640C8(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v13);
    sub_1B640C8(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v14);
    byte_49FF0A6 = 1;
  }
  v15 = sub_1B64314(peRenderTexture___c__DisplayClass48_0_TypeInfo, gameObject, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_46;
  *(_QWORD *)(v15 + 16) = gameObject;
  v19 = (UnityEngine_GameObject_o **)(v15 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)gameObject, v17, v18);
  transform = *(UnityEngine_GameObject_o **)(v15 + 16);
  if ( !transform )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v24 = (System_Predicate_object__o *)sub_1B64314(
                                          System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo,
                                          v21,
                                          v22);
    System_Predicate_object____ctor(
      v24,
      (Il2CppObject *)v15,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0LL);
    if ( !targetChangeLayerObjects )
      goto LABEL_46;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v24,
            (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v27 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v28 = *v19;
      v29 = (peRenderTexture_ChangeLayerObject_o *)sub_1B64314(peRenderTexture_ChangeLayerObject_TypeInfo, v25, v26);
      peRenderTexture_ChangeLayerObject___ctor(v29, v28, v30);
      if ( v27 )
      {
        items = v27->fields._items;
        v34 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v27->fields._version;
        if ( items )
        {
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v29,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v29, v31, v32);
          }
          goto LABEL_15;
        }
      }
LABEL_46:
      sub_1B64324(transform);
    }
  }
LABEL_15:
  transform = *v19;
  if ( !*v19 )
    goto LABEL_46;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_46;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v44 = (System_Collections_IEnumerator_c **)&v42->_1.interfaceOffsets->offset;
      while ( *(v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        v44 += 2;
        if ( !v43 )
          goto LABEL_29;
      }
      v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1].method;
    }
    else
    {
LABEL_29:
      v45 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v46 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                       Enumerator,
                                       *(_QWORD *)(v45 + 8));
    if ( !v46 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v46->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v46);
LABEL_45:
      sub_1B64324(v46);
    }
    v48 = UnityEngine_Component__get_gameObject(v46, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v48, v49);
  }
  v50 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v50 )
  {
    v51 = *(_QWORD *)v50;
    v52 = v50;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_40;
      }
      v55 = v51 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_40:
      v55 = sub_1BB60A8(v50, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  }
}


void __fastcall peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  __int64 v5; // x1
  float m10; // s8
  float m30; // s14
  __int64 v8; // kr00_8
  float v9; // s10
  float v10; // s8
  char *Component_object; // x0
  __int64 v12; // x1
  __int64 RBindex; // x8
  unsigned int v14; // w10
  char *v15; // x20
  __int64 LTindex; // x9
  float *v17; // x10
  __int64 v18; // x9
  float v19; // s15
  float targetBoundsOffsetY; // s12
  float targetBoundsOffsetX; // s13
  float v22; // s11
  __int64 v23; // x8
  float *v24; // x8
  __int64 v25; // x8
  float *v26; // x8
  __int64 v27; // x1
  float v28; // [xsp+8h] [xbp-1C8h]
  float v29; // [xsp+Ch] [xbp-1C4h]
  float v30; // [xsp+10h] [xbp-1C0h]
  float v31; // [xsp+14h] [xbp-1BCh]
  float m20; // [xsp+18h] [xbp-1B8h]
  float value; // [xsp+1Ch] [xbp-1B4h]
  UnityEngine_Matrix4x4_o value_4; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+A0h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+E0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o bounds; // [xsp+120h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF0A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_49FF0A8 = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_43303948(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  m10 = bounds.fields.m10;
  m30 = bounds.fields.m30;
  v8 = *(_QWORD *)&bounds.fields.m01;
  m20 = bounds.fields.m20;
  value = bounds.fields.m00;
  if ( !byte_49F710F )
  {
    sub_1B640C8(&System_Math_TypeInfo, v5);
    byte_49F710F = 1;
  }
  v9 = m10 + *(float *)&v8;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( (float)(m10 - *(float *)&v8) >= -0.5 )
    v10 = (float)(v9 - (float)(m10 - *(float *)&v8)) * (float)(v9 - (float)(m10 - *(float *)&v8));
  else
    v10 = (float)(v9 + 0.5) * (float)(v9 + 0.5);
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  RBindex = this->fields._RBindex;
  v14 = *((_DWORD *)Component_object + 6);
  v15 = Component_object;
  if ( (unsigned int)RBindex >= v14 || (LTindex = this->fields._LTindex, (unsigned int)LTindex >= v14) )
LABEL_36:
    sub_1B6432C(Component_object, v12);
  v17 = (float *)&Component_object[12 * RBindex];
  v18 = (__int64)&Component_object[12 * LTindex + 32];
  v19 = v17[8];
  v28 = *(float *)(v18 + 8);
  v29 = v17[10];
  v30 = *(float *)(v18 + 4);
  v31 = *(float *)&Component_object[12 * RBindex + 36];
  if ( !byte_49F710F )
  {
    sub_1B640C8(&System_Math_TypeInfo, v12);
    byte_49F710F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_49F710F )
    {
      sub_1B640C8(&System_Math_TypeInfo, v27);
      byte_49F710F = 1;
    }
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  v22 = sqrtf(v10) * 0.5;
  v39.fields.x = (float)(sqrtf(
                           (float)((float)((float)(m20 + *((float *)&v8 + 1)) - (float)(m20 - *((float *)&v8 + 1)))
                                 * (float)((float)(m20 + *((float *)&v8 + 1)) - (float)(m20 - *((float *)&v8 + 1))))
                         + (float)((float)((float)((float)(value - m30) - (float)(value + m30))
                                         * (float)((float)(value - m30) - (float)(value + m30)))
                                 + (float)((float)(v9 - v9) * (float)(v9 - v9))))
                       + targetBoundsOffsetX)
               / sqrtf(
                   (float)((float)((float)(v19 - *(float *)&v8) * (float)(v19 - *(float *)&v8))
                         + (float)((float)(v29 - v28) * (float)(v29 - v28)))
                 + 0.0);
  v39.fields.y = (float)((float)(v22 + v22) + targetBoundsOffsetY)
               / sqrtf(
                   (float)((float)((float)(v19 - v19) * (float)(v19 - v19))
                         + (float)((float)(v31 - v30) * (float)(v31 - v30)))
                 + 0.0);
  v39.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v39, 0LL);
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  v40.fields.y = (float)(v9 - v22) - v22;
  v40.fields.z = m20;
  v40.fields.x = value;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_object, v40, 0LL);
  this->fields.targetBoundsCenter.fields.x = value;
  this->fields.targetBoundsCenter.fields.y = v9 - v22;
  this->fields.targetBoundsCenter.fields.z = m20;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v37,
                               (UnityEngine_Transform_o *)Component_object,
                               0LL);
  bounds = v37;
  v23 = this->fields._RBindex;
  if ( (unsigned int)v23 >= *((_DWORD *)v15 + 6) )
    goto LABEL_36;
  v24 = (float *)&v15[12 * v23];
  v41.fields.x = v24[8];
  v41.fields.y = v24[9];
  v41.fields.z = v24[10];
  v36 = bounds;
  v41.fields.w = 1.0;
  v42 = UnityEngine_Matrix4x4__op_Multiply_69056420(&v36, v41, 0LL);
  this->fields.targetBoundsRB.fields.x = v42.fields.x;
  this->fields.targetBoundsRB.fields.y = v42.fields.y;
  this->fields.targetBoundsRB.fields.z = v42.fields.z;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object
    || (Component_object = (char *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     0LL)) == 0LL )
  {
LABEL_35:
    sub_1B64324(Component_object);
  }
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v35,
                               (UnityEngine_Transform_o *)Component_object,
                               0LL);
  v37 = v35;
  v25 = this->fields._LTindex;
  if ( (unsigned int)v25 >= *((_DWORD *)v15 + 6) )
    goto LABEL_36;
  v26 = (float *)&v15[12 * v25];
  v43.fields.x = v26[8];
  v43.fields.y = v26[9];
  v43.fields.z = v26[10];
  value_4 = v37;
  v43.fields.w = 1.0;
  v44 = UnityEngine_Matrix4x4__op_Multiply_69056420(&value_4, v43, 0LL);
  this->fields.targetBoundsLT.fields.x = v44.fields.x;
  this->fields.targetBoundsLT.fields.y = v44.fields.y;
  this->fields.targetBoundsLT.fields.z = v44.fields.z;
}


void __fastcall peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  int32_t changeCullingMask; // w1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF0A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF0A7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.changeCullingMaskEnabled )
  {
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      targetChangeLayerObjects = this->fields.rasterCamera;
      if ( !targetChangeLayerObjects )
        goto LABEL_29;
      cullingMask = UnityEngine_Camera__get_cullingMask(targetChangeLayerObjects, 0LL);
      changeCullingMask = this->fields.changeCullingMask;
      if ( cullingMask != changeCullingMask )
      {
        targetChangeLayerObjects = this->fields.rasterCamera;
        if ( !targetChangeLayerObjects )
          goto LABEL_29;
        UnityEngine_Camera__set_cullingMask(targetChangeLayerObjects, changeCullingMask, 0LL);
      }
    }
  }
  targetChangeLayerObjects = (UnityEngine_Camera_o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_29:
    sub_1B64324(targetChangeLayerObjects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v11 )
      break;
    current = v22.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v22.fields._current )
        sub_1B64324(v11);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v22.fields._current,
        this->fields.changeLayer,
        v12);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, v16) )
      {
        v18 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, v17);
        if ( v18 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            v20);
        }
        else if ( v18 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, v19);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v12; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v14; // q1
  __int128 v15; // q2
  __int128 v16; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v18; // x0
  __int128 v19; // q1
  __int128 v20; // q2
  __int128 v21; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v23; // x0
  __int128 v24; // q1
  __int128 v25; // q2
  __int128 v26; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v29; // q1
  __int128 v30; // q2
  __int128 v31; // q3
  System_String_o *v32; // x1
  __int128 v33; // q1
  __int128 v34; // q2
  __int128 v35; // q3
  System_String_o *v36; // x1
  __int128 v37; // q1
  __int128 v38; // q2
  __int128 v39; // q3
  System_String_o *v40; // x1
  UnityEngine_Matrix4x4_o v41; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+110h] [xbp-1B0h]
  UnityEngine_Matrix4x4_o v46; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+190h] [xbp-130h]
  UnityEngine_Matrix4x4_o v48; // [xsp+1D0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+210h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+250h] [xbp-70h] BYREF

  if ( (byte_49FF0A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF0A9 = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    targetChangeLayerObjects,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  *(_OWORD *)&v50.fields._list = *(_OWORD *)&v49.fields.m00;
  v50.fields._current = *(Il2CppObject **)&v49.fields.m01;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v50.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v50.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
      if ( v12 )
      {
        if ( !monitor )
          sub_1B64324(v12);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v14 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v15 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v16 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v49.fields.m03 = v14;
        *(_OWORD *)&v49.fields.m00 = v15;
        *(_OWORD *)&v49.fields.m01 = v16;
        if ( !sharedMaterial )
          sub_1B64324(0LL);
        v48 = v49;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v48, 0LL);
        v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v19 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v20 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v21 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v47.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v47.fields.m03 = v19;
        *(_OWORD *)&v47.fields.m00 = v20;
        *(_OWORD *)&v47.fields.m01 = v21;
        if ( !v18 )
          sub_1B64324(0LL);
        v46 = v47;
        UnityEngine_Material__SetMatrix(v18, ParallelViewMat, &v46, 0LL);
        v23 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v24 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v25 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v26 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v45.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v45.fields.m03 = v24;
        *(_OWORD *)&v45.fields.m00 = v25;
        *(_OWORD *)&v45.fields.m01 = v26;
        if ( !v23 )
          sub_1B64324(0LL);
        v44 = v45;
        UnityEngine_Material__SetMatrix(v23, ParallelProjectionMat, &v44, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
    if ( targetChangeLayerObjects )
    {
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                0LL);
      v29 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v30 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v31 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v32 = this->fields.MainCamVPMat;
      *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v49.fields.m03 = v29;
      *(_OWORD *)&v49.fields.m00 = v30;
      *(_OWORD *)&v49.fields.m01 = v31;
      if ( targetChangeLayerObjects )
      {
        v43 = v49;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v32, &v43, 0LL);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0LL);
          v33 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v34 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v35 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v36 = this->fields.ParallelViewMat;
          *(_OWORD *)&v47.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v47.fields.m03 = v33;
          *(_OWORD *)&v47.fields.m00 = v34;
          *(_OWORD *)&v47.fields.m01 = v35;
          if ( targetChangeLayerObjects )
          {
            v42 = v47;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v36, &v42, 0LL);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0LL);
              v37 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v38 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v39 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v40 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v45.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v45.fields.m03 = v37;
              *(_OWORD *)&v45.fields.m00 = v38;
              *(_OWORD *)&v45.fields.m01 = v39;
              if ( targetChangeLayerObjects )
              {
                v41 = v45;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v40, &v41, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(targetChangeLayerObjects);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.gameObject = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)gameObject, v5, v6);
  peRenderTexture_ChangeLayerObject__Initialize(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x8

  if ( (byte_49FF0B0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_49FF0B0 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v6 = this->fields.gameObject;
    if ( v6 )
    {
      v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(v6, 0LL);
      v7 = this->fields.gameObject;
      this->fields.prevLayer = (int)v6;
      if ( v7 )
      {
        if ( UnityEngine_GameObject__get_layer(v7, 0LL) == layer )
          return;
        v6 = this->fields.gameObject;
        if ( v6 )
        {
          UnityEngine_GameObject__set_layer(v6, layer, 0LL);
          return;
        }
      }
    }
    sub_1B64324(v6);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *renderer; // x21
  UnityEngine_Object_o *changeMaterial; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Material_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v15; // x8
  UnityEngine_Material_o *v16; // x19

  if ( (byte_49FF0B2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, material);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF0B2 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(changeMaterial, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v8, v9);
      UnityEngine_Material___ctor_68991096(v10, material, 0LL);
      this->fields.changeMaterial = v10;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeMaterial, (int32_t)v10, v11, v12);
    }
    sharedMaterial = this->fields.renderer;
    if ( !sharedMaterial )
      goto LABEL_19;
    UnityEngine_Renderer__set_sharedMaterial(sharedMaterial, this->fields.changeMaterial, 0LL);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(orgMaterial, 0LL, 0LL) )
    {
      sharedMaterial = this->fields.renderer;
      if ( sharedMaterial )
      {
        sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(sharedMaterial, 0LL);
        v15 = this->fields.orgMaterial;
        if ( v15 )
        {
          v16 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v15, 0LL);
          if ( v16 )
          {
            UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)sharedMaterial, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1B64324(sharedMaterial);
    }
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__Finalize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_changeMaterial; // x20
  UnityEngine_Object_o *changeMaterial; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FF0AF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF0AF = 1;
  }
  p_changeMaterial = &this->fields.changeMaterial;
  changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(changeMaterial, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69127924(v5, 0LL);
    *p_changeMaterial = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeMaterial, 0, v6, v7);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    if ( !*p_renderer )
      sub_1B64324(0LL);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0LL);
  }
  this->fields.orgMaterial = 0LL;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_orgMaterial, 0, v10, v11);
  *(p_orgMaterial - 1) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_renderer, 0, v13, v14);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF0AE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF0AE = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    layer = this->fields.gameObject;
    if ( !layer
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               layer,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.renderer, (int32_t)Component_object, v7, v8),
          (layer = this->fields.gameObject) == 0LL)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_1B64324(layer);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    this->fields.orgMaterial = sharedMaterial;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.orgMaterial, (int32_t)sharedMaterial, v11, v12);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  UnityEngine_Renderer_o *v4; // x0

  if ( (byte_49FF0B3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF0B3 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v4 = this->fields.renderer;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_Renderer__set_sharedMaterial(v4, this->fields.orgMaterial, 0LL);
  }
}


bool __fastcall peRenderTexture_ChangeLayerObject__SyncLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FF0B1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF0B1 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v4 = this->fields.gameObject;
  if ( !v4 )
    goto LABEL_11;
  if ( UnityEngine_GameObject__get_layer(v4, 0LL) == this->fields.prevLayer )
    return 0;
  v4 = this->fields.gameObject;
  if ( !v4 )
LABEL_11:
    sub_1B64324(v4);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v4, 0LL);
  return 1;
}


int32_t __fastcall peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FF0AD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF0AD = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v4 = this->fields.gameObject;
  if ( !v4 )
    sub_1B64324(0LL);
  return UnityEngine_GameObject__get_layer(v4, 0LL);
}


void __fastcall peRenderTexture___c__DisplayClass48_0___ctor(
        peRenderTexture___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall peRenderTexture___c__DisplayClass48_0___registChangeLayerObjects_b__0(
        peRenderTexture___c__DisplayClass48_0_o *this,
        peRenderTexture_ChangeLayerObject_o *n,
        const MethodInfo *method)
{
  peRenderTexture___c__DisplayClass48_0_o *v4; // x20
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v6; // x20

  v4 = this;
  if ( (byte_49FF0B4 & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, n);
    byte_49FF0B4 = 1;
  }
  if ( !n )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0LL);
}