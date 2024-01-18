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

  if ( (byte_419488E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16012/*"_MainCamVPMatrix"*/, method);
    sub_B2C35C(&StringLiteral_16034/*"_ParallelViewMatrix"*/, v9);
    sub_B2C35C(&StringLiteral_16033/*"_ParallelProjectionMatrix"*/, v10);
    byte_419488E = 1;
  }
  this->fields.changeCullingMask = -1;
  this->fields.boundsUpdateCount = -1;
  *(_OWORD *)&this->fields.textureWidth = xmmword_31E0BD0;
  *(_QWORD *)&this->fields.textureFilterMode = 0xFFFFFFFF00000001LL;
  v11 = (System_Int32_array **)StringLiteral_16012/*"_MainCamVPMatrix"*/;
  this->fields.MainCamVPMat = (struct System_String_o *)StringLiteral_16012/*"_MainCamVPMatrix"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.MainCamVPMat, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_16034/*"_ParallelViewMatrix"*/;
  this->fields.ParallelViewMat = (struct System_String_o *)StringLiteral_16034/*"_ParallelViewMatrix"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.ParallelViewMat, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_16033/*"_ParallelProjectionMatrix"*/;
  this->fields.ParallelProjectionMat = (struct System_String_o *)StringLiteral_16033/*"_ParallelProjectionMatrix"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.ParallelProjectionMat, v19, v20, v21, v22, v23, v24, v25);
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
  peRenderTexture__CalcRendererBounds_46515788(this, obj, &bounds, v4);
  v7 = *(_OWORD *)&bounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&bounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v7;
  return result;
}


void __fastcall peRenderTexture__CalcRendererBounds_46515788(
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int128 v15; // q0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_IEnumerator_c *v24; // x8
  unsigned __int64 v25; // x10
  System_Collections_IEnumerator_c **v26; // x11
  __int64 v27; // x0
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x9
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  __int64 v34; // x3
  __int64 v35; // x8
  __int64 v36; // x20
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  UnityEngine_Bounds_o v40; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Bounds_o v41; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v42; // [xsp+30h] [xbp-60h] BYREF
  __int64 v43; // [xsp+48h] [xbp-48h]
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_419488C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, obj);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    this = (peRenderTexture_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v10);
    byte_419488C = 1;
  }
  HIDWORD(v43) = 0;
  if ( !obj )
    goto LABEL_45;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
      v45.fields.x = x;
      v45.fields.y = y;
      v45.fields.z = z;
      if ( UnityEngine_Vector3__op_Equality(v45, zero, 0LL) )
      {
        UnityEngine_Renderer__get_bounds(&v41, (UnityEngine_Renderer_o *)Component_srcLineSprite, 0LL);
        v42 = v41;
        v15 = *(_OWORD *)&v41.fields.m_Center.fields.x;
        *(_QWORD *)&bounds->fields.m_Extents.fields.y = *(_QWORD *)&v41.fields.m_Extents.fields.y;
        *(_OWORD *)&bounds->fields.m_Center.fields.x = v15;
      }
      else
      {
        UnityEngine_Renderer__get_bounds(&v42, (UnityEngine_Renderer_o *)Component_srcLineSprite, 0LL);
        v40 = v42;
        UnityEngine_Bounds__Encapsulate_40624680(bounds, &v40, 0LL);
      }
    }
  }
  this = (peRenderTexture_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
LABEL_45:
    sub_B2C434(this, obj);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
    }
    else
    {
LABEL_26:
      v27 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v23);
    }
    v28 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(
                                       Enumerator,
                                       *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_44;
    v30 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (UnityEngine_Transform_c *)v28->klass->_2.typeHierarchy[v30 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v28);
LABEL_44:
      sub_B2C434(v28, v29);
    }
    gameObject = UnityEngine_Component__get_gameObject(v28, 0LL);
    peRenderTexture__CalcRendererBounds_46515788(v6, gameObject, bounds, v32);
  }
  v43 = 0x100000086LL;
  v33 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v35 = *(_QWORD *)v33;
    v36 = v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_37;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_37:
      v39 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v34);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
  }
  if ( (_DWORD)v43 == 134 )
    v43 = 134LL;
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
  if ( (byte_419488D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_419488D = 1;
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
    v13 = this->fields.targetCamera;
    if ( !v13
      || (UnityEngine_Camera__get_projectionMatrix(&v62, v13, 0LL),
          v60 = v62,
          UnityEngine_GL__GetGPUProjectionMatrix(&v61, &v60, 1, 0LL),
          v62 = v61,
          (v13 = this->fields.targetCamera) == 0LL) )
    {
      sub_B2C434(v13, v12);
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
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_40700596(
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
    v69 = UnityEngine_Matrix4x4__op_Multiply_40700596(&v56, *(UnityEngine_Vector4_o *)((char *)&v29 - 12), 0LL);
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
    *(UnityEngine_Vector4_o *)&methoda.name = UnityEngine_Matrix4x4__op_Multiply_40700596(
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
    v71 = UnityEngine_Matrix4x4__op_Multiply_40700596(&v53, *(UnityEngine_Vector4_o *)((char *)&v44 - 12), 0LL);
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
  UnityEngine_Component_o *transform; // x0
  __int64 v17; // x1
  float fieldOfView; // s0
  float v19; // s8
  float aspect; // s0
  float v21; // s9
  float v22; // s0
  float v23; // s10
  float farClipPlane; // s0
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s8
  float v29; // s9
  float v30; // s10
  UnityEngine_Material_o *sharedMaterial; // x20
  UnityEngine_Matrix4x4_o v32; // [xsp+0h] [xbp-310h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+40h] [xbp-2D0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+80h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+C0h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+100h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+140h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+180h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+1C0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+200h] [xbp-110h]
  MethodInfo methoda; // [xsp+240h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+290h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4194885 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16040/*"_ProjectorMatrixVP"*/, v3);
    sub_B2C35C(&StringLiteral_16041/*"_ProjectorPos"*/, v4);
    byte_4194885 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
        v45.fields.m_Width = 1.0;
        v45.fields.m_XMin = 0.0;
        v45.fields.m_YMin = 0.0;
        v45.fields.m_Height = 1.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v45, v11, v12, v13, v14, &methoda);
        if ( !v15 )
          goto LABEL_30;
        *(_QWORD *)&v46.fields.m_XMin = methoda.methodPointer;
        *(_QWORD *)&v46.fields.m_Width = methoda.invoker_method;
        UnityEngine_Camera__set_rect(v15, v46, 0LL);
        v43.fields.x = 1.0;
        v43.fields.z = -1.0;
        v43.fields.y = 1.0;
        UnityEngine_Matrix4x4__Scale(&v39, v43, 0LL);
        v40 = v39;
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( !transform )
          goto LABEL_30;
        UnityEngine_Transform__get_worldToLocalMatrix(&v39, (UnityEngine_Transform_o *)transform, 0LL);
        v37 = v39;
        v38 = v40;
        UnityEngine_Matrix4x4__op_Multiply(&v39, &v38, &v37, 0LL);
        v42 = v39;
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v19 = fieldOfView;
        aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v21 = aspect;
        v22 = UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        v23 = v22;
        farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)transform, 0LL);
        UnityEngine_Matrix4x4__Perspective(&v39, v19, v21, v23, farClipPlane, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v39;
        v36 = v39;
        UnityEngine_GL__GetGPUProjectionMatrix(&v39, &v36, 1, 0LL);
        *(UnityEngine_Matrix4x4_o *)&methoda.name = v39;
        UnityEngine_Vector4__get_zero(0LL);
        transform = (UnityEngine_Component_o *)this->fields.rasterCamera;
        if ( !transform )
          goto LABEL_30;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( !transform )
          goto LABEL_30;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        *(UnityEngine_Vector4_o *)&v25 = UnityEngine_Vector4__op_Implicit(position, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.boardrenderer;
        if ( !transform )
          goto LABEL_30;
        v28 = v25;
        v29 = v26;
        v30 = v27;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)transform, 0LL);
        v34 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        v33 = v42;
        transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__op_Multiply(&v35, &v34, &v33, 0LL);
        v39 = v35;
        if ( !sharedMaterial
          || (v32 = v39,
              UnityEngine_Material__SetMatrix(sharedMaterial, (System_String_o *)StringLiteral_16040/*"_ProjectorMatrixVP"*/, &v32, 0LL),
              (transform = (UnityEngine_Component_o *)this->fields.boardrenderer) == 0LL)
          || (transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                       (UnityEngine_Renderer_o *)transform,
                                                       0LL)) == 0LL )
        {
LABEL_30:
          sub_B2C434(transform, v17);
        }
        v47.fields.w = 1.0;
        v47.fields.x = v28;
        v47.fields.y = v29;
        v47.fields.z = v30;
        UnityEngine_Material__SetVector(
          (UnityEngine_Material_o *)transform,
          (System_String_o *)StringLiteral_16041/*"_ProjectorPos"*/,
          v47,
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *renderTexture; // x21
  UnityEngine_Object_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4194887 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4194887 = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
      v10 = (UnityEngine_Component_o *)*p_rasterCamera;
      if ( !*p_rasterCamera )
        goto LABEL_31;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
      *p_rasterCamera = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rasterCamera, 0LL, v12, v13, v14, v15, v16, v17);
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
    v10 = (UnityEngine_Component_o *)*p_renderTexture;
    if ( *p_renderTexture )
    {
      UnityEngine_RenderTexture__Release((UnityEngine_RenderTexture_o *)v10, 0LL);
      v20 = (UnityEngine_Object_o *)*p_renderTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v20, 0LL);
      *p_renderTexture = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.renderTexture, 0LL, v21, v22, v23, v24, v25, v26);
