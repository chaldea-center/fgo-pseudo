void __fastcall peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42F5AB3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16204/*"_MainCamVPMatrix"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16226/*"_ParallelViewMatrix"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16225/*"_ParallelProjectionMatrix"*/, v12, v13, v14);
    byte_42F5AB3 = 1;
  }
  this->fields.changeCullingMask = -1;
  this->fields.boundsUpdateCount = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_32E1E30;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  v15 = (System_Int32_array **)StringLiteral_16204/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16204/*"_MainCamVPMatrix"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.MainCamVPMat, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_16226/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16226/*"_ParallelViewMatrix"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.ParallelViewMat, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_16225/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16225/*"_ParallelProjectionMatrix"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.ParallelProjectionMat, v23, v24, v25, v26, v27, v28, v29);
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

  *(_QWORD *)&bounds.fields.m_Center.fields.x = 0LL;
  *(_QWORD *)&bounds.fields.m_Center.fields.z = 0LL;
  peRenderTexture__CalcRendererBounds_47085952(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_47085952(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  peRenderTexture_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int128 v23; // q0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_IEnumerator_c *v32; // x8
  unsigned __int64 v33; // x10
  System_Collections_IEnumerator_c **v34; // x11
  __int64 v35; // x0
  UnityEngine_Component_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  __int64 v44; // x20
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  UnityEngine_Bounds_o v48; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v50; // [xsp+30h] [xbp-60h] BYREF
  __int64 v51; // [xsp+48h] [xbp-48h]
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_42F5AB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, (_DWORD)obj, (_DWORD)bounds, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    this = (peRenderTexture_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v16, v17, v18);
    byte_42F5AB1 = 1;
  }
  HIDWORD(v51) = 0;
  if ( !obj )
    goto LABEL_45;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (peRenderTexture_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_45;
    if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)Component_srcLineSprite, 0LL) )
    {
      size = UnityEngine_Bounds__get_size(bounds, 0LL);
      x = size.fields.x;
      y = size.fields.y;
      z = size.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      v53.fields.x = x;
      v53.fields.y = y;
      v53.fields.z = z;
      if ( UnityEngine_Vector3__op_Equality(v53, zero, 0LL) )
      {
        UnityEngine_Renderer__get_bounds(&v49, (UnityEngine_Renderer_o *)Component_srcLineSprite, 0LL);
        v50 = v49;
        v23 = *(_OWORD *)&v49.fields.m_Center.fields.x;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v49.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v23;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v50, (UnityEngine_Renderer_o *)Component_srcLineSprite, 0LL);
        v48 = v50;
        UnityEngine_Bounds__Encapsulate_41559312(bounds, &v48, 0LL);
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
LABEL_45:
    sub_B5D69C(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = (System_Collections_IEnumerator_c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 2;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 1].method;
    }
    else
    {
LABEL_26:
      v35 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v31);
    }
    v36 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v35)(
                                       Enumerator,
                                       *(_QWORD *)(v35 + 8));
    if ( !v36 )
      goto LABEL_44;
    v38 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (UnityEngine_Transform_c *)v36->klass->_2.typeHierarchy[v38 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v36);
LABEL_44:
      sub_B5D69C(v36, v37);
    }
    gameObject = UnityEngine_Component__get_gameObject(v36, 0LL);
    peRenderTexture__CalcRendererBounds_47085952(v6, gameObject, bounds, v40);
  }
  v51 = 0x100000086LL;
  v41 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v41 )
  {
    v43 = *(_QWORD *)v41;
    v44 = v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_37;
      }
      v47 = v43 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_37:
      v47 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v42);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  }
  if ( (_DWORD)v51 == 134 )
    v51 = 134LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__CreatePVMatrix(
        peRenderTexture_o *this,
        UnityEngine_Vector3_o in_center,
        UnityEngine_Vector3_o in_LeftTop,
        UnityEngine_Vector3_o in_RightBottom,
        const MethodInfo *method)
{
  int v5; // w2
  __int64 v6; // x3
  float z; // s10
  float y; // s11
  float x; // s12
  float v10; // s8
  float v11; // s9
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v14; // x1
  UnityEngine_Camera_o *v15; // x0
  __int128 v16; // q1 OVERLAPPED
  __int128 v17; // q2
  __int128 v18; // q3
  float v19; // s0
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  __int128 v28; // q4
  __int128 v29; // q5
  __int128 v30; // q7
  __int128 v31; // q3 OVERLAPPED
  int invoker_method; // s2
  __int128 v33; // q4
  __int128 v34; // q6
  float v35; // s4
  float v36; // s5
  float v37; // s6
  float v38; // s7
  float v39; // s5
  float v40; // s6
  float v41; // s7
  __int128 v42; // q1
  __int128 v43; // q2
  __int128 v44; // q3 OVERLAPPED
  const char *name; // kr00_8
  __int128 v46; // q3 OVERLAPPED
  int v47; // s2
  __int128 v48; // q4
  __int128 v49; // q6
  peRenderTexture_o *v50; // x0
  const MethodInfo *v51; // x1
  __int128 v52; // q0
  __int128 v53; // q1
  __int128 v54; // q3
  UnityEngine_Matrix4x4_o v55; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Matrix4x4_o v56; // [xsp+50h] [xbp-350h] BYREF
  UnityEngine_Matrix4x4_o v57; // [xsp+90h] [xbp-310h]
  UnityEngine_Matrix4x4_o v58; // [xsp+D0h] [xbp-2D0h] BYREF
  UnityEngine_Matrix4x4_o v59[2]; // [xsp+110h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v60; // [xsp+190h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v61; // [xsp+1D0h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v62; // [xsp+210h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v63; // [xsp+250h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v64; // [xsp+290h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v65; // [xsp+2D0h] [xbp-D0h] BYREF
  MethodInfo methoda; // [xsp+310h] [xbp-90h] BYREF
  Il2CppMethodPointer methodPointer; // 0:s0.4,4:s1.4
  Il2CppMethodPointer v68; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v10 = in_center.fields.y;
  v11 = in_center.fields.x;
  if ( (byte_42F5AB2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v5, v6);
    byte_42F5AB2 = 1;
  }
  memset(&methoda, 0, 32);
  memset(&v65, 0, sizeof(v65));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v15 = this->fields.targetCamera;
    if ( !v15
      || (UnityEngine_Camera__get_projectionMatrix(&v64, v15, 0LL),
          v62 = v64,
          UnityEngine_GL__GetGPUProjectionMatrix(&v63, &v62, 1, 0LL),
          v64 = v63,
          (v15 = this->fields.targetCamera) == 0LL) )
    {
      sub_B5D69C(v15, v14);
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v63, v15, 0LL);
    v60 = v63;
    v61 = v64;
    UnityEngine_Matrix4x4__op_Multiply(&v63, &v61, &v60, 0LL);
    v59[1] = v63;
    v16 = *(_OWORD *)&v63.fields.m02;
    v18 = *(_OWORD *)&v63.fields.m00;
    v17 = *(_OWORD *)&v63.fields.m01;
    *(_OWORD *)&this->fields.MainCamVP.fields.m03 = *(_OWORD *)&v63.fields.m03;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = v16;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v17;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = v18;
    v19 = x;
    *(float *)&v16 = y;
    *(float *)&v17 = z;
    LODWORD(v18) = 1.0;
    UnityEngine_Vector4___ctor(
      *(UnityEngine_Vector4_o *)((char *)&v16 - 4),
      v20,
      v21,
      v22,
      v23,
      (const MethodInfo *)&methoda.name);
    v70.fields.x = in_RightBottom.fields.x;
    v70.fields.y = in_RightBottom.fields.y;
    v70.fields.z = in_RightBottom.fields.z;
    v70.fields.w = 1.0;
    UnityEngine_Vector4___ctor(v70, v24, v25, v26, v27, &methoda);
    v28 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
    v29 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
    v30 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
    *(_OWORD *)&v59[0].fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(_OWORD *)&v59[0].fields.m03 = v30;
    *(_OWORD *)&v59[0].fields.m00 = v28;
    *(_OWORD *)&v59[0].fields.m01 = v29;
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_41635228(
                                                v59,
                                                *(UnityEngine_Vector4_o *)&methoda.name,
                                                0LL);
    v31 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
    methodPointer = methoda.methodPointer;
    invoker_method = (int)methoda.invoker_method;
    v33 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
    v34 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
    *(_OWORD *)&v58.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(_OWORD *)&v58.fields.m03 = v31;
    LODWORD(v31) = HIDWORD(methoda.invoker_method);
    *(_OWORD *)&v58.fields.m00 = v33;
    *(_OWORD *)&v58.fields.m01 = v34;
    v71 = UnityEngine_Matrix4x4__op_Multiply_41635228(&v58, *(UnityEngine_Vector4_o *)((char *)&v31 - 12), 0LL);
    methoda.methodPointer = *(Il2CppMethodPointer *)&v71.fields.x;
    methoda.invoker_method = *(void **)&v71.fields.z;
    *(_QWORD *)&v63.fields.m20 = 0LL;
    v71.fields.x = *(float *)&methoda.name / *((float *)&methoda.klass + 1);
    v71.fields.y = *((float *)&methoda.name + 1) / *((float *)&methoda.klass + 1);
    v71.fields.z = *(float *)&methoda.klass / *((float *)&methoda.klass + 1);
    v71.fields.w = *((float *)&methoda.klass + 1) / *((float *)&methoda.klass + 1);
    *(_QWORD *)&v63.fields.m00 = 0LL;
    UnityEngine_Vector4___ctor(v71, v35, v36, v37, v38, (const MethodInfo *)&v63);
    *(_OWORD *)&methoda.name = *(_OWORD *)&v63.fields.m00;
    v72.fields.x = *(float *)&methoda.methodPointer / *((float *)&methoda.invoker_method + 1);
    v72.fields.y = *((float *)&methoda.methodPointer + 1) / *((float *)&methoda.invoker_method + 1);
    v72.fields.z = *(float *)&methoda.invoker_method / *((float *)&methoda.invoker_method + 1);
    v72.fields.w = *((float *)&methoda.invoker_method + 1) / *((float *)&methoda.invoker_method + 1);
    *(_QWORD *)&v63.fields.m20 = 0LL;
    *(_QWORD *)&v63.fields.m00 = 0LL;
    UnityEngine_Vector4___ctor(v72, *((float *)&methoda.invoker_method + 1), v39, v40, v41, (const MethodInfo *)&v63);
    v69.fields.y = v10;
    v69.fields.z = 0.0;
    *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v63.fields.m00;
    v69.fields.x = v11;
    UnityEngine_Matrix4x4__Translate(&v63, v69, 0LL);
    v57 = v63;
    v42 = *(_OWORD *)&v63.fields.m02;
    v44 = *(_OWORD *)&v63.fields.m00;
    v43 = *(_OWORD *)&v63.fields.m01;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m03 = *(_OWORD *)&v63.fields.m03;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = v42;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v43;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = v44;
    name = methoda.name;
    LODWORD(v43) = methoda.klass;
    v56 = v57;
    LODWORD(v44) = HIDWORD(methoda.klass);
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_41635228(
                                                &v56,
                                                *(UnityEngine_Vector4_o *)((char *)&v44 - 12),
                                                0LL);
    v46 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
    v68 = methoda.methodPointer;
    v47 = (int)methoda.invoker_method;
    v48 = *(_OWORD *)&this->fields.orthoViewMat.fields.m00;
    v49 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
    *(_OWORD *)&v55.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(_OWORD *)&v55.fields.m03 = v46;
    LODWORD(v46) = HIDWORD(methoda.invoker_method);
    *(_OWORD *)&v55.fields.m00 = v48;
    *(_OWORD *)&v55.fields.m01 = v49;
    v73 = UnityEngine_Matrix4x4__op_Multiply_41635228(&v55, *(UnityEngine_Vector4_o *)((char *)&v46 - 12), 0LL);
    methoda.methodPointer = *(Il2CppMethodPointer *)&v73.fields.x;
    methoda.invoker_method = *(void **)&v73.fields.z;
    peRenderTexture__orthogonalMatrix(
      &v65,
      v50,
      *(float *)&methoda.name,
      v73.fields.x,
      v73.fields.y,
      *((float *)&methoda.name + 1),
      v51);
    v52 = *(_OWORD *)&v65.fields.m00;
    v53 = *(_OWORD *)&v65.fields.m01;
    v54 = *(_OWORD *)&v65.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = *(_OWORD *)&v65.fields.m03;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = v54;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v53;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = v52;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__LateUpdate(peRenderTexture_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  int32_t boundsUpdateCount; // w8
  bool v13; // vf
  int32_t v14; // w8
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Object_o *boardrenderer; // x20
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  UnityEngine_Camera_o *v21; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v23; // x1
  float fieldOfView; // s0
  float v25; // s8
  float aspect; // s0
  float v27; // s9
  float v28; // s0
  float v29; // s10
  float farClipPlane; // s0
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s8
  float v35; // s9
  float v36; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v38; // [xsp+0h] [xbp-310h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+40h] [xbp-2D0h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+80h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+C0h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+100h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+140h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+180h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+1C0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+200h] [xbp-110h]
  MethodInfo methoda; // [xsp+240h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+290h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42F5AAA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16232/*"_ProjectorMatrixVP"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16233/*"_ProjectorPos"*/, v8, v9, v10);
    byte_42F5AAA = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&methoda.name, 0, 64);
  if ( this->fields.isInitialized )
  {
    peRenderTexture__updateLayer(this, method);
    if ( this->fields._boundsUpdateCount )
    {
      peRenderTexture__updateBounds(this, v11);
      boundsUpdateCount = this->fields._boundsUpdateCount;
      v13 = __OFSUB__(boundsUpdateCount, 1);
      v14 = boundsUpdateCount - 1;
      if ( v14 < 0 == v13 )
        this->fields._boundsUpdateCount = v14;
    }
    peRenderTexture__updateTransform(this, v11);
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
      {
        v21 = this->fields.rasterCamera;
        v51.fields.m_Width = 1.0;
        v51.fields.m_XMin = 0.0;
        v51.fields.m_YMin = 0.0;
        v51.fields.m_Height = 1.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v51, v17, v18, v19, v20, &methoda);
        if ( !v21 )
          goto LABEL_30;
        *(_QWORD *)&v52.fields.m_XMin = methoda.methodPointer;
        *(_QWORD *)&v52.fields.m_Width = methoda.invoker_method;
        UnityEngine_Camera__set_rect(v21, v52, 0LL);
        v49.fields.x = 1.0;
        v49.fields.z = -1.0;
        v49.fields.y = 1.0;
        UnityEngine_Matrix4x4__Scale(&v45, v49, 0LL);
        v46 = v45;
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v45, (UnityEngine_Transform_o *)transform, 0LL);
        v43 = v45;
        v44 = v46;
        UnityEngine_Matrix4x4__op_Multiply(&v45, &v44, &v43, 0LL);
        v48 = v45;
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v25 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v27 = aspect;
        v28 = UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v29 = v28;
        farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)transform, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v45, v25, v27, v29, farClipPlane, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v45;
        v42 = v45;
        UnityEngine_GL__GetGPUProjectionMatrix(&v45, &v42, 1, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v45;
        UnityEngine_Vector4__get_zero(0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( !transform )
          goto LABEL_30;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        *(UnityEngine_Vector4_o *)&v31 = UnityEngine_Vector4__op_Implicit(position, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.boardrenderer;
        if ( !transform )
          goto LABEL_30;
        v34 = v31;
        v35 = v32;
        v36 = v33;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)transform, 0LL);
        v40 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        v39 = v48;
        transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__op_Multiply(&v41, &v40, &v39, 0LL);
        v45 = v41;
        if ( !sharedMaterial
          || (v38 = v45,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16232/*"_ProjectorMatrixVP"*/, &v38, 0LL),
              (transform = (UnityEngine_Component_o *)this->fields.boardrenderer) == 0LL)
          || (transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                       (UnityEngine_Renderer_o *)transform,
                                                       0LL)) == 0LL )
        {
LABEL_30:
          sub_B5D69C(transform, v23);
        }
        v53.fields.w = 1.0;
        v53.fields.x = v34;
        v53.fields.y = v35;
        v53.fields.z = v36;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16233/*"_ProjectorPos"*/,
          v53,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UnityEngine_Camera_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *renderTexture; // x21
  UnityEngine_Object_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42F5AAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42F5AAC = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = &this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      v20 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_31;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.rasterCamera, 0LL, v22, v23, v24, v25, v26, v27);
    }
    p_renderTexture = &this->fields.renderTexture;
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(renderTexture, 0LL, 0LL) )
      goto LABEL_22;
    v20 = (UnityEngine_Component_o *)*p_renderTexture;
    if ( *p_renderTexture )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v20, 0LL);
      v30 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v30, 0LL);
      *p_renderTexture = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.renderTexture, 0LL, v31, v32, v33, v34, v35, v36);
