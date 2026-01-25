void WrapBaseBattlePopupControl___ctor(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_Transform_o *parent,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t layer; // w0
  struct BattlePerformance_o **p_perf; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._TrParent_k__BackingField = parent;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)parent, v7, v8, v9, v10, v11, v12);
  if ( !parent || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0)) == 0 )
    sub_1C7BD40(gameObject, v14);
  layer = UnityEngine_GameObject__get_layer(gameObject, 0);
  this->fields.perf = inPerf;
  p_perf = &this->fields.perf;
  *((_DWORD *)p_perf - 2) = layer;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_perf, (int32_t)inPerf, v17, v18, v19, v20, v21, v22);
}


void WrapBaseBattlePopupControl__ApplyLayerRecursively(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1

  if ( (byte_4CF144A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF144A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    GameObjectExtensions__SetLayerRecursively(obj, this->fields._Layer_k__BackingField, 0);
    if ( !obj || (transform = UnityEngine_GameObject__get_transform(obj, 0)) == 0 )
      sub_1C7BD40(transform, v6);
    UnityEngine_Transform__SetParent_71893588(transform, this->fields._TrParent_k__BackingField, 0, 0);
  }
}


UnityEngine_GameObject_o *WrapBaseBattlePopupControl__CreatePopupObject(
        WrapBaseBattlePopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        bool isActive,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *Object; // x20

  if ( (byte_4CF1448 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1448 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (struct BattlePerformance_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( Object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, isActive, 0);
      return (UnityEngine_GameObject_o *)Object;
    }
LABEL_10:
    sub_1C7BD40(perf, prefab);
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
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF1449 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1449 = 1;
  }
  component = 0;
  PopupObject = (UnityEngine_Object_o *)WrapBaseBattlePopupControl__CreatePopupObject(
                                          this,
                                          prefab,
                                          isActive,
                                          (const MethodInfo *)isActive);
  if ( !System_String__IsNullOrEmpty(text, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = (Il2CppObject *)UnityEngine_Object__op_Inequality(PopupObject, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( !PopupObject )
        goto LABEL_12;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)PopupObject,
             &component,
             (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_UIRangeLabel___) )
      {
        v10 = component;
        if ( component )
        {
          UIRangeLabel__Set((UIRangeLabel_o *)component, text, 0, 1, 0, 0, 0);
          return (UnityEngine_GameObject_o *)PopupObject;
        }
LABEL_12:
        sub_1C7BD40(v10, v11);
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
  int32_t v6; // w8

  if ( critical )
    return 1;
  if ( resist )
    v6 = 3;
  else
    v6 = 0;
  if ( week )
    return 2;
  else
    return v6;
}


UnityEngine_GameObject_o *WrapBaseBattlePopupControl__GetEffectInstantiate(
        WrapBaseBattlePopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1

  if ( (byte_4CF1447 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1447 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WrapBaseBattlePopupControl_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_unknown.methodPtr)(
                                 this,
                                 (unsigned int)id,
                                 this->klass->vtable._13_unknown.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v5 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0)) == 0 )
      sub_1C7BD40(transform, v7);
    UnityEngine_Transform__SetParent_71893588(transform, this->fields._TrParent_k__BackingField, 0, 0);
  }
  return (UnityEngine_GameObject_o *)v5;
}


BattleEffectControl_o *WrapBaseBattlePopupControl__get_EffectControl(
        WrapBaseBattlePopupControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1C7BD40(this, method);
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