LABEL_22:
      targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
      if ( targetChangeLayerObjects )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v35,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v35,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
        {
          if ( !v35.fields.current )
            sub_B2C434(0LL, v28);
          peRenderTexture_ChangeLayerObject__Finalize((peRenderTexture_ChangeLayerObject_o *)v35.fields.current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v35,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
        this->fields.targetChangeLayerObjects = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
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
LABEL_31:
    sub_B2C434(v10, v9);
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
  UnityEngine_Object_o *v38; // x21
  struct UnityEngine_GameObject_o *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UnityEngine_GameObject_o **p_targetObject; // x0
  struct UnityEngine_Renderer_o **p_boardrenderer; // x21
  UnityEngine_Object_o *boardrenderer; // x22
  struct UnityEngine_Renderer_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x1
  UnityEngine_Transform_o *v67; // x0
  __int64 v68; // x1
  UnityEngine_Object_o *v69; // x22
  _BOOL8 v70; // x0
  __int64 v71; // x1
  UnityEngine_GameObject_o *v72; // x0
  const MethodInfo *v73; // x2
  int v74; // w22
  UnityEngine_Component_o **p_rasterCamera; // x22
  UnityEngine_Object_o *rasterCamera; // x23
  UnityEngine_Object_o *v77; // x23
  UnityEngine_Object_o *v78; // x23
  UnityEngine_Object_o *v79; // x21
  int32_t textureWidth; // w21
  int32_t textureHeight; // w23
  int32_t textureDepth; // w24
  int32_t textureFormat; // w25
  UnityEngine_RenderTexture_o *v84; // x26
  UnityEngine_RenderTexture_o **p_renderTexture; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct UnityEngine_Camera_o *v92; // x23
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_Component_o *v100; // x8
  UnityEngine_Transform_o *v101; // x20
  UnityEngine_Transform_o *v102; // x20
  float v103; // s0
  float v104; // s1
  float v105; // s2
  int32_t boundsUpdateCount; // w8
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+8h] [xbp-B8h] BYREF
  int v108[2]; // [xsp+20h] [xbp-A0h]
  int v109; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4194886 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_Camera___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_RenderTexture_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v17);
    byte_4194886 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v110, 0, sizeof(v110));
  v109 = 0;
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
        v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.targetCameraPath, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_100;
          transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)v21,
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
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
        this->fields.targetCamera = Component_WebViewObject;
        sub_B2C2F8(
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
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetCamera, main, v32, v33, v34, v35, v36, v37);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.targetObjectPath, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_100;
      v38 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)gameObject,
                                      this->fields.targetObjectPath,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_100;
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
        this->fields.targetObject = v39;
        p_targetObject = &this->fields.targetObject;
      }
      else
      {
        v39 = UnityEngine_GameObject__Find(this->fields.targetObjectPath, 0LL);
        p_targetObject = &this->fields.targetObject;
        this->fields.targetObject = v39;
      }
      sub_B2C2F8(
        (BattleServantConfConponent_o *)p_targetObject,
        (System_Int32_array **)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
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
      v49 = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      this->fields.boardrenderer = v49;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardrenderer,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v56,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___ctor__);
    this->fields.targetChangeLayerObjects = (struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v56;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.targetChangeLayerObjects,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjects;
    if ( gameObject )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v107,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v107;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
            peRenderTexture__registChangeLayerObjects(this, (UnityEngine_GameObject_o *)i.fields.current, v63) )
      {
        ;
      }
      v108[0] = 297;
      v109 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v109 = 0;
      gameObject = (UnityEngine_GameObject_o *)this->fields.changeLayerObjectPaths;
      if ( gameObject )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v107,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v110 = v107;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v110,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v110.fields.current;
          v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !v65 )
            sub_B2C434(0LL, v66);
          v67 = UnityEngine_GameObject__get_transform(v65, 0LL);
          if ( !v67 )
            sub_B2C434(0LL, v68);
          v69 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v67, (System_String_o *)current, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v70 = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
          if ( v70 )
          {
            if ( !v69 )
              sub_B2C434(v70, v71);
            v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
            peRenderTexture__registChangeLayerObjects(this, v72, v73);
          }
        }
        v108[0] = 389;
        v74 = ++v109;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v110,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( v74 && v108[v74 - 1] == 389 )
          v109 = v74 - 1;
        p_rasterCamera = (UnityEngine_Component_o **)&this->fields.rasterCamera;
        rasterCamera = (UnityEngine_Object_o *)this->fields.rasterCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(rasterCamera, 0LL, 0LL) )
        {
          v77 = (UnityEngine_Object_o *)*p_boardrenderer;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(v77, 0LL, 0LL) )
            goto LABEL_95;
        }
        v78 = (UnityEngine_Object_o *)*p_targetCamera;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
          goto LABEL_95;
        v79 = (UnityEngine_Object_o *)*p_boardrenderer;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
          goto LABEL_95;
        textureWidth = this->fields.textureWidth;
        textureHeight = this->fields.textureHeight;
        textureDepth = this->fields.textureDepth;
        textureFormat = this->fields.textureFormat;
        v84 = (UnityEngine_RenderTexture_o *)sub_B2C42C(UnityEngine_RenderTexture_TypeInfo);
        UnityEngine_RenderTexture___ctor_35373244(v84, textureWidth, textureHeight, textureDepth, textureFormat, 0LL);
        p_renderTexture = &this->fields.renderTexture;
        this->fields.renderTexture = v84;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.renderTexture,
          (System_Int32_array **)v84,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
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
            v92 = this->fields.targetCamera;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v93 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)v92,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_Camera___);
            *p_rasterCamera = (UnityEngine_Component_o *)v93;
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rasterCamera, v93, v94, v95, v96, v97, v98, v99);
            gameObject = (UnityEngine_GameObject_o *)*p_rasterCamera;
            if ( *p_rasterCamera )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
              v100 = (UnityEngine_Component_o *)*p_targetCamera;
              if ( *p_targetCamera )
              {
                v101 = (UnityEngine_Transform_o *)gameObject;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v100, 0LL);
                if ( v101 )
                {
                  UnityEngine_Transform__SetParent(v101, (UnityEngine_Transform_o *)gameObject, 0LL);
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
                          v102 = (UnityEngine_Transform_o *)gameObject;
                          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                     *p_rasterCamera,
                                                                     0LL);
                          if ( gameObject )
                          {
                            *(UnityEngine_Vector3_o *)&v103 = UnityEngine_Transform__get_position(
                                                                (UnityEngine_Transform_o *)gameObject,
                                                                0LL);
                            if ( v102 )
                            {
                              v112.fields.x = v103 + this->fields.cameraOffset.fields.x;
                              v112.fields.y = v104 + this->fields.cameraOffset.fields.y;
                              v112.fields.z = v105 + this->fields.cameraOffset.fields.z;
                              UnityEngine_Transform__set_position(v102, v112, 0LL);
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
                                    (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
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
    sub_B2C434(gameObject, v19);
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
  __int64 v16; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o **v25; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *targetChangeLayerObjects; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x23
  struct System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v29; // x21
  UnityEngine_GameObject_o *v30; // x23
  peRenderTexture_ChangeLayerObject_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_IEnumerator_c *v40; // x8
  unsigned __int64 v41; // x10
  System_Collections_IEnumerator_c **v42; // x11
  __int64 v43; // x0
  UnityEngine_Component_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x9
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  __int64 v52; // x20
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0

  if ( (byte_4194888 & 1) == 0 )
  {
    sub_B2C35C(&peRenderTexture_ChangeLayerObject_TypeInfo, gameObject);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__, v11);
    sub_B2C35C(&System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v13);
    sub_B2C35C(&Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__, v14);
    sub_B2C35C(&peRenderTexture___c__DisplayClass48_0_TypeInfo, v15);
    byte_4194888 = 1;
  }
  v16 = sub_B2C42C(peRenderTexture___c__DisplayClass48_0_TypeInfo);
  peRenderTexture___c__DisplayClass48_0___ctor((peRenderTexture___c__DisplayClass48_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_44;
  *(_QWORD *)(v16 + 16) = gameObject;
  v25 = (UnityEngine_GameObject_o **)(v16 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 16),
    (System_Int32_array **)gameObject,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  transform = *(UnityEngine_GameObject_o **)(v16 + 16);
  if ( !transform )
    goto LABEL_44;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      transform,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    targetChangeLayerObjects = this->fields.targetChangeLayerObjects;
    v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_peRenderTexture_ChangeLayerObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v28,
      (Il2CppObject *)v16,
      Method_peRenderTexture___c__DisplayClass48_0__registChangeLayerObjects_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_peRenderTexture_ChangeLayerObject___ctor__);
    if ( !targetChangeLayerObjects )
      goto LABEL_44;
    if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            targetChangeLayerObjects,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Find__) )
    {
      v29 = this->fields.targetChangeLayerObjects;
      v30 = *v25;
      v31 = (peRenderTexture_ChangeLayerObject_o *)sub_B2C42C(peRenderTexture_ChangeLayerObject_TypeInfo);
      peRenderTexture_ChangeLayerObject___ctor(v31, v30, 0LL);
      if ( !v29 )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__Add__);
    }
  }
  transform = *v25;
  if ( !*v25 || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
LABEL_44:
    sub_B2C434(transform, v18);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_20:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = (System_Collections_IEnumerator_c **)&v40->_1.interfaceOffsets->offset;
      while ( *(v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        v42 += 2;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 1].method;
    }
    else
    {
LABEL_27:
      v43 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v39);
    }
    v44 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v43)(
                                       Enumerator,
                                       *(_QWORD *)(v43 + 8));
    if ( !v44 )
      goto LABEL_43;
    v46 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v44->klass->_2.bitflags2 + 1) < (unsigned int)v46
      || (UnityEngine_Transform_c *)v44->klass->_2.typeHierarchy[v46 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v44);