LABEL_22:
      targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v45,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v45.fields.current )
            sub_B5D69C(0LL, v38);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v45.fields.current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
          0LL,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_31:
    sub_B5D69C(v20, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture__initialize(peRenderTexture_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x1
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Object_o *v53; // x21
  struct UnityEngine_Camera_o *Component_WebViewObject; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  System_Int32_array **main; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *v70; // x21
  struct UnityEngine_GameObject_o *v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct UnityEngine_GameObject_o **p_targetObject; // x0
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  struct UnityEngine_Renderer_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v97; // x0
  __int64 v98; // x1
  UnityEngine_Transform_o *v99; // x0
  __int64 v100; // x1
  UnityEngine_Object_o *v101; // x22
  _BOOL8 v102; // x0
  __int64 v103; // x1
  UnityEngine_GameObject_o *v104; // x0
  const MethodInfo *v105; // x2
  int v106; // w22
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v109; // x23
  UnityEngine_Object_o *v110; // x23
  UnityEngine_Object_o *v111; // x21
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v116; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct UnityEngine_Camera_o *v124; // x23
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UnityEngine_Component_o *v132; // x8
  UnityEngine_Transform_o *v133; // x20
  UnityEngine_Transform_o *v134; // x20
  float v135; // s0
  float v136; // s1
  float v137; // s2
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_T__o v139; // [xsp+8h] [xbp-B8h] BYREF
  int v140[2]; // [xsp+20h] [xbp-A0h]
  int v141; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v142; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42F5AAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Camera___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_Camera___, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_RenderTexture_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v47, v48, v49);
    byte_42F5AAB = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v142, 0, sizeof(v142));
  v141 = 0;
  if ( !this->fields.isInitialized )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.targetCameraPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      transform = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)gameObject,
                                            this->fields.targetCameraPath,
                                            0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(transform, 0LL, 0LL) )
      {
        v53 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v53 )
            goto LABEL_100;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)v53,
                                                0LL);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(transform, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !transform )
          goto LABEL_100;
        Component_WebViewObject = (struct UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = Component_WebViewObject;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetCamera,
          (System_Int32_array **)Component_WebViewObject,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
    }
    p_targetCamera = &this->fields.targetCamera;
    targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
    {
      main = (System_Int32_array **)UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = (struct UnityEngine_Camera_o *)main;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetCamera, main, v64, v65, v66, v67, v68, v69);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      v70 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v70 )
          goto LABEL_100;
        v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v70, 0LL);
        this->fields.targetObject = v71;
        p_targetObject = &this->fields.targetObject;
      }
      else
      {
        v71 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
        p_targetObject = &this->fields.targetObject;
        this->fields.targetObject = v71;
      }
      sub_B5D560(
        (BattleServantConfConponent_o *)p_targetObject,
        (System_Int32_array **)v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    p_boardrenderer = &this->fields.boardrenderer;
    boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardrenderer, 0LL, 0LL) )
    {
      v81 = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = v81;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardrenderer,
        (System_Int32_array **)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v88,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v88;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
      (System_Int32_array **)v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v139,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v139;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields.current, v95) )
      {
        ;
      }
      v140[0] = 297;
      v141 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v141 = 0;
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v139,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v142 = v139;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v142,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v142.fields.current;
          v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v97 )
            sub_B5D69C(0LL, v98);
          v99 = UnityEngine_GameObject__get_transform(v97, 0LL);
          if ( !v99 )
            sub_B5D69C(0LL, v100);
          v101 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v99, (System_String_o *)current, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v102 = UnityEngine_Object__op_Inequality(v101, 0LL, 0LL);
          if ( v102 )
          {
            if ( !v101 )
              sub_B5D69C(v102, v103);
            v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v101, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v104, v105);
          }
        }
        v140[0] = 389;
        v106 = ++v141;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v142,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( v106 && v140[v106 - 1] == 389 )
          v141 = v106 - 1;
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v109 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(v109, 0LL, 0LL) )
            goto LABEL_95;
        }
        v110 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
          goto LABEL_95;
        v111 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
          goto LABEL_95;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v116 = (UnityEngine_RenderTexture_o *)sub_B5D694(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_35678584(v116, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v116;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.renderTexture,
          (System_Int32_array **)v116,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
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
            v124 = this->fields.targetCamera;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v125 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)v124,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v125;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.rasterCamera,
              v125,
              v126,
              v127,
              v128,
              v129,
              v130,
              v131);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
              v132 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v133 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v132, 0LL);
                if ( v133 )
                {
                  UnityEngine_Transform__SetParent(v133, (UnityEngine_Transform_o *)gameObject, 0LL);
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
                          v134 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0LL);
                          if ( gameObject )
                          {
                            *(UnityEngine_Vector3_o *)&v135 = UnityEngine_Transform__get_position(
                                                                (UnityEngine_Transform_o *)gameObject,
                                                                0LL);
                            if ( v134 )
                            {
                              v144.fields.x = v135 + this->fields.cameraOffset.fields.x;
                              v144.fields.y = v136 + this->fields.cameraOffset.fields.y;
                              v144.fields.z = v137 + this->fields.cameraOffset.fields.z;
                              UnityEngine_Transform__set_position(v134, v144, 0LL);
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
                                    (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
                                    (UnityEngine_Texture_o *)*p_renderTexture,
                                    0LL);
LABEL_95:
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
LABEL_100:
    sub_B5D69C(gameObject, v51);
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
  float v7; // s14
  float v13; // s13
  UnityEngine_Matrix4x4_o *result; // x0
  __int128 v15; // q1
  __int128 v16; // q2
  __int128 v17; // q3
  UnityEngine_Matrix4x4_o v18; // [xsp+0h] [xbp-80h] BYREF

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
  v16 = *(_OWORD *)&v18.fields.m00;
  v17 = *(_OWORD *)&v18.fields.m01;
  *(_OWORD *)&retstr->fields.m02 = *(_OWORD *)&v18.fields.m02;
  *(_OWORD *)&retstr->fields.m03 = v15;
  *(_OWORD *)&retstr->fields.m00 = v16;
  *(_OWORD *)&retstr->fields.m01 = v17;
  return result;
}


void __fastcall peRenderTexture__registChangeLayerObjects(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o **v48; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v51; // x23
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v52; // x21
  UnityEngine_GameObject_o *v53; // x23
  peRenderTexture_ChangeLayerObject_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v62; // x3
  System_Collections_IEnumerator_c *v63; // x8
  unsigned __int64 v64; // x10
  System_Collections_IEnumerator_c **v65; // x11
  __int64 v66; // x0
  UnityEngine_Component_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x9
  UnityEngine_GameObject_o *v70; // x0
  const MethodInfo *v71; // x2
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x8
  __int64 v75; // x20
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0

  if ( (byte_42F5AAD & 1) == 0 )
  {
    sub_B5D5C4(&peRenderTexture_ChangeLayerObject_TypeInfo, (_DWORD)gameObject, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v33, v34, v35);
    sub_B5D5C4(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v36, v37, v38);
    byte_42F5AAD = 1;
  }
  v39 = sub_B5D694(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  peRenderTexture___c__DisplayClass48_0___ctor((peRenderTexture___c__DisplayClass48_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_44;
  *(_QWORD *)(v39 + 16) = gameObject;
  v48 = (UnityEngine_GameObject_o **)(v39 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v39 + 16),
    (System_Int32_array **)gameObject,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  transform = *(UnityEngine_GameObject_o **)(v39 + 16);
  if ( !transform )
    goto LABEL_44;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      transform,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
    v51 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v51,
      (Il2CppObject *)v39,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__);
    if ( !targetChangeLayerObjects )
      goto LABEL_44;
    if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v51,
            (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v52 = this->fields.targetChangeLayerObjects;
      v53 = *v48;
      v54 = (peRenderTexture_ChangeLayerObject_o *)sub_B5D694(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v54, v53, 0LL);
      if ( !v52 )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    }
  }
  transform = *v48;
  if ( !*v48 || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
LABEL_44:
    sub_B5D69C(transform, v41);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v55);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        p_offset += 4;
        if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_20:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v56);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v63 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      v65 = (System_Collections_IEnumerator_c **)&v63->_1.interfaceOffsets->offset;
      while ( *(v65 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v64;
        v65 += 2;
        if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      v66 = (__int64)&v63->vtable[*(_DWORD *)v65 + 1].method;
    }
    else
    {
LABEL_27:
      v66 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v62);
    }
    v67 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v66)(
                                       Enumerator,
                                       *(_QWORD *)(v66 + 8));
    if ( !v67 )
      goto LABEL_43;
    v69 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v69
      || (UnityEngine_Transform_c *)v67->klass->_2.typeHierarchy[v69 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v67);
LABEL_43:
      sub_B5D69C(v67, v68);
    }
    v70 = UnityEngine_Component__get_gameObject(v67, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v70, v71);
  }
  v72 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v72 )
  {
    v74 = *(_QWORD *)v72;
    v75 = v72;
    if ( *(_WORD *)(*(_QWORD *)v72 + 298LL) )
    {
      v76 = 0LL;
      v77 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        ++v76;
        v77 += 4;
        if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v72 + 298LL) )
          goto LABEL_38;
      }
      v78 = v74 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_38:
      v78 = sub_AF54C0(v72, System_IDisposable_TypeInfo, 0LL, v73);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v78)(v75, *(_QWORD *)(v78 + 8));
  }
}


