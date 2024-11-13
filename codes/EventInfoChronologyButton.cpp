void __fastcall EventInfoChronologyButton___ctor(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B169D7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18148/*"chronology_button"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_14631/*"TitleInfoChronologyDialogPrefab"*/, v9, v10);
    byte_4B169D7 = 1;
  }
  *(_QWORD *)&this->fields.defaultPosY = 0xC3310000C2D20000LL;
  v11 = StringLiteral_18148/*"chronology_button"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_18148/*"chronology_button"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttonSpriteName, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_14631/*"TitleInfoChronologyDialogPrefab"*/;
  this->fields.dialogChronologyAssetName = (struct System_String_o *)StringLiteral_14631/*"TitleInfoChronologyDialogPrefab"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogChronologyAssetName, v12, v13, v14, v15, v16, v17, v18);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoChronologyButton__CallbackLoadAsset(
        EventInfoChronologyButton_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x2
  TerminalSceneComponent_c *v25; // x0
  System_Nullable_Vector3__o v26; // 0:x2.16

  if ( (byte_4B169D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v12);
    byte_4B169D6 = 1;
  }
  if ( assetData )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                assetData,
                                this->fields.dialogChronologyAssetName,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mInstance,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.dialogChronology,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v16);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v16, v24);
      byte_4B10F83 = 1;
    }
    v25 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v16);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v25->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v26.fields.hasValue = 0LL,
          *(_QWORD *)&v26.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v26,
            0LL),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(mInstance, v16);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton__InitButtonPosition(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalSceneComponent_c *v10; // x0
  struct TerminalSceneComponent_o *v11; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float recollectionPosY; // s0

  if ( (byte_4B169D4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B169D4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    v11 = v10->static_fields->mInstance;
    if ( v11 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v11->fields.mTitleInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v10 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
        return;
      if ( mTitleInfo )
      {
        IsRecollectionButtonActive = TitleInfoControl__IsRecollectionButtonActive((TitleInfoControl_o *)mTitleInfo, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( IsRecollectionButtonActive )
          recollectionPosY = this->fields.recollectionPosY;
        else
          recollectionPosY = this->fields.defaultPosY;
        GameObjectExtensions__SetLocalPositionY(gameObject, recollectionPosY, 0LL);
        return;
      }
    }
    sub_1BCAA3C(v10, v8);
  }
}


void __fastcall EventInfoChronologyButton__Initialization(
        EventInfoChronologyButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *buttonLabel; // x21
  System_String_o *button; // x0
  __int64 v25; // x1
  struct UILabel_o *v26; // x8
  UILabel_o *v27; // x21
  UISprite_o *buttonSprite; // x21
  System_String_o *buttonSpriteName; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x1
  AssetLoader_LoadEndDataHandler_o *v41; // x20
  __int64 v42; // x1

  if ( (byte_4B169D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoChronologyButton_CallbackLoadAsset__, v9, v10);
    sub_1BCA7E0(&Method_EventInfoChronologyButton__Initialization_b__12_0__, v11, v12);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3497/*"CHRONOLOGY_OPEN_BUTTON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_13754/*"Terminal/Info"*/, v21, v22);
    byte_4B169D3 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity);
  button = (System_String_o *)UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL);
  if ( ((unsigned __int8)button & 1) != 0 )
  {
    v26 = this->fields.buttonLabel;
    if ( !v26 )
      goto LABEL_21;
    if ( System_String__IsNullOrEmpty(v26->fields.mText, 0LL) )
    {
      v27 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      button = LocalizationManager__Get((System_String_o *)StringLiteral_3497/*"CHRONOLOGY_OPEN_BUTTON"*/, 0LL);
      if ( !v27 )
LABEL_21:
        sub_1BCAA3C(button, v25);
      UILabel__set_text(v27, button, 0LL);
    }
  }
  buttonSprite = this->fields.buttonSprite;
  buttonSpriteName = this->fields.buttonSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  AtlasManager__SetEventUI(buttonSprite, buttonSpriteName, 0LL);
  button = (System_String_o *)this->fields.button;
  if ( !button )
    goto LABEL_21;
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0LL);
  this->fields.eventUiEntity = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUiEntity, (int64_t)entity, v30, v31, v32, v33, v34, v35);
  if ( this->fields.loadDialogAssetFromEventUI )
  {
    v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_EventInfoChronologyButton__Initialization_b__12_0__, 0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v39, 0LL);
  }
  else
  {
    v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v36, v37, v38);
    AssetLoader_LoadEndDataHandler___ctor(
      v41,
      (Il2CppObject *)this,
      Method_EventInfoChronologyButton_CallbackLoadAsset__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v42);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13754/*"Terminal/Info"*/, v41, 1, 0LL);
  }
  EventInfoChronologyButton__InitButtonPosition(this, v40);
}


