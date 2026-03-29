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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *eventInfoRepairDialogPrefab; // x21
  Il2CppObject *v23; // x21
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x22

  if ( (byte_4D31DFB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__);
    sub_1C93AD4(&EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo);
    byte_4D31DFB = 1;
  }
  v7 = sub_1C93D20(EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = onClosed;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)onClosed, v16, v17, v18, v19, v20, v21);
  eventInfoRepairDialogPrefab = this->fields.eventInfoRepairDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v23 = GameObjectHelper__Instantiate_object_(
          eventInfoRepairDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_31FDCA8 *)Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0, 0);
  if ( !v24 )
  {
    EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)v24, 0, v25);
    v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__,
      0);
    if ( v23 )
    {
      EventInfoRepairDialog__Open((EventInfoRepairDialog_o *)v23, eventId, v26, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(Instance, v9);
  }
}


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

  if ( (byte_4D31DFC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D31DFC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_1C93D2C(genericContainerHandle, v6);
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
    sub_1C93D2C(this, method);
  EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)this, 1, v2);
  ActionExtensions__Call(this->fields.onClosed, 0);
}