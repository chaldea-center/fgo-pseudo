void WrapBaseBattlePopupControl___ctor(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_Transform_o *parent,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t layer; // w0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._TrParent_k__BackingField = parent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)parent, v7, v8, v9, v10, v11, v12);
  if ( !parent || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0)) == 0 )
    sub_21FFECC(gameObject, v14);
  layer = UnityEngine_GameObject__get_layer(gameObject, 0);
  this->fields.perf = inPerf;
  this->fields._Layer_k__BackingField = layer;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.perf, (int32_t)inPerf, v16, v17, v18, v19, v20, v21);
}


void WrapBaseBattlePopupControl__ApplyLayerRecursively(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1

  if ( (byte_593B5D4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5D4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    GameObjectExtensions__SetLayerRecursively(obj, this->fields._Layer_k__BackingField, 0);
    if ( !obj || (transform = UnityEngine_GameObject__get_transform(obj, 0)) == 0 )
      sub_21FFECC(transform, v6);
    UnityEngine_Transform__SetParent_83279140(transform, this->fields._TrParent_k__BackingField, 0, 0);
  }
}


UnityEngine_GameObject_o *WrapBaseBattlePopupControl__CreatePopupObject(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        bool isActive,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *Object; // x20

  if ( (byte_593B5D2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5D2 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)perf,
                                     prefab,
                                     this->fields._TrParent_k__BackingField,
                                     0,
                                     0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  perf = (struct BattlePerformance_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( Object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, isActive, 0);
      return (UnityEngine_GameObject_o *)Object;
    }
LABEL_10:
    sub_21FFECC(perf, prefab);
  }
  return (UnityEngine_GameObject_o *)Object;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *WrapBaseBattlePopupControl__CreatePopupTextObject(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        System_String_o *text,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PopupObject; // x20
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593B5D3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5D3 = 1;
  }
  component = 0;
  PopupObject = (UnityEngine_Object_o *)WrapBaseBattlePopupControl__CreatePopupObject(
                                          this,
                                          prefab,
                                          isActive,
                                          (const MethodInfo *)isActive);
  if ( !System_String__IsNullOrEmpty(text, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v11 = (Il2CppObject *)UnityEngine_Object__op_Inequality(PopupObject, 0, 0);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( !PopupObject )
        goto LABEL_12;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)PopupObject,
             &component,
             (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___) )
      {
        v11 = component;
        if ( component )
        {
          UIRangeLabel__Set((UIRangeLabel_o *)component, text, 0, 1, 0, 0, 0);
          return (UnityEngine_GameObject_o *)PopupObject;
        }
LABEL_12:
        sub_21FFECC(v11, v12);
      }
    }
  }
  return (UnityEngine_GameObject_o *)PopupObject;
}


int32_t WrapBaseBattlePopupControl__GetDamageType(
        WrapBaseBattlePopupControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  int32_t v5; // w8

  if ( resist )
    v5 = 3;
  else
    v5 = 0;
  if ( week )
    v5 = 2;
  if ( critical )
    return 1;
  else
    return v5;
}


UnityEngine_GameObject_o *WrapBaseBattlePopupControl__GetEffectInstantiate(
        WrapBaseBattlePopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1

  if ( (byte_593B5D1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5D1 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WrapBaseBattlePopupControl_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_unknown.methodPtr)(
                                 this,
                                 (unsigned int)id,
                                 this->klass->vtable._13_unknown.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v6 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0)) == 0 )
      sub_21FFECC(transform, v8);
    UnityEngine_Transform__SetParent_83279140(transform, this->fields._TrParent_k__BackingField, 0, 0);
  }
  return (UnityEngine_GameObject_o *)v6;
}


BattleEffectControl_o *WrapBaseBattlePopupControl__get_EffectControl(
        WrapBaseBattlePopupControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_21FFECC(this, method);
  return perf->fields.effectcontrol;
}


int32_t WrapBaseBattlePopupControl__get_Layer(WrapBaseBattlePopupControl_o *this, const MethodInfo *method)
{
  return this->fields._Layer_k__BackingField;
}


UnityEngine_Transform_o *WrapBaseBattlePopupControl__get_TrParent(
        WrapBaseBattlePopupControl_o *this,
        const MethodInfo *method)
{
  return this->fields._TrParent_k__BackingField;
}