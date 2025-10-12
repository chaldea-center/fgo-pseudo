void EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C38EEA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17622/*"btn_wallpainting"*/);
    byte_4C38EEA = 1;
  }
  v5 = StringLiteral_17622/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17622/*"btn_wallpainting"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonSpriteName, v5, v2, v3);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoMuralComponent__CheckAssertions(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoMuralComponent__InitDisplay(
        EventInfoMuralComponent_o *this,
        int32_t eventId,
        EventInfoCircleProgressControl_o *eventInfoCircleProgressControl,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x21
  EventMuralMaster_o *Master_object; // x0
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C38EE7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38EE7 = 1;
  }
  *(_QWORD *)total = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)eventInfoCircleProgressControl, 0, 0) )
  {
    this->fields.eventInfoCircleProgressControl = eventInfoCircleProgressControl;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.eventInfoCircleProgressControl,
      (int32_t)eventInfoCircleProgressControl,
      v7,
      v8);
  }
  v9 = (UnityEngine_Object_o *)this->fields.eventInfoCircleProgressControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMuralMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMuralMaster___);
    if ( !Master_object )
      goto LABEL_18;
    EventMuralMaster__GetOpenedEntitiesFromEventId(Master_object, eventId, &total[1], total, 0);
    Master_object = (EventMuralMaster_o *)this->fields.eventInfoCircleProgressControl;
    if ( !Master_object
      || (EventInfoCircleProgressControl__SetSprite(
            (EventInfoCircleProgressControl_o *)Master_object,
            this->fields.buttonSprite,
            this->fields.buttonSpriteName,
            0),
          currentNumLabel = this->fields.currentNumLabel,
          Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)&total[1], 0),
          !currentNumLabel)
      || (UILabel__set_text(currentNumLabel, (System_String_o *)Master_object, 0),
          totalNumLabel = this->fields.totalNumLabel,
          Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)total, 0),
          !totalNumLabel) )
    {
LABEL_18:
      sub_1C32E7C(Master_object);
    }
    UILabel__set_text(totalNumLabel, (System_String_o *)Master_object, 0);
    this->fields.isEnableClick = 1;
  }
}


void EventInfoMuralComponent__Initialization(
        EventInfoMuralComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventUiEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
}


void EventInfoMuralComponent__LoadEventMuralUpdate(
        EventInfoMuralComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  System_Action_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4C38EE9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__);
    sub_1C32C20(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__);
    sub_1C32C20(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
    byte_4C38EE9 = 1;
  }
  v5 = sub_1C32E6C(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_18;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mTerminalList, 0, 0) )
  {
    v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0);
    *(_QWORD *)(v5 + 32) = v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v13, v14, v15);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0);
      return;
    }
LABEL_18:
    sub_1C32E7C(v6);
  }
}


void EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ScrTerminalMap_o *v5; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v7; // x2
  EventInfoMuralComponent___c_c *v8; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C38EE8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoMuralComponent_OnClickButton__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__);
    sub_1C32C20(&EventInfoMuralComponent___c_TypeInfo);
    byte_4C38EE8 = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v3 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventInfoMuralComponent_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.subRootGimmickP->klass;
    if ( !klass || (v5 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
      sub_1C32E7C(v5);
    ScrTerminalMap__SetMapCameraTouchEnable(v5, 0, 0);
    v8 = EventInfoMuralComponent___c_TypeInfo;
    if ( !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo);
      v8 = EventInfoMuralComponent___c_TypeInfo;
    }
    _9__13_0 = v8->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = EventInfoMuralComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(_9__13_0, v10, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0);
      static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = _9__13_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v12, v13);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__13_0, v7);
  }
}


void EventInfoMuralComponent__Redisplay(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoMuralComponent__InitDisplay(this, eventUiEntity->fields.eventId, 0, v2);
}


void EventInfoMuralComponent__Setup(
        EventInfoMuralComponent_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void EventInfoMuralComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38EEB & 1) == 0 )
  {
    sub_1C32C20(&EventInfoMuralComponent___c_TypeInfo);
    byte_4C38EEB = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoMuralComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventInfoMuralComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventInfoMuralComponent___c___ctor(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoMuralComponent___c___OnClickButton_b__13_0(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4C38EEC & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C38EEC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C32E7C(v2);
  ScrTerminalMap__SetMapCameraTouchEnable(v2, 1, 0);
}


void EventInfoMuralComponent___c__DisplayClass14_0___ctor(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__0(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C38EED & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__);
    byte_4C38EED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__2, 0);
}


void EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C38EEE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__);
    byte_4C38EEE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_15;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  mTerminalList = mInstance->fields.mTerminalList;
  eventId = _4__this->fields.eventId;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !mTerminalList )
LABEL_15:
    sub_1C32E7C(v3);
  ScrTerminalListTop__StartEventMuralUpdateNoAnim(mTerminalList, eventId, _9__3, 0);
}


void EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__2(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__3(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( !endAction )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
    endAction->fields.method_code,
    endAction->fields.method);
}