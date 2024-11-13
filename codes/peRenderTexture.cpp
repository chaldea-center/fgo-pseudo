void __fastcall peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B18F90 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16430/*"_MainCamVPMatrix"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_16469/*"_ParallelViewMatrix"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16468/*"_ParallelProjectionMatrix"*/, v11, v12);
    byte_4B18F90 = 1;
  }
  this->fields.changeCullingMask = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_BD3CD0;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.boundsUpdateCount = -1;
  v13 = StringLiteral_16430/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16430/*"_MainCamVPMatrix"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.MainCamVPMat, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_16469/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16469/*"_ParallelViewMatrix"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ParallelViewMat, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_16468/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16468/*"_ParallelProjectionMatrix"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ParallelProjectionMat, v21, v22, v23, v24, v25, v26, v27);
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
  peRenderTexture__CalcRendererBounds_44452120(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_44452120(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  peRenderTexture_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  float v19; // s9
  float32x2_t v20; // d8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v22; // d1
  unsigned __int64 v23; // d1
  __int128 v24; // q0
  float z; // s5
  float32x2_t v26; // d6
  float v27; // s7
  int8x8_t v28; // d20
  int8x8_t v29; // d4
  float v30; // s6
  int8x8_t v31; // d18
  float v32; // s5
  int8x8_t v33; // d0
  float v34; // s1
  int8x8_t v35; // d2
  int8x8_t v36; // d3
  float32x2_t v37; // d2
  float32x2_t v38; // d3
  float v39; // s4
  float32x2_t v40; // d3
  float v41; // s4
  float32x2_t v42; // d2
  float v43; // s5
  int8x8_t v44; // d6
  int8x8_t v45; // d2
  float v46; // s3
  float v47; // s4
  float32x2_t v48; // d6
  float32x2_t v49; // d0
  float v50; // s2
  float32x2_t v51; // d0
  float v52; // s1
  __int64 v53; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v59; // x8
  __int64 v60; // x9
  System_Collections_IEnumerator_c **v61; // x10
  __int64 v62; // x0
  UnityEngine_Component_o *v63; // x0
  __int64 v64; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v67; // x3
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x20
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  UnityEngine_Bounds_o v74; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v75; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B18F8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, obj, bounds);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    this = (peRenderTexture_o *)sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v13, v14);
    byte_4B18F8E = 1;
  }
  if ( !obj )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  this = (peRenderTexture_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_54;
    if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)Component_object, 0LL) )
    {
      v19 = bounds->fields.m_Extents.fields.x + bounds->fields.m_Extents.fields.x;
      v20.n64_u64[0] = vadd_f32(
                         *(float32x2_t *)&bounds->fields.m_Extents.fields.y,
                         *(float32x2_t *)&bounds->fields.m_Extents.fields.y).n64_u64[0];
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v18);
        byte_4B109C1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v22.n64_u64[0] = vsub_f32(v20, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v23 = vmul_f32(v22, v22).n64_u64[0];
      if ( (float)(*((float *)&v23 + 1)
                 + (float)((float)((float)(v19 - static_fields->zeroVector.fields.x)
                                 * (float)(v19 - static_fields->zeroVector.fields.x))
                         + *(float *)&v23)) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v75, (UnityEngine_Renderer_o *)Component_object, 0LL);
        z = bounds->fields.m_Center.fields.z;
        v26.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v27 = bounds->fields.m_Extents.fields.z;
        v28.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v26).n64_u64[0];
        v29.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v26).n64_u64[0];
        v30 = z - v27;
        v31.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v75.fields.m_Center.fields.x,
                           *(float32x2_t *)&v75.fields.m_Extents.fields.x).n64_u64[0];
        v32 = z + v27;
        v33.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v75.fields.m_Center.fields.x,
                           *(float32x2_t *)&v75.fields.m_Extents.fields.x).n64_u64[0];
        v34 = v75.fields.m_Center.fields.z + v75.fields.m_Extents.fields.z;
        v35.n64_u64[0] = vcgt_f32(v31, v28).n64_u64[0];
        v36.n64_u64[0] = vcgt_f32(v29, v31).n64_u64[0];
        if ( v30 >= (float)(v75.fields.m_Center.fields.z - v75.fields.m_Extents.fields.z) )
          v30 = v75.fields.m_Center.fields.z - v75.fields.m_Extents.fields.z;
        v37.n64_u64[0] = vbsl_s8(v35, v28, v31).n64_u64[0];
        v38.n64_u64[0] = vbsl_s8(v36, v29, v31).n64_u64[0];
        if ( v32 <= (float)(v75.fields.m_Center.fields.z - v75.fields.m_Extents.fields.z) )
          v39 = v75.fields.m_Center.fields.z - v75.fields.m_Extents.fields.z;
        else
          v39 = v32;
        v40.n64_u64[0] = vmul_f32(vsub_f32(v38, v37), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v41 = (float)(v39 - v30) * 0.5;
        v42.n64_u64[0] = vadd_f32(v37, v40).n64_u64[0];
        v43 = v30 + v41;
        v44.n64_u64[0] = vsub_f32(v42, v40).n64_u64[0];
        v45.n64_u64[0] = vadd_f32(v40, v42).n64_u64[0];
        v46 = v43 - v41;
        v47 = v41 + v43;
        v48.n64_u64[0] = vbsl_s8(vcgt_f32(v33, v44), v44, v33).n64_u64[0];
        v49.n64_u64[0] = vbsl_s8(vcgt_f32(v45, v33), v45, v33).n64_u64[0];
        if ( v46 >= v34 )
          v50 = v75.fields.m_Center.fields.z + v75.fields.m_Extents.fields.z;
        else
          v50 = v46;
        if ( v47 > v34 )
          v34 = v47;
        v51.n64_u64[0] = vmul_f32(vsub_f32(v49, v48), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v52 = (float)(v34 - v50) * 0.5;
        *(float32x2_t *)&bounds->fields.m_Extents.fields.x = v51;
        bounds->fields.m_Extents.fields.z = v52;
        *(float32x2_t *)&bounds->fields.m_Center.fields.x = vadd_f32(v48, v51);
        bounds->fields.m_Center.fields.z = v50 + v52;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v74, (UnityEngine_Renderer_o *)Component_object, 0LL);
        v24 = *(_OWORD *)&v74.fields.m_Center.fields.x;
        v75 = v74;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v74.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v24;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
LABEL_54:
    sub_1BCAA3C(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v53);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        p_offset += 4;
        if ( !v56 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v61 = (System_Collections_IEnumerator_c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_37;
      }
      v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 1].method;
    }
    else
    {
LABEL_37:
      v62 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v63 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v62)(
                                       Enumerator,
                                       *(_QWORD *)(v62 + 8));
    if ( !v63 )
      goto LABEL_53;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v63->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v63->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v63);
LABEL_53:
      sub_1BCAA3C(v63, v64);
    }
    gameObject = UnityEngine_Component__get_gameObject(v63, 0LL);
    peRenderTexture__CalcRendererBounds_44452120(v6, gameObject, bounds, v67);
  }
  v68 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v68 )
  {
    v69 = *(_QWORD *)v68;
    v70 = v68;
    v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_48;
      }
      v73 = v69 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_48:
      v73 = sub_1C1C7C0(v68, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
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
  __int64 v5; // x2
  float z; // s10
  float y; // s11
  float x; // s12
  float v9; // s8
  float v10; // s9
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v13; // x1
  UnityEngine_Camera_o *v14; // x0
  UnityEngine_Vector4_o v15; // q0 OVERLAPPED
  __int128 v16; // q2
  __int128 v17; // q3
  float v18; // s1
  float v19; // s10
  float v20; // s11
  float v21; // s12
  float w; // s8
  float v23; // s13
  float v24; // s14
  float v25; // s15
  float v26; // s9
  UnityEngine_Vector4_o v27; // q0 OVERLAPPED
  __int128 v28; // q2
  __int128 v29; // q3
  float v30; // s1
  float v31; // s8
  float v32; // s10
  peRenderTexture_o *v33; // x0
  const MethodInfo *v34; // x1
  __int128 v35; // q0
  __int128 v36; // q2
  __int128 v37; // q3
  UnityEngine_Matrix4x4_o v38; // [xsp+0h] [xbp-370h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+40h] [xbp-330h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+80h] [xbp-2F0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+C0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+100h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+140h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+180h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+1C0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+200h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+240h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+280h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+2C0h] [xbp-B0h] BYREF
  float v50; // [xsp+348h] [xbp-28h]
  float v51; // [xsp+34Ch] [xbp-24h]
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v9 = in_center.fields.y;
  v10 = in_center.fields.x;
  if ( (byte_4B18F8F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v5);
    byte_4B18F8F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v14 = this->fields.targetCamera;
    if ( !v14
      || (v50 = v10,
          v51 = v9,
          UnityEngine_Camera__get_projectionMatrix(&v48, v14, 0LL),
          v46 = v48,
          UnityEngine_GL__GetGPUProjectionMatrix(&v47, &v46, 1, 0LL),
          v48 = v47,
          (v14 = this->fields.targetCamera) == 0LL) )
    {
      sub_1BCAA3C(v14, v13);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v47, v14, 0LL);
    v43 = v47;
    v44 = v48;
    UnityEngine_Matrix4x4__op_Multiply(&v45, &v44, &v43, 0LL);
    v15 = *(UnityEngine_Vector4_o *)&v45.fields.m03;
    v17 = *(_OWORD *)&v45.fields.m00;
    v16 = *(_OWORD *)&v45.fields.m01;
    v47 = v45;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = *(_OWORD *)&v45.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03 = v15;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = v17;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v16;
    v42 = v47;
    LODWORD(v17) = 1.0;
    v15.fields.x = x;
    v18 = y;
    *(float *)&v16 = z;
    v52 = UnityEngine_Matrix4x4__op_Multiply_70082840(&v42, v15, 0LL);
    v19 = v52.fields.x;
    v20 = v52.fields.y;
    v21 = v52.fields.z;
    w = v52.fields.w;
    v52 = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m03;
    *(UnityEngine_Vector4_o *)&v52.fields.z = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m00;
    *(UnityEngine_Vector4_o *)&v52.fields.w = *(UnityEngine_Vector4_o *)&this->fields.MainCamVP.fields.m01;
    *(_OWORD *)&v41.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(UnityEngine_Vector4_o *)&v41.fields.m03 = v52;
    *(UnityEngine_Vector4_o *)&v41.fields.m00 = *(UnityEngine_Vector4_o *)&v52.fields.z;
    *(UnityEngine_Vector4_o *)&v41.fields.m01 = *(UnityEngine_Vector4_o *)&v52.fields.w;
    v52.fields.w = 1.0;
    v52.fields.x = in_RightBottom.fields.x;
    v52.fields.y = in_RightBottom.fields.y;
    v52.fields.z = in_RightBottom.fields.z;
    v53 = UnityEngine_Matrix4x4__op_Multiply_70082840(&v41, v52, 0LL);
    v23 = v53.fields.x / v53.fields.w;
    v24 = v53.fields.y / v53.fields.w;
    v53.fields.x = v50;
    v53.fields.y = v51;
    v25 = v53.fields.z / v53.fields.w;
    v53.fields.z = 0.0;
    v26 = v53.fields.w / v53.fields.w;
    UnityEngine_Matrix4x4__Translate(&v40, *(UnityEngine_Vector3_o *)&v53.fields.x, 0LL);
    v27 = *(UnityEngine_Vector4_o *)&v40.fields.m03;
    v29 = *(_OWORD *)&v40.fields.m00;
    v28 = *(_OWORD *)&v40.fields.m01;
    v45 = v40;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = *(_OWORD *)&v40.fields.m02;
    *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03 = v27;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = v29;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v28;
    v39 = v45;
    v27.fields.x = v19 / w;
    v30 = v20 / w;
    *(float *)&v28 = v21 / w;
    *(float *)&v29 = w / w;
    v54 = UnityEngine_Matrix4x4__op_Multiply_70082840(&v39, v27, 0LL);
    v31 = v54.fields.x;
    v32 = v54.fields.y;
    v54 = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m03;
    *(UnityEngine_Vector4_o *)&v54.fields.z = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m00;
    *(UnityEngine_Vector4_o *)&v54.fields.w = *(UnityEngine_Vector4_o *)&this->fields.orthoViewMat.fields.m01;
    *(_OWORD *)&v38.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(UnityEngine_Vector4_o *)&v38.fields.m03 = v54;
    *(UnityEngine_Vector4_o *)&v38.fields.m00 = *(UnityEngine_Vector4_o *)&v54.fields.z;
    *(UnityEngine_Vector4_o *)&v38.fields.m01 = *(UnityEngine_Vector4_o *)&v54.fields.w;
    v54.fields.x = v23;
    v54.fields.y = v24;
    v54.fields.z = v25;
    v54.fields.w = v26;
    v55 = UnityEngine_Matrix4x4__op_Multiply_70082840(&v38, v54, 0LL);
    peRenderTexture__orthogonalMatrix(&v49, v33, v31, v55.fields.x, v55.fields.y, v32, v34);
    v35 = *(_OWORD *)&v49.fields.m03;
    v37 = *(_OWORD *)&v49.fields.m00;
    v36 = *(_OWORD *)&v49.fields.m01;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = *(_OWORD *)&v49.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = v35;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = v37;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__LateUpdate(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  int32_t boundsUpdateCount; // w8
  bool v10; // vf
  int32_t v11; // w8
  __int64 v12; // x1
  UnityEngine_Object_o *rasterCamera; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int64 v16; // x1
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v19; // s8
  float aspect; // s0
  float v21; // s9
  float v22; // s0
  float v23; // s10
  float farClipPlane; // s0
  __int64 v25; // x2
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v33; // [xsp+0h] [xbp-300h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+40h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+80h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+C0h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+100h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+140h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+180h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+1C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+200h] [xbp-100h]
  UnityEngine_Matrix4x4_o v42; // [xsp+240h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+280h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18F87 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16476/*"_ProjectorMatrixVP"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_16477/*"_ProjectorPos"*/, v6, v7);
    byte_4B18F87 = 1;
  }
  if ( this->fields.isInitialized )
  {
    peRenderTexture__updateLayer(this, method);
    if ( this->fields._boundsUpdateCount )
    {
      peRenderTexture__updateBounds(this, v8);
      boundsUpdateCount = this->fields._boundsUpdateCount;
      v10 = __OFSUB__(boundsUpdateCount, 1);
      v11 = boundsUpdateCount - 1;
      if ( v11 < 0 == v10 )
        this->fields._boundsUpdateCount = v11;
    }
    peRenderTexture__updateTransform(this, v8);
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
      {
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v45.fields.m_XMin = 0.0;
        v45.fields.m_YMin = 0.0;
        v45.fields.m_Width = 1.0;
        v45.fields.m_Height = 1.0;
        UnityEngine_Camera__set_rect(transform, v45, 0LL);
        v44.fields.x = 1.0;
        v44.fields.y = 1.0;
        v44.fields.z = -1.0;
        UnityEngine_Matrix4x4__Scale(&v43, v44, 0LL);
        v41 = v43;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v43, (UnityEngine_Transform_o *)transform, 0LL);
        v39 = v43;
        v40 = v41;
        UnityEngine_Matrix4x4__op_Multiply(&v42, &v40, &v39, 0LL);
        v43 = v42;
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v19 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v21 = aspect;
        v22 = UnityEngine_Camera__get_nearClipPlane(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v23 = v22;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v38, v19, v21, v23, farClipPlane, 0LL);
        v42 = v38;
        v37 = v38;
        UnityEngine_GL__GetGPUProjectionMatrix(&v38, &v37, 1, 0LL);
        v42 = v38;
        if ( !byte_4B10CC7 )
        {
          sub_1BCA7E0(&UnityEngine_Vector4_TypeInfo, v16, v25);
          byte_4B10CC7 = 1;
        }
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
        if ( !transform )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        transform = (UnityEngine_Camera_o *)this->fields.boardrenderer;
        if ( !transform )
          goto LABEL_30;
        v29 = v26;
        v30 = v27;
        v31 = v28;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)transform, 0LL);
        v35 = v42;
        v34 = v43;
        transform = (UnityEngine_Camera_o *)UnityEngine_Matrix4x4__op_Multiply(&v36, &v35, &v34, 0LL);
        v38 = v36;
        if ( !sharedMaterial
          || (v33 = v38,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16476/*"_ProjectorMatrixVP"*/, &v33, 0LL),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0LL)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0LL)) == 0LL )
        {
LABEL_30:
          sub_1BCAA3C(transform, v16);
        }
        v46.fields.w = 1.0;
        v46.fields.x = v29;
        v46.fields.y = v30;
        v46.fields.z = v31;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16477/*"_ProjectorPos"*/,
          v46,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_Camera_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *renderTexture; // x20
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18F89 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B18F89 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rasterCamera, 0LL, v18, v19, v20, v21, v22, v23);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0LL, 0LL) )
      goto LABEL_18;
    p_renderTexture = &this->fields.renderTexture;
    v15 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v15 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v15, 0LL);
      v27 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      UnityEngine_Object__DestroyImmediate_70154432(v27, 0LL);
      *p_renderTexture = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.renderTexture, 0LL, v28, v29, v30, v31, v32, v33);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          targetChangeLayerObjects,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v42.fields._current )
            sub_1BCAA3C(0LL, v35);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v42.fields._current, v35);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.targetChangeLayerObjects,
          0LL,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_1BCAA3C(v15, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *transform; // x20
  __int64 v38; // x1
  UnityEngine_Object_o *v39; // x21
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x21
  struct UnityEngine_GameObject_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  Il2CppObject *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_List_object__o *v78; // x22
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  const MethodInfo *v85; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v87; // x0
  __int64 v88; // x1
  UnityEngine_Transform_o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x1
  UnityEngine_Object_o *v92; // x22
  _BOOL8 v93; // x0
  __int64 v94; // x1
  UnityEngine_GameObject_o *v95; // x0
  const MethodInfo *v96; // x2
  __int64 v97; // x1
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  __int64 v100; // x1
  UnityEngine_Object_o *v101; // x23
  UnityEngine_Object_o *v102; // x23
  __int64 v103; // x1
  UnityEngine_Object_o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v112; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  __int64 v120; // x1
  Il2CppObject *v121; // x23
  Il2CppObject *v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  UnityEngine_Component_o *v129; // x8
  UnityEngine_Transform_o *v130; // x20
  UnityEngine_Transform_o *v131; // x20
  float v132; // s0
  float v133; // s1
  float v134; // s2
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18F88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Camera___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_Camera___, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_RenderTexture_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v32, v33);
    byte_4B18F88 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v137, 0, sizeof(v137));
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      if ( UnityEngine_Object__op_Equality(transform, 0LL, 0LL) )
      {
        v39 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)v39,
                                                0LL);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(transform, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !transform )
          goto LABEL_85;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.targetCamera,
          (int64_t)Component_object,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
    }
    p_targetCamera = &this->fields.targetCamera;
    targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
    {
      main = UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = main;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetCamera, (int64_t)main, v50, v51, v52, v53, v54, v55);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      v58 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_85;
        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v58, 0LL);
      }
      else
      {
        v59 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
      }
      this->fields.targetObject = v59;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetObject, (int64_t)v59, v60, v61, v62, v63, v64, v65);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0LL, 0LL) )
    {
      v71 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v71;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.boardrenderer, (int64_t)v71, v72, v73, v74, v75, v76, v77);
    }
    v78 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo,
                                                         v68,
                                                         v69,
                                                         v70);
    System_Collections_Generic_List_object____ctor(
      v78,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v78;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.targetChangeLayerObjects,
      (int64_t)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v136,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v136;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields._current, v85) )
      {
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v136,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v137 = v136;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v137,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v137.fields._current;
          v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v87 )
            sub_1BCAA3C(0LL, v88);
          v89 = UnityEngine_GameObject__get_transform(v87, 0LL);
          if ( !v89 )
            sub_1BCAA3C(0LL, v90);
          v92 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v89, (System_String_o *)current, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
          v93 = UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
          if ( v93 )
          {
            if ( !v92 )
              sub_1BCAA3C(v93, v94);
            v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v92, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v95, v96);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v137,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v101 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
          if ( !UnityEngine_Object__op_Equality(v101, 0LL, 0LL) )
            goto LABEL_80;
        }
        v102 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
        if ( !UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
          goto LABEL_80;
        v104 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
        if ( !UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
          goto LABEL_80;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v112 = (UnityEngine_RenderTexture_o *)sub_1BCAA2C(UnityEngine_RenderTexture_TypeInfo, v105, v106, v107);
        UnityEngine_RenderTexture___ctor_70060824(v112, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v112;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.renderTexture,
          (int64_t)v112,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119);
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
            v121 = (Il2CppObject *)this->fields.targetCamera;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v120);
            v122 = UnityEngine_Object__Instantiate_object_(
                     v121,
                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v122;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.rasterCamera,
              (int64_t)v122,
              v123,
              v124,
              v125,
              v126,
              v127,
              v128);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
              v129 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v130 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v129, 0LL);
                if ( v130 )
                {
                  UnityEngine_Transform__SetParent(v130, (UnityEngine_Transform_o *)gameObject, 0LL);
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
                          v131 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0LL);
                          if ( gameObject )
                          {
                            *(UnityEngine_Vector3_o *)&v132 = UnityEngine_Transform__get_position(
                                                                (UnityEngine_Transform_o *)gameObject,
                                                                0LL);
                            if ( v131 )
                            {
                              v139.fields.z = v134 + this->fields.cameraOffset.fields.z;
                              v139.fields.y = v133 + this->fields.cameraOffset.fields.y;
                              v139.fields.x = v132 + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v131, v139, 0LL);
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
                                    (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
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
    sub_1BCAA3C(gameObject, v34);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_GameObject_o **v35; // x20
  __int64 v36; // x1
  Il2CppObject *Component_object; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x21
  UnityEngine_GameObject_o *v45; // x23
  peRenderTexture_ChangeLayerObject_o *v46; // x22
  const MethodInfo *v47; // x2
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v64; // x8
  __int64 v65; // x9
  System_Collections_IEnumerator_c **v66; // x10
  __int64 v67; // x0
  UnityEngine_Component_o *v68; // x0
  __int64 v69; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v71; // x0
  const MethodInfo *v72; // x2
  __int64 v73; // x0
  __int64 v74; // x8
  __int64 v75; // x20
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0

  if ( (byte_4B18F8A & 1) == 0 )
  {
    sub_1BCA7E0(&peRenderTexture_ChangeLayerObject_TypeInfo, gameObject, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v22, v23);
    sub_1BCA7E0(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v24, v25);
    byte_4B18F8A = 1;
  }
  v26 = sub_1BCAA2C(peRenderTexture___c__DisplayClass48_0_TypeInfo, gameObject, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_46;
  *(_QWORD *)(v26 + 16) = gameObject;
  v35 = (UnityEngine_GameObject_o **)(v26 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)gameObject, v29, v30, v31, v32, v33, v34);
  transform = *(UnityEngine_GameObject_o **)(v26 + 16);
  if ( !transform )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v41 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo,
                                          v28,
                                          v38,
                                          v39);
    System_Predicate_object____ctor(
      v41,
      (Il2CppObject *)v26,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0LL);
    if ( !targetChangeLayerObjects )
      goto LABEL_46;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v41,
            (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v44 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v45 = *v35;
      v46 = (peRenderTexture_ChangeLayerObject_o *)sub_1BCAA2C(
                                                     peRenderTexture_ChangeLayerObject_TypeInfo,
                                                     v28,
                                                     v42,
                                                     v43);
      peRenderTexture_ChangeLayerObject___ctor(v46, v45, v47);
      if ( v44 )
      {
        items = v44->fields._items;
        v55 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v44->fields._version;
        if ( items )
        {
          size = v44->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v46,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v44->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v46;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v46, v48, v49, v50, v51, v52, v53);
          }
          goto LABEL_15;
        }
      }
