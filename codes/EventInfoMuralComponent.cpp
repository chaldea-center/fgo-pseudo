void __fastcall EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438C227 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17447/*"btn_wallpainting"*/);
    byte_438C227 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17447/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17447/*"btn_wallpainting"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoMuralComponent__CheckAssertions(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoMuralComponent__InitDisplay(
        EventInfoMuralComponent_o *this,
        int32_t eventId,
        EventInfoCircleProgressControl_o *eventInfoCircleProgressControl,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct EventInfoCircleProgressControl_o **p_eventInfoCircleProgressControl; // x21
  UnityEngine_Object_o *v14; // x22
  EventMuralMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C224 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C224 = 1;
  }
  *(_QWORD *)total = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_eventInfoCircleProgressControl = &this->fields.eventInfoCircleProgressControl;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)eventInfoCircleProgressControl, 0LL, 0LL) )
  {
    *p_eventInfoCircleProgressControl = eventInfoCircleProgressControl;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.eventInfoCircleProgressControl,
      (System_Int32_array **)eventInfoCircleProgressControl,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  v14 = (UnityEngine_Object_o *)*p_eventInfoCircleProgressControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMuralMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMuralMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    EventMuralMaster__GetOpenedEntitiesFromEventId(Master_WarQuestSelectionMaster, eventId, &total[1], total, 0LL);
    Master_WarQuestSelectionMaster = (EventMuralMaster_o *)*p_eventInfoCircleProgressControl;
    if ( !*p_eventInfoCircleProgressControl
      || (EventInfoCircleProgressControl__SetSprite(
            (EventInfoCircleProgressControl_o *)Master_WarQuestSelectionMaster,
            this->fields.buttonSprite,
            this->fields.buttonSpriteName,
            0LL),
          currentNumLabel = this->fields.currentNumLabel,
          Master_WarQuestSelectionMaster = (EventMuralMaster_o *)System_Int32__ToString((int32_t)&total[1], 0LL),
          !currentNumLabel)
      || (UILabel__set_text(currentNumLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
          totalNumLabel = this->fields.totalNumLabel,
          Master_WarQuestSelectionMaster = (EventMuralMaster_o *)System_Int32__ToString((int32_t)total, 0LL),
          !totalNumLabel) )
    {
LABEL_21:
      sub_B7769C(Master_WarQuestSelectionMaster, v16);
    }
    UILabel__set_text(totalNumLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    this->fields.isEnableClick = 1;
  }
}


void __fastcall EventInfoMuralComponent__Initialization(
        EventInfoMuralComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoMuralComponent__LoadEventMuralUpdate(
        EventInfoMuralComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  System_Action_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_438C226 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__);
    sub_B775C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__);
    sub_B775C4(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
    byte_438C226 = 1;
  }
  v5 = sub_B77694(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
  EventInfoMuralComponent___c__DisplayClass14_0___ctor((EventInfoMuralComponent___c__DisplayClass14_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_22;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
  {
    v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0LL);
    *(_QWORD *)(v5 + 32) = v22;
    sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v30 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
    v32 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v5,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
      return;
    }
LABEL_22:
    sub_B7769C(v6, v7);
  }
}


void __fastcall EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ScrTerminalMap_o *v6; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v8; // x2
  EventInfoMuralComponent___c_c *v9; // x0
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v12; // x21
  struct EventInfoMuralComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438C225 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventInfoMuralComponent_OnClickButton__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__);
    sub_B775C4(&EventInfoMuralComponent___c_TypeInfo);
    byte_438C225 = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v3 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_EventInfoMuralComponent_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    v6 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.pfbLineP->klass;
    if ( !klass || (v6 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
      sub_B7769C(v6, v5);
    ScrTerminalMap__SetMapCameraTouchEnable(v6, 0, 0LL);
    v9 = EventInfoMuralComponent___c_TypeInfo;
    if ( (BYTE3(EventInfoMuralComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo);
      v9 = EventInfoMuralComponent___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__13_0 = static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(_9__13_0, v12, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0LL);
      v13 = EventInfoMuralComponent___c_TypeInfo->static_fields;
      v13->__9__13_0 = _9__13_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v13->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__13_0, v8);
  }
}


void __fastcall EventInfoMuralComponent__Redisplay(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoMuralComponent__InitDisplay(this, eventUiEntity->fields.eventId, 0LL, v2);
}


void __fastcall EventInfoMuralComponent__Setup(
        EventInfoMuralComponent_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoMuralComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4388663 & 1) == 0 )
  {
    sub_B775C4(&EventInfoMuralComponent___c_TypeInfo);
    byte_4388663 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventInfoMuralComponent___c___ctor(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoMuralComponent___c___OnClickButton_b__13_0(
        EventInfoMuralComponent___c_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4388664 & 1) == 0 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4388664 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.pfbLineP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B7769C(v2, method);
  ScrTerminalMap__SetMapCameraTouchEnable(v2, 1, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___ctor(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__0(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_4388665 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__);
    byte_4388665 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !v5 )
    sub_B7769C(Instance, v4);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22

  if ( (byte_4388666 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__);
    byte_4388666 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_17;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  mTerminalList = mInstance->fields.mTerminalList;
  eventId = _4__this->fields.eventId;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B77560(&this->fields.__9__3);
  }
  if ( !mTerminalList )
LABEL_17:
    sub_B7769C(v3, method);
  ScrTerminalListTop__StartEventMuralUpdateNoAnim(mTerminalList, eventId, _9__3, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__2(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__3(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endAction; // x0

  endAction = this->fields.endAction;
  if ( !endAction )
    sub_B7769C(0LL, method);
  System_Action__Invoke(endAction, 0LL);
}