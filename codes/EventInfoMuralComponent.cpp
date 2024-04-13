void __fastcall EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E94F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17317/*"btn_wallpainting"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E94F1 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17317/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17317/*"btn_wallpainting"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct EventInfoCircleProgressControl_o **p_eventInfoCircleProgressControl; // x21
  UnityEngine_Object_o *v20; // x22
  EventMuralMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E94EE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_EventMuralMaster___,
      eventId,
      (_DWORD)eventInfoCircleProgressControl,
      method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42E94EE = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventInfoCircleProgressControl,
      (System_Int32_array **)eventInfoCircleProgressControl,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v20 = (UnityEngine_Object_o *)*p_eventInfoCircleProgressControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMuralMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMuralMaster___);
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v22);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x19
  TerminalSceneComponent_c *v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w2
  __int64 v43; // x3
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  System_Action_o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v54; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v56; // x21

  if ( (byte_42E94F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__, v18, v19, v20);
    sub_B5D5C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__, v21, v22, v23);
    sub_B5D5C4(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo, v24, v25, v26);
    byte_42E94F0 = 1;
  }
  v27 = sub_B5D694(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
  EventInfoMuralComponent___c__DisplayClass14_0___ctor((EventInfoMuralComponent___c__DisplayClass14_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_22;
  *(_QWORD *)(v27 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v42, v43);
    byte_42E4B1E = 1;
  }
  v28 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v28 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v28->static_fields->mInstance;
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
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v27,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0LL);
    *(_QWORD *)(v27 + 32) = v46;
    sub_B5D560((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v54 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v54 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v54->static_fields->DEFAULT_FADE_TIME;
    v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v27,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v56, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v28, v29);
  }
}


void __fastcall EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  int v20; // w2
  __int64 v21; // x3
  ScrTerminalMap_o *v22; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v24; // x2
  EventInfoMuralComponent___c_c *v25; // x0
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v28; // x21
  struct EventInfoMuralComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E94EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoMuralComponent_OnClickButton__, v5, v6, v7);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, v11, v12, v13);
    sub_B5D5C4(&EventInfoMuralComponent___c_TypeInfo, v14, v15, v16);
    byte_42E94EF = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v17 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B5D5CC(Method_EventInfoMuralComponent_OnClickButton__);
    v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v19, v20, v21);
      byte_42E4B1E = 1;
    }
    v22 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v22 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v22->fields.pfbLineP->klass;
    if ( !klass || (v22 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
      sub_B5D69C(v22, v19);
    ScrTerminalMap__SetMapCameraTouchEnable(v22, 0, 0LL);
    v25 = EventInfoMuralComponent___c_TypeInfo;
    if ( (BYTE3(EventInfoMuralComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo);
      v25 = EventInfoMuralComponent___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__13_0 = static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__13_0, v28, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0LL);
      v29 = EventInfoMuralComponent___c_TypeInfo->static_fields;
      v29->__9__13_0 = _9__13_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v29->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__13_0, v24);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E6537 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoMuralComponent___c_TypeInfo, v1, v2, v3);
    byte_42E6537 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventInfoMuralComponent___c___ctor(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoMuralComponent___c___OnClickButton_b__13_0(
        EventInfoMuralComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScrTerminalMap_o *v4; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_42E6538 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6538 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.pfbLineP->klass;
  if ( !klass || (v4 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B5D69C(v4, method);
  ScrTerminalMap__SetMapCameraTouchEnable(v4, 1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_42E6539 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__, v11, v12, v13);
    byte_42E6539 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22

  if ( (byte_42E653A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__, v8, v9, v10);
    byte_42E653A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
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
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !mTerminalList )
LABEL_17:
    sub_B5D69C(v11, method);
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
    sub_B5D69C(0LL, method);
  System_Action__Invoke(endAction, 0LL);
}