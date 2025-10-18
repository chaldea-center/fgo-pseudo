void BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4C3F7AC & 1) == 0 )
  {
    sub_1C37058(&BaseEarthPoint_TypeInfo);
    byte_4C3F7AC = 1;
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
  UnityEngine_Component_o *mEarthCore; // x0
  float x; // s8
  float z; // s9
  UnityEngine_GameObject_o *v9; // x0
  float v10; // s10
  float v11; // s8
  float v12; // s1
  float v13; // s9
  float y; // s10
  float v15; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C372B4(0);
  x = Position.fields.x;
  z = Position.fields.z;
  v9 = UnityEngine_Component__get_gameObject(mEarthCore, 0);
  v19 = GameObjectExtensions__GetPosition(v9, 0);
  v10 = x - v19.fields.x;
  v11 = z - v19.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = v10;
  vec->fields.z = z - v19.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v11 * v11) + (float)((float)(v10 * v10) + 0.0));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    v15 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v13 = v10 / v12;
    y = 0.0 / v12;
    v15 = v11 / v12;
  }
  vec->fields.x = v13;
  vec->fields.y = y;
  vec->fields.z = v15;
  if ( !byte_4C3F7D9 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3F7D9 = 1;
  }
  return (float)(v15 * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + (float)((float)(v13 * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x)
               + (float)(y * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.y));
}


float BaseEarthPoint__GetDotXZ_Deg(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float z; // s8
  float v8; // s1
  int v9; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v11; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v13; // x8
  float v14; // s8
  float y; // s9
  float v16; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float w; // s14
  float v21; // s11
  float v22; // s12
  float v23; // s13
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_Matrix4x4_o v28; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C3F7AB & 1) == 0 )
  {
    sub_1C37058(&BaseEarthPoint_TypeInfo);
    byte_4C3F7AB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)(z * z) + (float)((float)(x * x) + 0.0));
  if ( v8 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v11;
  }
  else
  {
    v9 = (unsigned __int8)byte_4C3C921;
    vec->fields.x = x / v8;
    vec->fields.y = 0.0 / v8;
    vec->fields.z = z / v8;
    if ( !v9 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v13 = UnityEngine_Vector3_TypeInfo->static_fields,
        v14 = v13->zeroVector.fields.x,
        y = v13->zeroVector.fields.y,
        v16 = v13->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0)) == 0)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0)) == 0 )
  {
    sub_1C372B4(mEarthCore);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0);
  v17 = rotation.fields.x;
  v18 = rotation.fields.y;
  v19 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  v31.fields.y = y;
  v31.fields.z = v16;
  v34.fields.x = v17;
  v34.fields.y = v18;
  v34.fields.z = v19;
  v31.fields.x = v14;
  v34.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v28, v31, v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v29 = v28;
  if ( !byte_4C3F7D9 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3F7D9 = 1;
  }
  v32 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v29, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v22 = vec->fields.x;
  v21 = vec->fields.y;
  v23 = vec->fields.z;
  v24 = v32.fields.x;
  v25 = v32.fields.y;
  v26 = v32.fields.z;
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  return acosf((float)(v26 * v23) + (float)((float)(v22 * v24) + (float)(v25 * v21))) * 57.296;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x23
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  float v16; // s8
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v19; // x24
  UnityEngine_GameObject_o *v20; // x25
  UnityEngine_GameObject_o *v21; // x24
  UnityEngine_Transform_o *v22; // x25
  UnityEngine_Transform_o *v23; // x25
  UnityEngine_Transform_o *v24; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v33; // x0
  float x; // s8
  float y; // s9
  float v36; // s10
  float v37; // s2
  float v38; // s0
  float v39; // s1
  float v40; // s2
  struct UnityEngine_Vector3_StaticFields *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Vector3_o v44; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F7AA & 1) == 0 )
  {
    sub_1C37058(&CommonEffectManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F7AA = 1;
  }
  v44.fields.z = 0.0;
  *(_QWORD *)&v44.fields.x = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_47;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_47;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v10, v11);
  if ( !v8 )
    goto LABEL_47;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          v8,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v12;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEarthCore, (int32_t)v12, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_47;
  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_47;
  v45.fields.x = 1.0 / v16;
  v45.fields.y = 1.0 / v16;
  v45.fields.z = 1.0 / v16;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v45, 0);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0, 0) )
    {
      v19 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, const MethodInfo *))this->klass->vtable._5_GetEffectName.methodPtr)(
                                 this,
                                 this->klass->vtable._5_GetEffectName.method);
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      gameObject = CommonEffectManager__SetSkinEffect(v19, v20, 0);
      if ( !gameObject )
        goto LABEL_47;
      v21 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      v22 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C3C921 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v22 )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0);
      v23 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C3C927 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
        byte_4C3C927 = 1;
      }
      if ( !v23 )
        goto LABEL_47;
      UnityEngine_Transform__set_localRotation(
        v23,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C3C926 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v24 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v21,
                                     (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mParticleSystem, (int32_t)ComponentInChildren_object, v26, v27);
      this->fields.mParticleSystemObj = v21;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mParticleSystemObj, (int32_t)v21, v28, v29);
    }
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v44.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v44.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v44, v17);
  if ( v44.fields.x < 0.0 )
    DotXZ_Deg = -DotXZ_Deg;
  this->fields._FocusAng_k__BackingField = DotXZ_Deg;
  if ( isActive )
  {
    if ( *p_mEarthCore )
    {
      (*p_mEarthCore)->fields._PointInitAngle_k__BackingField = DotXZ_Deg + 45.0;
      goto LABEL_37;
    }
LABEL_47:
    sub_1C372B4(gameObject);
  }
LABEL_37:
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v33, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v36 = LocalPosition.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v37 = sqrtf((float)(v36 * v36) + (float)((float)(x * x) + (float)(y * y)));
  if ( v37 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    v41 = UnityEngine_Vector3_TypeInfo->static_fields;
    v38 = v41->zeroVector.fields.x;
    v39 = v41->zeroVector.fields.y;
    v40 = v41->zeroVector.fields.z;
  }
  else
  {
    v38 = x / v37;
    v39 = y / v37;
    v40 = v36 / v37;
  }
  v47.fields.x = -v38;
  v47.fields.y = -v39;
  v47.fields.z = -v40;
  v48 = UnityEngine_Quaternion__LookRotation_71205596(v47, 0);
  this->fields._FocusQua_k__BackingField = v48;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v48, 0);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.earthEffectCamera, (int32_t)earthEffCamera, v42, v43);
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