void __fastcall peRenderTexture___ctor(peRenderTexture_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4106B13 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15949/*"_MainCamVPMatrix"*/, method);
    sub_B16FFC(&StringLiteral_15971/*"_ParallelViewMatrix"*/, v9);
    sub_B16FFC(&StringLiteral_15970/*"_ParallelProjectionMatrix"*/, v10);
    byte_4106B13 = 1;
  }
  this->fields.changeCullingMask = -1;
  this->fields.boundsUpdateCount = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_3174800;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  v11 = (System_Int32_array **)StringLiteral_15949/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_15949/*"_MainCamVPMatrix"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.MainCamVPMat, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_15971/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_15971/*"_ParallelViewMatrix"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.ParallelViewMat, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_15970/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_15970/*"_ParallelProjectionMatrix"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.ParallelProjectionMat, v19, v20, v21, v22, v23, v24, v25);
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
  peRenderTexture__CalcRendererBounds_46244876(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_46244876(
        peRenderTexture_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Bounds_o *bounds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Renderer_o *Component_srcLineSprite; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int128 v15; // q0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v22; // x8
  unsigned __int64 v23; // x10
  System_Collections_IEnumerator_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Component_o *v26; // x0
  __int64 v27; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x20
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  UnityEngine_Bounds_o v36; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Bounds_o v37; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v38; // [xsp+30h] [xbp-60h] BYREF
  __int64 v39; // [xsp+48h] [xbp-48h]
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4106B11 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, obj);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v10);
    byte_4106B11 = 1;
  }
  HIDWORD(v39) = 0;
  if ( !obj )
    goto LABEL_45;
  Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        obj,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_45;
    if ( UnityEngine_Renderer__get_enabled(Component_srcLineSprite, 0LL) )
    {
      size = UnityEngine_Bounds__get_size(bounds, 0LL);
      x = size.fields.x;
      y = size.fields.y;
      z = size.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      v41.fields.x = x;
      v41.fields.y = y;
      v41.fields.z = z;
      if ( UnityEngine_Vector3__op_Equality(v41, zero, 0LL) )
      {
        UnityEngine_Renderer__get_bounds(&v37, Component_srcLineSprite, 0LL);
        v38 = v37;
        v15 = *(_OWORD *)&v37.fields.m_Center.fields.x;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v37.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v15;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v38, Component_srcLineSprite, 0LL);
        v36 = v38;
        UnityEngine_Bounds__Encapsulate_40657508(bounds, &v36, 0LL);
      }
    }
  }
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !transform )
LABEL_45:
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
    }
    else
    {
LABEL_26:
      v25 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v26 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                       Enumerator,
                                       *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_44;
    v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (UnityEngine_Transform_c *)v26->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_44:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
    peRenderTexture__CalcRendererBounds_46244876(this, gameObject, bounds, v29);
  }
  v39 = 0x100000086LL;
  v30 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_37;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_37:
      v35 = sub_AAFEF8(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  if ( (_DWORD)v39 == 134 )
    v39 = 134LL;
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
  UnityEngine_Camera_o *v13; // x0
  __int128 v14; // q1 OVERLAPPED
  __int128 v15; // q2
  __int128 v16; // q3
  float v17; // s0
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  __int128 v26; // q4
  __int128 v27; // q5
  __int128 v28; // q7
  __int128 v29; // q3 OVERLAPPED
  int invoker_method; // s2
  __int128 v31; // q4
  __int128 v32; // q6
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  float v37; // s5
  float v38; // s6
  float v39; // s7
  __int128 v40; // q1
  __int128 v41; // q2
  __int128 v42; // q3 OVERLAPPED
  const char *name; // kr00_8
  __int128 v44; // q3 OVERLAPPED
  int v45; // s2
  __int128 v46; // q4
  __int128 v47; // q6
  peRenderTexture_o *v48; // x0
  const MethodInfo *v49; // x1
  __int128 v50; // q0
  __int128 v51; // q1
  __int128 v52; // q3
  UnityEngine_Matrix4x4_o v53; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Matrix4x4_o v54; // [xsp+50h] [xbp-350h] BYREF
  UnityEngine_Matrix4x4_o v55; // [xsp+90h] [xbp-310h]
  UnityEngine_Matrix4x4_o v56; // [xsp+D0h] [xbp-2D0h] BYREF
  UnityEngine_Matrix4x4_o v57[2]; // [xsp+110h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v58; // [xsp+190h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v59; // [xsp+1D0h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v60; // [xsp+210h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v61; // [xsp+250h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v62; // [xsp+290h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v63; // [xsp+2D0h] [xbp-D0h] BYREF
  MethodInfo methoda; // [xsp+310h] [xbp-90h] BYREF
  Il2CppMethodPointer methodPointer; // 0:s0.4,4:s1.4
  Il2CppMethodPointer v66; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = in_LeftTop.fields.z;
  y = in_LeftTop.fields.y;
  x = in_LeftTop.fields.x;
  v8 = in_center.fields.y;
  v9 = in_center.fields.x;
  if ( (byte_4106B12 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_4106B12 = 1;
  }
  memset(&methoda, 0, 32);
  memset(&v63, 0, sizeof(v63));
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v12 = this->fields.targetCamera;
    if ( !v12
      || (UnityEngine_Camera__get_projectionMatrix(&v62, v12, 0LL),
          v60 = v62,
          UnityEngine_GL__GetGPUProjectionMatrix(&v61, &v60, 1, 0LL),
          v62 = v61,
          (v13 = this->fields.targetCamera) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Camera__get_worldToCameraMatrix(&v61, v13, 0LL);
    v58 = v61;
    v59 = v62;
    UnityEngine_Matrix4x4__op_Multiply(&v61, &v59, &v58, 0LL);
    v57[1] = v61;
    v14 = *(_OWORD *)&v61.fields.m02;
    v16 = *(_OWORD *)&v61.fields.m00;
    v15 = *(_OWORD *)&v61.fields.m01;
    *(_OWORD *)&this->fields.MainCamVP.fields.m03 = *(_OWORD *)&v61.fields.m03;
    *(_OWORD *)&this->fields.MainCamVP.fields.m02 = v14;
    *(_OWORD *)&this->fields.MainCamVP.fields.m01 = v15;
    *(_OWORD *)&this->fields.MainCamVP.fields.m00 = v16;
    v17 = x;
    *(float *)&v14 = y;
    *(float *)&v15 = z;
    LODWORD(v16) = 1.0;
    UnityEngine_Vector4___ctor(
      *(UnityEngine_Vector4_o *)((char *)&v14 - 4),
      v18,
      v19,
      v20,
      v21,
      (const MethodInfo *)&methoda.name);
    v68.fields.x = in_RightBottom.fields.x;
    v68.fields.y = in_RightBottom.fields.y;
    v68.fields.z = in_RightBottom.fields.z;
    v68.fields.w = 1.0;
    UnityEngine_Vector4___ctor(v68, v22, v23, v24, v25, &methoda);
    v26 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
    v27 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
    v28 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
    *(_OWORD *)&v57[0].fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(_OWORD *)&v57[0].fields.m03 = v28;
    *(_OWORD *)&v57[0].fields.m00 = v26;
    *(_OWORD *)&v57[0].fields.m01 = v27;
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_40733424(
                                                v57,
                                                *(UnityEngine_Vector4_o *)&methoda.name,
                                                0LL);
    v29 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
    methodPointer = methoda.methodPointer;
    invoker_method = (int)methoda.invoker_method;
    v31 = *(_OWORD *)&this->fields.MainCamVP.fields.m00;
    v32 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
    *(_OWORD *)&v56.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
    *(_OWORD *)&v56.fields.m03 = v29;
    LODWORD(v29) = HIDWORD(methoda.invoker_method);
    *(_OWORD *)&v56.fields.m00 = v31;
    *(_OWORD *)&v56.fields.m01 = v32;
    v69 = UnityEngine_Matrix4x4__op_Multiply_40733424(&v56, *(UnityEngine_Vector4_o *)((char *)&v29 - 12), 0LL);
    methoda.methodPointer = *(Il2CppMethodPointer *)&v69.fields.x;
    methoda.invoker_method = *(void **)&v69.fields.z;
    *(_QWORD *)&v61.fields.m20 = 0LL;
    v69.fields.x = *(float *)&methoda.name / *((float *)&methoda.klass + 1);
    v69.fields.y = *((float *)&methoda.name + 1) / *((float *)&methoda.klass + 1);
    v69.fields.z = *(float *)&methoda.klass / *((float *)&methoda.klass + 1);
    v69.fields.w = *((float *)&methoda.klass + 1) / *((float *)&methoda.klass + 1);
    *(_QWORD *)&v61.fields.m00 = 0LL;
    UnityEngine_Vector4___ctor(v69, v33, v34, v35, v36, (const MethodInfo *)&v61);
    *(_OWORD *)&methoda.name = *(_OWORD *)&v61.fields.m00;
    v70.fields.x = *(float *)&methoda.methodPointer / *((float *)&methoda.invoker_method + 1);
    v70.fields.y = *((float *)&methoda.methodPointer + 1) / *((float *)&methoda.invoker_method + 1);
    v70.fields.z = *(float *)&methoda.invoker_method / *((float *)&methoda.invoker_method + 1);
    v70.fields.w = *((float *)&methoda.invoker_method + 1) / *((float *)&methoda.invoker_method + 1);
    *(_QWORD *)&v61.fields.m20 = 0LL;
    *(_QWORD *)&v61.fields.m00 = 0LL;
    UnityEngine_Vector4___ctor(v70, *((float *)&methoda.invoker_method + 1), v37, v38, v39, (const MethodInfo *)&v61);
    v67.fields.y = v8;
    v67.fields.z = 0.0;
    *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v61.fields.m00;
    v67.fields.x = v9;
    UnityEngine_Matrix4x4__Translate(&v61, v67, 0LL);
    v55 = v61;
    v40 = *(_OWORD *)&v61.fields.m02;
    v42 = *(_OWORD *)&v61.fields.m00;
    v41 = *(_OWORD *)&v61.fields.m01;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m03 = *(_OWORD *)&v61.fields.m03;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m02 = v40;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m01 = v41;
    *(_OWORD *)&this->fields.orthoViewMat.fields.m00 = v42;
    name = methoda.name;
    LODWORD(v41) = methoda.klass;
    v54 = v55;
    LODWORD(v42) = HIDWORD(methoda.klass);
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_40733424(
                                                &v54,
                                                *(UnityEngine_Vector4_o *)((char *)&v42 - 12),
                                                0LL);
    v44 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
    v66 = methoda.methodPointer;
    v45 = (int)methoda.invoker_method;
    v46 = *(_OWORD *)&this->fields.orthoViewMat.fields.m00;
    v47 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
    *(_OWORD *)&v53.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
    *(_OWORD *)&v53.fields.m03 = v44;
    LODWORD(v44) = HIDWORD(methoda.invoker_method);
    *(_OWORD *)&v53.fields.m00 = v46;
    *(_OWORD *)&v53.fields.m01 = v47;
    v71 = UnityEngine_Matrix4x4__op_Multiply_40733424(&v53, *(UnityEngine_Vector4_o *)((char *)&v44 - 12), 0LL);
    methoda.methodPointer = *(Il2CppMethodPointer *)&v71.fields.x;
    methoda.invoker_method = *(void **)&v71.fields.z;
    peRenderTexture__orthogonalMatrix(
      &v63,
      v48,
      *(float *)&methoda.name,
      v71.fields.x,
      v71.fields.y,
      *((float *)&methoda.name + 1),
      v49);
    v50 = *(_OWORD *)&v63.fields.m00;
    v51 = *(_OWORD *)&v63.fields.m01;
    v52 = *(_OWORD *)&v63.fields.m02;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03 = *(_OWORD *)&v63.fields.m03;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02 = v52;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01 = v51;
    *(_OWORD *)&this->fields.orthoProjectionMat.fields.m00 = v50;
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
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  UnityEngine_Camera_o *v15; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Camera_o *v18; // x0
  float fieldOfView; // s0
  UnityEngine_Camera_o *v20; // x0
  float v21; // s8
  float aspect; // s0
  UnityEngine_Camera_o *v23; // x0
  float v24; // s9
  float v25; // s0
  UnityEngine_Camera_o *v26; // x0
  float v27; // s10
  float farClipPlane; // s0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  float v31; // s0
  float v32; // s1
  float v33; // s2
  UnityEngine_Renderer_o *v34; // x0
  float v35; // s8
  float v36; // s9
  float v37; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Renderer_o *v39; // x0
  UnityEngine_Material_o *v40; // x0
  UnityEngine_Matrix4x4_o v41; // [xsp+0h] [xbp-310h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+40h] [xbp-2D0h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+80h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+C0h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+100h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+140h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+180h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+1C0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+200h] [xbp-110h]
  MethodInfo methoda; // [xsp+240h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+290h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4106B0A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15977/*"_ProjectorMatrixVP"*/, v3);
    sub_B16FFC(&StringLiteral_15978/*"_ProjectorPos"*/, v4);
    byte_4106B0A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&methoda.name, 0, 64);
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
        v15 = this->fields.rasterCamera;
        v54.fields.m_Width = 1.0;
        v54.fields.m_XMin = 0.0;
        v54.fields.m_YMin = 0.0;
        v54.fields.m_Height = 1.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v54, v11, v12, v13, v14, &methoda);
        if ( !v15 )
          goto LABEL_30;
        *(_QWORD *)&v55.fields.m_XMin = methoda.methodPointer;
        *(_QWORD *)&v55.fields.m_Width = methoda.invoker_method;
        UnityEngine_Camera__set_rect(v15, v55, 0LL);
        v52.fields.x = 1.0;
        v52.fields.z = -1.0;
        v52.fields.y = 1.0;
        UnityEngine_Matrix4x4__Scale(&v48, v52, 0LL);
        v49 = v48;
        v16 = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !v16 )
          goto LABEL_30;
        transform = UnityEngine_Component__get_transform(v16, 0LL);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v48, transform, 0LL);
        v46 = v48;
        v47 = v49;
        UnityEngine_Matrix4x4__op_Multiply(&v48, &v47, &v46, 0LL);
        v51 = v48;
        v18 = this->fields.rasterCamera;
        if ( !v18 )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView(v18, 0LL);
        v20 = this->fields.rasterCamera;
        if ( !v20 )
          goto LABEL_30;
        v21 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect(v20, 0LL);
        v23 = this->fields.rasterCamera;
        if ( !v23 )
          goto LABEL_30;
        v24 = aspect;
        v25 = UnityEngine_Camera__get_nearClipPlane(v23, 0LL);
        v26 = this->fields.rasterCamera;
        if ( !v26 )
          goto LABEL_30;
        v27 = v25;
        farClipPlane = UnityEngine_Camera__get_farClipPlane(v26, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v48, v21, v24, v27, farClipPlane, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v48;
        v45 = v48;
        UnityEngine_GL__GetGPUProjectionMatrix(&v48, &v45, 1, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v48;
        UnityEngine_Vector4__get_zero(0LL);
        v29 = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !v29 )
          goto LABEL_30;
        v30 = UnityEngine_Component__get_transform(v29, 0LL);
        if ( !v30 )
          goto LABEL_30;
        position = UnityEngine_Transform__get_position(v30, 0LL);
        *(UnityEngine_Vector4_o *)&v31 = UnityEngine_Vector4__op_Implicit(position, 0LL);
        v34 = this->fields.boardrenderer;
        if ( !v34 )
          goto LABEL_30;
        v35 = v31;
        v36 = v32;
        v37 = v33;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(v34, 0LL);
        v43 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        v42 = v51;
        UnityEngine_Matrix4x4__op_Multiply(&v44, &v43, &v42, 0LL);
        v48 = v44;
        if ( !sharedMaterial
          || (v41 = v48,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_15977/*"_ProjectorMatrixVP"*/, &v41, 0LL),
              (v39 = this->fields.boardrenderer) == 0LL)
          || (v40 = UnityEngine_Renderer__get_sharedMaterial(v39, 0LL)) == 0LL )
        {
LABEL_30:
          sub_B170D4();
        }
        v56.fields.w = 1.0;
        v56.fields.x = v35;
        v56.fields.y = v36;
        v56.fields.z = v37;
        UnityEngine_Material__SetVector(v40, (System_String_o *)StringLiteral_15978/*"_ProjectorPos"*/, v56, 0LL);
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
  UnityEngine_Component_o **p_rasterCamera; // x20
  UnityEngine_Object_o *rasterCamera; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *renderTexture; // x21
  UnityEngine_RenderTexture_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4106B0C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_4106B0C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( this->fields.isInitialized )
  {
    p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
    rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rasterCamera, 0LL, 0LL) )
    {
      if ( !*p_rasterCamera )
        goto LABEL_31;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rasterCamera, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.rasterCamera, 0LL, v10, v11, v12, v13, v14, v15);
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
    if ( *p_renderTexture )
    {
      UnityEngine_RenderTexture__Release(*p_renderTexture, 0LL);
      v18 = *p_renderTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)v18, 0LL);
      *p_renderTexture = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.renderTexture, 0LL, v19, v20, v21, v22, v23, v24);
