void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6640 & 1) == 0 )
  {
    sub_B5D5C4(&BaseEarthPoint_TypeInfo, v1, v2, v3);
    byte_42E6640 = 1;
  }
  BaseEarthPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_zero(0LL);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B5D69C(0LL, v6);
  v10 = v7;
  v11 = v8;
  v12 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v12, 0LL);
  Position.fields.x = v10 - Position.fields.x;
  Position.fields.y = v11 - Position.fields.z;
  vec->fields.x = Position.fields.x;
  vec->fields.z = v11 - Position.fields.z;
  vec->fields.y = 0.0;
  normalized = UnityEngine_Vector3__get_normalized(Position, (const MethodInfo *)vec);
  x = normalized.fields.x;
  y = normalized.fields.y;
  z = normalized.fields.z;
  *vec = normalized;
  back = UnityEngine_Vector3__get_back(0LL);
  return (float)(z * back.fields.z) + (float)((float)(x * back.fields.x) + (float)(y * back.fields.y));
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BaseEarthPoint__GetDotXZ_Deg(
        BaseEarthPoint_o *this,
        UnityEngine_Vector3_o *vec,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Component_o *mEarthCore; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  float v19; // s8
  UnityEngine_Vector3_o one; // [xsp+0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v22; // [xsp+10h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+50h] [xbp-90h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E663F & 1) == 0 )
  {
    sub_B5D5C4(&BaseEarthPoint_TypeInfo, (_DWORD)vec, (_DWORD)method, v3);
    byte_42E663F = 1;
  }
  memset(&v23, 0, sizeof(v23));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  *vec = UnityEngine_Vector3__get_normalized(LocalPosition, (const MethodInfo *)vec);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v12 = v8,
        v13 = v9,
        v14 = v10,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0LL)) == 0LL)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0LL)) == 0LL )
  {
    sub_B5D69C(mEarthCore, v7);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0LL);
  x = rotation.fields.x;
  y = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  one = UnityEngine_Vector3__get_one(0LL);
  v25.fields.x = v12;
  v25.fields.y = v13;
  v25.fields.z = v14;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v29.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v22, v25, v29, one, 0LL);
  v23 = v22;
  back = UnityEngine_Vector3__get_back(0LL);
  v27 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v23, back, 0LL);
  v19 = (float)(v27.fields.z * vec->fields.z)
      + (float)((float)(vec->fields.x * v27.fields.x) + (float)(v27.fields.y * vec->fields.y));
  if ( (BYTE3(BaseEarthPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BaseEarthPoint_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  }
  return acosf(v19) * 57.296;
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
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x23
  struct BaseCore_o **p_mEarthCore; // x22
  float v26; // s8
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v28; // x24
  UnityEngine_GameObject_o *v29; // x25
  UnityEngine_GameObject_o *v30; // x24
  UnityEngine_Transform_o *transform; // x25
  int v32; // s0
  UnityEngine_Transform_o *v35; // x25
  int v36; // s0
  UnityEngine_Transform_o *v40; // x25
  int v41; // s0
  const MethodInfo *v44; // x2
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v46; // x0
  MethodInfo v47; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E663E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isActive, (_DWORD)earthEffCamera, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BaseCore___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    byte_42E663E = 1;
  }
  LODWORD(v47.klass) = 0;
  v47.name = 0LL;
  LODWORD(v47.invoker_method) = 0;
  v47.methodPointer = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  this->fields.mWidget = (struct UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                gameObject,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  sub_B5D560(&this->fields.mWidget);
  if ( !v24 )
    goto LABEL_32;
  this->fields.mEarthCore = (struct BaseCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v24,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  p_mEarthCore = &this->fields.mEarthCore;
  sub_B5D560(&this->fields.mEarthCore);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  LODWORD(v26) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v48.fields.x = 1.0 / v26;
  v48.fields.y = 1.0 / v26;
  v48.fields.z = 1.0 / v26;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v48, 0LL);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0LL, 0LL) )
    {
      v28 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      gameObject = CommonEffectManager__SetSkinEffect(v28, v29, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      v30 = gameObject;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
      v35 = UnityEngine_GameObject__get_transform(v30, 0LL);
      *(UnityEngine_Quaternion_o *)&v36 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v35 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(v35, *(UnityEngine_Quaternion_o *)&v36, 0LL);
      v40 = UnityEngine_GameObject__get_transform(v30, 0LL);
      *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_one(0LL);
      if ( !v40 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
      this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                              v30,
                                                                              (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      sub_B5D560(&this->fields.mParticleSystem);
      this->fields.mParticleSystemObj = v30;
      sub_B5D560(&this->fields.mParticleSystemObj);
    }
  }
  *(UnityEngine_Vector3_o *)&v47.name = UnityEngine_Vector3__get_zero(0LL);
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, (UnityEngine_Vector3_o *)&v47.name, v44);
  if ( *(float *)&v47.name < 0.0 )
    DotXZ_Deg = -DotXZ_Deg;
  this->fields._FocusAng_k__BackingField = DotXZ_Deg;
  if ( isActive )
  {
    if ( *p_mEarthCore )
    {
      (*p_mEarthCore)->fields._PointInitAngle_k__BackingField = DotXZ_Deg + 45.0;
      goto LABEL_31;
    }
LABEL_32:
    sub_B5D69C(gameObject, v23);
  }
LABEL_31:
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v46, 0LL);
  v47.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&v47.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &v47);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v51 = UnityEngine_Quaternion__LookRotation_35651248(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v51;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v51, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_B5D560(&this->fields.earthEffectCamera);
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