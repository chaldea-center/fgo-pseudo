void __fastcall peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BCA909 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16528/*"_MainCamVPMatrix"*/, method);
    sub_1C1ABD4(&StringLiteral_16567/*"_ParallelViewMatrix"*/, v9);
    sub_1C1ABD4(&StringLiteral_16566/*"_ParallelProjectionMatrix"*/, v10);
    byte_4BCA909 = 1;
  }
  this->fields.changeCullingMask = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_BFB6E0;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  this->fields.boundsUpdateCount = -1;
  v11 = StringLiteral_16528/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16528/*"_MainCamVPMatrix"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.MainCamVPMat, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_16567/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16567/*"_ParallelViewMatrix"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ParallelViewMat, v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_16566/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16566/*"_ParallelProjectionMatrix"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ParallelProjectionMat, v19, v20, v21, v22, v23, v24, v25);
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
  peRenderTexture__CalcRendererBounds_44974420(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_44974420(
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
  __int64 v47; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v50; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  UnityEngine_Component_o *v57; // x0
  __int64 v58; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v61; // x3
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x20
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  UnityEngine_Bounds_o v68; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v69; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BCA907 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, obj);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    this = (peRenderTexture_o *)sub_1C1ABD4(&UnityEngine_Transform_TypeInfo, v10);
    byte_4BCA907 = 1;
  }
  if ( !obj )
    goto LABEL_54;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
      if ( !byte_4BC2141 )
      {
        sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v12);
        byte_4BC2141 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v16.n64_u64[0] = vsub_f32(v14, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v17 = vmul_f32(v16, v16).n64_u64[0];
      if ( (float)(*((float *)&v17 + 1)
                 + (float)((float)((float)(v13 - static_fields->zeroVector.fields.x)
                                 * (float)(v13 - static_fields->zeroVector.fields.x))
                         + *(float *)&v17)) >= 1.0e-10 )
      {
        UnityEngine_Renderer__get_bounds(&v69, (UnityEngine_Renderer_o *)Component_object, 0LL);
        z = bounds->fields.m_Center.fields.z;
        v20.n64_u64[0] = *(unsigned __int64 *)&bounds->fields.m_Extents.fields.x;
        v21 = bounds->fields.m_Extents.fields.z;
        v22.n64_u64[0] = vsub_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v20).n64_u64[0];
        v23.n64_u64[0] = vadd_f32(*(float32x2_t *)&bounds->fields.m_Center.fields.x, v20).n64_u64[0];
        v24 = z - v21;
        v25.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)&v69.fields.m_Center.fields.x,
                           *(float32x2_t *)&v69.fields.m_Extents.fields.x).n64_u64[0];
        v26 = z + v21;
        v27.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)&v69.fields.m_Center.fields.x,
                           *(float32x2_t *)&v69.fields.m_Extents.fields.x).n64_u64[0];
        v28 = v69.fields.m_Center.fields.z + v69.fields.m_Extents.fields.z;
        v29.n64_u64[0] = vcgt_f32(v25, v22).n64_u64[0];
        v30.n64_u64[0] = vcgt_f32(v23, v25).n64_u64[0];
        if ( v24 >= (float)(v69.fields.m_Center.fields.z - v69.fields.m_Extents.fields.z) )
          v24 = v69.fields.m_Center.fields.z - v69.fields.m_Extents.fields.z;
        v31.n64_u64[0] = vbsl_s8(v29, v22, v25).n64_u64[0];
        v32.n64_u64[0] = vbsl_s8(v30, v23, v25).n64_u64[0];
        if ( v26 <= (float)(v69.fields.m_Center.fields.z - v69.fields.m_Extents.fields.z) )
          v33 = v69.fields.m_Center.fields.z - v69.fields.m_Extents.fields.z;
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
          v44 = v69.fields.m_Center.fields.z + v69.fields.m_Extents.fields.z;
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
        UnityEngine_Renderer__get_bounds(&v68, (UnityEngine_Renderer_o *)Component_object, 0LL);
        v18 = *(_OWORD *)&v68.fields.m_Center.fields.x;
        v69 = v68;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v68.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v18;
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
LABEL_54:
    sub_1C1AE30(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v47);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        p_offset += 4;
        if ( !v50 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v55 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
      while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v54;
        v55 += 2;
        if ( !v54 )
          goto LABEL_37;
      }
      v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1].method;
    }
    else
    {
LABEL_37:
      v56 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v57 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(
                                       Enumerator,
                                       *(_QWORD *)(v56 + 8));
    if ( !v57 )
      goto LABEL_53;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v57->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v57->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C1B0F0(v57);
LABEL_53:
      sub_1C1AE30(v57, v58);
    }
    gameObject = UnityEngine_Component__get_gameObject(v57, 0LL);
    peRenderTexture__CalcRendererBounds_44974420(v6, gameObject, bounds, v61);
  }
  v62 = sub_1C1AD10(Enumerator, System_IDisposable_TypeInfo);
  if ( v62 )
  {
    v63 = *(_QWORD *)v62;
    v64 = v62;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_48;
      }
      v67 = v63 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_48:
      v67 = sub_1C6CBB4(v62, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
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
  if ( (byte_4BCA908 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCA908 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v13 = this->fields.targetCamera;
    if ( !v13
      || (v49 = v9,
          v50 = v8,
          UnityEngine_Camera__get_projectionMatrix(&v47, v13, 0LL),
          v45 = v47,
          UnityEngine_GL__GetGPUProjectionMatrix(&v46, &v45, 1, 0LL),
          v47 = v46,
          (v13 = this->fields.targetCamera) == 0LL) )
    {
      sub_1C1AE30(v13, v12);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v46, v13, 0LL);
    v42 = v46;
    v43 = v47;
    UnityEngine_Matrix4x4__op_Multiply(&v44, &v43, &v42, 0LL);
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
    v51 = UnityEngine_Matrix4x4__op_Multiply_70723008(&v41, v14, 0LL);
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
    v52 = UnityEngine_Matrix4x4__op_Multiply_70723008(&v40, v51, 0LL);
    v22 = v52.fields.x / v52.fields.w;
    v23 = v52.fields.y / v52.fields.w;
    v52.fields.x = v49;
    v52.fields.y = v50;
    v24 = v52.fields.z / v52.fields.w;
    v52.fields.z = 0.0;
    v25 = v52.fields.w / v52.fields.w;
    UnityEngine_Matrix4x4__Translate(&v39, *(UnityEngine_Vector3_o *)&v52.fields.x, 0LL);
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
    v53 = UnityEngine_Matrix4x4__op_Multiply_70723008(&v38, v26, 0LL);
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
    v54 = UnityEngine_Matrix4x4__op_Multiply_70723008(&v37, v53, 0LL);
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
  __int64 v11; // x1
  UnityEngine_Camera_o *transform; // x0
  float fieldOfView; // s0
  float v14; // s8
  float aspect; // s0
  float v16; // s9
  float v17; // s0
  float v18; // s10
  float farClipPlane; // s0
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

  if ( (byte_4BCA900 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_16574/*"_ProjectorMatrixVP"*/, v3);
    sub_1C1ABD4(&StringLiteral_16575/*"_ProjectorPos"*/, v4);
    byte_4BCA900 = 1;
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
        v14 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v16 = aspect;
        v17 = UnityEngine_Camera__get_nearClipPlane(transform, 0LL);
        transform = this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v18 = v17;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(transform, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v32, v14, v16, v18, farClipPlane, 0LL);
        v36 = v32;
        v31 = v32;
        UnityEngine_GL__GetGPUProjectionMatrix(&v32, &v31, 1, 0LL);
        v36 = v32;
        if ( !byte_4BC2447 )
        {
          sub_1C1ABD4(&UnityEngine_Vector4_TypeInfo, v11);
          byte_4BC2447 = 1;
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
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16574/*"_ProjectorMatrixVP"*/, &v27, 0LL),
              (transform = (UnityEngine_Camera_o *)this->fields.boardrenderer) == 0LL)
          || (transform = (UnityEngine_Camera_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)transform,
                                                    0LL)) == 0LL )
        {
LABEL_30:
          sub_1C1AE30(transform, v11);
        }
        v40.fields.w = 1.0;
        v40.fields.x = v23;
        v40.fields.y = v24;
        v40.fields.z = v25;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16575/*"_ProjectorPos"*/,
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
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *renderTexture; // x20
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BCA902 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BCA902 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_27;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70794600(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.rasterCamera, 0LL, v12, v13, v14, v15, v16, v17);
    }
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0LL, 0LL) )
      goto LABEL_18;
    p_renderTexture = &this->fields.renderTexture;
    v10 = (UnityEngine_Component_o *)this->fields.renderTexture;
    if ( v10 )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v10, 0LL);
      v20 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70794600(v20, 0LL);
      *p_renderTexture = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.renderTexture, 0LL, v21, v22, v23, v24, v25, v26);