LABEL_43:
      sub_B2C434(v44, v45);
    }
    v47 = UnityEngine_Component__get_gameObject(v44, 0LL);
    peRenderTexture__registChangeLayerObjects(this, v47, v48);
  }
  v49 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v49 )
  {
    v51 = *(_QWORD *)v49;
    v52 = v49;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_38;
      }
      v55 = v51 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_38:
      v55 = sub_AC5258(v49, System_IDisposable_TypeInfo, 0LL, v50);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
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
  void *Component_WebViewObject; // x0
  __int64 v15; // x1
  __int64 RBindex; // x8
  unsigned int v17; // w10
  _DWORD *v18; // x20
  __int64 LTindex; // x9
  __int64 v20; // x8
  __int64 v21; // x9
  float v22; // s14
  float v23; // s9
  float v24; // s15
  float v25; // s11
  float v26; // s13
  float v27; // s0
  float targetBoundsOffsetX; // s8
  float targetBoundsOffsetY; // s15
  float v30; // s14
  float v31; // s11
  float v32; // s9
  float v33; // s8
  float v34; // s10
  float v35; // s4
  float v36; // s5
  float v37; // s6
  float v38; // s7
  __int64 v39; // x8
  float *v40; // x8
  float v41; // s4
  float v42; // s5
  float v43; // s6
  float v44; // s7
  __int64 v45; // x8
  float *v46; // x8
  __int64 v47; // x0
  UnityEngine_Matrix4x4_o v48; // [xsp+0h] [xbp-1D0h] BYREF
  MethodInfo v49; // [xsp+40h] [xbp-190h] BYREF
  __int128 v50; // [xsp+90h] [xbp-140h]
  __int128 v51; // [xsp+A0h] [xbp-130h]
  __int128 v52; // [xsp+B0h] [xbp-120h]
  MethodInfo methoda; // [xsp+C0h] [xbp-110h] BYREF
  __int128 bounds; // [xsp+110h] [xbp-C0h] BYREF
  __int128 bounds_16; // [xsp+120h] [xbp-B0h]
  __int128 v56; // [xsp+130h] [xbp-A0h]
  __int128 v57; // [xsp+140h] [xbp-90h]
  UnityEngine_Bounds_o v58; // [xsp+150h] [xbp-80h] BYREF
  float v59; // [xsp+1B8h] [xbp-18h]
  float v60; // [xsp+1BCh] [xbp-14h]
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v68; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v69; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_419488A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_MeshFilter___, method);
    byte_419488A = 1;
  }
  memset(&v58, 0, sizeof(v58));
  targetObject = this->fields.targetObject;
  bounds = 0uLL;
  *(_QWORD *)&bounds_16 = 0LL;
  peRenderTexture__CalcRendererBounds_46515788(this, targetObject, (UnityEngine_Bounds_o *)&bounds, v2);
  *(_QWORD *)&v58.fields.m_Extents.fields.y = bounds_16;
  *(_OWORD *)&v58.fields.m_Center.fields.x = bounds;
  center = UnityEngine_Bounds__get_center(&v58, 0LL);
  x = center.fields.x;
  y = center.fields.y;
  z = center.fields.z;
  extents = UnityEngine_Bounds__get_extents(&v58, 0LL);
  v8 = extents.fields.y;
  v9 = y + extents.fields.y;
  v67.fields.x = x + extents.fields.x;
  v67.fields.z = z - extents.fields.z;
  extents.fields.x = x - extents.fields.x;
  extents.fields.y = v9;
  extents.fields.z = z + extents.fields.z;
  v67.fields.y = v9;
  v10 = UnityEngine_Vector3__Distance(extents, v67, 0LL);
  if ( (float)(y - v8) >= -0.5 )
    v11 = (float)(v9 - (float)(y - v8)) * (float)(v9 - (float)(y - v8));
  else
    v11 = (float)(v9 + 0.5) * (float)(v9 + 0.5);
  v12 = sqrtf(v11);
  v13 = v10;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
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
  v17 = *((_DWORD *)Component_WebViewObject + 6);
  v18 = Component_WebViewObject;
  if ( (unsigned int)RBindex >= v17 || (v59 = z, v60 = x, LTindex = this->fields._LTindex, (unsigned int)LTindex >= v17) )
  {
LABEL_23:
    v47 = sub_B2C460(Component_WebViewObject);
    sub_B2C400(v47, 0LL);
  }
  v20 = (__int64)Component_WebViewObject + 12 * RBindex + 32;
  v21 = (__int64)Component_WebViewObject + 12 * LTindex + 32;
  v22 = *(float *)v20;
  v23 = v13;
  v24 = *(float *)(v20 + 4);
  v63.fields.y = *(float *)(v20 + 8);
  v25 = *(float *)(v21 + 4);
  v68.fields.y = *(float *)(v21 + 8);
  v68.fields.x = *(float *)v21;
  v63.fields.z = 0.0;
  v68.fields.z = 0.0;
  v63.fields.x = *(float *)v20;
  v26 = UnityEngine_Vector3__Distance(v63, v68, 0LL);
  v64.fields.z = 0.0;
  v69.fields.z = 0.0;
  v64.fields.x = v22;
  v64.fields.y = v24;
  v69.fields.x = v22;
  v69.fields.y = v25;
  v27 = UnityEngine_Vector3__Distance(v64, v69, 0LL);
  targetBoundsOffsetX = this->fields.targetBoundsOffsetX;
  targetBoundsOffsetY = this->fields.targetBoundsOffsetY;
  v30 = v27;
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_GameObject__get_transform(
                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  v31 = v12 * 0.5;
  v65.fields.x = (float)(v23 + targetBoundsOffsetX) / v26;
  v65.fields.y = (float)((float)(v31 + v31) + targetBoundsOffsetY) / v30;
  v65.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v65, 0LL);
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_GameObject__get_transform(
                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                              0LL);
  v32 = v59;
  if ( !Component_WebViewObject )
    goto LABEL_22;
  v33 = v9 - v31;
  v34 = v60;
  v66.fields.y = v33 - v31;
  v66.fields.z = v59;
  v66.fields.x = v60;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_WebViewObject, v66, 0LL);
  this->fields.targetBoundsCenter.fields.x = v34;
  this->fields.targetBoundsCenter.fields.y = v33;
  this->fields.targetBoundsCenter.fields.z = v32;
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
  v56 = *(_OWORD *)&methoda.rgctx_data;
  v57 = *(_OWORD *)&methoda.token;
  bounds = *(_OWORD *)&methoda.name;
  bounds_16 = *(_OWORD *)&methoda.return_type;
  v39 = this->fields._RBindex;
  if ( (unsigned int)v39 >= v18[6] )
    goto LABEL_23;
  v40 = (float *)&v18[3 * v39];
  v70.fields.x = v40[8];
  v70.fields.y = v40[9];
  v70.fields.z = v40[10];
  v70.fields.w = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v70, v35, v36, v37, v38, &methoda);
  *(_QWORD *)&v71.fields.x = methoda.methodPointer;
  *(_QWORD *)&v71.fields.z = methoda.invoker_method;
  v51 = v56;
  v52 = v57;
  *(_OWORD *)&v49.token = bounds;
  v50 = bounds_16;
  v72 = UnityEngine_Matrix4x4__op_Multiply_40700596((UnityEngine_Matrix4x4_o *)&v49.token, v71, 0LL);
  this->fields.targetBoundsRB = UnityEngine_Vector4__op_Implicit_49842536(v72, 0LL);
  Component_WebViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_WebViewObject
    || (Component_WebViewObject = UnityEngine_GameObject__get_transform(
                                    (UnityEngine_GameObject_o *)Component_WebViewObject,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(Component_WebViewObject, v15);
  }
  Component_WebViewObject = UnityEngine_Transform__get_localToWorldMatrix(
                              (UnityEngine_Matrix4x4_o *)&v49,
                              (UnityEngine_Transform_o *)Component_WebViewObject,
                              0LL);
  *(_OWORD *)&methoda.rgctx_data = *(_OWORD *)&v49.return_type;
  *(_OWORD *)&methoda.token = *(_OWORD *)&v49.rgctx_data;
  *(_OWORD *)&methoda.name = *(_OWORD *)&v49.methodPointer;
  *(_OWORD *)&methoda.return_type = *(_OWORD *)&v49.name;
  v45 = this->fields._LTindex;
  if ( (unsigned int)v45 >= v18[6] )
    goto LABEL_23;
  v46 = (float *)&v18[3 * v45];
  v73.fields.x = v46[8];
  v73.fields.y = v46[9];
  v73.fields.z = v46[10];
  v73.fields.w = 1.0;
  v49.methodPointer = 0LL;
  v49.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(v73, v41, v42, v43, v44, &v49);
  *(_QWORD *)&v74.fields.x = v49.methodPointer;
  *(_QWORD *)&v74.fields.z = v49.invoker_method;
  v48 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
  v75 = UnityEngine_Matrix4x4__op_Multiply_40700596(&v48, v74, 0LL);
  this->fields.targetBoundsLT = UnityEngine_Vector4__op_Implicit_49842536(v75, 0LL);
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
  Il2CppObject *current; // x20
  UnityEngine_Object_o *changeLayerObjectMaterial; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4194889 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4194889 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    sub_B2C434(targetChangeLayerObjects, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetChangeLayerObjects,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__);
    if ( !v10 )
      break;
    current = v18.fields.current;
    if ( this->fields.changeLayerEnabled )
    {
      if ( !v18.fields.current )
        sub_B2C434(v10, v11);
      peRenderTexture_ChangeLayerObject__ChangeLayer(
        (peRenderTexture_ChangeLayerObject_o *)v18.fields.current,
        this->fields.changeLayer,
        0LL);
    }
    changeLayerObjectMaterial = (UnityEngine_Object_o *)this->fields.changeLayerObjectMaterial;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Inequality(changeLayerObjectMaterial, 0LL, 0LL);
    if ( v14 )
    {
      if ( !current )
        sub_B2C434(v14, v15);
      if ( peRenderTexture_ChangeLayerObject__SyncLayer((peRenderTexture_ChangeLayerObject_o *)current, 0LL) )
      {
        v16 = peRenderTexture_ChangeLayerObject__get_layer((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        if ( v16 == this->fields.changeLayerObjectMaterialTargetLayer )
        {
          peRenderTexture_ChangeLayerObject__ChangeMaterial(
            (peRenderTexture_ChangeLayerObject_o *)current,
            this->fields.changeLayerObjectMaterial,
            0LL);
        }
        else if ( v16 == this->fields.changeLayerObjectMaterialRestoreLayer )
        {
          peRenderTexture_ChangeLayerObject__RestoreMaterial((peRenderTexture_ChangeLayerObject_o *)current, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
}


void __fastcall peRenderTexture__updateTransform(peRenderTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *targetChangeLayerObjects; // x0
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
  UnityEngine_Matrix4x4_o v40; // [xsp+10h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+50h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+90h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+D0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+110h] [xbp-1A0h]
  UnityEngine_Matrix4x4_o v45; // [xsp+150h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+190h] [xbp-120h]
  UnityEngine_Matrix4x4_o v47; // [xsp+1D0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+210h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+250h] [xbp-60h] BYREF

  if ( (byte_419488B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_419488B = 1;
  }
  memset(&v49, 0, sizeof(v49));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    targetChangeLayerObjects,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__GetEnumerator__);
  v49.fields.current = *(Il2CppObject **)&v48.fields.m01;
  *(_OWORD *)&v49.fields.list = *(_OWORD *)&v48.fields.m00;
  p_MainCamVP = &this->fields.MainCamVP;
  p_orthoViewMat = &this->fields.orthoViewMat;
  p_orthoProjectionMat = &this->fields.orthoProjectionMat;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__MoveNext__) )
  {
    if ( v49.fields.current )
    {
      monitor = (UnityEngine_Object_o *)v49.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
      if ( v13 )
      {
        if ( !monitor )
          sub_B2C434(v13, v14);
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
          sub_B2C434(0LL, MainCamVPMat);
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
          sub_B2C434(0LL, ParallelViewMat);
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
          sub_B2C434(0LL, ParallelProjectionMat);
        v43 = v44;
        UnityEngine_Material__SetMatrix(v25, ParallelProjectionMat, &v43, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_peRenderTexture_ChangeLayerObject__Dispose__);
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
        targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.boardrenderer;
        if ( targetChangeLayerObjects )
        {
          targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)targetChangeLayerObjects, 0LL);
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
            targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.boardrenderer;
            if ( targetChangeLayerObjects )
            {
              targetChangeLayerObjects = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)targetChangeLayerObjects, 0LL);
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
LABEL_32:
    sub_B2C434(targetChangeLayerObjects, v7);
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
  sub_B2C2F8(&this->fields, gameObject);
  peRenderTexture_ChangeLayerObject__Initialize(this, v5);
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

  if ( (byte_418557F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_418557F = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    sub_B2C434(v7, v6);
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
  UnityEngine_Renderer_o *sharedMaterial; // x0
  UnityEngine_Object_o *orgMaterial; // x20
  UnityEngine_Material_o *v12; // x8
  UnityEngine_Material_o *v13; // x19

  if ( (byte_4185581 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, material);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185581 = 1;
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
      v9 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_40686000(v9, material, 0LL);
      this->fields.changeMaterial = v9;
      sub_B2C2F8(&this->fields.changeMaterial, v9);
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
        v12 = this->fields.orgMaterial;
        if ( v12 )
        {
          v13 = (UnityEngine_Material_o *)sharedMaterial;
          sharedMaterial = (UnityEngine_Renderer_o *)UnityEngine_Material__get_mainTexture(v12, 0LL);
          if ( v13 )
          {
            UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)sharedMaterial, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_B2C434(sharedMaterial, v8);
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
  UnityEngine_Renderer_o **p_renderer; // x20
  UnityEngine_Object_o *renderer; // x21
  __int64 v8; // x1
  struct UnityEngine_Material_o **p_orgMaterial; // x19
  UnityEngine_Material_o *orgMaterial; // t1

  if ( (byte_418557E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418557E = 1;
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
    UnityEngine_Object__DestroyImmediate_35315108(v5, 0LL);
    *p_changeMaterial = 0LL;
    sub_B2C2F8(&this->fields.changeMaterial, 0LL);
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
      sub_B2C434(0LL, v8);
    orgMaterial = this->fields.orgMaterial;
    p_orgMaterial = &this->fields.orgMaterial;
    UnityEngine_Renderer__set_sharedMaterial(*p_renderer, orgMaterial, 0LL);
  }
  else
  {
    p_orgMaterial = &this->fields.orgMaterial;
  }
  *p_orgMaterial = 0LL;
  sub_B2C2F8(p_orgMaterial, 0LL);
  *p_renderer = 0LL;
  sub_B2C2F8(p_renderer, 0LL);
}


void __fastcall peRenderTexture_ChangeLayerObject__Initialize(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *layer; // x0
  struct UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  UnityEngine_Renderer_o *renderer; // x8
  struct UnityEngine_Material_o *sharedMaterial; // x0

  if ( (byte_418557D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418557D = 1;
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
      || (Component_srcLineSprite = (struct UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       layer,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___),
          this->fields.renderer = Component_srcLineSprite,
          sub_B2C2F8(&this->fields.renderer, Component_srcLineSprite),
          (layer = this->fields.gameObject) == 0LL)
      || (layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(layer, 0LL),
          renderer = this->fields.renderer,
          this->fields.prevLayer = (int)layer,
          !renderer) )
    {
      sub_B2C434(layer, v5);
    }
    sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
    this->fields.orgMaterial = sharedMaterial;
    sub_B2C2F8(&this->fields.orgMaterial, sharedMaterial);
  }
}


void __fastcall peRenderTexture_ChangeLayerObject__RestoreMaterial(
        peRenderTexture_ChangeLayerObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *renderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4185582 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185582 = 1;
  }
  renderer = (UnityEngine_Object_o *)this->fields.renderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderer, 0LL, 0LL) )
  {
    v5 = this->fields.renderer;
    if ( !v5 )
      sub_B2C434(0LL, v4);
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

  if ( (byte_4185580 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185580 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_layer(v5, 0LL) == this->fields.prevLayer )
    return 0;
  v5 = this->fields.gameObject;
  if ( !v5 )
LABEL_12:
    sub_B2C434(v5, v4);
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

  if ( (byte_418557C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418557C = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    return -1;
  v5 = this->fields.gameObject;
  if ( !v5 )
    sub_B2C434(0LL, v4);
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
  if ( (byte_418557B & 1) == 0 )
  {
    this = (peRenderTexture___c__DisplayClass48_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, n);
    byte_418557B = 1;
  }
  if ( !n )
    sub_B2C434(this, n);
  gameObject = (UnityEngine_Object_o *)n->fields.gameObject;
  v6 = (UnityEngine_Object_o *)v4->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(gameObject, v6, 0LL);
}