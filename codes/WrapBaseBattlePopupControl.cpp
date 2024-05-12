void __fastcall WrapBaseBattlePopupControl___ctor(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_Transform_o *parent,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t layer; // w0
  struct BattlePerformance_o **p_perf; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._TrParent_k__BackingField = parent;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)parent, v7, v8, v9, v10, v11, v12);
  if ( !parent || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0LL)) == 0LL )
    sub_B7769C(gameObject, v14);
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  this->fields.perf = inPerf;
  p_perf = &this->fields.perf;
  *((_DWORD *)p_perf - 2) = layer;
  sub_B77560((BattleServantConfConponent_o *)p_perf, (System_Int32_array **)inPerf, v17, v18, v19, v20, v21, v22);
}


void __fastcall WrapBaseBattlePopupControl__ApplyLayerRecursively(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1

  if ( (byte_4389526 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389526 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLayerRecursively(obj, this->fields._Layer_k__BackingField, 0LL);
    if ( !obj || (transform = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL )
      sub_B7769C(transform, v6);
    UnityEngine_Transform__SetParent_36431020(transform, this->fields._TrParent_k__BackingField, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall WrapBaseBattlePopupControl__CreatePopupObject(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        bool isActive,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *Object; // x20

  if ( (byte_4389524 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389524 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)perf,
                                     prefab,
                                     this->fields._TrParent_k__BackingField,
                                     0LL,
                                     0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (struct BattlePerformance_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( Object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, isActive, 0LL);
      return (UnityEngine_GameObject_o *)Object;
    }
LABEL_11:
    sub_B7769C(perf, prefab);
  }
  return (UnityEngine_GameObject_o *)Object;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBaseBattlePopupControl__CreatePopupTextObject(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        System_String_o *text,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PopupObject; // x20
  UITexture_o *v10; // x0
  __int64 v11; // x1
  UITexture_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4389525 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389525 = 1;
  }
  component = 0LL;
  PopupObject = (UnityEngine_Object_o *)WrapBaseBattlePopupControl__CreatePopupObject(
                                          this,
                                          prefab,
                                          isActive,
                                          (const MethodInfo *)isActive);
  if ( !System_String__IsNullOrEmpty(text, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (UITexture_o *)UnityEngine_Object__op_Inequality(PopupObject, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( !PopupObject )
        goto LABEL_13;
      if ( UnityEngine_GameObject__TryGetComponent_UITexture_(
             (UnityEngine_GameObject_o *)PopupObject,
             &component,
             (const MethodInfo_1DEC764 *)Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___) )
      {
        v10 = component;
        if ( component )
        {
          UIRangeLabel__Set((UIRangeLabel_o *)component, text, 0LL, 1, 0, 0LL);
          return (UnityEngine_GameObject_o *)PopupObject;
        }
LABEL_13:
        sub_B7769C(v10, v11);
      }
    }
  }
  return (UnityEngine_GameObject_o *)PopupObject;
}


int32_t __fastcall WrapBaseBattlePopupControl__GetDamageType(
        WrapBaseBattlePopupControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  if ( critical || week )
  {
    if ( critical )
      return 1;
    else
      return 2;
  }
  else if ( resist )
  {
    return 3;
  }
  else
  {
    return 0;
  }
}


UnityEngine_GameObject_o *__fastcall WrapBaseBattlePopupControl__GetEffectInstantiate(
        WrapBaseBattlePopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1

  if ( (byte_4389523 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389523 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WrapBaseBattlePopupControl_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_unknown.method)(
                                 this,
                                 (unsigned int)id,
                                 this->klass->vtable._14_GetEffectInstantiate.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v5 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL)) == 0LL )
      sub_B7769C(transform, v7);
    UnityEngine_Transform__SetParent_36431020(transform, this->fields._TrParent_k__BackingField, 0, 0LL);
  }
  return (UnityEngine_GameObject_o *)v5;
}


BattleEffectControl_o *__fastcall WrapBaseBattlePopupControl__get_EffectControl(
        WrapBaseBattlePopupControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_B7769C(this, method);
  return perf->fields.effectcontrol;
}


int32_t __fastcall WrapBaseBattlePopupControl__get_Layer(WrapBaseBattlePopupControl_o *this, const MethodInfo *method)
{
  return this->fields._Layer_k__BackingField;
}


UnityEngine_Transform_o *__fastcall WrapBaseBattlePopupControl__get_TrParent(
        WrapBaseBattlePopupControl_o *this,
        const MethodInfo *method)
{
  return this->fields._TrParent_k__BackingField;
}