LABEL_18:
      targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v35,
          targetChangeLayerObjects,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v35.fields._current )
            sub_1C1AE30(0LL, v28);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v35.fields._current, v28);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.targetChangeLayerObjects,
          0LL,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_27:
    sub_1C1AE30(v10, v9);
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
  __int64 v19; // x1
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Object_o *v21; // x21
  Il2CppObject *Component_object; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_Object_o *v38; // x21
  struct UnityEngine_GameObject_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_Object_o *v68; // x22
  _BOOL8 v69; // x0
  __int64 v70; // x1
  UnityEngine_GameObject_o *v71; // x0
  const MethodInfo *v72; // x2
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v75; // x23
  UnityEngine_Object_o *v76; // x23
  UnityEngine_Object_o *v77; // x21
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v82; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  Il2CppObject *v90; // x23
  Il2CppObject *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  UnityEngine_Component_o *v98; // x8
  UnityEngine_Transform_o *v99; // x20
  UnityEngine_Transform_o *v100; // x20
  float v101; // s0
  float v102; // s1
  float v103; // s2
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCA901 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v13);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_Camera___, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&UnityEngine_RenderTexture_TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_16529/*"_MainTex"*/, v17);
    byte_4BCA901 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v106, 0, sizeof(v106));
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
        v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_85;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)v21,
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
                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = (struct UnityEngine_Camera_o *)Component_object;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.targetCamera,
          (int64_t)Component_object,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
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
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetCamera, (int64_t)main, v32, v33, v34, v35, v36, v37);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      v38 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_85;
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
      }
      else
      {
        v39 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
      }
      this->fields.targetObject = v39;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetObject, (int64_t)v39, v40, v41, v42, v43, v44, v45);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0LL, 0LL) )
    {
      v48 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = (struct UnityEngine_Renderer_o *)v48;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.boardrenderer, (int64_t)v48, v49, v50, v51, v52, v53, v54);
    }
    v55 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v55;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.targetChangeLayerObjects,
      (int64_t)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v105,
        (System_Collections_Generic_List_object__o *)gameObject,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v105;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields._current, v62) )
      {
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v105,
          (System_Collections_Generic_List_object__o *)gameObject,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v106 = v105;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v106,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v106.fields._current;
          v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v64 )
            sub_1C1AE30(0LL, v65);
          v66 = UnityEngine_GameObject__get_transform(v64, 0LL);
          if ( !v66 )
            sub_1C1AE30(0LL, v67);
          v68 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v66, (System_String_o *)current, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v69 = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
          if ( v69 )
          {
            if ( !v68 )
              sub_1C1AE30(v69, v70);
            v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v68, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v71, v72);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v106,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v75 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v75, 0LL, 0LL) )
            goto LABEL_80;
        }
        v76 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
          goto LABEL_80;
        v77 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
          goto LABEL_80;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v82 = (UnityEngine_RenderTexture_o *)sub_1C1AE20(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_70700992(v82, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v82;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.renderTexture,
          (int64_t)v82,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
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
            v90 = (Il2CppObject *)this->fields.targetCamera;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v91 = UnityEngine_Object__Instantiate_object_(
                    v90,
                    (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v91;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&this->fields.rasterCamera,
              (int64_t)v91,
              v92,
              v93,
              v94,
              v95,
              v96,
              v97);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
              v98 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v99 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v98, 0LL);
                if ( v99 )
                {
                  UnityEngine_Transform__SetParent(v99, (UnityEngine_Transform_o *)gameObject, 0LL);
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
                          v100 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0LL);
                          if ( gameObject )
                          {
                            *(UnityEngine_Vector3_o *)&v101 = UnityEngine_Transform__get_position(
                                                                (UnityEngine_Transform_o *)gameObject,
                                                                0LL);
                            if ( v100 )
                            {
                              v108.fields.z = v103 + this->fields.cameraOffset.fields.z;
                              v108.fields.y = v102 + this->fields.cameraOffset.fields.y;
                              v108.fields.x = v101 + this->fields.cameraOffset.fields.x;
                              UnityEngine_Transform__set_position(v100, v108, 0LL);
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
                                    (System_String_o *)StringLiteral_16529/*"_MainTex"*/,
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
    sub_1C1AE30(gameObject, v19);
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
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o **v24; // x20
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x21
  System_Predicate_object__o *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  UnityEngine_GameObject_o *v29; // x23
  peRenderTexture_ChangeLayerObject_o *v30; // x22
  const MethodInfo *v31; // x2
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  UnityEngine_Component_o *v52; // x0
  __int64 v53; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x20
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0

  if ( (byte_4BCA903 & 1) == 0 )
  {
    sub_1C1ABD4(&peRenderTexture_ChangeLayerObject_TypeInfo, gameObject);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v5);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v11);
    sub_1C1ABD4(&UnityEngine_Transform_TypeInfo, v12);
    sub_1C1ABD4(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v13);
    sub_1C1ABD4(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v14);
    byte_4BCA903 = 1;
  }
  v15 = sub_1C1AE20(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_46;
  *(_QWORD *)(v15 + 16) = gameObject;
  v24 = (UnityEngine_GameObject_o **)(v15 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)gameObject, v18, v19, v20, v21, v22, v23);
  transform = *(UnityEngine_GameObject_o **)(v15 + 16);
  if ( !transform )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
    v27 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v15,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      0LL);
    if ( !targetChangeLayerObjects )
      goto LABEL_46;
    if ( !System_Collections_Generic_List_object___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v28 = (System_Collections_Generic_List_object__o *)this->fields.targetChangeLayerObjects;
      v29 = *v24;
      v30 = (peRenderTexture_ChangeLayerObject_o *)sub_1C1AE20(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v30, v29, v31);
      if ( v28 )
      {
        items = v28->fields._items;
        v39 = Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__;
        ++v28->fields._version;
        if ( items )
        {
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)v30,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v30;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
          }
          goto LABEL_15;
        }
      }
