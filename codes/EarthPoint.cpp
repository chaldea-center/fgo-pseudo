void EarthPoint___cctor(const MethodInfo *method)
{
  struct EarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_596CEE5 & 1) == 0 )
  {
    sub_2213A60(&EarthPoint_TypeInfo);
    byte_596CEE5 = 1;
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = EarthPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CEE4 & 1) == 0 )
  {
    sub_2213A60(&BaseEarthPoint_TypeInfo);
    byte_596CEE4 = 1;
  }
  if ( !*(&BaseEarthPoint_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, method, v2);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0);
}


System_String_o *EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int monitor; // w20
  Il2CppObject *Master_object; // x19
  Il2CppObject *v7; // x0
  System_String_o *result; // x0
  Il2CppObject *v9; // x0
  int v10; // [xsp+8h] [xbp-28h] BYREF
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CEE3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    sub_2213A60(&StringLiteral_19693/*"ef_difference{0}1"*/);
    sub_2213A60(&StringLiteral_5600/*"EARTH_SKIN_EFFECT_NAME{0}"*/);
    byte_596CEE3 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  monitor = (int)Instance[3].monitor;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  v11 = monitor;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  Instance = System_String__Format((System_String_o *)StringLiteral_5600/*"EARTH_SKIN_EFFECT_NAME{0}"*/, v7, 0);
  if ( !Master_object )
LABEL_10:
    sub_2213CDC(Instance, v3);
  result = ConstantStrMaster__GetValue((ConstantStrMaster_o *)Master_object, Instance, 0);
  if ( !result )
  {
    v10 = monitor + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
    return System_String__Format((System_String_o *)StringLiteral_19693/*"ef_difference{0}1"*/, v9, 0);
  }
  return result;
}


void EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mWidget; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float DotXZ; // s0
  struct UIWidget_o *v11; // x8
  _BOOL4 mIsForward; // w22
  float v13; // s11
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  float v18; // s11
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *earthEffectCamera; // x20
  float x; // s8
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Camera_o *v26; // x20
  _BOOL4 v27; // w8
  UnityEngine_Transform_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Object_o *v30; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v31; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v32; // [xsp+40h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+78h] [xbp-78h] BYREF
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CEE2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CEE2 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  vec.fields.z = 0.0;
  m_ParticleSystem = 0;
  *(_QWORD *)&vec.fields.x = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
    return;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  vec.fields.z = z;
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0);
  v11 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v11 )
    goto LABEL_53;
  v13 = DotXZ;
  r = v11->fields.mColor.fields.r;
  g = v11->fields.mColor.fields.g;
  b = v11->fields.mColor.fields.b;
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v18 = fmaxf(v13, 0.0);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0, 0) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v19.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0).fields.m_ParticleSystem;
    v36.fields.r = r;
    v36.fields.g = g;
    m_ParticleSystem = v19.fields.m_ParticleSystem;
    v36.fields.b = b;
    v36.fields.a = v18;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v32, v36, 0);
    v31 = v32;
    UnityEngine_ParticleSystem_MainModule__set_startColor(
      (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
      &v31,
      0);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_2213CDC(transform, v8);
  v37.fields.r = r;
  v37.fields.g = g;
  v37.fields.b = b;
  v37.fields.a = v18;
  UIWidget__set_color((UIWidget_o *)transform, v37, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( !UnityEngine_Object__op_Inequality(earthEffectCamera, 0, 0) )
    goto LABEL_29;
  v25 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v24);
  if ( !UnityEngine_Object__op_Inequality(v25, 0, 0) )
    goto LABEL_29;
  transform = this->fields.mParticleSystem;
  if ( !transform )
    goto LABEL_53;
  v26 = this->fields.earthEffectCamera;
  transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
  if ( !transform )
    goto LABEL_53;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v26 )
    goto LABEL_53;
  x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_83198212(v26, position, 0));
  if ( x < 0.0 )
  {
    v27 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
    {
      this->fields.IsParticleDisp = 0;
LABEL_30:
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v28 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5969AE0 )
      {
        transform = (UnityEngine_ParticleSystem_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v28 )
        goto LABEL_53;
      UnityEngine_Transform__set_eulerAngles(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v27 = this->fields.mIsForward;
    }
  }
  else
  {
LABEL_29:
    v27 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
      goto LABEL_30;
  }
  if ( (mIsForward & (v27 ^ 0xFF)) != 0 )
  {
    v29 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v24);
    if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
      goto LABEL_40;
    transform = this->fields.mParticleSystem;
    if ( transform )
    {
      UnityEngine_ParticleSystem__Clear_83837652(transform, 0);
LABEL_40:
      this->fields.IsParticleDisp = 0;
      return;
    }
    goto LABEL_53;
  }
  if ( v27 && !this->fields.IsParticleDisp && x >= 0.0 )
  {
    v30 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v24);
    if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
    {
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)transform,
                                                      0);
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
          transform = this->fields.mParticleSystem;
          if ( transform )
          {
            transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)transform,
                                                          0);
            if ( transform )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
              this->fields.IsParticleDisp = 1;
              return;
            }
          }
        }
      }
      goto LABEL_53;
    }
  }
}