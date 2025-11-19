void ScriptEffectSizeAdjustComponent___ctor(ScriptEffectSizeAdjustComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptEffectSizeAdjustComponent__SetEffectSize(ScriptEffectSizeAdjustComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UnityEngine_Object_o *effectObjectTransform; // x20
  float x; // s8
  float32x2_t v6; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v8; // d1
  unsigned __int64 v9; // d1
  ScriptManager_o *v10; // x0
  __int64 v11; // x1
  int32_t UiRootActiveHeight; // w0
  int32_t v13; // w20
  ManagerConfig_c *v14; // x8
  float v15; // s0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB5065 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4CB5065 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    effectObjectTransform = (UnityEngine_Object_o *)this->fields.effectObjectTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(effectObjectTransform, 0, 0) )
    {
      x = this->fields.defaultScale.fields.x;
      v6.n64_u64[0] = *(unsigned __int64 *)&this->fields.defaultScale.fields.y;
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v8.n64_u64[0] = vsub_f32(v6, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v9 = vmul_f32(v8, v8).n64_u64[0];
      if ( (float)(*((float *)&v9 + 1)
                 + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                                 * (float)(x - static_fields->zeroVector.fields.x))
                         + *(float *)&v9)) >= 1.0e-10 )
      {
        v10 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v10 )
          goto LABEL_20;
        UiRootActiveHeight = ScriptManager__GetUiRootActiveHeight(v10, 0);
        if ( UiRootActiveHeight )
        {
          v13 = UiRootActiveHeight;
          if ( UiRootActiveHeight != this->fields.oldUiRootActiveHeight )
          {
            v14 = ManagerConfig_TypeInfo;
            if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v14 = ManagerConfig_TypeInfo;
            }
            v10 = (ScriptManager_o *)this->fields.effectObjectTransform;
            if ( v10 )
            {
              v15 = (float)v13 / (float)v14->static_fields->HEIGHT;
              v16.fields.z = v15 * this->fields.defaultScale.fields.z;
              v16.fields.y = v15 * this->fields.defaultScale.fields.y;
              v16.fields.x = v15 * this->fields.defaultScale.fields.x;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v10, v16, 0);
              this->fields.oldUiRootActiveHeight = v13;
              return;
            }
LABEL_20:
            sub_1C6BC60(v10, v11);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0
    || (this->fields.defaultScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(gameObject, v4);
  }
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  this->fields.effectObjectTransform = transform;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectObjectTransform, (int32_t)transform, v6, v7);
  ScriptEffectSizeAdjustComponent__SetEffectSize(this, v8);
}