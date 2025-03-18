void __fastcall EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4C235CD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17973/*"craftgauge_bar"*/, method);
    byte_4C235CD = 1;
  }
  v9 = StringLiteral_17973/*"craftgauge_bar"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17973/*"craftgauge_bar"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *v15; // x21
  EventMuralMaster_o *Master_object; // x0
  __int64 v17; // x1
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C235CA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMuralMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C235CA = 1;
  }
  *(_QWORD *)total = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)eventInfoCircleProgressControl, 0LL, 0LL) )
  {
    this->fields.eventInfoCircleProgressControl = eventInfoCircleProgressControl;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventInfoCircleProgressControl,
      (int64_t)eventInfoCircleProgressControl,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_Object_o *)this->fields.eventInfoCircleProgressControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMuralMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMuralMaster___);
    if ( !Master_object )
      goto LABEL_18;
    EventMuralMaster__GetOpenedEntitiesFromEventId(Master_object, eventId, &total[1], total, 0LL);
    Master_object = (EventMuralMaster_o *)this->fields.eventInfoCircleProgressControl;
    if ( !Master_object
      || (EventInfoCircleProgressControl__SetSprite(
            (EventInfoCircleProgressControl_o *)Master_object,
            this->fields.buttonSprite,
            this->fields.buttonSpriteName,
            0LL),
          currentNumLabel = this->fields.currentNumLabel,
          Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)&total[1], 0LL),
          !currentNumLabel)
      || (UILabel__set_text(currentNumLabel, (System_String_o *)Master_object, 0LL),
          totalNumLabel = this->fields.totalNumLabel,
          Master_object = (EventMuralMaster_o *)System_Int32__ToString((int32_t)total, 0LL),
          !totalNumLabel) )
    {
LABEL_18:
      sub_1C3B9C0(Master_object, v17);
    }
    UILabel__set_text(totalNumLabel, (System_String_o *)Master_object, 0LL);
    this->fields.isEnableClick = 1;
  }
}


void __fastcall EventInfoMuralComponent__Initialization(
        EventInfoMuralComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  System_Action_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21

  if ( (byte_4C235CC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
    sub_1C3B764(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__, v9);
    sub_1C3B764(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__, v10);
    sub_1C3B764(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo, v11);
    byte_4C235CC = 1;
  }
  v12 = sub_1C3B9B0(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v14);
    byte_4C1CAE3 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v13->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_18;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
  {
    v29 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0LL);
    *(_QWORD *)(v12 + 32) = v29;
    sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v29, v30, v31, v32, v33, v34, v35);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v37 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
    v39 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v12,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(v13, v14);
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
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4C235CB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventInfoMuralComponent_OnClickButton__, v3);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v4);
    sub_1C3B764(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, v5);
    sub_1C3B764(&EventInfoMuralComponent___c_TypeInfo, v6);
    byte_4C235CB = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v7 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3B77C(Method_EventInfoMuralComponent_OnClickButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
      byte_4C1CAE3 = 1;
    }
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.subRootGimmickP->klass;
    if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
      sub_1C3B9C0(v10, v9);
    ScrTerminalMap__SetMapCameraTouchEnable(v10, 0, 0LL);
    v13 = EventInfoMuralComponent___c_TypeInfo;
    if ( !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo);
      v13 = EventInfoMuralComponent___c_TypeInfo;
    }
    _9__13_0 = v13->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = EventInfoMuralComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(_9__13_0, v15, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0LL);
      static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = _9__13_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
        (int64_t)_9__13_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C235CE & 1) == 0 )
  {
    sub_1C3B764(&EventInfoMuralComponent___c_TypeInfo, v1);
    byte_4C235CE = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoMuralComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoMuralComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoMuralComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4C235CF & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C235CF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C3B9C0(v2, method);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C235D0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__, v5);
    byte_4C235D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !v9 )
    sub_1C3B9C0(Instance, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__2, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C235D1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v3);
    sub_1C3B764(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__, v4);
    byte_4C235D1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
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
    _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v11, v12, v13, v14, v15, v16);
  }
  if ( !mTerminalList )
LABEL_15:
    sub_1C3B9C0(v5, method);
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
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( !endAction )
    sub_1C3B9C0(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endAction->fields.m_target)(
    endAction->fields.original_method_info,
    *(_QWORD *)&endAction->fields.extra_arg);
}