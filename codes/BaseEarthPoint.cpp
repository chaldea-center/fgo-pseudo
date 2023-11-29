void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6F04 & 1) == 0 )
  {
    sub_B16FFC(&BaseEarthPoint_TypeInfo, v1);
    byte_40F6F04 = 1;
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
  float v6; // s0
  float v7; // s2
  UnityEngine_Component_o *mEarthCore; // x0
  float v9; // s8
  float v10; // s9
  UnityEngine_GameObject_o *v11; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B170D4();
  v9 = v6;
  v10 = v7;
  v11 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v11, 0LL);
  Position.fields.x = v9 - Position.fields.x;
  Position.fields.y = v10 - Position.fields.z;
  vec->fields.x = Position.fields.x;
  vec->fields.z = v10 - Position.fields.z;
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
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Component_o *mEarthCore; // x0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *transform; // x0
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

  if ( (byte_40F6F03 & 1) == 0 )
  {
    sub_B16FFC(&BaseEarthPoint_TypeInfo, vec);
    byte_40F6F03 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  *vec = UnityEngine_Vector3__get_normalized(LocalPosition, (const MethodInfo *)vec);
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v10 = v6, v11 = v7, v12 = v8, (v13 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL)) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(v13, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  rotation = UnityEngine_Transform__get_rotation(transform, 0LL);
  x = rotation.fields.x;
  y = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  one = UnityEngine_Vector3__get_one(0LL);
  v25.fields.x = v10;
  v25.fields.y = v11;
  v25.fields.z = v12;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x23
  UnityEngine_GameObject_o *v19; // x0
  struct UIWidget_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BaseCore_o *v27; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Transform_o *v35; // x0
  float v36; // s8
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v39; // x24
  UnityEngine_GameObject_o *v40; // x25
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x24
  UnityEngine_Transform_o *v43; // x25
  int v44; // s0
  UnityEngine_Transform_o *v47; // x25
  int v48; // s0
  UnityEngine_Transform_o *v52; // x25
  int v53; // s0
  struct UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  MethodInfo v78; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F6F02 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, isActive);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BaseCore___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F6F02 = 1;
  }
  LODWORD(v78.klass) = 0;
  v78.name = 0LL;
  LODWORD(v78.invoker_method) = 0;
  v78.methodPointer = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         gameObject,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !Component_srcLineSprite )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v14 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v14, isActive, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_32;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_32;
  v17 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(parent, 0LL);
  if ( !v17 )
    goto LABEL_32;
  v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v19 )
    goto LABEL_32;
  v20 = (struct UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v19,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mWidget,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !v18 )
    goto LABEL_32;
  v27 = (struct BaseCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v18,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = v27;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEarthCore,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !v35 )
    goto LABEL_32;
  LODWORD(v36) = (unsigned int)UnityEngine_Transform__get_localScale(v35, 0LL);
  v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    goto LABEL_32;
  v79.fields.x = 1.0 / v36;
  v79.fields.y = 1.0 / v36;
  v79.fields.z = 1.0 / v36;
  UnityEngine_Transform__set_localScale(v37, v79, 0LL);
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
      v39 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      v41 = CommonEffectManager__SetSkinEffect(v39, v40, 0LL);
      if ( !v41 )
        goto LABEL_32;
      v42 = v41;
      v43 = UnityEngine_GameObject__get_transform(v41, 0LL);
      *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v43 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
      v47 = UnityEngine_GameObject__get_transform(v42, 0LL);
      *(UnityEngine_Quaternion_o *)&v48 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v47 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(v47, *(UnityEngine_Quaternion_o *)&v48, 0LL);
      v52 = UnityEngine_GameObject__get_transform(v42, 0LL);
      *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
      if ( !v52 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
      ComponentInChildren_Dropdown_DropdownItem = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                           v42,
                                                                                           (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = ComponentInChildren_Dropdown_DropdownItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mParticleSystem,
        (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      this->fields.mParticleSystemObj = v42;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mParticleSystemObj,
        (System_Int32_array **)v42,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
    }
  }
  *(UnityEngine_Vector3_o *)&v78.name = UnityEngine_Vector3__get_zero(0LL);
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, (UnityEngine_Vector3_o *)&v78.name, v69);
  if ( *(float *)&v78.name < 0.0 )
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
    sub_B170D4();
  }
LABEL_31:
  v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v71, 0LL);
  v78.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&v78.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &v78);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v82 = UnityEngine_Quaternion__LookRotation_34840476(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v82;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v82, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.earthEffectCamera,
    (System_Int32_array **)earthEffCamera,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
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