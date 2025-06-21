void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v3; // x8
  float z; // s1

  if ( (byte_4B18D8E & 1) == 0 )
  {
    sub_1BCAFF8(&BaseEarthPoint_TypeInfo, v1);
    byte_4B18D8E = 1;
  }
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4B16191 = 1;
  }
  static_fields = BaseEarthPoint_TypeInfo->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall BaseEarthPoint___ctor(BaseEarthPoint_o *this, const MethodInfo *method)
{
  this->fields.IsParticleDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall BaseEarthPoint__Cos2Deg(float cos, const MethodInfo *method)
{
  return acosf(cos) * 57.296;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BaseEarthPoint__GetDotXZ(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s2
  UnityEngine_Component_o *mEarthCore; // x0
  float v10; // s8
  float v11; // s9
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  float v14; // s10
  float v15; // s8
  float v16; // s1
  float x; // s9
  float y; // s10
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BCB254(0LL, v6);
  v10 = v7;
  v11 = v8;
  v12 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v12, 0LL);
  v14 = v10 - Position.fields.x;
  v15 = v11 - Position.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = v14;
  vec->fields.z = v11 - Position.fields.z;
  if ( !byte_4B16194 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v13);
    byte_4B16194 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = sqrtf((float)(v15 * v15) + (float)((float)(v14 * v14) + 0.0));
  if ( v16 <= 0.00001 )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v14 / v16;
    y = 0.0 / v16;
    z = v15 / v16;
  }
  vec->fields.x = x;
  vec->fields.y = y;
  vec->fields.z = z;
  if ( !byte_4B18DC3 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_4B18DC3 = 1;
  }
  return (float)(z * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + (float)((float)(x * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x)
               + (float)(y * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.y));
}


float __fastcall BaseEarthPoint__GetDotXZ_Deg(
        BaseEarthPoint_o *this,
        UnityEngine_Vector3_o *vec,
        const MethodInfo *method)
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
  __int64 v18; // x1
  float v19; // s11
  float v20; // s12
  float v21; // s13
  float w; // s14
  __int64 v23; // x1
  float v24; // s11
  float v25; // s12
  float v26; // s13
  float v27; // s8
  float v28; // s9
  float v29; // s10
  UnityEngine_Matrix4x4_o v31; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B18D8D & 1) == 0 )
  {
    sub_1BCAFF8(&BaseEarthPoint_TypeInfo, vec);
    byte_4B18D8D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  if ( !byte_4B16194 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v6);
    byte_4B16194 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = sqrtf((float)(z * z) + (float)((float)(x * x) + 0.0));
  if ( v9 <= 0.00001 )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v12 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v12;
  }
  else
  {
    v10 = (unsigned __int8)byte_4B16191;
    vec->fields.x = x / v9;
    vec->fields.y = 0.0 / v9;
    vec->fields.z = z / v9;
    if ( !v10 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4B16191 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v14 = UnityEngine_Vector3_TypeInfo->static_fields,
        v15 = v14->zeroVector.fields.x,
        y = v14->zeroVector.fields.y,
        v17 = v14->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0LL)) == 0LL)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0LL)) == 0LL )
  {
    sub_1BCB254(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0LL);
  v19 = rotation.fields.x;
  v20 = rotation.fields.y;
  v21 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4B16196 = 1;
  }
  v34.fields.y = y;
  v34.fields.z = v17;
  v37.fields.x = v19;
  v37.fields.y = v20;
  v37.fields.z = v21;
  v34.fields.x = v15;
  v37.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v31, v34, v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v32 = v31;
  if ( !byte_4B18DC3 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4B18DC3 = 1;
  }
  v35 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v32, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v25 = vec->fields.x;
  v24 = vec->fields.y;
  v26 = vec->fields.z;
  v27 = v35.fields.x;
  v28 = v35.fields.y;
  v29 = v35.fields.z;
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  return acosf((float)(v29 * v26) + (float)((float)(v25 * v27) + (float)(v28 * v24))) * 57.296;
}


System_String_o *__fastcall BaseEarthPoint__GetEffectName(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return 0LL;
}


