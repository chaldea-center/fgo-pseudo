void __fastcall EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_418866F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17107/*"btn_wallpainting"*/, method);
    byte_418866F = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17107/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17107/*"btn_wallpainting"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoMuralComponent__CheckAssertions(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoMuralComponent__InitDisplay(
        EventInfoMuralComponent_o *this,
        int32_t eventId,
        EventInfoCircleProgressControl_o *eventInfoCircleProgressControl,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct EventInfoCircleProgressControl_o **p_eventInfoCircleProgressControl; // x21
  UnityEngine_Object_o *v16; // x22
  EventMuralMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418866C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMuralMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418866C = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventInfoCircleProgressControl,
      (System_Int32_array **)eventInfoCircleProgressControl,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v16 = (UnityEngine_Object_o *)*p_eventInfoCircleProgressControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMuralMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMuralMaster___);
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
      sub_B2C434(Master_WarQuestSelectionMaster, v18);
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  TerminalSceneComponent_c *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  System_Action_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21

  if ( (byte_418866E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    sub_B2C35C(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__, v9);
    sub_B2C35C(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__, v10);
    sub_B2C35C(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo, v11);
    byte_418866E = 1;
  }
  v12 = sub_B2C42C(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
  EventInfoMuralComponent___c__DisplayClass14_0___ctor((EventInfoMuralComponent___c__DisplayClass14_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  *(_QWORD *)(v12 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    byte_4183C65 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v13->static_fields->mInstance;
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
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0LL);
    *(_QWORD *)(v12 + 32) = v29;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v37 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v12,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
      return;
    }
LABEL_22:
    sub_B2C434(v13, v14);
  }
}


void __fastcall EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  ScrTerminalMap_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v12; // x2
  EventInfoMuralComponent___c_c *v13; // x0
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoMuralComponent___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_418866D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoMuralComponent_OnClickButton__, v3);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    sub_B2C35C(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, v5);
    sub_B2C35C(&EventInfoMuralComponent___c_TypeInfo, v6);
    byte_418866D = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v7 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B2C364(Method_EventInfoMuralComponent_OnClickButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
      byte_4183C65 = 1;
    }
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.pfbLineP->klass;
    if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
      sub_B2C434(v10, v9);
    ScrTerminalMap__SetMapCameraTouchEnable(v10, 0, 0LL);
    v13 = EventInfoMuralComponent___c_TypeInfo;
    if ( (BYTE3(EventInfoMuralComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo);
      v13 = EventInfoMuralComponent___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__13_0 = static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__13_0, v16, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0LL);
      v17 = EventInfoMuralComponent___c_TypeInfo->static_fields;
      v17->__9__13_0 = _9__13_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__13_0, v12);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184B04 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoMuralComponent___c_TypeInfo, v1);
    byte_4184B04 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184B05 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4184B05 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(v2, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_4184B06 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__, v5);
    byte_4184B06 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v7);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22

  if ( (byte_4184B07 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    sub_B2C35C(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__, v4);
    byte_4184B07 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
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
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !mTerminalList )
LABEL_17:
    sub_B2C434(v5, method);
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
    sub_B2C434(0LL, method);
  System_Action__Invoke(endAction, 0LL);
}