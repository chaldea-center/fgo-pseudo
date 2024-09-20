void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4A57C5D & 1) == 0 )
  {
    sub_1B885B0(&BaseEarthPoint_TypeInfo);
    byte_4A57C5D = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = BaseEarthPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
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
  float v13; // s10
  float v14; // s8
  float v15; // s1
  float x; // s9
  float y; // s10
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1B8880C(0LL, v6);
  v10 = v7;
  v11 = v8;
  v12 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v12, 0LL);
  v13 = v10 - Position.fields.x;
  v14 = v11 - Position.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = v13;
  vec->fields.z = v11 - Position.fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = sqrtf((float)(v14 * v14) + (float)((float)(v13 * v13) + 0.0));
  if ( v15 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v13 / v15;
    y = 0.0 / v15;
    z = v14 / v15;
  }
  vec->fields.x = x;
  vec->fields.y = y;
  vec->fields.z = z;
  if ( !byte_4A57CD8 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57CD8 = 1;
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

  if ( (byte_4A57C5C & 1) == 0 )
  {
    sub_1B885B0(&BaseEarthPoint_TypeInfo);
    byte_4A57C5C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = sqrtf((float)(z * z) + (float)((float)(x * x) + 0.0));
  if ( v9 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v12 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v12;
  }
  else
  {
    v10 = (unsigned __int8)byte_4A55CE1;
    vec->fields.x = x / v9;
    vec->fields.y = 0.0 / v9;
    vec->fields.z = z / v9;
    if ( !v10 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
    sub_1B8880C(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0LL);
  v18 = rotation.fields.x;
  v19 = rotation.fields.y;
  v20 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  v32.fields.y = y;
  v32.fields.z = v17;
  v35.fields.x = v18;
  v35.fields.y = v19;
  v35.fields.z = v20;
  v32.fields.x = v15;
  v35.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v29, v32, v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v30 = v29;
  if ( !byte_4A57CD8 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57CD8 = 1;
  }
  v33 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v30, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
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


System_String_o *__fastcall BaseEarthPoint__GetEffectName(BaseEarthPoint_o *this, const MethodInfo *method)
{
  return 0LL;
}


void __fastcall BaseEarthPoint__LateUpdate(BaseEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseEarthPoint__Setup(
        BaseEarthPoint_o *this,
        bool isActive,
        UnityEngine_Camera_o *earthEffCamera,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x23
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  float v17; // s8
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x25
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_Transform_o *v23; // x25
  UnityEngine_Transform_o *v24; // x25
  UnityEngine_Transform_o *v25; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v34; // x0
  float x; // s8
  float y; // s9
  float v37; // s10
  float v38; // s2
  float v39; // s0
  float v40; // s1
  float v41; // s2
  struct UnityEngine_Vector3_StaticFields *v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  UnityEngine_Vector3_o v45; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57C5B & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C5B = 1;
  }
  v45.fields.z = 0.0;
  *(_QWORD *)&v45.fields.x = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mWidget, (int32_t)Component_object, v11, v12);
  if ( !v9 )
    goto LABEL_47;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v9,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v13;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEarthCore, (int32_t)v13, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  v46.fields.x = 1.0 / v17;
  v46.fields.y = 1.0 / v17;
  v46.fields.z = 1.0 / v17;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v46, 0LL);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0LL, 0LL) )
    {
      v20 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      gameObject = CommonEffectManager__SetSkinEffect(v20, v21, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      v22 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v23 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE1 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v23 )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE7 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
        byte_4A55CE7 = 1;
      }
      if ( !v24 )
        goto LABEL_47;
      UnityEngine_Transform__set_localRotation(
        v24,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v25 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v22,
                                     (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.mParticleSystem,
        (int32_t)ComponentInChildren_object,
        v27,
        v28);
      this->fields.mParticleSystemObj = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mParticleSystemObj, (int32_t)v22, v29, v30);
    }
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v45.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v45.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v45, v18);
  if ( v45.fields.x < 0.0 )
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
    sub_1B8880C(gameObject, v8);
  }
LABEL_37:
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v34, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v37 = LocalPosition.fields.z;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = sqrtf((float)(v37 * v37) + (float)((float)(x * x) + (float)(y * y)));
  if ( v38 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    v42 = UnityEngine_Vector3_TypeInfo->static_fields;
    v39 = v42->zeroVector.fields.x;
    v40 = v42->zeroVector.fields.y;
    v41 = v42->zeroVector.fields.z;
  }
  else
  {
    v39 = x / v38;
    v40 = y / v38;
    v41 = v37 / v38;
  }
  v48.fields.x = -v39;
  v48.fields.y = -v40;
  v48.fields.z = -v41;
  v49 = UnityEngine_Quaternion__LookRotation_69397740(v48, 0LL);
  this->fields._FocusQua_k__BackingField = v49;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v49, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.earthEffectCamera, (int32_t)earthEffCamera, v43, v44);
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