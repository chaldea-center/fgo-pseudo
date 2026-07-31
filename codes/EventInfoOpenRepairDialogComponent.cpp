void EventInfoOpenRepairDialogComponent___ctor(EventInfoOpenRepairDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(
        EventInfoOpenRepairDialogComponent_o *this,
        int32_t eventId,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_GameObject_o *eventInfoRepairDialogPrefab; // x21
  __int64 v23; // x1
  Il2CppObject *v24; // x21
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x22

  if ( (byte_5939996 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__);
    sub_21FFC50(&EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo);
    byte_5939996 = 1;
  }
  v7 = sub_21FFEBC(EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = onClosed;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)onClosed, v16, v17, v18, v19, v20, v21);
  eventInfoRepairDialogPrefab = this->fields.eventInfoRepairDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v24 = GameObjectHelper__Instantiate_object_(
          eventInfoRepairDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_38853E4 *)Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, 0, 0);
  if ( !v25 )
  {
    EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)v25, 0, v26);
    v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__,
      0);
    if ( v24 )
    {
      EventInfoRepairDialog__Open((EventInfoRepairDialog_o *)v24, eventId, v27, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable(
        EventInfoOpenRepairDialogComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_5939997 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5939997 = 1;
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
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_21FFECC(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoOpenRepairDialogComponent___c__DisplayClass1_0___ctor(
        EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoOpenRepairDialogComponent___c__DisplayClass1_0___OpenEventInfoRepairDialog_b__0(
        EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)this, 1, v2);
  ActionExtensions__Call(this->fields.onClosed, 0);
}