LABEL_46:
      sub_1C1AE30(transform, v17);
    }
  }
LABEL_15:
  transform = *v24;
  if ( !*v24 )
    goto LABEL_46;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_46;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = (System_Collections_IEnumerator_c **)&v48->_1.interfaceOffsets->offset;
      while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 2;
        if ( !v49 )
          goto LABEL_29;
      }
      v51 = (__int64)&v48->vtable[*(_DWORD *)v50 + 1].method;
    }
    else
    {
LABEL_29:
      v51 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v52 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v51)(
                                       Enumerator,
                                       *(_QWORD *)(v51 + 8));
    if ( !v52 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v52->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v52->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C1B0F0(v52);
LABEL_45:
      sub_1C1AE30(v52, v53);
    }
    v55 = UnityEngine_Component__get_gameObject(v52, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v55, v56);
  }
  v57 = sub_1C1AD10(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_40;
      }
      v62 = v58 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_40:
      v62 = sub_1C6CBB4(v57, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
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

  if ( (byte_4BCA905 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_4BCA905 = 1;
  }
  targetObject = this->fields.targetObject;
  memset(&bounds, 0, 24);
  peRenderTexture__CalcRendererBounds_44974420(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  m10 = bounds.fields.m10;
  m30 = bounds.fields.m30;
  v8 = *(_QWORD *)&bounds.fields.m01;
  m20 = bounds.fields.m20;
  value = bounds.fields.m00;
  if ( !byte_4BC213F )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, v5);
    byte_4BC213F = 1;
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
                               (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
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
    sub_1C1AE38(Component_object, v12);
  v17 = (float *)&Component_object[12 * RBindex];
  v18 = (__int64)&Component_object[12 * LTindex + 32];
  v19 = v17[8];
  v28 = *(float *)(v18 + 8);
  v29 = v17[10];
  v30 = *(float *)(v18 + 4);
  v31 = *(float *)&Component_object[12 * RBindex + 36];
  if ( !byte_4BC213F )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, v12);
    byte_4BC213F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_4BC213F )
    {
      sub_1C1ABD4(&System_Math_TypeInfo, v27);
      byte_4BC213F = 1;
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
  v42 = UnityEngine_Matrix4x4__op_Multiply_70723008(&v36, v41, 0LL);
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
    sub_1C1AE30(Component_object, v12);
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
  v44 = UnityEngine_Matrix4x4__op_Multiply_70723008(&value_4, v43, 0LL);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
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

  if ( (byte_4BCA904 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BCA904 = 1;
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
    sub_1C1AE30(targetChangeLayerObjects, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)targetChangeLayerObjects,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v10 )
      break;
    current = v22.fields._current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v22.fields._current )
        sub_1C1AE30(v10, v11);
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
        sub_1C1AE30(v15, v16);
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
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x1
  System_Collections_Generic_List_object__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v16; // q1
  __int128 v17; // q2
  __int128 v18; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v20; // x0
  __int128 v21; // q1
  __int128 v22; // q2
  __int128 v23; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v25; // x0
  __int128 v26; // q1
  __int128 v27; // q2
  __int128 v28; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v31; // q1
  __int128 v32; // q2
  __int128 v33; // q3
  __int128 v34; // q1
  __int128 v35; // q2
  __int128 v36; // q3
  __int128 v37; // q1
  __int128 v38; // q2
  __int128 v39; // q3
  UnityEngine_Matrix4x4_o v40; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+110h] [xbp-1B0h]
  UnityEngine_Matrix4x4_o v45; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+190h] [xbp-130h]
  UnityEngine_Matrix4x4_o v47; // [xsp+1D0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+210h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+250h] [xbp-70h] BYREF

  if ( (byte_4BCA906 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BCA906 = 1;
  }
  memset(&v49, 0, sizeof(v49));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    targetChangeLayerObjects,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  *(_OWORD *)&v49.fields._list = *(_OWORD *)&v48.fields.m00;
  v49.fields._current = *(Il2CppObject **)&v48.fields.m01;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v49.fields._current )
    {
      monitor = (UnityEngine_Object_o *)v49.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
      if ( v13 )
      {
        if ( !monitor )
          sub_1C1AE30(v13, v14);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v16 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v17 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v18 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v48.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v48.fields.m03 = v16;
        *(_OWORD *)&v48.fields.m00 = v17;
        *(_OWORD *)&v48.fields.m01 = v18;
        if ( !sharedMaterial )
          sub_1C1AE30(0LL, MainCamVPMat);
        v47 = v48;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v47, 0LL);
        v20 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v21 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v22 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v23 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v46.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v46.fields.m03 = v21;
        *(_OWORD *)&v46.fields.m00 = v22;
        *(_OWORD *)&v46.fields.m01 = v23;
        if ( !v20 )
          sub_1C1AE30(0LL, ParallelViewMat);
        v45 = v46;
        UnityEngine_Material__SetMatrix(v20, ParallelViewMat, &v45, 0LL);
        v25 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v26 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v27 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v28 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v44.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v44.fields.m03 = v26;
        *(_OWORD *)&v44.fields.m00 = v27;
        *(_OWORD *)&v44.fields.m01 = v28;
        if ( !v25 )
          sub_1C1AE30(0LL, ParallelProjectionMat);
        v43 = v44;
        UnityEngine_Material__SetMatrix(v25, ParallelProjectionMat, &v43, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
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
      v31 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v32 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v33 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v7 = this->fields.MainCamVPMat;
      *(_OWORD *)&v48.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v48.fields.m03 = v31;
      *(_OWORD *)&v48.fields.m00 = v32;
      *(_OWORD *)&v48.fields.m01 = v33;
      if ( targetChangeLayerObjects )
      {
        v42 = v48;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v7, &v42, 0LL);
        targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                    (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                    0LL);
          v34 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v35 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v36 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v7 = this->fields.ParallelViewMat;
          *(_OWORD *)&v46.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v46.fields.m03 = v34;
          *(_OWORD *)&v46.fields.m00 = v35;
          *(_OWORD *)&v46.fields.m01 = v36;
          if ( targetChangeLayerObjects )
          {
            v41 = v46;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v7, &v41, 0LL);
            targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterial(
                                                                                        (UnityEngine_Renderer_o *)targetChangeLayerObjects,
                                                                                        0LL);
              v37 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v38 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v39 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v7 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v44.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v44.fields.m03 = v37;
              *(_OWORD *)&v44.fields.m00 = v38;
              *(_OWORD *)&v44.fields.m01 = v39;
              if ( targetChangeLayerObjects )
              {
                v40 = v44;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v7, &v40, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C1AE30(targetChangeLayerObjects, v7);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)gameObject, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BCA90D & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_4BCA90D = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C1AE30(v7, v6);
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
  UnityEngine_Material_o *v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v18; // x8
  UnityEngine_Material_o *v19; // x19

  if ( (byte_4BCA90F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Material_TypeInfo, material);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BCA90F = 1;
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
      v9 = (UnityEngine_Material_o *)sub_1C1AE20(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_70657684(v9, material, 0LL);
      this->fields.changeMaterial = v9;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.changeMaterial, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
        v18 = this->fields.orgMaterial;
        if ( v18 )
        {
          v19 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v18, 0LL);
          if ( v19 )
          {
            UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)sharedMaterial, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1C1AE30(sharedMaterial, v8);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BCA90C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCA90C = 1;
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
    UnityEngine_Object__DestroyImmediate_70794600(v5, 0LL);
    *p_changeMaterial = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.changeMaterial, 0LL, v6, v7, v8, v9, v10, v11);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    if ( !*p_renderer )
      sub_1C1AE30(0LL, v14);
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, this->fields.orgMaterial, 0LL);
  }
  this->fields.orgMaterial = 0LL;
  p_orgMaterial = &this->fields.orgMaterial;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_orgMaterial, 0LL, v15, v16, v17, v18, v19, v20);
  *(p_orgMaterial - 1) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_renderer, 0LL, v22, v23, v24, v25, v26, v27);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *layer; // x0
  Il2CppObject *Component_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BCA90B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCA90B = 1;
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
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = (struct UnityEngine_Renderer_o *)Component_object,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.renderer,
            (int64_t)Component_object,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (layer = this->fields.gameObject) == 0LL)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_1C1AE30(layer, v5);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    this->fields.orgMaterial = sharedMaterial;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.orgMaterial,
      (int64_t)sharedMaterial,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4BCA910 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCA910 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v5 = this->fields.renderer;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    UnityEngine_Renderer__set_sharedMaterial(v5, this->fields.orgMaterial, 0LL);
  }
}


bool __fastcall peRenderTexture_ChangeLayerObject__SyncLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BCA90E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCA90E = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
    goto LABEL_11;
  if ( UnityEngine_GameObject__get_layer(v5, 0LL) == this->fields.prevLayer )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
LABEL_11:
    sub_1C1AE30(v5, v4);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v5, 0LL);
  return 1;
}


int32_t __fastcall peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BCA90A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCA90A = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v5 = this->fields.gameObject;
  if ( !v5 )
    sub_1C1AE30(0LL, v4);
  return UnityEngine_GameObject__get_layer(v5, 0LL);
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
  if ( (byte_4BCA911 & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, n);
    byte_4BCA911 = 1;
  }
  if ( !n )
    sub_1C1AE30(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(gameObject, v6, 0LL);
}