void __fastcall EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v13; // x0
  __int64 v14; // x1
  struct EventInfoChronologyDialog_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  EventInfoChronologyDialog_o *v20; // x19
  System_Action_o *_9__11_0; // x20
  Il2CppObject *v22; // x21
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B169D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoChronologyButton_OnClickOpen__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__, v8, v9);
    sub_1BCA7E0(&EventInfoChronologyButton___c_TypeInfo, v10, v11);
    byte_4B169D2 = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v13 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    v15 = this->fields.dialogChronology;
    if ( !v15 )
      goto LABEL_19;
    if ( (unsigned int)(v15->fields.state - 1) >= 2 )
    {
      v16 = Method_EventInfoChronologyButton_OnClickOpen__;
      if ( (*((_BYTE *)Method_EventInfoChronologyButton_OnClickOpen__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCA7F8(Method_EventInfoChronologyButton_OnClickOpen__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      v20 = this->fields.dialogChronology;
      v13 = EventInfoChronologyButton___c_TypeInfo;
      if ( !EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo, v14);
        v13 = EventInfoChronologyButton___c_TypeInfo;
      }
      _9__11_0 = v13->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13, v14);
          v13 = EventInfoChronologyButton___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v13->static_fields->__9;
        _9__11_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v18, v19);
        System_Action___ctor(_9__11_0, v22, Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__, 0LL);
        static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
          (int64_t)_9__11_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( v20 )
      {
        EventInfoChronologyDialog__Open(v20, _9__11_0, v18);
        return;
      }
LABEL_19:
      sub_1BCAA3C(v13, v14);
    }
  }
}


void __fastcall EventInfoChronologyButton__OnDestroy(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(EventInfoChronologyButton_o *, Il2CppMethodPointer))this->klass->vtable._9_ReleaseAsset.method)(
    this,
    this->klass->vtable._10_Redisplay.methodPtr);
}


void __fastcall EventInfoChronologyButton__ReleaseAsset(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventUiEntity_o *eventUiEntity; // x1
  UnityEngine_Component_o **p_dialogChronology; // x19
  UnityEngine_Object_o *v6; // x20
  struct EventInfoChronologyDialog_o *dialogChronology; // t1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B169D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169D5 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIBase__ReleaseEventUIAssetData_42781924((EventInfoUIBase_o *)this, eventUiEntity, 0LL);
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v6 = (UnityEngine_Object_o *)dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventUiEntity);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_dialogChronology )
      sub_1BCAA3C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_dialogChronology = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_dialogChronology, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoChronologyButton__SwitchSpotState(
        EventInfoChronologyButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL )
    sub_1BCAA3C(button, isOpen);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0LL);
}


void __fastcall EventInfoChronologyButton___Initialization_b__12_0(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x2
  TerminalSceneComponent_c *v20; // x0
  System_Nullable_Vector3__o v21; // 0:x2.16

  if ( (byte_4B169D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    byte_4B169D8 = 1;
  }
  v9 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 this->fields.dialogChronologyAssetName,
                                 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  mInstance = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.dialogChronology,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v19);
      byte_4B10F83 = 1;
    }
    v20 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v20->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v21.fields.hasValue = 0LL,
          *(_QWORD *)&v21.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v21,
            0LL),
          (mInstance = (TerminalSceneComponent_o *)this->fields.button) == 0LL) )
    {
LABEL_16:
      sub_1BCAA3C(mInstance, v11);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B169D9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoChronologyButton___c_TypeInfo, v1, v2);
    byte_4B169D9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoChronologyButton___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoChronologyButton___c_TypeInfo->static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoChronologyButton___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoChronologyButton___c___ctor(EventInfoChronologyButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoChronologyButton___c___OnClickOpen_b__11_0(
        EventInfoChronologyButton___c_o *this,
        const MethodInfo *method)
{
  ;
}