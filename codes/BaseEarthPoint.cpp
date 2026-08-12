void BaseEarthPoint___cctor(const MethodInfo *method)
{
  struct BaseEarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_596CDB0 & 1) == 0 )
  {
    sub_2213A60(&BaseEarthPoint_TypeInfo);
    byte_596CDB0 = 1;
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __n128 inited; // q0
  float v12; // s3
  float v13; // s8
  int v14; // w8
  float z; // s8
  float32x2_t v16; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int v18; // w8
  float v20; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o Position; // 0:kr00_12.12
  UnityEngine_Vector3_o v22; // 0:kr14_12.12

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  mEarthCore = (UnityEngine_Component_o *)this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_2213CDC(0, v6);
  v8 = UnityEngine_Component__get_gameObject(mEarthCore, 0);
  v22 = GameObjectExtensions__GetPosition(v8, 0);
  v12 = Position.fields.x - v22.fields.x;
  v13 = Position.fields.z - v22.fields.z;
  v14 = (unsigned __int8)byte_5969AE3;
  vec->fields.y = 0.0;
  vec->fields.x = Position.fields.x - v22.fields.x;
  vec->fields.z = Position.fields.z - v22.fields.z;
  if ( !v14 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    v12 = Position.fields.x - v22.fields.x;
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v20 = v12;
    inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v10);
    v12 = v20;
  }
  inited.n128_f32[0] = sqrtf((float)(v13 * v13) + (float)(v12 * v12));
  if ( inited.n128_f32[0] <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v16.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    z = v13 / inited.n128_f32[0];
    v16.n64_u64[0] = vdiv_f32((float32x2_t)LODWORD(v12), vdup_lane_s32((int32x2_t)inited.n128_u64[0], 0)).n64_u64[0];
  }
  *(float32x2_t *)&vec->fields.x = v16;
  v18 = (unsigned __int8)byte_596CDEB;
  vec->fields.z = z;
  if ( !v18 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  return (float)(z * UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.z)
       + vaddv_f32(vmul_f32(v16, *(float32x2_t *)&UnityEngine_Vector3_TypeInfo->static_fields->backVector.fields.x));
}


