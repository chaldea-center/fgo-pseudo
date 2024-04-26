void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  if ( (byte_434F7AF & 1) == 0 )
  {
    sub_B70694(&BaseEarthPoint_TypeInfo);
    byte_434F7AF = 1;
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
    sub_B7076C(0LL, v6);
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

  if ( (byte_434F7AE & 1) == 0 )
  {
    sub_B70694(&BaseEarthPoint_TypeInfo);
    byte_434F7AE = 1;
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
    sub_B7076C(mEarthCore, v6);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x23
  struct UIWidget_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BaseCore_o *v17; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  float v25; // s8
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v27; // x24
  UnityEngine_GameObject_o *v28; // x25
  UnityEngine_GameObject_o *v29; // x24
  UnityEngine_Transform_o *transform; // x25
  int v31; // s0
  UnityEngine_Transform_o *v34; // x25
  int v35; // s0
  UnityEngine_Transform_o *v39; // x25
  int v40; // s0
  struct UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  MethodInfo v65; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434F7AD & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F7AD = 1;
  }
  LODWORD(v65.klass) = 0;
  v65.name = 0LL;
  LODWORD(v65.invoker_method) = 0;
  v65.methodPointer = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  Component_srcLineSprite = (struct UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mWidget,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v9 )
    goto LABEL_32;
  v17 = (struct BaseCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v9,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = v17;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mEarthCore,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v66.fields.x = 1.0 / v25;
  v66.fields.y = 1.0 / v25;
  v66.fields.z = 1.0 / v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v66, 0LL);
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
      v27 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      gameObject = CommonEffectManager__SetSkinEffect(v27, v28, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      v29 = gameObject;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
      v34 = UnityEngine_GameObject__get_transform(v29, 0LL);
      *(UnityEngine_Quaternion_o *)&v35 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v34 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(v34, *(UnityEngine_Quaternion_o *)&v35, 0LL);
      v39 = UnityEngine_GameObject__get_transform(v29, 0LL);
      *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
      if ( !v39 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
      ComponentInChildren_Dropdown_DropdownItem = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                           v29,
                                                                                           (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = ComponentInChildren_Dropdown_DropdownItem;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.mParticleSystem,
        (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      this->fields.mParticleSystemObj = v29;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.mParticleSystemObj,
        (System_Int32_array **)v29,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
  }
  *(UnityEngine_Vector3_o *)&v65.name = UnityEngine_Vector3__get_zero(0LL);
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, (UnityEngine_Vector3_o *)&v65.name, v56);
  if ( *(float *)&v65.name < 0.0 )
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
    sub_B7076C(gameObject, v8);
  }
LABEL_31:
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v58, 0LL);
  v65.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&v65.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &v65);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v69 = UnityEngine_Quaternion__LookRotation_36098220(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v69;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v69, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.earthEffectCamera,
    (System_Int32_array **)earthEffCamera,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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