void __fastcall EventInfoMuralComponent___ctor(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B17791 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17809/*"btn_wallpainting"*/, method, v2);
    byte_4B17791 = 1;
  }
  v9 = StringLiteral_17809/*"btn_wallpainting"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17809/*"btn_wallpainting"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  EventMuralMaster_o *Master_object; // x0
  __int64 v21; // x1
  UILabel_o *currentNumLabel; // x20
  UILabel_o *totalNumLabel; // x20
  int32_t total[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1778E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMuralMaster___, *(_QWORD *)&eventId, eventInfoCircleProgressControl);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1778E = 1;
  }
  *(_QWORD *)total = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)eventInfoCircleProgressControl, 0LL, 0LL) )
  {
    this->fields.eventInfoCircleProgressControl = eventInfoCircleProgressControl;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventInfoCircleProgressControl,
      (int64_t)eventInfoCircleProgressControl,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (UnityEngine_Object_o *)this->fields.eventInfoCircleProgressControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
  {
    this->fields.isEnableClick = 0;
    this->fields.eventId = eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    Master_object = (EventMuralMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMuralMaster___);
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
      sub_1BCAA3C(Master_object, v21);
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
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  TerminalSceneComponent_c *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x2
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v52; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v54; // x21

  if ( (byte_4B17790 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__, v14, v15);
    sub_1BCA7E0(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__, v16, v17);
    sub_1BCA7E0(&EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo, v18, v19);
    byte_4B17790 = 1;
  }
  v20 = sub_1BCAA2C(EventInfoMuralComponent___c__DisplayClass14_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v29, v30, v31, v32, v33, v34);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v35);
    byte_4B10F83 = 1;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v21->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_18;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( !UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
  {
    v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v20,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__0__,
      0LL);
    *(_QWORD *)(v20 + 32) = v41;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v41, v42, v43, v44, v45, v46, v47);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v52 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v48);
      v52 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v52->static_fields->DEFAULT_FADE_TIME;
    v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
    System_Action___ctor(
      v54,
      (Il2CppObject *)v20,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v54, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(v21, v22);
  }
}


void __fastcall EventInfoMuralComponent__OnClickButton(EventInfoMuralComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x3
  EventInfoMuralComponent___c_c *v21; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v23; // x21
  struct EventInfoMuralComponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1778F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoMuralComponent_OnClickButton__, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, v8, v9);
    sub_1BCA7E0(&EventInfoMuralComponent___c_TypeInfo, v10, v11);
    byte_4B1778F = 1;
  }
  if ( this->fields.isEnableClick )
  {
    v12 = Method_EventInfoMuralComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoMuralComponent_OnClickButton__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_EventInfoMuralComponent_OnClickButton__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass || (v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
      sub_1BCAA3C(v16, v14);
    ScrTerminalMap__SetMapCameraTouchEnable(v16, 0, 0LL);
    v21 = EventInfoMuralComponent___c_TypeInfo;
    if ( !EventInfoMuralComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoMuralComponent___c_TypeInfo, v18);
      v21 = EventInfoMuralComponent___c_TypeInfo;
    }
    _9__13_0 = v21->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v18);
        v21 = EventInfoMuralComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__13_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
      System_Action___ctor(_9__13_0, v23, Method_EventInfoMuralComponent___c__OnClickButton_b__13_0__, 0LL);
      static_fields = EventInfoMuralComponent___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = _9__13_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
        (int64_t)_9__13_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    EventInfoMuralComponent__LoadEventMuralUpdate(this, _9__13_0, v19);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17792 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoMuralComponent___c_TypeInfo, v1, v2);
    byte_4B17792 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoMuralComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoMuralComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoMuralComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoMuralComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoMuralComponent___c___ctor(EventInfoMuralComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoMuralComponent___c___OnClickButton_b__13_0(
        EventInfoMuralComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalMap_o *v3; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4B17793 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B17793 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.subRootGimmickP->klass;
  if ( !klass || (v3 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BCAA3C(v3, method);
  ScrTerminalMap__SetMapCameraTouchEnable(v3, 1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B17794 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__, v8, v9);
    byte_4B17794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall EventInfoMuralComponent___c__DisplayClass14_0___LoadEventMuralUpdate_b__1(
        EventInfoMuralComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct EventInfoMuralComponent_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t eventId; // w21
  System_Action_o *_9__3; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B17795 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__, v7, v8);
    byte_4B17795 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
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
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoMuralComponent___c__DisplayClass14_0__LoadEventMuralUpdate_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v15, v16, v17, v18, v19, v20);
  }
  if ( !mTerminalList )
LABEL_15:
    sub_1BCAA3C(v9, method);
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
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endAction->fields.m_target)(
    endAction->fields.original_method_info,
    *(_QWORD *)&endAction->fields.extra_arg);
}