void __fastcall peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  float x; // s8
  float y; // s11
  float z; // s9
  float v9; // s12
  float v10; // s10
  float v11; // s0
  float v12; // s1
  float v13; // s12
  float v14; // s11
  void *Component_WebViewObject; // x0
  __int64 v16; // x1
  __int64 RBindex; // x8
  unsigned int v18; // w10
  _DWORD *v19; // x20
  __int64 LTindex; // x9
  __int64 v21; // x8
  __int64 v22; // x9
  float v23; // s14
  float v24; // s9
  float v25; // s15
  float v26; // s11
  float v27; // s13
  float v28; // s0
  float targetBoundsOffsetX; // s8
  float targetBoundsOffsetY; // s15
  float v31; // s14
  float v32; // s11
  float v33; // s9
  float v34; // s8
  float v35; // s10
  float v36; // s4
  float v37; // s5
  float v38; // s6
  float v39; // s7
  __int64 v40; // x8
  float *v41; // x8
  float v42; // s4
  float v43; // s5
  float v44; // s6
  float v45; // s7
  __int64 v46; // x8
  float *v47; // x8
  __int64 v48; // x0
  UnityEngine_Matrix4x4_o v49; // [xsp+0h] [xbp-1D0h] BYREF
  MethodInfo v50; // [xsp+40h] [xbp-190h] BYREF
  __int128 v51; // [xsp+90h] [xbp-140h]
  __int128 v52; // [xsp+A0h] [xbp-130h]
  __int128 v53; // [xsp+B0h] [xbp-120h]
  MethodInfo methoda; // [xsp+C0h] [xbp-110h] BYREF
  __int128 bounds; // [xsp+110h] [xbp-C0h] BYREF
  __int128 bounds_16; // [xsp+120h] [xbp-B0h]
  __int128 v57; // [xsp+130h] [xbp-A0h]
  __int128 v58; // [xsp+140h] [xbp-90h]
  UnityEngine_Bounds_o v59; // [xsp+150h] [xbp-80h] BYREF
  float v60; // [xsp+1B8h] [xbp-18h]
  float v61; // [xsp+1BCh] [xbp-14h]
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v69; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v70; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42F5AAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_MeshFilter___, (_DWORD)method, v2, v3);
    byte_42F5AAF = 1;
  }
  memset(&v59, 0, sizeof(v59));
  targetObject = this->fields.targetObject;
  bounds = 0uLL;
  *(_QWORD *)&bounds_16 = 0LL;
  peRenderTexture__CalcRendererBounds_47085952(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v3);
  *(_QWORD *)&v59.fields.m_Extents.fields.y = bounds_16;
  *(_OWORD *)&v59.fields.m_Center.fields.x = bounds;
  center = UnityEngine_Bounds__get_center(&v59, 0LL);
  x = center.fields.x;
  y = center.fields.y;
  z = center.fields.z;
  extents = UnityEngine_Bounds__get_extents(&v59, 0LL);
  v9 = extents.fields.y;
  v10 = y + extents.fields.y;
  v68.fields.x = x + extents.fields.x;
  v68.fields.z = z - extents.fields.z;
  extents.fields.x = x - extents.fields.x;
  extents.fields.y = v10;
  extents.fields.z = z + extents.fields.z;
  v68.fields.y = v10;
  v11 = UnityEngine_Vector3__Distance(extents, v68, 0LL);
  if ( (float)(y - v9) >= -0.5 )
    v12 = (float)(v10 - (float)(y - v9)) * (float)(v10 - (float)(y - v9));
  else
    v12 = (float)(v10 + 0.5) * (float)(v10 + 0.5);
  v13 = sqrtf(v12);
  v14 = v11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_MeshFilter__get_sharedMesh(
                              (UnityEngine_MeshFilter_o *)Component_WebViewObject,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  RBindex = this->fields._RBindex;
  v18 = *((_DWORD *)Component_WebViewObject + 6);
  v19 = Component_WebViewObject;
  if ( (unsigned int)RBindex >= v18 || (v60 = z, v61 = x, LTindex = this->fields._LTindex, (unsigned int)LTindex >= v18) )
  {
LABEL_23:
    v48 = sub_B5D6C8(Component_WebViewObject);
    sub_B5D668(v48, 0LL);
  }
  v21 = (__int64)Component_WebViewObject + 12 * RBindex + 32;
  v22 = (__int64)Component_WebViewObject + 12 * LTindex + 32;
  v23 = *(float *)v21;
  v24 = v14;
  v25 = *(float *)(v21 + 4);
  v64.fields.y = *(float *)(v21 + 8);
  v26 = *(float *)(v22 + 4);
  v69.fields.y = *(float *)(v22 + 8);
  v69.fields.x = *(float *)v22;
  v64.fields.z = 0.0;
  v69.fields.z = 0.0;
  v64.fields.x = *(float *)v21;
  v27 = UnityEngine_Vector3__Distance(v64, v69, 0LL);
  v65.fields.z = 0.0;
  v70.fields.z = 0.0;
  v65.fields.x = v23;
  v65.fields.y = v25;
  v70.fields.x = v23;
  v70.fields.y = v26;
  v28 = UnityEngine_Vector3__Distance(v65, v70, 0LL);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  v31 = v28;
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_GameObject__get_transform(
                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  v32 = v13 * 0.5;
  v66.fields.x = (float)(v24 + targetBoundsOffsetX) / v27;
  v66.fields.y = (float)((float)(v32 + v32) + targetBoundsOffsetY) / v31;
  v66.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v66, 0LL);
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_GameObject__get_transform(
                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                              0LL);
  v33 = v60;
  if ( !Component_WebViewObject )
    goto LABEL_22;
  v34 = v10 - v32;
  v35 = v61;
  v67.fields.y = v34 - v32;
  v67.fields.z = v60;
  v67.fields.x = v61;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_WebViewObject, v67, 0LL);
  this->fields.targetBoundsCenter.fields.x = v35;
  this->fields.targetBoundsCenter.fields.y = v34;
  this->fields.targetBoundsCenter.fields.z = v33;
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_GameObject__get_transform(
                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Transform__get_localToWorldMatrix(
                              (UnityEngine_Matrix4x4_o *)&methoda.name,
                              (UnityEngine_Transform_o *)Component_WebViewObject,
                              0LL);
  v57 = *(_OWORD *)&methoda.rgctx_data;
  v58 = *(_OWORD *)&methoda.token;
  bounds = *(_OWORD *)&methoda.name;
  bounds_16 = *(_OWORD *)&methoda.return_type;
  v40 = this->fields._RBindex;
  if ( (unsigned int)v40 >= v19[6] )
    goto LABEL_23;
  v41 = (float *)&v19[3 * v40];
  v71.fields.x = v41[8];
  v71.fields.y = v41[9];
  v71.fields.z = v41[10];
  v71.fields.w = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v71, v36, v37, v38, v39, &methoda);
  *(_QWORD *)&v72.fields.x = methoda.methodPointer;
  *(_QWORD *)&v72.fields.z = methoda.invoker_method;
  v52 = v57;
  v53 = v58;
  *(_OWORD *)&v50.token = bounds;
  v51 = bounds_16;
  v73 = UnityEngine_Matrix4x4__op_Multiply_41635228((UnityEngine_Matrix4x4_o *)&v50.token, v72, 0LL);
  this->fields.targetBoundsRB = UnityEngine_Vector4__op_Implicit_51047752(v73, 0LL);
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject
    || (Component_WebViewObject = UnityEngine_GameObject__get_transform(
                                    (UnityEngine_GameObject_o *)Component_WebViewObject,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(Component_WebViewObject, v16);
  }
  Component_WebViewObject = UnityEngine_Transform__get_localToWorldMatrix(
                              (UnityEngine_Matrix4x4_o *)&v50,
                              (UnityEngine_Transform_o *)Component_WebViewObject,
                              0LL);
  *(_OWORD *)&methoda.rgctx_data = *(_OWORD *)&v50.return_type;
  *(_OWORD *)&methoda.token = *(_OWORD *)&v50.rgctx_data;
  *(_OWORD *)&methoda.name = *(_OWORD *)&v50.methodPointer;
  *(_OWORD *)&methoda.return_type = *(_OWORD *)&v50.name;
  v46 = this->fields._LTindex;
  if ( (unsigned int)v46 >= v19[6] )
    goto LABEL_23;
  v47 = (float *)&v19[3 * v46];
  v74.fields.x = v47[8];
  v74.fields.y = v47[9];
  v74.fields.z = v47[10];
  v74.fields.w = 1.0;
  v50.methodPointer = 0LL;
  v50.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v74, v42, v43, v44, v45, &v50);
  *(_QWORD *)&v75.fields.x = v50.methodPointer;
  *(_QWORD *)&v75.fields.z = v50.invoker_method;
  v49 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
  v76 = UnityEngine_Matrix4x4__op_Multiply_41635228(&v49, v75, 0LL);
  this->fields.targetBoundsLT = UnityEngine_Vector4__op_Implicit_51047752(v76, 0LL);
}


