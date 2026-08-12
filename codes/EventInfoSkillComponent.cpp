void EventInfoSkillComponent___ctor(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoSkillComponent__Awake(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillComponent__CreateEventInfoSkillDialog(
        EventInfoSkillComponent_o *this,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventInfoSkillDialogPrefab; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x4

  if ( (byte_5972639 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972639 = 1;
  }
  eventInfoSkillDialogPrefab = this->fields.eventInfoSkillDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v9 = GameObjectHelper__Instantiate_object_(
         eventInfoSkillDialogPrefab,
         (UnityEngine_Transform_o *)Instance[7].monitor,
         0,
         (const MethodInfo_38B88AC *)Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    ActionExtensions__Call(onClosed, 0);
    return;
  }
  if ( !v9 )
LABEL_10:
    sub_2213CDC(Instance, v7);
  EventInfoSkillDialog__Open(
    (EventInfoSkillDialog_o *)v9,
    this->fields.imagePartsGroupId,
    this->fields.atlasList,
    onClosed,
    v10);
}


void EventInfoSkillComponent__Initialization(
        EventInfoSkillComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventUiEntity_o *v20; // x20
  System_Action_o *v21; // x22

  if ( (byte_5972637 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillComponent___c__DisplayClass3_0__Initialization_b__0__);
    sub_2213A60(&EventInfoSkillComponent___c__DisplayClass3_0_TypeInfo);
    byte_5972637 = 1;
  }
  v5 = sub_2213CCC(EventInfoSkillComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventUiEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)eventUiEntity, v14, v15, v16, v17, v18, v19);
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, *(EventUiEntity_o **)(v5 + 24), 0);
  v20 = *(EventUiEntity_o **)(v5 + 24);
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoSkillComponent___c__DisplayClass3_0__Initialization_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v20, v21, 0);
}


bool EventInfoSkillComponent__IsBusy(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventInfoSkillComponent__OnClick(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  EventInfoSkillComponent_o *v3; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_5972638 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillComponent_OnClick__);
    sub_2213A60(&Method_EventInfoSkillComponent__OnClick_b__6_0__);
    byte_5972638 = 1;
  }
  v3 = (EventInfoSkillComponent_o *)((__int64 (__fastcall *)(EventInfoSkillComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
                                      this,
                                      this->klass->vtable._17_IsBusy.method);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    this->fields.isBusy = 1;
    EventInfoSkillComponent__SetTerminalTouchEnable(v3, 0, v4);
    v5 = Method_EventInfoSkillComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoSkillComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventInfoSkillComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoSkillComponent__OnClick_b__6_0__, 0);
    EventInfoSkillComponent__CreateEventInfoSkillDialog(this, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoSkillComponent__SetTerminalTouchEnable(
        EventInfoSkillComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_597263A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_597263A = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_2213CDC(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoSkillComponent___OnClick_b__6_0(EventInfoSkillComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.isBusy = 0;
  EventInfoSkillComponent__SetTerminalTouchEnable(this, 1, v2);
}


void EventInfoSkillComponent___c__DisplayClass3_0___ctor(
        EventInfoSkillComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillComponent___c__DisplayClass3_0___Initialization_b__0(
        EventInfoSkillComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || (this = (EventInfoSkillComponent___c__DisplayClass3_0_o *)this->fields.__4__this) == 0 )
    sub_2213CDC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}