LABEL_22:
      targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v32,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v32,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v32.fields.current )
            sub_B170D4();
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v32.fields.current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v32,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
          0LL,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      this->fields.isInitialized = 0;
      return;
    }
LABEL_31:
    sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x21
  struct UnityEngine_Camera_o *Component_WebViewObject; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  System_Int32_array **main; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Component_o *v40; // x21
  struct UnityEngine_GameObject_o *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UnityEngine_GameObject_o **p_targetObject; // x0
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  struct UnityEngine_Renderer_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct System_Collections_Generic_List_GameObject__o *changeLayerObjects; // x0
  const MethodInfo *v70; // x2
  struct System_Collections_Generic_List_string__o *changeLayerObjectPaths; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Transform_o *v74; // x0
  UnityEngine_Component_o *v75; // x22
  UnityEngine_GameObject_o *v76; // x0
  const MethodInfo *v77; // x2
  int v78; // w22
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v81; // x23
  UnityEngine_Object_o *v82; // x23
  UnityEngine_Object_o *v83; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v92; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_Texture_o *renderTexture; // x0
  struct UnityEngine_RenderTexture_o *v101; // x0
  struct UnityEngine_Camera_o *v102; // x23
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  UnityEngine_Transform_o *v110; // x0
  UnityEngine_Component_o *v111; // x8
  UnityEngine_Transform_o *v112; // x20
  UnityEngine_Transform_o *v113; // x0
  UnityEngine_Component_o *v114; // x0
  UnityEngine_Transform_o *v115; // x0
  UnityEngine_Transform_o *v116; // x20
  UnityEngine_Transform_o *v117; // x0
  float v118; // s0
  float v119; // s1
  float v120; // s2
  UnityEngine_Renderer_o *v121; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+8h] [xbp-B8h] BYREF
  int v125[2]; // [xsp+20h] [xbp-A0h]
  int v126; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v127; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4106B0B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_Camera___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_RenderTexture_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v17);
    byte_4106B0B = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v127, 0, sizeof(v127));
  v126 = 0;
  if ( !this->fields.isInitialized )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.targetCameraPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !transform )
        goto LABEL_100;
      v20 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, this->fields.targetCameraPath, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
      {
        v21 = UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
        {
          if ( !v21 )
            goto LABEL_100;
          v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      {
        if ( !v20 )
          goto LABEL_100;
        Component_WebViewObject = (struct UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   (UnityEngine_Component_o *)v20,
                                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = Component_WebViewObject;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetCamera,
          (System_Int32_array **)Component_WebViewObject,
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
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
    {
      main = (System_Int32_array **)UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = (struct UnityEngine_Camera_o *)main;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetCamera, main, v32, v33, v34, v35, v36, v37);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v38 )
        goto LABEL_100;
      v39 = UnityEngine_GameObject__get_transform(v38, 0LL);
      if ( !v39 )
        goto LABEL_100;
      v40 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v39, this->fields.targetObjectPath, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
      {
        if ( !v40 )
          goto LABEL_100;
        v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
        this->fields.targetObject = v41;
        p_targetObject = &this->fields.targetObject;
      }
      else
      {
        v41 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
        p_targetObject = &this->fields.targetObject;
        this->fields.targetObject = v41;
      }
      sub_B16F98(
        (BattleServantConfConponent_o *)p_targetObject,
        (System_Int32_array **)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
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
      v55 = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = v55;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardrenderer,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo,
                                                                                                    v51,
                                                                                                    v52,
                                                                                                    v53,
                                                                                                    v54);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v62;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    changeLayerObjects = this->fields.changeLayerObjects;
    if ( changeLayerObjects )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v124,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)changeLayerObjects,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v124;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields.current, v70) )
      {
        ;
      }
      v125[0] = 297;
      v126 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v126 = 0;
      changeLayerObjectPaths = this->fields.changeLayerObjectPaths;
      if ( changeLayerObjectPaths )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v124,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)changeLayerObjectPaths,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v127 = v124;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v127,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v127.fields.current;
          v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v73 )
            sub_B170D4();
          v74 = UnityEngine_GameObject__get_transform(v73, 0LL);
          if ( !v74 )
            sub_B170D4();
          v75 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v74, (System_String_o *)current, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL) )
          {
            if ( !v75 )
              sub_B170D4();
            v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v76, v77);
          }
        }
        v125[0] = 389;
        v78 = ++v126;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v127,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( v78 && v125[v78 - 1] == 389 )
          v126 = v78 - 1;
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v81 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(v81, 0LL, 0LL) )
            goto LABEL_95;
        }
        v82 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
          goto LABEL_95;
        v83 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
          goto LABEL_95;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v92 = (UnityEngine_RenderTexture_o *)sub_B170CC(UnityEngine_RenderTexture_TypeInfo, v84, v85, v86, v87);
        UnityEngine_RenderTexture___ctor_34867812(v92, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v92;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.renderTexture,
          (System_Int32_array **)v92,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99);
        renderTexture = (UnityEngine_Texture_o *)this->fields.renderTexture;
        if ( renderTexture )
        {
          UnityEngine_Texture__set_filterMode(renderTexture, this->fields.textureFilterMode, 0LL);
          v101 = this->fields.renderTexture;
          if ( v101 )
          {
            ((void (__fastcall *)(struct UnityEngine_RenderTexture_o *, _QWORD, Il2CppMethodPointer))v101->klass->vtable._8_set_dimension.method)(
              v101,
              (unsigned int)this->fields.textureDimension,
              v101->klass->vtable._9_get_isReadable.methodPtr);
            v102 = this->fields.targetCamera;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v103 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)v102,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v103;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.rasterCamera,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108,
              v109);
            if ( *p_rasterCamera )
            {
              v110 = UnityEngine_Component__get_transform(*p_rasterCamera, 0LL);
              v111 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v112 = v110;
                v113 = UnityEngine_Component__get_transform(v111, 0LL);
                if ( v112 )
                {
                  UnityEngine_Transform__SetParent(v112, v113, 0LL);
                  if ( *p_rasterCamera )
                  {
                    UnityEngine_Camera__set_targetTexture(
                      (UnityEngine_Camera_o *)*p_rasterCamera,
                      *p_renderTexture,
                      0LL);
                    if ( *p_rasterCamera )
                    {
                      UnityEngine_Camera__set_renderingPath(
                        (UnityEngine_Camera_o *)*p_rasterCamera,
                        this->fields.cameraRenderingPath,
                        0LL);
                      v114 = (UnityEngine_Component_o *)this->fields.rasterCamera;
                      if ( v114 )
                      {
                        v115 = UnityEngine_Component__get_transform(v114, 0LL);
                        if ( *p_rasterCamera )
                        {
                          v116 = v115;
                          v117 = UnityEngine_Component__get_transform(*p_rasterCamera, 0LL);
                          if ( v117 )
                          {
                            *(UnityEngine_Vector3_o *)&v118 = UnityEngine_Transform__get_position(v117, 0LL);
                            if ( v116 )
                            {
                              v129.fields.x = v118 + this->fields.cameraOffset.fields.x;
                              v129.fields.y = v119 + this->fields.cameraOffset.fields.y;
                              v129.fields.z = v120 + this->fields.cameraOffset.fields.z;
                              UnityEngine_Transform__set_position(v116, v129, 0LL);
                              v121 = this->fields.boardrenderer;
                              if ( v121 )
                              {
                                sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(v121, 0LL);
                                if ( sharedMaterial )
                                {
                                  UnityEngine_Material__SetTexture(
                                    sharedMaterial,
                                    (System_String_o *)StringLiteral_15950/*"_MainTex"*/,
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
    sub_B170D4();
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
  __int64 v4; // x4
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
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o **v25; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v37; // x21
  UnityEngine_GameObject_o *v38; // x23
  peRenderTexture_ChangeLayerObject_o *v39; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v46; // x8
  unsigned __int64 v47; // x10
  System_Collections_IEnumerator_c **v48; // x11
  __int64 v49; // x0
  UnityEngine_Component_o *v50; // x0
  __int64 v51; // x9
  UnityEngine_GameObject_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x20
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0

  if ( (byte_4106B0D & 1) == 0 )
  {
    sub_B16FFC(&peRenderTexture_ChangeLayerObject_TypeInfo, gameObject);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__, v13);
    sub_B16FFC(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v15);
    sub_B16FFC(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v16);
    sub_B16FFC(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v17);
    byte_4106B0D = 1;
  }
  v18 = sub_B170CC(peRenderTexture___c__DisplayClass48_0_TypeInfo, gameObject, method, v3, v4);
  peRenderTexture___c__DisplayClass48_0___ctor((peRenderTexture___c__DisplayClass48_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_44;
  *(_QWORD *)(v18 + 16) = gameObject;
  v25 = (UnityEngine_GameObject_o **)(v18 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)gameObject,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !*(_QWORD *)(v18 + 16) )
    goto LABEL_44;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *(UnityEngine_GameObject_o **)(v18 + 16),
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
    v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo,
                                                                     v27,
                                                                     v28,
                                                                     v29,
                                                                     v30);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v32,
      (Il2CppObject *)v18,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__);
    if ( !targetChangeLayerObjects )
      goto LABEL_44;
    if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v32,
            (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v37 = this->fields.targetChangeLayerObjects;
      v38 = *v25;
      v39 = (peRenderTexture_ChangeLayerObject_o *)sub_B170CC(
                                                     peRenderTexture_ChangeLayerObject_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
      peRenderTexture_ChangeLayerObject___ctor(v39, v38, 0LL);
      if ( !v37 )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    }
  }
  if ( !*v25 || (transform = UnityEngine_GameObject__get_transform(*v25, 0LL)) == 0LL )
LABEL_44:
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_20:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = (System_Collections_IEnumerator_c **)&v46->_1.interfaceOffsets->offset;
      while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        v48 += 2;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 1].method;
    }
    else
    {
LABEL_27:
      v49 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v50 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v49)(
                                       Enumerator,
                                       *(_QWORD *)(v49 + 8));
    if ( !v50 )
      goto LABEL_43;
    v51 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v51
      || (UnityEngine_Transform_c *)v50->klass->_2.typeHierarchy[v51 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v50);
LABEL_43:
      sub_B170D4();
    }
    v52 = UnityEngine_Component__get_gameObject(v50, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v52, v53);
  }
  v54 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v54 )
  {
    v55 = *(_QWORD *)v54;
    v56 = v54;
    if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
          goto LABEL_38;
      }
      v59 = v55 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_38:
      v59 = sub_AAFEF8(v54, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v56, *(_QWORD *)(v59 + 8));
  }
}


void __fastcall peRenderTexture__updateBounds(peRenderTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *targetObject; // x1
  float x; // s8
  float y; // s11
  float z; // s9
  float v8; // s12
  float v9; // s10
  float v10; // s0
  float v11; // s1
  float v12; // s12
  float v13; // s11
  UnityEngine_MeshFilter_o *Component_WebViewObject; // x0
  UnityEngine_Mesh_o *sharedMesh; // x0
  _DWORD *vertices; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 RBindex; // x8
  unsigned int v20; // w10
  _DWORD *v21; // x20
  __int64 LTindex; // x9
  __int64 v23; // x8
  __int64 v24; // x9
  float v25; // s14
  float v26; // s9
  float v27; // s15
  float v28; // s11
  float v29; // s13
  float v30; // s0
  float targetBoundsOffsetX; // s8
  float targetBoundsOffsetY; // s15
  float v33; // s14
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  float v36; // s11
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  float v39; // s9
  float v40; // s8
  float v41; // s10
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  float v44; // s4
  float v45; // s5
  float v46; // s6
  float v47; // s7
  __int64 v48; // x8
  float *v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  float v52; // s4
  float v53; // s5
  float v54; // s6
  float v55; // s7
  __int64 v56; // x8
  float *v57; // x8
  UnityEngine_Matrix4x4_o v58; // [xsp+0h] [xbp-1D0h] BYREF
  MethodInfo v59; // [xsp+40h] [xbp-190h] BYREF
  __int128 v60; // [xsp+90h] [xbp-140h]
  __int128 v61; // [xsp+A0h] [xbp-130h]
  __int128 v62; // [xsp+B0h] [xbp-120h]
  MethodInfo methoda; // [xsp+C0h] [xbp-110h] BYREF
  __int128 bounds; // [xsp+110h] [xbp-C0h] BYREF
  __int128 bounds_16; // [xsp+120h] [xbp-B0h]
  __int128 v66; // [xsp+130h] [xbp-A0h]
  __int128 v67; // [xsp+140h] [xbp-90h]
  UnityEngine_Bounds_o v68; // [xsp+150h] [xbp-80h] BYREF
  float v69; // [xsp+1B8h] [xbp-18h]
  float v70; // [xsp+1BCh] [xbp-14h]
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v78; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v79; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector4_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4106B0F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_4106B0F = 1;
  }
  memset(&v68, 0, sizeof(v68));
  targetObject = this->fields.targetObject;
  bounds = 0uLL;
  *(_QWORD *)&bounds_16 = 0LL;
  peRenderTexture__CalcRendererBounds_46244876(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  *(_QWORD *)&v68.fields.m_Extents.fields.y = bounds_16;
  *(_OWORD *)&v68.fields.m_Center.fields.x = bounds;
  center = UnityEngine_Bounds__get_center(&v68, 0LL);
  x = center.fields.x;
  y = center.fields.y;
  z = center.fields.z;
  extents = UnityEngine_Bounds__get_extents(&v68, 0LL);
  v8 = extents.fields.y;
  v9 = y + extents.fields.y;
  v77.fields.x = x + extents.fields.x;
  v77.fields.z = z - extents.fields.z;
  extents.fields.x = x - extents.fields.x;
  extents.fields.y = v9;
  extents.fields.z = z + extents.fields.z;
  v77.fields.y = v9;
  v10 = UnityEngine_Vector3__Distance(extents, v77, 0LL);
  if ( (float)(y - v8) >= -0.5 )
    v11 = (float)(v9 - (float)(y - v8)) * (float)(v9 - (float)(y - v8));
  else
    v11 = (float)(v9 + 0.5) * (float)(v9 + 0.5);
  v12 = sqrtf(v11);
  v13 = v10;
  Component_WebViewObject = (UnityEngine_MeshFilter_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  sharedMesh = UnityEngine_MeshFilter__get_sharedMesh(Component_WebViewObject, 0LL);
  if ( !sharedMesh )
    goto LABEL_22;
  vertices = UnityEngine_Mesh__get_vertices(sharedMesh, 0LL);
  if ( !vertices )
    goto LABEL_22;
  RBindex = this->fields._RBindex;
  v20 = vertices[6];
  v21 = vertices;
  if ( (unsigned int)RBindex >= v20 || (v69 = z, v70 = x, LTindex = this->fields._LTindex, (unsigned int)LTindex >= v20) )
  {
LABEL_23:
    sub_B17100(vertices, v17, v18);
    sub_B170A0();
  }
  v23 = (__int64)&vertices[3 * RBindex + 8];
  v24 = (__int64)&vertices[3 * LTindex + 8];
  v25 = *(float *)v23;
  v26 = v13;
  v27 = *(float *)(v23 + 4);
  v73.fields.y = *(float *)(v23 + 8);
  v28 = *(float *)(v24 + 4);
  v78.fields.y = *(float *)(v24 + 8);
  v78.fields.x = *(float *)v24;
  v73.fields.z = 0.0;
  v78.fields.z = 0.0;
  v73.fields.x = *(float *)v23;
  v29 = UnityEngine_Vector3__Distance(v73, v78, 0LL);
  v74.fields.z = 0.0;
  v79.fields.z = 0.0;
  v74.fields.x = v25;
  v74.fields.y = v27;
  v79.fields.x = v25;
  v79.fields.y = v28;
  v30 = UnityEngine_Vector3__Distance(v74, v79, 0LL);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  v33 = v30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_22;
  v36 = v12 * 0.5;
  v75.fields.x = (float)(v26 + targetBoundsOffsetX) / v29;
  v75.fields.y = (float)((float)(v36 + v36) + targetBoundsOffsetY) / v33;
  v75.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v75, 0LL);
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    goto LABEL_22;
  v38 = UnityEngine_GameObject__get_transform(v37, 0LL);
  v39 = v69;
  if ( !v38 )
    goto LABEL_22;
  v40 = v9 - v36;
  v41 = v70;
  v76.fields.y = v40 - v36;
  v76.fields.z = v69;
  v76.fields.x = v70;
  UnityEngine_Transform__set_position(v38, v76, 0LL);
  this->fields.targetBoundsCenter.fields.x = v41;
  this->fields.targetBoundsCenter.fields.y = v40;
  this->fields.targetBoundsCenter.fields.z = v39;
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v42 )
    goto LABEL_22;
  v43 = UnityEngine_GameObject__get_transform(v42, 0LL);
  if ( !v43 )
    goto LABEL_22;
  vertices = UnityEngine_Transform__get_localToWorldMatrix((UnityEngine_Matrix4x4_o *)&methoda.name, v43, 0LL);
  v66 = *(_OWORD *)&methoda.rgctx_data;
  v67 = *(_OWORD *)&methoda.token;
  bounds = *(_OWORD *)&methoda.name;
  bounds_16 = *(_OWORD *)&methoda.return_type;
  v48 = this->fields._RBindex;
  if ( (unsigned int)v48 >= v21[6] )
    goto LABEL_23;
  v49 = (float *)&v21[3 * v48];
  v80.fields.x = v49[8];
  v80.fields.y = v49[9];
  v80.fields.z = v49[10];
  v80.fields.w = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v80, v44, v45, v46, v47, &methoda);
  *(_QWORD *)&v81.fields.x = methoda.methodPointer;
  *(_QWORD *)&v81.fields.z = methoda.invoker_method;
  v61 = v66;
  v62 = v67;
  *(_OWORD *)&v59.token = bounds;
  v60 = bounds_16;
  v82 = UnityEngine_Matrix4x4__op_Multiply_40733424((UnityEngine_Matrix4x4_o *)&v59.token, v81, 0LL);
  this->fields.targetBoundsRB = UnityEngine_Vector4__op_Implicit_49546968(v82, 0LL);
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v50 || (v51 = UnityEngine_GameObject__get_transform(v50, 0LL)) == 0LL )
LABEL_22:
    sub_B170D4();
  vertices = UnityEngine_Transform__get_localToWorldMatrix((UnityEngine_Matrix4x4_o *)&v59, v51, 0LL);
  *(_OWORD *)&methoda.rgctx_data = *(_OWORD *)&v59.return_type;
  *(_OWORD *)&methoda.token = *(_OWORD *)&v59.rgctx_data;
  *(_OWORD *)&methoda.name = *(_OWORD *)&v59.methodPointer;
  *(_OWORD *)&methoda.return_type = *(_OWORD *)&v59.name;
  v56 = this->fields._LTindex;
  if ( (unsigned int)v56 >= v21[6] )
    goto LABEL_23;
  v57 = (float *)&v21[3 * v56];
  v83.fields.x = v57[8];
  v83.fields.y = v57[9];
  v83.fields.z = v57[10];
  v83.fields.w = 1.0;
  v59.methodPointer = 0LL;
  v59.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v83, v52, v53, v54, v55, &v59);
  *(_QWORD *)&v84.fields.x = v59.methodPointer;
  *(_QWORD *)&v84.fields.z = v59.invoker_method;
  v58 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
  v85 = UnityEngine_Matrix4x4__op_Multiply_40733424(&v58, v84, 0LL);
  this->fields.targetBoundsLT = UnityEngine_Vector4__op_Implicit_49546968(v85, 0LL);
}