LABEL_46:
      sub_1BCAA3C(transform, v28);
    }
  }
LABEL_15:
  transform = *v35;
  if ( !*v35 )
    goto LABEL_46;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_46;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v58);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v61 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v61;
        p_offset += 4;
        if ( !v61 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v64 = Enumerator->klass;
    v65 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v66 = (System_Collections_IEnumerator_c **)&v64->_1.interfaceOffsets->offset;
      while ( *(v66 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v65;
        v66 += 2;
        if ( !v65 )
          goto LABEL_29;
      }
      v67 = (__int64)&v64->vtable[*(_DWORD *)v66 + 1].method;
    }
    else
    {
LABEL_29:
      v67 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v68 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v67)(
                                       Enumerator,
                                       *(_QWORD *)(v67 + 8));
    if ( !v68 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v68->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v68->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v68);
LABEL_45:
      sub_1BCAA3C(v68, v69);
    }
    v71 = UnityEngine_Component__get_gameObject(v68, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v71, v72);
  }
  v73 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v73 )
  {
    v74 = *(_QWORD *)v73;
    v75 = v73;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_40;
      }
      v78 = v74 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_40:
      v78 = sub_1C1C7C0(v73, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v78)(v75, *(_QWORD *)(v78 + 8));
  }
}


void __fastcall peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  float m10; // s8
  float m30; // s14
  __int64 v10; // kr00_8
  float v11; // s10
  float v12; // s8
  char *Component_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 RBindex; // x8
  unsigned int v17; // w10
  char *v18; // x20
  __int64 LTindex; // x9
  float *v20; // x10
  __int64 v21; // x9
  float v22; // s15
  float targetBoundsOffsetY; // s12
  float targetBoundsOffsetX; // s13
  float v25; // s11
  __int64 v26; // x8
  float *v27; // x8
  __int64 v28; // x8
  float *v29; // x8
  __int64 v30; // x2
  float v31; // [xsp+8h] [xbp-1C8h]
  float v32; // [xsp+Ch] [xbp-1C4h]
  float v33; // [xsp+10h] [xbp-1C0h]
  float v34; // [xsp+14h] [xbp-1BCh]
  float m20; // [xsp+18h] [xbp-1B8h]
  float value; // [xsp+1Ch] [xbp-1B4h]
  UnityEngine_Matrix4x4_o value_4; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+A0h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+E0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o bounds; // [xsp+120h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18F8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method, v2);
    byte_4B18F8C = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_44452120(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v3);
  m10 = bounds.fields.m10;
  m30 = bounds.fields.m30;
  v10 = *(_QWORD *)&bounds.fields.m01;
  m20 = bounds.fields.m20;
  value = bounds.fields.m00;
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    byte_4B109BF = 1;
  }
  v11 = m10 + *(float *)&v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  if ( (float)(m10 - *(float *)&v10) >= -0.5 )
    v12 = (float)(v11 - (float)(m10 - *(float *)&v10)) * (float)(v11 - (float)(m10 - *(float *)&v10));
  else
    v12 = (float)(v11 + 0.5) * (float)(v11 + 0.5);
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  RBindex = this->fields._RBindex;
  v17 = *((_DWORD *)Component_object + 6);
  v18 = Component_object;
  if ( (unsigned int)RBindex >= v17 || (LTindex = this->fields._LTindex, (unsigned int)LTindex >= v17) )
