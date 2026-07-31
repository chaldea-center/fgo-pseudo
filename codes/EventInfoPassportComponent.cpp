void EventInfoPassportComponent___ctor(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoPassportComponent__Awake(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoPassportComponent__CreateEventInfoPassportDialog(
        EventInfoPassportComponent_o *this,
        System_Action_o *onClosed,
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
  int32_t eventId; // w19
  System_Action_o *v21; // x20
  __int64 v22; // x1

  if ( (byte_59399BA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassportComponent___c__DisplayClass7_0__CreateEventInfoPassportDialog_b__0__);
    sub_21FFC50(&EventInfoPassportComponent___c__DisplayClass7_0_TypeInfo);
    byte_59399BA = 1;
  }
  v5 = sub_21FFEBC(EventInfoPassportComponent___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onClosed;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onClosed, v14, v15, v16, v17, v18, v19);
  eventId = this->fields.eventId;
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoPassportComponent___c__DisplayClass7_0__CreateEventInfoPassportDialog_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  AtlasManager__LoadEventUI_47538036(eventId, v21, 1, 0);
}


void EventInfoPassportComponent__Initialization(
        EventInfoPassportComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, eventUiEntity, 0);
  if ( !eventUiEntity )
    sub_21FFECC(v5, v6);
  this->fields.eventId = eventUiEntity->fields.eventId;
}


bool EventInfoPassportComponent__IsBusy(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventInfoPassportComponent__OnClick(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  EventInfoPassportComponent_o *v3; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_59399B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassportComponent_OnClick__);
    sub_21FFC50(&Method_EventInfoPassportComponent__OnClick_b__6_0__);
    byte_59399B9 = 1;
  }
  v3 = (EventInfoPassportComponent_o *)((__int64 (__fastcall *)(EventInfoPassportComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
                                         this,
                                         this->klass->vtable._17_IsBusy.method);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    this->fields.isBusy = 1;
    EventInfoPassportComponent__SetTerminalTouchEnable(v3, 0, v4);
    v5 = Method_EventInfoPassportComponent_OnClick__;
    if ( (*((_BYTE *)Method_EventInfoPassportComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventInfoPassportComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoPassportComponent__OnClick_b__6_0__, 0);
    EventInfoPassportComponent__CreateEventInfoPassportDialog(this, v7, v8);
  }
}


void EventInfoPassportComponent__OnDestroy(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isBusy )
  {
    EventInfoPassportComponent__SetTerminalTouchEnable(this, 1, v2);
    this->fields.isBusy = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassportComponent__SetTerminalTouchEnable(
        EventInfoPassportComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  System_String_c *klass; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_String_c *v10; // x8

  if ( (byte_59399BB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_59399BB = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.particleAssetName->klass;
    if ( klass )
    {
      genericContainerHandle = (UnityEngine_Object_o *)klass->_2.genericContainerHandle;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Equality(genericContainerHandle, 0, 0) )
        return;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
        v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v10 = v7->fields.particleAssetName->klass;
      if ( v10 )
      {
        v7 = (TitleInfoControl_o *)v10->_2.genericContainerHandle;
        if ( v7 )
        {
          TitleInfoControl__SetTouchEnable(v7, enable, 0);
          return;
        }
      }
    }
    sub_21FFECC(v7, v6);
  }
}


void EventInfoPassportComponent___OnClick_b__6_0(EventInfoPassportComponent_o *this, const MethodInfo *method)
{
  int32_t eventId; // w20
  EventInfoPassportComponent_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59399BC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_59399BC = 1;
  }
  eventId = this->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields.isBusy = 0;
  EventInfoPassportComponent__SetTerminalTouchEnable(v4, 1, v5);
}


void EventInfoPassportComponent___c__DisplayClass7_0___ctor(
        EventInfoPassportComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassportComponent___c__DisplayClass7_0___CreateEventInfoPassportDialog_b__0(
        EventInfoPassportComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  UnityEngine_Transform_o **Instance; // x0
  __int64 v5; // x1
  struct EventInfoPassportComponent_o *v6; // x8
  UnityEngine_GameObject_o *eventInfoPassportDialogPrefab; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  const MethodInfo *v10; // x3
  struct EventInfoPassportComponent_o *v11; // x8

  if ( (byte_59399BD & 1) == 0 )
  {
    sub_21FFC50(&Method_GameObjectHelper_Instantiate_EventInfoPassportDialog___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59399BD = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Instance = (UnityEngine_Transform_o **)UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_11;
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  eventInfoPassportDialogPrefab = v6->fields.eventInfoPassportDialogPrefab;
  Instance = (UnityEngine_Transform_o **)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v9 = GameObjectHelper__Instantiate_object_(
         eventInfoPassportDialogPrefab,
         Instance[15],
         0,
         (const MethodInfo_38853E4 *)Method_GameObjectHelper_Instantiate_EventInfoPassportDialog___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  Instance = (UnityEngine_Transform_o **)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_11:
    ActionExtensions__Call(this->fields.onClosed, 0);
    return;
  }
  if ( !v9
    || (Instance = (UnityEngine_Transform_o **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (v11 = this->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_21FFECC(Instance, v5);
  }
  EventInfoPassportDialog__Open((EventInfoPassportDialog_o *)v9, v11->fields.eventId, this->fields.onClosed, v10);
}