float BaseEarthPoint__GetDotXZ_Deg(BaseEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32x2_t v8; // d3
  int v9; // w8
  int v10; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Component_o *mEarthCore; // x0
  struct UnityEngine_Vector3_StaticFields *v14; // x8
  float v15; // s8
  float y; // s9
  float v17; // s10
  __int64 v18; // x1
  __int64 v19; // x2
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float x; // s0
  float v25; // [xsp+10h] [xbp-100h]
  UnityEngine_Matrix4x4_o v26; // [xsp+20h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+60h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v29; // 0:kr20_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr10_16.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CDAF & 1) == 0 )
  {
    sub_2213A60(&BaseEarthPoint_TypeInfo);
    byte_596CDAF = 1;
  }
  memset(&v27, 0, sizeof(v27));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  x = LocalPosition.fields.x;
  vec->fields.x = LocalPosition.fields.x;
  v9 = (unsigned __int8)byte_5969AE3;
  vec->fields.z = LocalPosition.fields.z;
  vec->fields.y = 0.0;
  if ( !v9 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    x = LocalPosition.fields.x;
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v25 = x;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v7);
    x = v25;
  }
  v8.n64_f32[0] = sqrtf((float)(LocalPosition.fields.z * LocalPosition.fields.z) + (float)(x * x));
  if ( v8.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec->fields.z = z;
  }
  else
  {
    v10 = (unsigned __int8)byte_5969AE0;
    vec->fields.z = LocalPosition.fields.z / v8.n64_f32[0];
    *(float32x2_t *)&vec->fields.x = vdiv_f32((float32x2_t)LODWORD(x), vdup_lane_s32(v8, 0));
    if ( !v10 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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
    sub_2213CDC(mEarthCore, v6);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mEarthCore, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  v31.fields.y = y;
  v31.fields.z = v17;
  v31.fields.x = v15;
  UnityEngine_Matrix4x4__TRS(&v26, v31, rotation, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v27 = v26;
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v29 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v27, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v20 = vec->fields.x;
  v21 = vec->fields.y;
  v22 = vec->fields.z;
  if ( !*(&BaseEarthPoint_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, v18, v19);
  return acosf((float)(v29.fields.z * v22) + (float)((float)(v20 * v29.fields.x) + (float)(v29.fields.y * v21)))
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x0
  struct BaseCore_o **p_mEarthCore; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  float v25; // s8
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *mParticleSystemObj; // x24
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *v32; // x25
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x24
  UnityEngine_Transform_o *v36; // x25
  UnityEngine_Transform_o *v37; // x25
  UnityEngine_Transform_o *v38; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXZ_Deg; // s0
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  float v58; // s2
  float x; // s0
  float y; // s1
  float v61; // s2
  struct UnityEngine_Vector3_StaticFields *v62; // x8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  UnityEngine_Vector3_o v69; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CDAE & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BaseCore___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDAE = 1;
  }
  v69.fields.z = 0.0;
  *(_QWORD *)&v69.fields.x = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)gameObject,
                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
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
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BaseCore___);
  this->fields.mEarthCore = (struct BaseCore_o *)v17;
  p_mEarthCore = &this->fields.mEarthCore;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mEarthCore, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !gameObject )
    goto LABEL_50;
  LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  v71.fields.x = 1.0 / v25;
  v71.fields.y = 1.0 / v25;
  v71.fields.z = 1.0 / v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v71, 0);
  if ( isActive )
  {
    mParticleSystemObj = (UnityEngine_Object_o *)this->fields.mParticleSystemObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( UnityEngine_Object__op_Equality(mParticleSystemObj, 0, 0) )
    {
      v29 = (System_String_o *)((__int64 (__fastcall *)(BaseEarthPoint_o *, const MethodInfo *))this->klass->vtable._5_GetEffectName.methodPtr)(
                                 this,
                                 this->klass->vtable._5_GetEffectName.method);
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v30, v31);
      v35 = (UnityEngine_Object_o *)CommonEffectManager__SetSkinEffect(v29, v32, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      gameObject = UnityEngine_Object__op_Inequality(v35, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_50;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v36 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5969AE0 )
        {
          gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v36 )
          goto LABEL_50;
        UnityEngine_Transform__set_localPosition(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v37 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5969AE6 )
        {
          gameObject = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
          byte_5969AE6 = 1;
        }
        if ( !v37 )
          goto LABEL_50;
        UnityEngine_Transform__set_localRotation(
          v37,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0);
        v38 = (UnityEngine_Transform_o *)gameObject;
        if ( !byte_5969AE5 )
        {
          gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v38 )
          goto LABEL_50;
        UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)v35,
                                       (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
        this->fields.mParticleSystem = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mParticleSystem,
          (int32_t)ComponentInChildren_object,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        this->fields.mParticleSystemObj = (struct UnityEngine_GameObject_o *)v35;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mParticleSystemObj,
          (int32_t)v35,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v69.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v69.fields.z = z;
  DotXZ_Deg = BaseEarthPoint__GetDotXZ_Deg(this, &v69, v27);
  if ( v69.fields.x < 0.0 )
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
    sub_2213CDC(gameObject, v8);
  }
LABEL_40:
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v55, 0);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56, v57);
  v58 = sqrtf(
          (float)(LocalPosition.fields.z * LocalPosition.fields.z)
        + (float)((float)(LocalPosition.fields.x * LocalPosition.fields.x)
                + (float)(LocalPosition.fields.y * LocalPosition.fields.y)));
  if ( v58 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    v62 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v62->zeroVector.fields.x;
    y = v62->zeroVector.fields.y;
    v61 = v62->zeroVector.fields.z;
  }
  else
  {
    x = LocalPosition.fields.x / v58;
    y = LocalPosition.fields.y / v58;
    v61 = LocalPosition.fields.z / v58;
  }
  v72.fields.x = -x;
  v72.fields.y = -y;
  v72.fields.z = -v61;
  v73 = UnityEngine_Quaternion__LookRotation_83371248(v72, 0);
  this->fields._FocusQua_k__BackingField = v73;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v73, 0);
  this->fields.earthEffectCamera = earthEffCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.earthEffectCamera,
    (int32_t)earthEffCamera,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
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