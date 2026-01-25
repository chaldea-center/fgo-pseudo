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
  Il2CppObject *v8; // x21
  const MethodInfo *v9; // x4

  if ( (byte_4CF044B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF044B = 1;
  }
  eventInfoSkillDialogPrefab = this->fields.eventInfoSkillDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v8 = GameObjectHelper__Instantiate_object_(
         eventInfoSkillDialogPrefab,
         (UnityEngine_Transform_o *)Instance[7].monitor,
         0,
         (const MethodInfo_31C8CEC *)Method_GameObjectHelper_Instantiate_EventInfoSkillDialog___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    ActionExtensions__Call(onClosed, 0);
    return;
  }
  if ( !v8 )
LABEL_10:
    sub_1C7BD40(Instance, v7);
  EventInfoSkillDialog__Open(
    (EventInfoSkillDialog_o *)v8,
    this->fields.imagePartsGroupId,
    this->fields.atlasList,
    onClosed,
    v9);
}


void EventInfoSkillComponent__Initialization(
        EventInfoSkillComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  EventUiEntity_o *v20; // x20
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_4CF0449 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoSkillComponent___c__DisplayClass3_0__Initialization_b__0__);
    sub_1C7BAE8(&EventInfoSkillComponent___c__DisplayClass3_0_TypeInfo);
    byte_4CF0449 = 1;
  }
  v5 = sub_1C7BD34(EventInfoSkillComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventUiEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)eventUiEntity, v14, v15, v16, v17, v18, v19);
  v20 = *(EventUiEntity_o **)(v5 + 24);
  v21 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoSkillComponent___c__DisplayClass3_0__Initialization_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v20, v21, v22);
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

  if ( (byte_4CF044A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoSkillComponent_OnClick__);
    sub_1C7BAE8(&Method_EventInfoSkillComponent__OnClick_b__6_0__);
    byte_4CF044A = 1;
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
      v5 = (_QWORD *)sub_1C7BB00(Method_EventInfoSkillComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoSkillComponent__OnClick_b__6_0__, 0);
    EventInfoSkillComponent__CreateEventInfoSkillDialog(this, v7, v8);
  }
}


void EventInfoSkillComponent__SetTerminalTouchEnable(
        EventInfoSkillComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *v8; // x8

  if ( (byte_4CF044C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF044C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    mTitleInfo = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mTitleInfo = TerminalSceneComponent_TypeInfo;
    }
    v8 = mTitleInfo->static_fields->mInstance;
    if ( !v8 || (mTitleInfo = (TerminalSceneComponent_c *)v8->fields.mTitleInfo) == 0 )
      sub_1C7BD40(mTitleInfo, v6);
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, enable, 0);
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
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || (this = (EventInfoSkillComponent___c__DisplayClass3_0_o *)this->fields.__4__this) == 0 )
    sub_1C7BD40(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}