void ScriptEffectSizeAdjustComponent___ctor(ScriptEffectSizeAdjustComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptEffectSizeAdjustComponent__SetEffectSize(ScriptEffectSizeAdjustComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *effectObjectTransform; // x20
  float32x2_t v9; // d9
  float z; // s8
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  ScriptManager_o *v13; // x0
  __int64 v14; // x1
  int32_t UiRootActiveHeight; // w0
  __int64 v16; // x2
  int32_t v17; // w20
  float v18; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F554 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596F554 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    effectObjectTransform = (UnityEngine_Object_o *)this->fields.effectObjectTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(effectObjectTransform, 0, 0) )
    {
      v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.defaultScale.fields.x;
      z = this->fields.defaultScale.fields.z;
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
      v12.n64_u64[0] = vsub_f32(v9, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
      if ( (float)((float)((float)(z - static_fields[1].n64_f32[0]) * (float)(z - static_fields[1].n64_f32[0]))
                 + vaddv_f32(vmul_f32(v12, v12))) >= 1.0e-10 )
      {
        v13 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v13 )
          goto LABEL_20;
        UiRootActiveHeight = ScriptManager__GetUiRootActiveHeight(v13, 0);
        if ( UiRootActiveHeight )
        {
          v17 = UiRootActiveHeight;
          if ( UiRootActiveHeight != this->fields.oldUiRootActiveHeight )
          {
            if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v14, v16);
            v13 = (ScriptManager_o *)this->fields.effectObjectTransform;
            if ( v13 )
            {
              v18 = (float)v17 / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT;
              v19.fields.z = this->fields.defaultScale.fields.z * v18;
              v19.fields.y = this->fields.defaultScale.fields.y * v18;
              v19.fields.x = this->fields.defaultScale.fields.x * v18;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v13, v19, 0);
              this->fields.oldUiRootActiveHeight = v17;
              return;
            }
LABEL_20:
            sub_2213CDC(v13, v14);
          }
        }
      }
    }
  }
}


void ScriptEffectSizeAdjustComponent__Start(ScriptEffectSizeAdjustComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0
    || (this->fields.defaultScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  this->fields.effectObjectTransform = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectObjectTransform,
    (int32_t)transform,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ScriptEffectSizeAdjustComponent__SetEffectSize(this, v12);
}