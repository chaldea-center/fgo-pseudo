void BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_5934C81 & 1) == 0 )
  {
    sub_21FFC50(&BaseEarthPoint_TypeInfo);
    byte_5934C81 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = BaseEarthPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void BaseEarthPoint___ctor(BaseEarthPoint_o *this, const MethodInfo *method)
{
  this->fields.IsParticleDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float BaseEarthPoint__Cos2Deg(float cos, const MethodInfo *method)
{
  return acosf(cos) * 57.296;
}


// local variable allocation has failed, the output may be wrong!
float BaseEarthPoint__GetDotXZ(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *mEarthCore; // x0
  float x; // s8
  float z; // s9
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  float v13; // s3
  float v14; // s8
  int v15; // w8
  float v16; // s8
  float32x2_t v17; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int v19; // w8
  float v21; // [xsp+0h] [xbp-40h]
  float v22; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_21FFECC(0, v6);
  x = Position.fields.x;
  z = Position.fields.z;
  v10 = UnityEngine_Component__get_gameObject(mEarthCore, 0);
  v24 = GameObjectExtensions__GetPosition(v10, 0);
  v13 = x - v24.fields.x;
  v14 = z - v24.fields.z;
  v15 = (unsigned __int8)byte_5931943;
  vec->fields.y = 0.0;
  vec->fields.x = v13;
  vec->fields.z = z - v24.fields.z;
  if ( !v15 )
  {
    v21 = v13;
    sub_21FFC50(&System_Math_TypeInfo);
    v13 = v21;
    byte_5931943 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v22 = v13;
    *(__n128 *)&v24.fields.x = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v12);
    v13 = v22;
  }
  v24.fields.x = sqrtf((float)(v14 * v14) + (float)(v13 * v13));
  if ( v24.fields.x <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v17.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v16 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v16 = v14 / v24.fields.x;
    v17.n64_u64[0] = vdiv_f32((float32x2_t)LODWORD(v13), vdup_lane_s32(*(int32x2_t *)&v24.fields.x, 0)).n64_u64[0];
  }
  *(float32x2_t *)&vec->fields.x = v17;
  v19 = (unsigned __int8)byte_5934CBC;
  vec->fields.z = v16;
  if ( !v19 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5934CBC = 1;
  }
  return (float)(v16 * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + vaddv_f32(vmul_f32(v17, *(float32x2_t *)&UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x));
}


float BaseEarthPoint__GetDotXZ_Deg(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32x2_t v8; // d3
  float z; // s8
  int v10; // w8
  int v11; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v13; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  float v16; // s8
  float y; // s9
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s13
  float w; // s14
  __int64 v23; // x1
  __int64 v24; // x2
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float v29; // s12
  float v30; // s13
  float x; // [xsp+10h] [xbp-100h]
  float v33; // [xsp+10h] [xbp-100h]
  UnityEngine_Matrix4x4_o v34; // [xsp+20h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+60h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_5934C80 & 1) == 0 )
  {
    sub_21FFC50(&BaseEarthPoint_TypeInfo);
    byte_5934C80 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  z = LocalPosition.fields.z;
  vec->fields.x = LocalPosition.fields.x;
  v10 = (unsigned __int8)byte_5931943;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  if ( !v10 )
  {
    x = LocalPosition.fields.x;
    sub_21FFC50(&System_Math_TypeInfo);
    LocalPosition.fields.x = x;
    byte_5931943 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v33 = LocalPosition.fields.x;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v7);
    LocalPosition.fields.x = v33;
  }
  v8.n64_f32[0] = sqrtf((float)(z * z) + (float)(LocalPosition.fields.x * LocalPosition.fields.x));
  if ( v8.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v13;
  }
  else
  {
    v11 = (unsigned __int8)byte_5931940;
    vec->fields.z = z / v8.n64_f32[0];
    *(float32x2_t *)&vec->fields.x = vdiv_f32((float32x2_t)LODWORD(LocalPosition.fields.x), vdup_lane_s32(v8, 0));
    if ( !v11 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v15 = UnityEngine_Vector3_TypeInfo->static_fields,
        v16 = v15->zeroVector.fields.x,
        y = v15->zeroVector.fields.y,
        v18 = v15->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0)) == 0)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0)) == 0 )
  {
    sub_21FFECC(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0);
  v19 = rotation.fields.x;
  v20 = rotation.fields.y;
  v21 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v37.fields.y = y;
  v37.fields.z = v18;
  v40.fields.x = v19;
  v40.fields.y = v20;
  v40.fields.z = v21;
  v40.fields.w = w;
  v37.fields.x = v16;
  UnityEngine_Matrix4x4__TRS(&v34, v37, v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v35 = v34;
  if ( !byte_5934CBC )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5934CBC = 1;
  }
  v38 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v35, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v25 = v38.fields.x;
  v26 = v38.fields.y;
  v27 = v38.fields.z;
  v28 = vec->fields.x;
  v29 = vec->fields.y;
  v30 = vec->fields.z;
  if ( !*(&BaseEarthPoint_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, v23, v24);
  return acosf((float)(v27 * v30) + (float)((float)(v28 * v25) + (float)(v26 * v29))) * 57.296;
}


System_String_o *BaseEarthPoint__GetEffectName(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return 0;
}


void BaseEarthPoint__LateUpdate(BaseEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


void BaseEarthPoint__Setup(
        BaseEarthPoint_o *this,
        bool isActive,
        UnityEngine_Camera_o *earthEffCamera,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x23
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  float v25; // s8
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *v32; // x25
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x24
  UnityEngine_Transform_o *v36; // x25
  UnityEngine_Transform_o *v37; // x25
  UnityEngine_Transform_o *v38; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  float x; // s8
  float y; // s9
  float v60; // s10
  float v61; // s2
  float v62; // s0
  float v63; // s1
  float v64; // s2
  struct UnityEngine_Vector3_StaticFields *v65; // x8
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  UnityEngine_Vector3_o v72; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934C7F & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934C7F = 1;
  }
  v72.fields.z = 0.0;
  *(_QWORD *)&v72.fields.x = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)gameObject,
                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_50;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v9 )
    goto LABEL_50;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          v9,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v17;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mEarthCore, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_50;
  LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  v73.fields.x = 1.0 / v25;
  v73.fields.y = 1.0 / v25;
  v73.fields.z = 1.0 / v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v73, 0);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0, 0) )
    {
      v29 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, const MethodInfo *))this->klass->vtable._5_GetEffectName.methodPtr)(
                                 this,
                                 this->klass->vtable._5_GetEffectName.method);
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v30, v31);
      v35 = (UnityEngine_Object_o *)CommonEffectManager__SetSkinEffect(v29, v32, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      gameObject = UnityEngine_Object__op_Inequality(v35, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_50;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v36 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5931940 )
        {
          gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v36 )
          goto LABEL_50;
        UnityEngine_Transform__set_localPosition(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v37 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5931946 )
        {
          gameObject = sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
          byte_5931946 = 1;
        }
        if ( !v37 )
          goto LABEL_50;
        UnityEngine_Transform__set_localRotation(
          v37,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v38 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5931945 )
        {
          gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        if ( !v38 )
          goto LABEL_50;
        UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)v35,
                                       (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
        this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mParticleSystem,
          (int32_t)ComponentInChildren_object,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        this->fields.mParticleSystemObj = (struct UnityEngine_GameObject_o *)v35;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mParticleSystemObj,
          (int32_t)v35,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v72.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v72.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v72, v27);
  if ( v72.fields.x < 0.0 )
    DotXZ_Deg = -DotXZ_Deg;
  this->fields._FocusAng_k__BackingField = DotXZ_Deg;
  if ( isActive )
  {
    if ( *p_mEarthCore )
    {
      (*p_mEarthCore)->fields._PointInitAngle_k__BackingField = DotXZ_Deg + 45.0;
      goto LABEL_40;
    }
LABEL_50:
    sub_21FFECC(gameObject, v8);
  }
LABEL_40:
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v55, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v60 = LocalPosition.fields.z;
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56, v57);
  v61 = sqrtf((float)(v60 * v60) + (float)((float)(x * x) + (float)(y * y)));
  if ( v61 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    v65 = UnityEngine_Vector3_TypeInfo->static_fields;
    v62 = v65->zeroVector.fields.x;
    v63 = v65->zeroVector.fields.y;
    v64 = v65->zeroVector.fields.z;
  }
  else
  {
    v62 = x / v61;
    v63 = y / v61;
    v64 = v60 / v61;
  }
  v75.fields.x = -v62;
  v75.fields.y = -v63;
  v75.fields.z = -v64;
  v76 = UnityEngine_Quaternion__LookRotation_83157944(v75, 0);
  this->fields._FocusQua_k__BackingField = v76;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v76, 0);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.earthEffectCamera,
    (int32_t)earthEffCamera,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
}


BaseCore_o *BaseEarthPoint__get_EarthCore(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.mEarthCore;
}


float BaseEarthPoint__get_FocusAng(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._FocusAng_k__BackingField;
}


UnityEngine_Quaternion_o BaseEarthPoint__get_FocusQua(BaseEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields._FocusQua_k__BackingField.fields.x;
  y = this->fields._FocusQua_k__BackingField.fields.y;
  z = this->fields._FocusQua_k__BackingField.fields.z;
  w = this->fields._FocusQua_k__BackingField.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool BaseEarthPoint__get_IsForward(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.mIsForward;
}


void BaseEarthPoint__set_FocusAng(BaseEarthPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._FocusAng_k__BackingField = value;
}


void BaseEarthPoint__set_FocusQua(BaseEarthPoint_o *this, UnityEngine_Quaternion_o value, const MethodInfo *method)
{
  this->fields._FocusQua_k__BackingField = value;
}