void __fastcall BaseEarthPoint__LateUpdate(BaseEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseEarthPoint__Setup(
        BaseEarthPoint_o *this,
        bool isActive,
        UnityEngine_Camera_o *earthEffCamera,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x23
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float v22; // s8
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v26; // x24
  UnityEngine_GameObject_o *v27; // x25
  UnityEngine_GameObject_o *v28; // x24
  UnityEngine_Transform_o *v29; // x25
  UnityEngine_Transform_o *v30; // x25
  UnityEngine_Transform_o *v31; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  float x; // s8
  float y; // s9
  float v44; // s10
  float v45; // s2
  float v46; // s0
  float v47; // s1
  float v48; // s2
  struct UnityEngine_Vector3_StaticFields *v49; // x8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Vector3_o v52; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18D8C & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectManager_TypeInfo, isActive);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BaseCore___, v8);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B18D8C = 1;
  }
  v52.fields.z = 0.0;
  *(_QWORD *)&v52.fields.x = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v16, v17);
  if ( !v14 )
    goto LABEL_47;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          v14,
          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v18;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mEarthCore, (int32_t)v18, v20, v21);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  v53.fields.x = 1.0 / v22;
  v53.fields.y = 1.0 / v22;
  v53.fields.z = 1.0 / v22;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v53, 0LL);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0LL, 0LL) )
    {
      v26 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      gameObject = CommonEffectManager__SetSkinEffect(v26, v27, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      v28 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v29 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B16191 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_4B16191 = 1;
      }
      if ( !v29 )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B16197 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v13);
        byte_4B16197 = 1;
      }
      if ( !v30 )
        goto LABEL_47;
      UnityEngine_Transform__set_localRotation(
        v30,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
      v31 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B16196 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_4B16196 = 1;
      }
      if ( !v31 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v28,
                                     (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mParticleSystem, (int32_t)ComponentInChildren_object, v33, v34);
      this->fields.mParticleSystemObj = v28;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mParticleSystemObj, (int32_t)v28, v35, v36);
    }
  }
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v52.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v52.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v52, v24);
  if ( v52.fields.x < 0.0 )
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
    sub_1BCB254(gameObject, v13);
  }
LABEL_37:
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v40, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v44 = LocalPosition.fields.z;
  if ( !byte_4B16194 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v41);
    byte_4B16194 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v45 = sqrtf((float)(v44 * v44) + (float)((float)(x * x) + (float)(y * y)));
  if ( v45 <= 0.00001 )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v41);
      byte_4B16191 = 1;
    }
    v49 = UnityEngine_Vector3_TypeInfo->static_fields;
    v46 = v49->zeroVector.fields.x;
    v47 = v49->zeroVector.fields.y;
    v48 = v49->zeroVector.fields.z;
  }
  else
  {
    v46 = x / v45;
    v47 = y / v45;
    v48 = v44 / v45;
  }
  v55.fields.x = -v46;
  v55.fields.y = -v47;
  v55.fields.z = -v48;
  v56 = UnityEngine_Quaternion__LookRotation_70074920(v55, 0LL);
  this->fields._FocusQua_k__BackingField = v56;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v56, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.earthEffectCamera, (int32_t)earthEffCamera, v50, v51);
}


BaseCore_o *__fastcall BaseEarthPoint__get_EarthCore(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.mEarthCore;
}


float __fastcall BaseEarthPoint__get_FocusAng(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._FocusAng_k__BackingField;
}


UnityEngine_Quaternion_o __fastcall BaseEarthPoint__get_FocusQua(BaseEarthPoint_o *this, const MethodInfo *method)
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


bool __fastcall BaseEarthPoint__get_IsForward(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.mIsForward;
}


void __fastcall BaseEarthPoint__set_FocusAng(BaseEarthPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._FocusAng_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseEarthPoint__set_FocusQua(
        BaseEarthPoint_o *this,
        UnityEngine_Quaternion_o value,
        const MethodInfo *method)
{
  this->fields._FocusQua_k__BackingField = value;
}