void __fastcall peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *targetChangeLayerObjects; // x0
  int32_t cullingMask; // w0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42F5AAE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42F5AAE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.changeCullingMaskEnabled )
  {
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      targetChangeLayerObjects = this->fields.rasterCamera;
      if ( !targetChangeLayerObjects )
        goto LABEL_31;
      cullingMask = UnityEngine_Camera__get_cullingMask(targetChangeLayerObjects, 0LL);
      method = (const MethodInfo *)(unsigned int)this->fields.changeCullingMask;
      if ( cullingMask != (_DWORD)method )
      {
        targetChangeLayerObjects = this->fields.rasterCamera;
        if ( !targetChangeLayerObjects )
          goto LABEL_31;
        UnityEngine_Camera__set_cullingMask(targetChangeLayerObjects, (int32_t)method, 0LL);
      }
    }
  }
  targetChangeLayerObjects = (UnityEngine_Camera_o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_31:
    sub_B5D69C(targetChangeLayerObjects, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v20 )
      break;
    current = v28.fields.current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v28.fields.current )
        sub_B5D69C(v20, v21);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v28.fields.current,
        this->fields.changeLayer,
        0LL);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0LL, 0LL);
    if ( v24 )
    {
      if ( !current )
        sub_B5D69C(v24, v25);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, 0LL) )
      {
        v26 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        if ( v26 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            0LL);
        }
        else if ( v26 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v26; // q1
  __int128 v27; // q2
  __int128 v28; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v30; // x0
  __int128 v31; // q1
  __int128 v32; // q2
  __int128 v33; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v35; // x0
  __int128 v36; // q1
  __int128 v37; // q2
  __int128 v38; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  __int128 v41; // q1
  __int128 v42; // q2
  __int128 v43; // q3
  __int128 v44; // q1
  __int128 v45; // q2
  __int128 v46; // q3
  __int128 v47; // q1
  __int128 v48; // q2
  __int128 v49; // q3
  UnityEngine_Matrix4x4_o v50; // [xsp+10h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+50h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v52; // [xsp+90h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v53; // [xsp+D0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v54; // [xsp+110h] [xbp-1A0h]
  UnityEngine_Matrix4x4_o v55; // [xsp+150h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v56; // [xsp+190h] [xbp-120h]
  UnityEngine_Matrix4x4_o v57; // [xsp+1D0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v58; // [xsp+210h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+250h] [xbp-60h] BYREF

  if ( (byte_42F5AB0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42F5AB0 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  peRenderTexture__CreatePVMatrix(
    this,
    this->fields.targetBoundsCenter,
    this->fields.targetBoundsLT,
    this->fields.targetBoundsRB,
    method);
  targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    targetChangeLayerObjects,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v59.fields.current = *(Il2CppObject **)&v58.fields.m01;
  *(_OWORD *)&v59.fields.list = *(_OWORD *)&v58.fields.m00;
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v59.fields.current )
    {
      monitor = (UnityEngine_Object_o *)v59.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
      if ( v23 )
      {
        if ( !monitor )
          sub_B5D69C(v23, v24);
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v26 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v27 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v28 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v58.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v58.fields.m03 = v26;
        *(_OWORD *)&v58.fields.m00 = v27;
        *(_OWORD *)&v58.fields.m01 = v28;
        if ( !sharedMaterial )
          sub_B5D69C(0LL, MainCamVPMat);
        v57 = v58;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v57, 0LL);
        v30 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v31 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v32 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v33 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v56.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v56.fields.m03 = v31;
        *(_OWORD *)&v56.fields.m00 = v32;
        *(_OWORD *)&v56.fields.m01 = v33;
        if ( !v30 )
          sub_B5D69C(0LL, ParallelViewMat);
        v55 = v56;
        UnityEngine_Material__SetMatrix(v30, ParallelViewMat, &v55, 0LL);
        v35 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)monitor, 0LL);
        v36 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v37 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v38 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v54.fields.m03 = v36;
        *(_OWORD *)&v54.fields.m00 = v37;
        *(_OWORD *)&v54.fields.m01 = v38;
        if ( !v35 )
          sub_B5D69C(0LL, ParallelProjectionMat);
        v53 = v54;
        UnityEngine_Material__SetMatrix(v35, ParallelProjectionMat, &v53, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
  {
    targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.boardrenderer;
    if ( targetChangeLayerObjects )
    {
      targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)targetChangeLayerObjects, 0LL);
      v41 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v42 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v43 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v17 = this->fields.MainCamVPMat;
      *(_OWORD *)&v58.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v58.fields.m03 = v41;
      *(_OWORD *)&v58.fields.m00 = v42;
      *(_OWORD *)&v58.fields.m01 = v43;
      if ( targetChangeLayerObjects )
      {
        v52 = v58;
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v17, &v52, 0LL);
        targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)targetChangeLayerObjects, 0LL);
          v44 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v45 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v46 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v17 = this->fields.ParallelViewMat;
          *(_OWORD *)&v56.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v56.fields.m03 = v44;
          *(_OWORD *)&v56.fields.m00 = v45;
          *(_OWORD *)&v56.fields.m01 = v46;
          if ( targetChangeLayerObjects )
          {
            v51 = v56;
            UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v17, &v51, 0LL);
            targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)targetChangeLayerObjects, 0LL);
              v47 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v48 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v49 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v17 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v54.fields.m03 = v47;
              *(_OWORD *)&v54.fields.m00 = v48;
              *(_OWORD *)&v54.fields.m01 = v49;
              if ( targetChangeLayerObjects )
              {
                v50 = v54;
                UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)targetChangeLayerObjects, v17, &v50, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B5D69C(targetChangeLayerObjects, v17);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.gameObject = gameObject;
  sub_B5D560(&this->fields);
  peRenderTexture_ChangeLayerObject__Initialize(this, v5);
}


