void EventInfoChronologyButton___ctor(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C37D75 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17962/*"chronology_button"*/);
    sub_1C32C20(&StringLiteral_14487/*"TitleInfoChronologyDialogPrefab"*/);
    byte_4C37D75 = 1;
  }
  *(_QWORD *)&this->fields.defaultPosY = 0xC3310000C2D20000LL;
  v5 = StringLiteral_17962/*"chronology_button"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17962/*"chronology_button"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonSpriteName, v5, v2, v3);
  v6 = StringLiteral_14487/*"TitleInfoChronologyDialogPrefab"*/;
  this->fields.dialogChronologyAssetName = (struct System_String_o *)StringLiteral_14487/*"TitleInfoChronologyDialogPrefab"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialogChronologyAssetName, v6, v7, v8);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoChronologyButton__CallbackLoadAsset(
        EventInfoChronologyButton_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51111776; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalSceneComponent_c *v10; // x0
  System_Nullable_Vector3__o v11; // 0:x2.16

  if ( (byte_4C37D74 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C37D74 = 1;
  }
  if ( assetData )
  {
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                assetData,
                                this->fields.dialogChronologyAssetName,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51111776,
                                              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mInstance,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialogChronology, (int32_t)Component_object, v8, v9);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v10->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v11.fields.hasValue = 0,
          *(_QWORD *)&v11.fields.value.fields.y = 0,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v11,
            0),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0) )
    {
LABEL_17:
      sub_1C32E7C(mInstance);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0);
  }
}


void EventInfoChronologyButton__InitButtonPosition(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *v6; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float recollectionPosY; // s0

  if ( (byte_4C37D72 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C37D72 = 1;
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
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v5 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    v6 = v5->static_fields->mInstance;
    if ( v6 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v6->fields.mTitleInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        return;
      if ( mTitleInfo )
      {
        IsRecollectionButtonActive = TitleInfoControl__IsRecollectionButtonActive((TitleInfoControl_o *)mTitleInfo, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( IsRecollectionButtonActive )
          recollectionPosY = this->fields.recollectionPosY;
        else
          recollectionPosY = this->fields.defaultPosY;
        GameObjectExtensions__SetLocalPositionY(gameObject, recollectionPosY, 0);
        return;
      }
    }
    sub_1C32E7C(v5);
  }
}


void EventInfoChronologyButton__Initialization(
        EventInfoChronologyButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x21
  System_String_o *button; // x0
  struct UILabel_o *v7; // x8
  UILabel_o *v8; // x21
  UISprite_o *buttonSprite; // x21
  System_String_o *buttonSpriteName; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_4C37D71 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_EventInfoChronologyButton_CallbackLoadAsset__);
    sub_1C32C20(&Method_EventInfoChronologyButton__Initialization_b__12_0__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3361/*"CHRONOLOGY_OPEN_BUTTON"*/);
    sub_1C32C20(&StringLiteral_13685/*"Terminal/Info"*/);
    byte_4C37D71 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  button = (System_String_o *)UnityEngine_Object__op_Inequality(buttonLabel, 0, 0);
  if ( ((unsigned __int8)button & 1) != 0 )
  {
    v7 = this->fields.buttonLabel;
    if ( !v7 )
      goto LABEL_21;
    if ( System_String__IsNullOrEmpty(v7->fields.mText, 0) )
    {
      v8 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      button = LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"CHRONOLOGY_OPEN_BUTTON"*/, 0);
      if ( !v8 )
LABEL_21:
        sub_1C32E7C(button);
      UILabel__set_text(v8, button, 0);
    }
  }
  buttonSprite = this->fields.buttonSprite;
  buttonSpriteName = this->fields.buttonSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(buttonSprite, buttonSpriteName, 0);
  button = (System_String_o *)this->fields.button;
  if ( !button )
    goto LABEL_21;
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0);
  this->fields.eventUiEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v11, v12);
  if ( this->fields.loadDialogAssetFromEventUI )
  {
    v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoChronologyButton__Initialization_b__12_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v13, 0);
  }
  else
  {
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventInfoChronologyButton_CallbackLoadAsset__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13685/*"Terminal/Info"*/, v15, 1, 0);
  }
  EventInfoChronologyButton__InitButtonPosition(this, v14);
}


void EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v4; // x0
  struct EventInfoChronologyDialog_o *v5; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  EventInfoChronologyDialog_o *v9; // x19
  System_Action_o *_9__11_0; // x20
  Il2CppObject *v11; // x21
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C37D70 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoChronologyButton_OnClickOpen__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__);
    sub_1C32C20(&EventInfoChronologyButton___c_TypeInfo);
    byte_4C37D70 = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.dialogChronology;
    if ( !v5 )
      goto LABEL_19;
    if ( (unsigned int)(v5->fields.state - 1) >= 2 )
    {
      v6 = Method_EventInfoChronologyButton_OnClickOpen__;
      if ( (*((_BYTE *)Method_EventInfoChronologyButton_OnClickOpen__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_EventInfoChronologyButton_OnClickOpen__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      v9 = this->fields.dialogChronology;
      v4 = EventInfoChronologyButton___c_TypeInfo;
      if ( !EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo);
        v4 = EventInfoChronologyButton___c_TypeInfo;
      }
      _9__11_0 = v4->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = EventInfoChronologyButton___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v4->static_fields->__9;
        _9__11_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(_9__11_0, v11, Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__, 0);
        static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v13, v14);
      }
      if ( v9 )
      {
        EventInfoChronologyDialog__Open(v9, _9__11_0, v8);
        return;
      }
LABEL_19:
      sub_1C32E7C(v4);
    }
  }
}


void EventInfoChronologyButton__OnDestroy(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(EventInfoChronologyButton_o *, const MethodInfo *))this->klass->vtable._9_ReleaseAsset.methodPtr)(
    this,
    this->klass->vtable._9_ReleaseAsset.method);
}


void EventInfoChronologyButton__ReleaseAsset(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  EventUiEntity_o *eventUiEntity; // x1
  UnityEngine_Component_o **p_dialogChronology; // x19
  UnityEngine_Object_o *v5; // x20
  struct EventInfoChronologyDialog_o *dialogChronology; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C37D73 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37D73 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIBase__ReleaseEventUIAssetData_44623212((EventInfoUIBase_o *)this, eventUiEntity, 0);
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v5 = (UnityEngine_Object_o *)dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_dialogChronology )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_dialogChronology = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_dialogChronology, 0, v8, v9);
  }
}


void EventInfoChronologyButton__SwitchSpotState(
        EventInfoChronologyButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0 )
    sub_1C32E7C(button);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0);
}


void EventInfoChronologyButton___Initialization_b__12_0(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  TerminalSceneComponent_o *mInstance; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_c *v8; // x0
  System_Nullable_Vector3__o v9; // 0:x2.16

  if ( (byte_4C37D76 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C37D76 = 1;
  }
  v3 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 this->fields.dialogChronologyAssetName,
                                 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mInstance = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(v3, 0, 0);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v3,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialogChronology, (int32_t)Component_object, v6, v7);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v8->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v9.fields.hasValue = 0,
          *(_QWORD *)&v9.fields.value.fields.y = 0,
          TerminalSceneComponent__LocateDialogToUiRoot(mInstance, (BaseDialog_o *)this->fields.dialogChronology, v9, 0),
          (mInstance = (TerminalSceneComponent_o *)this->fields.button) == 0) )
    {
LABEL_16:
      sub_1C32E7C(mInstance);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0);
  }
}


void EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37D77 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoChronologyButton___c_TypeInfo);
    byte_4C37D77 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoChronologyButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoChronologyButton___c_TypeInfo->static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventInfoChronologyButton___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventInfoChronologyButton___c___ctor(EventInfoChronologyButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoChronologyButton___c___OnClickOpen_b__11_0(
        EventInfoChronologyButton___c_o *this,
        const MethodInfo *method)
{
  ;
}