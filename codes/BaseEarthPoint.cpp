void BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4D2D02C & 1) == 0 )
  {
    sub_1C93AD4(&BaseEarthPoint_TypeInfo);
    byte_4D2D02C = 1;
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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


float BaseEarthPoint__GetDotXZ(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *mEarthCore; // x0
  UnityEngine_GameObject_o *v8; // x0
  float v9; // s10
  float v10; // s8
  float v11; // s1
  float x; // s9
  float y; // s10
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:kr00_12.12
  UnityEngine_Vector3_o v18; // 0:kr14_12.12

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C93D2C(0, v6);
  v8 = UnityEngine_Component__get_gameObject(mEarthCore, 0);
  v18 = GameObjectExtensions__GetPosition(v8, 0);
  v9 = Position.fields.x - v18.fields.x;
  v10 = Position.fields.z - v18.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = Position.fields.x - v18.fields.x;
  vec->fields.z = Position.fields.z - v18.fields.z;
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = sqrtf((float)(v10 * v10) + (float)((float)(v9 * v9) + 0.0));
  if ( v11 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v9 / v11;
    y = 0.0 / v11;
    z = v10 / v11;
  }
  vec->fields.x = x;
  vec->fields.y = y;
  vec->fields.z = z;
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  return (float)(z * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + (float)((float)(x * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x)
               + (float)(y * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.y));
}


float BaseEarthPoint__GetDotXZ_Deg(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float v7; // s1
  int v8; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v12; // x8
  float x; // s8
  float y; // s9
  float v15; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  UnityEngine_Matrix4x4_o v20; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v23; // 0:kr20_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr10_16.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D02B & 1) == 0 )
  {
    sub_1C93AD4(&BaseEarthPoint_TypeInfo);
    byte_4D2D02B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = sqrtf(
         (float)(LocalPosition.fields.z * LocalPosition.fields.z)
       + (float)((float)(LocalPosition.fields.x * LocalPosition.fields.x) + 0.0));
  if ( v7 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = z;
  }
  else
  {
    v8 = (unsigned __int8)byte_4D2A139;
    vec->fields.x = LocalPosition.fields.x / v7;
    vec->fields.y = 0.0 / v7;
    vec->fields.z = LocalPosition.fields.z / v7;
    if ( !v8 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v12 = UnityEngine_Vector3_TypeInfo->static_fields,
        x = v12->zeroVector.fields.x,
        y = v12->zeroVector.fields.y,
        v15 = v12->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0)) == 0)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0)) == 0 )
  {
    sub_1C93D2C(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  v25.fields.y = y;
  v25.fields.z = v15;
  v25.fields.x = x;
  UnityEngine_Matrix4x4__TRS(&v20, v25, rotation, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v21 = v20;
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  v23 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v21, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v17 = vec->fields.x;
  v16 = vec->fields.y;
  v18 = vec->fields.z;
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  return acosf((float)(v23.fields.z * v18) + (float)((float)(v17 * v23.fields.x) + (float)(v23.fields.y * v16)))
       * 57.296;
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  float v25; // s8
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v28; // x24
  UnityEngine_GameObject_o *v29; // x25
  UnityEngine_Object_o *v30; // x24
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_Transform_o *v32; // x25
  UnityEngine_Transform_o *v33; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s2
  float x; // s0
  float y; // s1
  float v54; // s2
  struct UnityEngine_Vector3_StaticFields *v55; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  UnityEngine_Vector3_o v62; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D02A & 1) == 0 )
  {
    sub_1C93AD4(&CommonEffectManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D02A = 1;
  }
  v62.fields.z = 0.0;
  *(_QWORD *)&v62.fields.x = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)gameObject,
                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mWidget,
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
          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v17;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mEarthCore, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_50;
  LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  v64.fields.x = 1.0 / v25;
  v64.fields.y = 1.0 / v25;
  v64.fields.z = 1.0 / v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v64, 0);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0, 0) )
    {
      v28 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, const MethodInfo *))this->klass->vtable._5_GetEffectName.methodPtr)(
                                 this,
                                 this->klass->vtable._5_GetEffectName.method);
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v30 = (UnityEngine_Object_o *)CommonEffectManager__SetSkinEffect(v28, v29, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Inequality(v30, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_50;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v31 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_4D2A139 )
        {
          gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        if ( !v31 )
          goto LABEL_50;
        UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v32 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_4D2A13F )
        {
          gameObject = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
          byte_4D2A13F = 1;
        }
        if ( !v32 )
          goto LABEL_50;
        UnityEngine_Transform__set_localRotation(
          v32,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v33 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_4D2A13E )
        {
          gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( !v33 )
          goto LABEL_50;
        UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)v30,
                                       (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
        this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.mParticleSystem,
          (int32_t)ComponentInChildren_object,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        this->fields.mParticleSystemObj = (struct UnityEngine_GameObject_o *)v30;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.mParticleSystemObj,
          (int32_t)v30,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
    }
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v62.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v62.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v62, v26);
  if ( v62.fields.x < 0.0 )
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
    sub_1C93D2C(gameObject, v8);
  }
LABEL_40:
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v50, 0);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v51 = sqrtf(
          (float)(LocalPosition.fields.z * LocalPosition.fields.z)
        + (float)((float)(LocalPosition.fields.x * LocalPosition.fields.x)
                + (float)(LocalPosition.fields.y * LocalPosition.fields.y)));
  if ( v51 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    v55 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v55->zeroVector.fields.x;
    y = v55->zeroVector.fields.y;
    v54 = v55->zeroVector.fields.z;
  }
  else
  {
    x = LocalPosition.fields.x / v51;
    y = LocalPosition.fields.y / v51;
    v54 = LocalPosition.fields.z / v51;
  }
  v65.fields.x = -x;
  v65.fields.y = -y;
  v65.fields.z = -v54;
  v66 = UnityEngine_Quaternion__LookRotation_72058188(v65, 0);
  this->fields._FocusQua_k__BackingField = v66;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v66, 0);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.earthEffectCamera,
    (int32_t)earthEffCamera,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.x = this->fields._FocusQua_k__BackingField.fields.x;
  result.fields.y = this->fields._FocusQua_k__BackingField.fields.y;
  result.fields.z = this->fields._FocusQua_k__BackingField.fields.z;
  result.fields.w = this->fields._FocusQua_k__BackingField.fields.w;
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