void __fastcall peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x8

  if ( (byte_42E601E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, layer, (_DWORD)method, v3);
    byte_42E601E = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v8 = this->fields.gameObject;
    if ( v8 )
    {
      v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(v8, 0LL);
      v9 = this->fields.gameObject;
      this->fields.prevLayer = (int)v8;
      if ( v9 )
      {
        if ( UnityEngine_GameObject__get_layer(v9, 0LL) == layer )
          return;
        v8 = this->fields.gameObject;
        if ( v8 )
        {
          UnityEngine_GameObject__set_layer(v8, layer, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(v8, v7);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__ChangeMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *renderer; // x21
  UnityEngine_Object_o *changeMaterial; // x22
  __int64 v11; // x1
  UnityEngine_Material_o *v12; // x22
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v15; // x8
  UnityEngine_Material_o *v16; // x19

  if ( (byte_42E6020 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, (_DWORD)material, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6020 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(changeMaterial, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_41620632(v12, material, 0LL);
      this->fields.changeMaterial = v12;
      sub_B5D560(&this->fields.changeMaterial);
    }
    sharedMaterial = this->fields.renderer;
    if ( !sharedMaterial )
      goto LABEL_22;
    UnityEngine_Renderer__set_sharedMaterial(sharedMaterial, this->fields.changeMaterial, 0LL);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
LABEL_22:
      sub_B5D69C(sharedMaterial, v11);
    }
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__Finalize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Material_o **p_changeMaterial; // x20
  UnityEngine_Object_o *changeMaterial; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v10; // x1
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  UnityEngine_Material_o *orgMaterial; // t1

  if ( (byte_42E601D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E601D = 1;
  }
  p_changeMaterial = &this->fields.changeMaterial;
  changeMaterial = (UnityEngine_Object_o *)this->fields.changeMaterial;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(changeMaterial, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35620448(v7, 0LL);
    *p_changeMaterial = 0LL;
    sub_B5D560(&this->fields.changeMaterial);
  }
  p_renderer = &this->fields.renderer;
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    if ( !*p_renderer )
      sub_B5D69C(0LL, v10);
    orgMaterial = this->fields.orgMaterial;
    p_orgMaterial = &this->fields.orgMaterial;
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, orgMaterial, 0LL);
  }
  else
  {
    p_orgMaterial = &this->fields.orgMaterial;
  }
  *p_orgMaterial = 0LL;
  sub_B5D560(p_orgMaterial);
  *p_renderer = 0LL;
  sub_B5D560(p_renderer);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *layer; // x0
  UnityEngine_Renderer_o *renderer; // x8

  if ( (byte_42E601C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E601C = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    layer = this->fields.gameObject;
    if ( !layer
      || (this->fields.renderer = (struct UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     layer,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          sub_B5D560(&this->fields.renderer),
          (layer = this->fields.gameObject) == 0LL)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_B5D69C(layer, v9);
    }
    this->fields.orgMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    sub_B5D560(&this->fields.orgMaterial);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *renderer; // x20
  __int64 v6; // x1
  UnityEngine_Renderer_o *v7; // x0

  if ( (byte_42E6021 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6021 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v7 = this->fields.renderer;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_Renderer__set_sharedMaterial(v7, this->fields.orgMaterial, 0LL);
  }
}


bool __fastcall peRenderTexture_ChangeLayerObject__SyncLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E601F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E601F = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v7 = this->fields.gameObject;
  if ( !v7 )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_layer(v7, 0LL) == this->fields.prevLayer )
    return 0;
  v7 = this->fields.gameObject;
  if ( !v7 )
LABEL_12:
    sub_B5D69C(v7, v6);
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v7, 0LL);
  return 1;
}


int32_t __fastcall peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E601B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E601B = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v7 = this->fields.gameObject;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_GameObject__get_layer(v7, 0LL);
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
  __int64 v3; // x3
  peRenderTexture___c__DisplayClass48_0_o *v5; // x20
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v7; // x20

  v5 = this;
  if ( (byte_42E601A & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_B5D5C4(
                                                        &UnityEngine_Object_TypeInfo,
                                                        (_DWORD)n,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E601A = 1;
  }
  if ( !n )
    sub_B5D69C(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v7 = (UnityEngine_Object_o *)v5->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(gameObject, v7, 0LL);
}