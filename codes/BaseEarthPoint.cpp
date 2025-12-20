void BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4D28EE2 & 1) == 0 )
  {
    sub_1C94098(&BaseEarthPoint_TypeInfo);
    byte_4D28EE2 = 1;
  }
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  float x; // s8
  float z; // s9
  UnityEngine_GameObject_o *v10; // x0
  float v11; // s10
  float v12; // s8
  float v13; // s1
  float v14; // s9
  float y; // s10
  float v16; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C942F0(0, v6);
  x = Position.fields.x;
  z = Position.fields.z;
  v10 = UnityEngine_Component__get_gameObject(mEarthCore, 0);
  v20 = GameObjectExtensions__GetPosition(v10, 0);
  v11 = x - v20.fields.x;
  v12 = z - v20.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = v11;
  vec->fields.z = z - v20.fields.z;
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = sqrtf((float)(v12 * v12) + (float)((float)(v11 * v11) + 0.0));
  if ( v13 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v14 = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    v16 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v14 = v11 / v13;
    y = 0.0 / v13;
    v16 = v12 / v13;
  }
  vec->fields.x = v14;
  vec->fields.y = y;
  vec->fields.z = v16;
  if ( !byte_4D28F1C )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D28F1C = 1;
  }
  return (float)(v16 * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + (float)((float)(v14 * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x)
               + (float)(y * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.y));
}


float BaseEarthPoint__GetDotXZ_Deg(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float x; // s9
  float z; // s8
  float v9; // s1
  int v10; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v12; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v14; // x8
  float v15; // s8
  float y; // s9
  float v17; // s10
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float w; // s14
  float v22; // s11
  float v23; // s12
  float v24; // s13
  float v25; // s8
  float v26; // s9
  float v27; // s10
  UnityEngine_Matrix4x4_o v29; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4D28EE1 & 1) == 0 )
  {
    sub_1C94098(&BaseEarthPoint_TypeInfo);
    byte_4D28EE1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = sqrtf((float)(z * z) + (float)((float)(x * x) + 0.0));
  if ( v9 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v12 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v12;
  }
  else
  {
    v10 = (unsigned __int8)byte_4D25F19;
    vec->fields.x = x / v9;
    vec->fields.y = 0.0 / v9;
    vec->fields.z = z / v9;
    if ( !v10 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v14 = UnityEngine_Vector3_TypeInfo->static_fields,
        v15 = v14->zeroVector.fields.x,
        y = v14->zeroVector.fields.y,
        v17 = v14->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0)) == 0)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0)) == 0 )
  {
    sub_1C942F0(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0);
  v18 = rotation.fields.x;
  v19 = rotation.fields.y;
  v20 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  v32.fields.y = y;
  v32.fields.z = v17;
  v35.fields.x = v18;
  v35.fields.y = v19;
  v35.fields.z = v20;
  v32.fields.x = v15;
  v35.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v29, v32, v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v30 = v29;
  if ( !byte_4D28F1C )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D28F1C = 1;
  }
  v33 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v30, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v23 = vec->fields.x;
  v22 = vec->fields.y;
  v24 = vec->fields.z;
  v25 = v33.fields.x;
  v26 = v33.fields.y;
  v27 = v33.fields.z;
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  return acosf((float)(v27 * v24) + (float)((float)(v23 * v25) + (float)(v26 * v22))) * 57.296;
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
  float x; // s8
  float y; // s9
  float v53; // s10
  float v54; // s2
  float v55; // s0
  float v56; // s1
  float v57; // s2
  struct UnityEngine_Vector3_StaticFields *v58; // x8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  UnityEngine_Vector3_o v65; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D28EE0 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28EE0 = 1;
  }
  v65.fields.z = 0.0;
  *(_QWORD *)&v65.fields.x = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)gameObject,
                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C9403C(
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
          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v17;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mEarthCore, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_50;
  LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  v66.fields.x = 1.0 / v25;
  v66.fields.y = 1.0 / v25;
  v66.fields.z = 1.0 / v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v66, 0);
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
        if ( !byte_4D25F19 )
        {
          gameObject = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        if ( !v31 )
          goto LABEL_50;
        UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v32 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_4D25F1F )
        {
          gameObject = sub_1C94098(&UnityEngine_Quaternion_TypeInfo);
          byte_4D25F1F = 1;
        }
        if ( !v32 )
          goto LABEL_50;
        UnityEngine_Transform__set_localRotation(
          v32,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v33 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_4D25F1E )
        {
          gameObject = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F1E = 1;
        }
        if ( !v33 )
          goto LABEL_50;
        UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)v30,
                                       (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
        this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mParticleSystem,
          (int32_t)ComponentInChildren_object,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        this->fields.mParticleSystemObj = (struct UnityEngine_GameObject_o *)v30;
        sub_1C9403C(
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
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v65.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v65.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v65, v26);
  if ( v65.fields.x < 0.0 )
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
    sub_1C942F0(gameObject, v8);
  }
LABEL_40:
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v50, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v53 = LocalPosition.fields.z;
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v54 = sqrtf((float)(v53 * v53) + (float)((float)(x * x) + (float)(y * y)));
  if ( v54 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    v58 = UnityEngine_Vector3_TypeInfo->static_fields;
    v55 = v58->zeroVector.fields.x;
    v56 = v58->zeroVector.fields.y;
    v57 = v58->zeroVector.fields.z;
  }
  else
  {
    v55 = x / v54;
    v56 = y / v54;
    v57 = v53 / v54;
  }
  v68.fields.x = -v55;
  v68.fields.y = -v56;
  v68.fields.z = -v57;
  v69 = UnityEngine_Quaternion__LookRotation_72049252(v68, 0);
  this->fields._FocusQua_k__BackingField = v69;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v69, 0);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.earthEffectCamera,
    (int32_t)earthEffCamera,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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