LABEL_36:
    sub_1BCAA44(Component_object, v14);
  v20 = (float *)&Component_object[12 * RBindex];
  v21 = (__int64)&Component_object[12 * LTindex + 32];
  v22 = v20[8];
  v31 = *(float *)(v21 + 8);
  v32 = v20[10];
  v33 = *(float *)(v21 + 4);
  v34 = *(float *)&Component_object[12 * RBindex + 36];
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v14, v15);
    byte_4B109BF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14);
    if ( !byte_4B109BF )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v14, v30);
      byte_4B109BF = 1;
    }
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  v25 = sqrtf(v12) * 0.5;
  v42.fields.x = (float)(sqrtf(
                           (float)((float)((float)(m20 + *((float *)&v10 + 1)) - (float)(m20 - *((float *)&v10 + 1)))
                                 * (float)((float)(m20 + *((float *)&v10 + 1)) - (float)(m20 - *((float *)&v10 + 1))))
                         + (float)((float)((float)((float)(value - m30) - (float)(value + m30))
                                         * (float)((float)(value - m30) - (float)(value + m30)))
                                 + (float)((float)(v11 - v11) * (float)(v11 - v11))))
                       + targetBoundsOffsetX)
               / sqrtf(
                   (float)((float)((float)(v22 - *(float *)&v10) * (float)(v22 - *(float *)&v10))
                         + (float)((float)(v32 - v31) * (float)(v32 - v31)))
                 + 0.0);
  v42.fields.y = (float)((float)(v25 + v25) + targetBoundsOffsetY)
               / sqrtf(
                   (float)((float)((float)(v22 - v22) * (float)(v22 - v22))
                         + (float)((float)(v34 - v33) * (float)(v34 - v33)))
                 + 0.0);
  v42.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v42, 0LL);
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  v43.fields.y = (float)(v11 - v25) - v25;
  v43.fields.z = m20;
  v43.fields.x = value;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_object, v43, 0LL);
  this->fields.targetBoundsCenter.fields.x = value;
  this->fields.targetBoundsCenter.fields.y = v11 - v25;
  this->fields.targetBoundsCenter.fields.z = m20;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_35;
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v40,
                               (UnityEngine_Transform_o *)Component_object,
                               0LL);
  bounds = v40;
  v26 = this->fields._RBindex;
  if ( (unsigned int)v26 >= *((_DWORD *)v18 + 6) )
    goto LABEL_36;
  v27 = (float *)&v18[12 * v26];
  v44.fields.x = v27[8];
  v44.fields.y = v27[9];
  v44.fields.z = v27[10];
  v39 = bounds;
  v44.fields.w = 1.0;
  v45 = UnityEngine_Matrix4x4__op_Multiply_70082840(&v39, v44, 0LL);
  this->fields.targetBoundsRB.fields.x = v45.fields.x;
  this->fields.targetBoundsRB.fields.y = v45.fields.y;
  this->fields.targetBoundsRB.fields.z = v45.fields.z;
  Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object
    || (Component_object = (char *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     0LL)) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(Component_object, v14);
  }
  Component_object = (char *)UnityEngine_Transform__get_localToWorldMatrix(
                               &v38,
                               (UnityEngine_Transform_o *)Component_object,
                               0LL);
  v40 = v38;
  v28 = this->fields._LTindex;
  if ( (unsigned int)v28 >= *((_DWORD *)v18 + 6) )
    goto LABEL_36;
  v29 = (float *)&v18[12 * v28];
  v46.fields.x = v29[8];
  v46.fields.y = v29[9];
  v46.fields.z = v29[10];
  value_4 = v40;
  v46.fields.w = 1.0;
  v47 = UnityEngine_Matrix4x4__op_Multiply_70082840(&value_4, v46, 0LL);
  this->fields.targetBoundsLT.fields.x = v47.fields.x;
  this->fields.targetBoundsLT.fields.y = v47.fields.y;
  this->fields.targetBoundsLT.fields.z = v47.fields.z;
}


