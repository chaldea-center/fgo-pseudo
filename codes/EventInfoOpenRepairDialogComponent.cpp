void __fastcall EventInfoOpenRepairDialogComponent___ctor(
        EventInfoOpenRepairDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoOpenRepairDialogComponent__OpenEventInfoRepairDialog(
        EventInfoOpenRepairDialogComponent_o *this,
        int32_t eventId,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *eventInfoRepairDialogPrefab; // x21
  Il2CppObject *v20; // x21
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x2
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4B035DB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__, v10);
    sub_1BC3008(&EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo, v11);
    byte_4B035DB = 1;
  }
  v12 = sub_1BC3254(EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = onClosed;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)onClosed, v17, v18);
  eventInfoRepairDialogPrefab = this->fields.eventInfoRepairDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v20 = GameObjectHelper__Instantiate_object_(
          eventInfoRepairDialogPrefab,
          (UnityEngine_Transform_o *)Instance[8].monitor,
          0,
          (const MethodInfo_30575BC *)Method_GameObjectHelper_Instantiate_EventInfoRepairDialog___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0LL, 0LL);
  if ( !v21 )
  {
    EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)v21, 0, v22);
    v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v12,
      Method_EventInfoOpenRepairDialogComponent___c__DisplayClass1_0__OpenEventInfoRepairDialog_b__0__,
      0LL);
    if ( v20 )
    {
      EventInfoRepairDialog__Open((EventInfoRepairDialog_o *)v20, eventId, v23, v24);
      return;
    }
LABEL_10:
    sub_1BC3264(Instance, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable(
        EventInfoOpenRepairDialogComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v7; // x1
  TitleInfoControl_o *v8; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4B035DC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, enable);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v4);
    byte_4B035DC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, enable);
    byte_4AFC38D = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v7);
      byte_4AFC38D = 1;
    }
    v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.mEventBgTexture->klass;
    if ( !klass || (v8 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1BC3264(v8, v7);
    TitleInfoControl__SetTouchEnable(v8, enable, 0LL);
  }
}


void __fastcall EventInfoOpenRepairDialogComponent___c__DisplayClass1_0___ctor(
        EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoOpenRepairDialogComponent___c__DisplayClass1_0___OpenEventInfoRepairDialog_b__0(
        EventInfoOpenRepairDialogComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BC3264(this, method);
  EventInfoOpenRepairDialogComponent__SetTerminalTouchEnable((EventInfoOpenRepairDialogComponent_o *)this, 1, v2);
  ActionExtensions__Call(this->fields.onClosed, 0LL);
}