void __fastcall peRenderTexture__updateLayer(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *rasterCamera; // x20
  UnityEngine_Camera_o *v8; // x0
  int32_t cullingMask; // w0
  int32_t changeCullingMask; // w1
  UnityEngine_Camera_o *v11; // x0
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  int32_t v15; // w0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4106B0E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_4106B0E = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
      v8 = this->fields.rasterCamera;
      if ( !v8 )
        goto LABEL_31;
      cullingMask = UnityEngine_Camera__get_cullingMask(v8, 0LL);
      changeCullingMask = this->fields.changeCullingMask;
      if ( cullingMask != changeCullingMask )
      {
        v11 = this->fields.rasterCamera;
        if ( !v11 )
          goto LABEL_31;
        UnityEngine_Camera__set_cullingMask(v11, changeCullingMask, 0LL);
      }
    }
  }
  targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
LABEL_31:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    current = v17.fields.current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v17.fields.current )
        sub_B170D4();
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v17.fields.current,
        this->fields.changeLayer,
        0LL);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, 0LL) )
      {
        v15 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        if ( v15 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            0LL);
        }
        else if ( v15 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x0
  struct UnityEngine_Matrix4x4_o *p_MainCamVP; // x23
  struct UnityEngine_Matrix4x4_o *p_orthoViewMat; // x22
  struct UnityEngine_Matrix4x4_o *p_orthoProjectionMat; // x21
  UnityEngine_Renderer_o *monitor; // x20
  UnityEngine_Material_o *sharedMaterial; // x0
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q3
  System_String_o *MainCamVPMat; // x1
  UnityEngine_Material_o *v17; // x0
  __int128 v18; // q1
  __int128 v19; // q2
  __int128 v20; // q3
  System_String_o *ParallelViewMat; // x1
  UnityEngine_Material_o *v22; // x0
  __int128 v23; // q1
  __int128 v24; // q2
  __int128 v25; // q3
  System_String_o *ParallelProjectionMat; // x1
  UnityEngine_Object_o *boardrenderer; // x20
  UnityEngine_Renderer_o *v28; // x0
  UnityEngine_Material_o *v29; // x0
  __int128 v30; // q1
  __int128 v31; // q2
  __int128 v32; // q3
  System_String_o *v33; // x1
  UnityEngine_Renderer_o *v34; // x0
  UnityEngine_Material_o *v35; // x0
  __int128 v36; // q1
  __int128 v37; // q2
  __int128 v38; // q3
  System_String_o *v39; // x1
  UnityEngine_Renderer_o *v40; // x0
  UnityEngine_Material_o *v41; // x0
  __int128 v42; // q1
  __int128 v43; // q2
  __int128 v44; // q3
  System_String_o *v45; // x1
  UnityEngine_Matrix4x4_o v46; // [xsp+10h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+50h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+90h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+D0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v50; // [xsp+110h] [xbp-1A0h]
  UnityEngine_Matrix4x4_o v51; // [xsp+150h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v52; // [xsp+190h] [xbp-120h]
  UnityEngine_Matrix4x4_o v53; // [xsp+1D0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v54; // [xsp+210h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+250h] [xbp-60h] BYREF

  if ( (byte_4106B10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_4106B10 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  peRenderTexture__CreatePVMatrix(
    this,
    this->fields.targetBoundsCenter,
    this->fields.targetBoundsLT,
    this->fields.targetBoundsRB,
    method);
  targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
  if ( !targetChangeLayerObjects )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v55.fields.current = *(Il2CppObject **)&v54.fields.m01;
  *(_OWORD *)&v55.fields.list = *(_OWORD *)&v54.fields.m00;
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v55.fields.current )
    {
      monitor = (UnityEngine_Renderer_o *)v55.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
      {
        if ( !monitor )
          sub_B170D4();
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(monitor, 0LL);
        v13 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
        v14 = *(_OWORD *)&p_MainCamVP->fields.m00;
        v15 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
        MainCamVPMat = this->fields.MainCamVPMat;
        *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
        *(_OWORD *)&v54.fields.m03 = v13;
        *(_OWORD *)&v54.fields.m00 = v14;
        *(_OWORD *)&v54.fields.m01 = v15;
        if ( !sharedMaterial )
          sub_B170D4();
        v53 = v54;
        UnityEngine_Material__SetMatrix(sharedMaterial, MainCamVPMat, &v53, 0LL);
        v17 = UnityEngine_Renderer__get_sharedMaterial(monitor, 0LL);
        v18 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
        v19 = *(_OWORD *)&p_orthoViewMat->fields.m00;
        v20 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
        ParallelViewMat = this->fields.ParallelViewMat;
        *(_OWORD *)&v52.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
        *(_OWORD *)&v52.fields.m03 = v18;
        *(_OWORD *)&v52.fields.m00 = v19;
        *(_OWORD *)&v52.fields.m01 = v20;
        if ( !v17 )
          sub_B170D4();
        v51 = v52;
        UnityEngine_Material__SetMatrix(v17, ParallelViewMat, &v51, 0LL);
        v22 = UnityEngine_Renderer__get_sharedMaterial(monitor, 0LL);
        v23 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
        v24 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
        v25 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
        ParallelProjectionMat = this->fields.ParallelProjectionMat;
        *(_OWORD *)&v50.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
        *(_OWORD *)&v50.fields.m03 = v23;
        *(_OWORD *)&v50.fields.m00 = v24;
        *(_OWORD *)&v50.fields.m01 = v25;
        if ( !v22 )
          sub_B170D4();
        v49 = v50;
        UnityEngine_Material__SetMatrix(v22, ParallelProjectionMat, &v49, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
  boardrenderer = (UnityEngine_Object_o *)this->fields.boardrenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardrenderer, 0LL, 0LL) )
  {
    v28 = this->fields.boardrenderer;
    if ( v28 )
    {
      v29 = UnityEngine_Renderer__get_sharedMaterial(v28, 0LL);
      v30 = *(_OWORD *)&this->fields.MainCamVP.fields.m03;
      v31 = *(_OWORD *)&p_MainCamVP->fields.m00;
      v32 = *(_OWORD *)&this->fields.MainCamVP.fields.m01;
      v33 = this->fields.MainCamVPMat;
      *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.MainCamVP.fields.m02;
      *(_OWORD *)&v54.fields.m03 = v30;
      *(_OWORD *)&v54.fields.m00 = v31;
      *(_OWORD *)&v54.fields.m01 = v32;
      if ( v29 )
      {
        v48 = v54;
        UnityEngine_Material__SetMatrix(v29, v33, &v48, 0LL);
        v34 = this->fields.boardrenderer;
        if ( v34 )
        {
          v35 = UnityEngine_Renderer__get_sharedMaterial(v34, 0LL);
          v36 = *(_OWORD *)&this->fields.orthoViewMat.fields.m03;
          v37 = *(_OWORD *)&p_orthoViewMat->fields.m00;
          v38 = *(_OWORD *)&this->fields.orthoViewMat.fields.m01;
          v39 = this->fields.ParallelViewMat;
          *(_OWORD *)&v52.fields.m02 = *(_OWORD *)&this->fields.orthoViewMat.fields.m02;
          *(_OWORD *)&v52.fields.m03 = v36;
          *(_OWORD *)&v52.fields.m00 = v37;
          *(_OWORD *)&v52.fields.m01 = v38;
          if ( v35 )
          {
            v47 = v52;
            UnityEngine_Material__SetMatrix(v35, v39, &v47, 0LL);
            v40 = this->fields.boardrenderer;
            if ( v40 )
            {
              v41 = UnityEngine_Renderer__get_sharedMaterial(v40, 0LL);
              v42 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m03;
              v43 = *(_OWORD *)&p_orthoProjectionMat->fields.m00;
              v44 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m01;
              v45 = this->fields.ParallelProjectionMat;
              *(_OWORD *)&v50.fields.m02 = *(_OWORD *)&this->fields.orthoProjectionMat.fields.m02;
              *(_OWORD *)&v50.fields.m03 = v42;
              *(_OWORD *)&v50.fields.m00 = v43;
              *(_OWORD *)&v50.fields.m01 = v44;
              if ( v41 )
              {
                v46 = v50;
                UnityEngine_Material__SetMatrix(v41, v45, &v46, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
}


void __fastcall peRenderTexture_ChangeLayerObject___ctor(
        peRenderTexture_ChangeLayerObject_o *this,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.gameObject = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)gameObject, v5, v6, v7, v8, v9, v10);
  peRenderTexture_ChangeLayerObject__Initialize(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall peRenderTexture_ChangeLayerObject__ChangeLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w0
  UnityEngine_GameObject_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_40F78B9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_40F78B9 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v6 = this->fields.gameObject;
    if ( v6 )
    {
      v7 = UnityEngine_GameObject__get_layer(v6, 0LL);
      v8 = this->fields.gameObject;
      this->fields.prevLayer = v7;
      if ( v8 )
      {
        if ( UnityEngine_GameObject__get_layer(v8, 0LL) == layer )
          return;
        v9 = this->fields.gameObject;
        if ( v9 )
        {
          UnityEngine_GameObject__set_layer(v9, layer, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  UnityEngine_Material_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Renderer_o *v19; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Renderer_o *v21; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v23; // x8
  UnityEngine_Material_o *v24; // x19
  UnityEngine_Texture_o *mainTexture; // x0

  if ( (byte_40F78BB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, material);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F78BB = 1;
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
      v12 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v8, v9, v10, v11);
      UnityEngine_Material___ctor_40718828(v12, material, 0LL);
      this->fields.changeMaterial = v12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.changeMaterial,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = this->fields.renderer;
    if ( !v19 )
      goto LABEL_22;
    UnityEngine_Renderer__set_sharedMaterial(v19, this->fields.changeMaterial, 0LL);
    orgMaterial = (UnityEngine_Object_o *)this->fields.orgMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(orgMaterial, 0LL, 0LL) )
    {
      v21 = this->fields.renderer;
      if ( v21 )
      {
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(v21, 0LL);
        v23 = this->fields.orgMaterial;
        if ( v23 )
        {
          v24 = sharedMaterial;
          mainTexture = UnityEngine_Material__get_mainTexture(v23, 0LL);
          if ( v24 )
          {
            UnityEngine_Material__set_mainTexture(v24, mainTexture, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_B170D4();
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_orgMaterial; // x19
  UnityEngine_Material_o *orgMaterial; // t1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F78B8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F78B8 = 1;
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
    v5 = (UnityEngine_Object_o *)*p_changeMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(v5, 0LL);
    *p_changeMaterial = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.changeMaterial, 0LL, v6, v7, v8, v9, v10, v11);
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
      sub_B170D4();
    orgMaterial = this->fields.orgMaterial;
    p_orgMaterial = (BattleServantConfConponent_o *)&this->fields.orgMaterial;
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, orgMaterial, 0LL);
  }
  else
  {
    p_orgMaterial = (BattleServantConfConponent_o *)&this->fields.orgMaterial;
  }
  p_orgMaterial->klass = 0LL;
  sub_B16F98(p_orgMaterial, 0LL, v14, v15, v16, v17, v18, v19);
  *p_renderer = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_renderer, 0LL, v22, v23, v24, v25, v26, v27);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *v13; // x0
  int32_t layer; // w0
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F78B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F78B7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v5 = this->fields.gameObject;
    if ( !v5
      || (Component_srcLineSprite = (struct UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v5,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = Component_srcLineSprite,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.renderer,
            (System_Int32_array **)Component_srcLineSprite,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v13 = this->fields.gameObject) == 0LL)
      || (layer = UnityEngine_GameObject__get_layer(v13, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = layer,
          !renderer) )
    {
      sub_B170D4();
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    this->fields.orgMaterial = sharedMaterial;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.orgMaterial,
      (System_Int32_array **)sharedMaterial,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  UnityEngine_Renderer_o *v4; // x0

  if ( (byte_40F78BC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F78BC = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v4 = this->fields.renderer;
    if ( !v4 )
      sub_B170D4();
    UnityEngine_Renderer__set_sharedMaterial(v4, this->fields.orgMaterial, 0LL);
  }
}


bool __fastcall peRenderTexture_ChangeLayerObject__SyncLayer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F78BA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F78BA = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v4 = this->fields.gameObject;
  if ( !v4 )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_layer(v4, 0LL) == this->fields.prevLayer )
    return 0;
  v6 = this->fields.gameObject;
  if ( !v6 )
LABEL_12:
    sub_B170D4();
  this->fields.prevLayer = UnityEngine_GameObject__get_layer(v6, 0LL);
  return 1;
}


int32_t __fastcall peRenderTexture_ChangeLayerObject__get_layer(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_40F78B6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F78B6 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v4 = this->fields.gameObject;
  if ( !v4 )
    sub_B170D4();
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
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v6; // x20

  if ( (byte_40F78B5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, n);
    byte_40F78B5 = 1;
  }
  if ( !n )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(gameObject, v6, 0LL);
}