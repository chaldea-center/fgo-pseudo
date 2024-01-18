void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4184A09 & 1) == 0 )
  {
    sub_B2C35C(&BaseEarthPoint_TypeInfo, v1);
    byte_4184A09 = 1;
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
    sub_B2C434(0LL, v6);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Component_o *mEarthCore; // x0
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  float v18; // s8
  UnityEngine_Vector3_o one; // [xsp+0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v21; // [xsp+10h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+50h] [xbp-90h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4184A08 & 1) == 0 )
  {
    sub_B2C35C(&BaseEarthPoint_TypeInfo, vec);
    byte_4184A08 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  *vec = UnityEngine_Vector3__get_normalized(LocalPosition, (const MethodInfo *)vec);
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v11 = v7,
        v12 = v8,
        v13 = v9,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0LL)) == 0LL)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0LL)) == 0LL )
  {
    sub_B2C434(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0LL);
  x = rotation.fields.x;
  y = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  one = UnityEngine_Vector3__get_one(0LL);
  v24.fields.x = v11;
  v24.fields.y = v12;
  v24.fields.z = v13;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v28.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v21, v24, v28, one, 0LL);
  v22 = v21;
  back = UnityEngine_Vector3__get_back(0LL);
  v26 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v22, back, 0LL);
  v18 = (float)(v26.fields.z * vec->fields.z)
      + (float)((float)(vec->fields.x * v26.fields.x) + (float)(v26.fields.y * vec->fields.y));
  if ( (BYTE3(BaseEarthPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BaseEarthPoint_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  }
  return acosf(v18) * 57.296;
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
  struct UIWidget_o *Component_srcLineSprite; // x0
  struct BaseCore_o *v16; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  float v18; // s8
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x25
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_Transform_o *transform; // x25
  int v24; // s0
  UnityEngine_Transform_o *v27; // x25
  int v28; // s0
  UnityEngine_Transform_o *v32; // x25
  int v33; // s0
  struct UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  const MethodInfo *v37; // x2
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v39; // x0
  MethodInfo v40; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184A07 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isActive);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BaseCore___, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4184A07 = 1;
  }
  LODWORD(v40.klass) = 0;
  v40.name = 0LL;
  LODWORD(v40.invoker_method) = 0;
  v40.methodPointer = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  Component_srcLineSprite = (struct UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = Component_srcLineSprite;
  sub_B2C2F8(&this->fields.mWidget, Component_srcLineSprite);
  if ( !v14 )
    goto LABEL_32;
  v16 = (struct BaseCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v14,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = v16;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_B2C2F8(&this->fields.mEarthCore, v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v41.fields.x = 1.0 / v18;
  v41.fields.y = 1.0 / v18;
  v41.fields.z = 1.0 / v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v41, 0LL);
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
      v20 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      gameObject = CommonEffectManager__SetSkinEffect(v20, v21, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      v22 = gameObject;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
      v27 = UnityEngine_GameObject__get_transform(v22, 0LL);
      *(UnityEngine_Quaternion_o *)&v28 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v27 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(v27, *(UnityEngine_Quaternion_o *)&v28, 0LL);
      v32 = UnityEngine_GameObject__get_transform(v22, 0LL);
      *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
      if ( !v32 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
      ComponentInChildren_Dropdown_DropdownItem = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                           v22,
                                                                                           (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = ComponentInChildren_Dropdown_DropdownItem;
      sub_B2C2F8(&this->fields.mParticleSystem, ComponentInChildren_Dropdown_DropdownItem);
      this->fields.mParticleSystemObj = v22;
      sub_B2C2F8(&this->fields.mParticleSystemObj, v22);
    }
  }
  *(UnityEngine_Vector3_o *)&v40.name = UnityEngine_Vector3__get_zero(0LL);
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, (UnityEngine_Vector3_o *)&v40.name, v37);
  if ( *(float *)&v40.name < 0.0 )
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
    sub_B2C434(gameObject, v13);
  }
LABEL_31:
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v39, 0LL);
  v40.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&v40.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &v40);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v44 = UnityEngine_Quaternion__LookRotation_35345908(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v44;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v44, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_B2C2F8(&this->fields.earthEffectCamera, earthEffCamera);
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