void __fastcall peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  int32_t v23; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18F8B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B18F8B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.changeCullingMaskEnabled )
  {
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      targetChangeLayerObjects = this->fields.rasterCamera;
      if ( !targetChangeLayerObjects )
        goto LABEL_29;
      cullingMask = UnityEngine_Camera__get_cullingMask(targetChangeLayerObjects, 0LL);
      method = (const MethodInfo *)(unsigned int)this->fields.changeCullingMask;
      if ( cullingMask != (_DWORD)method )
      {
        targetChangeLayerObjects = this->fields.rasterCamera;
        if ( !targetChangeLayerObjects )
          goto LABEL_29;
        UnityEngine_Camera__set_cullingMask(targetChangeLayerObjects, (int32_t)method, 0LL);
      }
    }
  }
  targetChangeLayerObjects = (UnityEngine_Camera_o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_29:
    sub_1BCAA3C(targetChangeLayerObjects, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v15 )
      break;
    current = v27.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v27.fields._current )
        sub_1BCAA3C(v15, v16);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v27.fields._current,
        this->fields.changeLayer,
        v17);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v20 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0LL, 0LL);
    if ( v20 )
    {
      if ( !current )
        sub_1BCAA3C(v20, v21);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, v21) )
      {
        v23 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, v22);
        if ( v23 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            v25);
        }
        else if ( v23 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, v24);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x1
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v22; // q1
  __int128 v23; // q2
  __int128 v24; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v26; // x0
  __int128 v27; // q1
  __int128 v28; // q2
  __int128 v29; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v31; // x0
  __int128 v32; // q1
  __int128 v33; // q2
  __int128 v34; // q3
  System_String_o *ParallelProjectionMat; // x1
  __int64 v36; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v38; // q1
  __int128 v39; // q2
  __int128 v40; // q3
  __int128 v41; // q1
  __int128 v42; // q2
  __int128 v43; // q3
  __int128 v44; // q1
  __int128 v45; // q2
  __int128 v46; // q3
  UnityEngine_Matrix4x4_o v47; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v50; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+110h] [xbp-1B0h]
  UnityEngine_Matrix4x4_o v52; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v53; // [xsp+190h] [xbp-130h]
  UnityEngine_Matrix4x4_o v54; // [xsp+1D0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v55; // [xsp+210h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+250h] [xbp-70h] BYREF

  if ( (byte_4B18F8D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B18F8D = 1;
  }
  memset(&v56, 0, sizeof(v56));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    targetChangeLayerObjects,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  *(_OWORD *)&v56.fields._list = *(_OWORD *)&v55.fields.m00;
  v56.fields._current = *(Il2CppObject **)&v55.fields.m01;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v56.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v56.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v19 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
      if ( v19 )
      {
        if ( !monitor )
          sub_1BCAA3C(v19, v20);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v22 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v23 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v24 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v55.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v55.fields.m03 = v22;
        *(_OWORD *)&v55.fields.m00 = v23;
        *(_OWORD *)&v55.fields.m01 = v24;
        if ( !sharedMaterial )
          sub_1BCAA3C(0LL, MainCamVPMat);
        v54 = v55;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v54, 0LL);
        v26 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v27 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v28 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v29 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v53.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v53.fields.m03 = v27;
        *(_OWORD *)&v53.fields.m00 = v28;
        *(_OWORD *)&v53.fields.m01 = v29;
        if ( !v26 )
          sub_1BCAA3C(0LL, ParallelViewMat);
        v52 = v53;
        UnityEngine_Material__SetMatrix(v26, ParallelViewMat, &v52, 0LL);
        v31 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v32 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v33 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v34 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v51.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v51.fields.m03 = v32;
        *(_OWORD *)&v51.fields.m00 = v33;
        *(_OWORD *)&v51.fields.m01 = v34;
        if ( !v31 )
          sub_1BCAA3C(0LL, ParallelProjectionMat);
        v50 = v51;
        UnityEngine_Material__SetMatrix(v31, ParallelProjectionMat, &v50, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
    if ( targetChangeLayerObjects )
    {
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                0LL);
      v38 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v39 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v40 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v12 = this->fields.MainCamVPMat;
      *(_OWORD *)&v55.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v55.fields.m03 = v38;
      *(_OWORD *)&v55.fields.m00 = v39;
      *(_OWORD *)&v55.fields.m01 = v40;
      if ( targetChangeLayerObjects )
      {
        v49 = v55;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v12, &v49, 0LL);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0LL);
          v41 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v42 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v43 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v12 = this->fields.ParallelViewMat;
          *(_OWORD *)&v53.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v53.fields.m03 = v41;
          *(_OWORD *)&v53.fields.m00 = v42;
          *(_OWORD *)&v53.fields.m01 = v43;
          if ( targetChangeLayerObjects )
          {
            v48 = v53;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v12, &v48, 0LL);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0LL);
              v44 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v45 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v46 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v12 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v51.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v51.fields.m03 = v44;
              *(_OWORD *)&v51.fields.m00 = v45;
              *(_OWORD *)&v51.fields.m01 = v46;
              if ( targetChangeLayerObjects )
              {
                v47 = v51;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v12, &v47, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(targetChangeLayerObjects, v12);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.gameObject = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)gameObject, v5, v6, v7, v8, v9, v10);
  peRenderTexture_ChangeLayerObject__Initialize(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x8

  if ( (byte_4B18F94 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer, method);
    byte_4B18F94 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v7 = this->fields.gameObject;
    if ( v7 )
    {
      v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(v7, 0LL);
      v8 = this->fields.gameObject;
      this->fields.prevLayer = (int)v7;
      if ( v8 )
      {
        if ( UnityEngine_GameObject__get_layer(v8, 0LL) == layer )
          return;
        v7 = this->fields.gameObject;
        if ( v7 )
        {
          UnityEngine_GameObject__set_layer(v7, layer, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(v7, v6);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *renderer; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *changeMaterial; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_Material_o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Renderer_o *sharedMaterial; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v23; // x8
  UnityEngine_Material_o *v24; // x19

  if ( (byte_4B18F96 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, material, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18F96 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, material);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(changeMaterial, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v10, v11, v12);
      UnityEngine_Material___ctor_70017516(v13, material, 0LL);
      this->fields.changeMaterial = v13;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.changeMaterial,
        (int64_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    sharedMaterial = this->fields.renderer;
    if ( !sharedMaterial )
      goto LABEL_19;
    UnityEngine_Renderer__set_sharedMaterial(sharedMaterial, this->fields.changeMaterial, 0LL);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(orgMaterial, 0LL, 0LL) )
    {
      sharedMaterial = this->fields.renderer;
      if ( sharedMaterial )
      {
        sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(sharedMaterial, 0LL);
        v23 = this->fields.orgMaterial;
        if ( v23 )
        {
          v24 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v23, 0LL);
          if ( v24 )
          {
            UnityEngine_Material__set_mainTexture(v24, (UnityEngine_Texture_o *)sharedMaterial, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1BCAA3C(sharedMaterial, v10);
    }
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__Finalize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Material_o **p_changeMaterial; // x20
  UnityEngine_Object_o *changeMaterial; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B18F93 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18F93 = 1;
  }
  p_changeMaterial = &this->fields.changeMaterial;
  changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(changeMaterial, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__DestroyImmediate_70154432(v7, 0LL);
    *p_changeMaterial = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.changeMaterial, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    if ( !*p_renderer )
      sub_1BCAA3C(0LL, v16);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0LL);
  }
  this->fields.orgMaterial = 0LL;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_1BCA784((PartyOrganizationUtility_o *)p_orgMaterial, 0LL, v17, v18, v19, v20, v21, v22);
  *(p_orgMaterial - 1) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_renderer, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B18F92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18F92 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    layer = this->fields.gameObject;
    if ( !layer
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               layer,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.renderer,
            (int64_t)Component_object,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          (layer = this->fields.gameObject) == 0LL)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_1BCAA3C(layer, v7);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    this->fields.orgMaterial = sharedMaterial;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.orgMaterial,
      (int64_t)sharedMaterial,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *renderer; // x20
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x0

  if ( (byte_4B18F97 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18F97 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v6 = this->fields.renderer;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_Renderer__set_sharedMaterial(v6, this->fields.orgMaterial, 0LL);
  }
}


bool __fastcall peRenderTexture_ChangeLayerObject__SyncLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B18F95 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18F95 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v6 = this->fields.gameObject;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_GameObject__get_layer(v6, 0LL) == this->fields.prevLayer )
    return 0;
  v6 = this->fields.gameObject;
  if ( !v6 )
LABEL_11:
    sub_1BCAA3C(v6, v5);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v6, 0LL);
  return 1;
}


int32_t __fastcall peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B18F91 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18F91 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v6 = this->fields.gameObject;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_GameObject__get_layer(v6, 0LL);
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
  if ( (byte_4B18F98 & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, n, method);
    byte_4B18F98 = 1;
  }
  if ( !n )
    sub_1BCAA3C(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, n);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0LL);
}