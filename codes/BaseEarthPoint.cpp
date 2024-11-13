void __fastcall BaseEarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  float z; // s1

  if ( (byte_4B12C60 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseEarthPoint_TypeInfo, v1, v2);
    byte_4B12C60 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B109C1 = 1;
  }
  static_fields = BaseEarthPoint_TypeInfo->static_fields;
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v4->zeroVector.fields.x;
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
  __int64 v14; // x2
  float v15; // s10
  float v16; // s8
  float v17; // s1
  float x; // s9
  float y; // s10
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BCAA3C(0LL, v6);
  v10 = v7;
  v11 = v8;
  v12 = UnityEngine_Component__get_gameObject(mEarthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v12, 0LL);
  v15 = v10 - Position.fields.x;
  v16 = v11 - Position.fields.z;
  vec->fields.y = 0.0;
  vec->fields.x = v15;
  vec->fields.z = v11 - Position.fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    byte_4B109C4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v17 = sqrtf((float)(v16 * v16) + (float)((float)(v15 * v15) + 0.0));
  if ( v17 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v15 / v17;
    y = 0.0 / v17;
    z = v16 / v17;
  }
  vec->fields.x = x;
  vec->fields.y = y;
  vec->fields.z = z;
  if ( !byte_4B12CDB )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
    byte_4B12CDB = 1;
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
  __int64 v7; // x2
  float x; // s9
  float z; // s8
  float v10; // s1
  int v11; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v13; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  float v16; // s8
  float y; // s9
  float v18; // s10
  __int64 v19; // x1
  __int64 v20; // x2
  float v21; // s11
  float v22; // s12
  float v23; // s13
  float w; // s14
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  float v28; // s11
  float v29; // s12
  float v30; // s13
  float v31; // s8
  float v32; // s9
  float v33; // s10
  UnityEngine_Matrix4x4_o v35; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v41; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B12C5F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseEarthPoint_TypeInfo, vec, method);
    byte_4B12C5F = 1;
  }
  memset(&v36, 0, sizeof(v36));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  vec->fields.x = LocalPosition.fields.x;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    byte_4B109C4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v10 = sqrtf((float)(z * z) + (float)((float)(x * x) + 0.0));
  if ( v10 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = v13;
  }
  else
  {
    v11 = (unsigned __int8)byte_4B109C1;
    vec->fields.x = x / v10;
    vec->fields.y = 0.0 / v10;
    vec->fields.z = z / v10;
    if ( !v11 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
  }
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore
    || (v15 = UnityEngine_Vector3_TypeInfo->static_fields,
        v16 = v15->zeroVector.fields.x,
        y = v15->zeroVector.fields.y,
        v18 = v15->zeroVector.fields.z,
        (mEarthCore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEarthCore, 0LL)) == 0LL)
    || (mEarthCore = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)mEarthCore,
                                                  0LL)) == 0LL )
  {
    sub_1BCAA3C(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0LL);
  v21 = rotation.fields.x;
  v22 = rotation.fields.y;
  v23 = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
    byte_4B109C6 = 1;
  }
  v38.fields.y = y;
  v38.fields.z = v18;
  v41.fields.x = v21;
  v41.fields.y = v22;
  v41.fields.z = v23;
  v38.fields.x = v16;
  v41.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v35, v38, v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v36 = v35;
  if ( !byte_4B12CDB )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v25, v26);
    byte_4B12CDB = 1;
  }
  v39 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v36, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v29 = vec->fields.x;
  v28 = vec->fields.y;
  v30 = vec->fields.z;
  v31 = v39.fields.x;
  v32 = v39.fields.y;
  v33 = v39.fields.z;
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, v27);
  return acosf((float)(v33 * v30) + (float)((float)(v29 * v31) + (float)(v32 * v28))) * 57.296;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x23
  Il2CppObject *Component_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  float v35; // s8
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v39; // x24
  __int64 v40; // x1
  UnityEngine_GameObject_o *v41; // x25
  UnityEngine_GameObject_o *v42; // x24
  __int64 v43; // x2
  UnityEngine_Transform_o *v44; // x25
  __int64 v45; // x2
  UnityEngine_Transform_o *v46; // x25
  __int64 v47; // x2
  UnityEngine_Transform_o *v48; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  float x; // s8
  float y; // s9
  float v70; // s10
  float v71; // s2
  float v72; // s0
  float v73; // s1
  float v74; // s2
  struct UnityEngine_Vector3_StaticFields *v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  UnityEngine_Vector3_o v82; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12C5E & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isActive, earthEffCamera);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BaseCore___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B12C5E = 1;
  }
  v82.fields.z = 0.0;
  *(_QWORD *)&v82.fields.x = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mWidget,
    (int64_t)Component_object,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !v19 )
    goto LABEL_47;
  v27 = UnityEngine_GameObject__GetComponent_object_(
          v19,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v27;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEarthCore, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  LODWORD(v35) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  v83.fields.x = 1.0 / v35;
  v83.fields.y = 1.0 / v35;
  v83.fields.z = 1.0 / v35;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v83, 0LL);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0LL, 0LL) )
    {
      v39 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, void *))this->klass->vtable._5_GetEffectName.method)(
                                 this,
                                 this->klass[1]._1.image);
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v40);
      gameObject = CommonEffectManager__SetSkinEffect(v39, v41, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      v42 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v44 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C1 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v43);
        byte_4B109C1 = 1;
      }
      if ( !v44 )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(v44, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v42, 0LL);
      v46 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C7 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v18, v45);
        byte_4B109C7 = 1;
      }
      if ( !v46 )
        goto LABEL_47;
      UnityEngine_Transform__set_localRotation(
        v46,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v42, 0LL);
      v48 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v47);
        byte_4B109C6 = 1;
      }
      if ( !v48 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v42,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
      this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mParticleSystem,
        (int64_t)ComponentInChildren_object,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      this->fields.mParticleSystemObj = v42;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mParticleSystemObj,
        (int64_t)v42,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v36, v37);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v82.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v82.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v82, v37);
  if ( v82.fields.x < 0.0 )
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
    sub_1BCAA3C(gameObject, v18);
  }
LABEL_37:
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v65, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v70 = LocalPosition.fields.z;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v66, v67);
    byte_4B109C4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v66);
  v71 = sqrtf((float)(v70 * v70) + (float)((float)(x * x) + (float)(y * y)));
  if ( v71 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v66, v67);
      byte_4B109C1 = 1;
    }
    v75 = UnityEngine_Vector3_TypeInfo->static_fields;
    v72 = v75->zeroVector.fields.x;
    v73 = v75->zeroVector.fields.y;
    v74 = v75->zeroVector.fields.z;
  }
  else
  {
    v72 = x / v71;
    v73 = y / v71;
    v74 = v70 / v71;
  }
  v85.fields.x = -v72;
  v85.fields.y = -v73;
  v85.fields.z = -v74;
  v86 = UnityEngine_Quaternion__LookRotation_70092604(v85, 0LL);
  this->fields._FocusQua_k__BackingField = v86;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v86, 0LL);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.earthEffectCamera,
    (int64_t)earthEffCamera,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
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