void EventInfoChronologyButton___ctor(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5938724 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18719/*"chronology_button"*/);
    sub_21FFC50(&StringLiteral_15044/*"TitleInfoChronologyDialogPrefab"*/);
    byte_5938724 = 1;
  }
  v9 = StringLiteral_18719/*"chronology_button"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_18719/*"chronology_button"*/;
  *(_QWORD *)&this->fields.defaultPosY = 0xC3310000C2D20000LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.buttonSpriteName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_15044/*"TitleInfoChronologyDialogPrefab"*/;
  this->fields.dialogChronologyAssetName = (struct System_String_o *)StringLiteral_15044/*"TitleInfoChronologyDialogPrefab"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialogChronologyAssetName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoChronologyButton__CallbackLoadAsset(
        EventInfoChronologyButton_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Object_object__58323140; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  TerminalSceneComponent_c *v16; // x0
  System_Nullable_Vector3__o v17; // 0:x2.16

  if ( (byte_5938723 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5938723 = 1;
  }
  if ( assetData )
  {
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                assetData,
                                this->fields.dialogChronologyAssetName,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58323140,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mInstance,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dialogChronology,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v16 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v16 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v16->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v17.fields.hasValue = 0,
          *(_QWORD *)&v17.fields.value.fields.y = 0,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v17,
            0),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0) )
    {
LABEL_17:
      sub_21FFECC(mInstance, v8);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0);
  }
}


void EventInfoChronologyButton__InitButtonPosition(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *v7; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x8

  if ( (byte_5938721 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5938721 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    v7 = v6->static_fields->mInstance;
    if ( v7 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v7->fields.mTitleInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      v6 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      if ( mTitleInfo )
      {
        IsRecollectionButtonActive = TitleInfoControl__IsRecollectionButtonActive((TitleInfoControl_o *)mTitleInfo, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v11 = 104;
        if ( IsRecollectionButtonActive )
          v11 = 108;
        GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)((char *)&this->klass + v11), 0);
        return;
      }
    }
    sub_21FFECC(v6, v5);
  }
}


void EventInfoChronologyButton__Initialization(
        EventInfoChronologyButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x21
  System_String_o *button; // x0
  __int64 v7; // x1
  struct UILabel_o *v8; // x8
  UILabel_o *v9; // x21
  UISprite_o *buttonSprite; // x21
  System_String_o *buttonSpriteName; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x1
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  __int64 v21; // x1

  if ( (byte_5938720 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoChronologyButton_CallbackLoadAsset__);
    sub_21FFC50(&Method_EventInfoChronologyButton__Initialization_b__12_0__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3495/*"CHRONOLOGY_OPEN_BUTTON"*/);
    sub_21FFC50(&StringLiteral_14226/*"Terminal/Info"*/);
    byte_5938720 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity);
  button = (System_String_o *)UnityEngine_Object__op_Inequality(buttonLabel, 0, 0);
  if ( ((unsigned __int8)button & 1) != 0 )
  {
    v8 = this->fields.buttonLabel;
    if ( !v8 )
      goto LABEL_21;
    if ( System_String__IsNullOrEmpty(v8->fields.mText, 0) )
    {
      v9 = this->fields.buttonLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      button = LocalizationManager__Get((System_String_o *)StringLiteral_3495/*"CHRONOLOGY_OPEN_BUTTON"*/, 0);
      if ( !v9 )
LABEL_21:
        sub_21FFECC(button, v7);
      UILabel__set_text(v9, button, 0);
    }
  }
  buttonSprite = this->fields.buttonSprite;
  buttonSpriteName = this->fields.buttonSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
  AtlasManager__SetEventUI(buttonSprite, buttonSpriteName, 0);
  button = (System_String_o *)this->fields.button;
  if ( !button )
    goto LABEL_21;
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0);
  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( this->fields.loadDialogAssetFromEventUI )
  {
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_EventInfoChronologyButton__Initialization_b__12_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v18, 0);
  }
  else
  {
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventInfoChronologyButton_CallbackLoadAsset__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_14226/*"Terminal/Info"*/, v20, 1, 0, 0);
  }
  EventInfoChronologyButton__InitButtonPosition(this, v19);
}


void EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v4; // x0
  __int64 v5; // x1
  struct EventInfoChronologyDialog_o *v6; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  EventInfoChronologyDialog_o *v10; // x19
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct EventInfoChronologyButton___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593871F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoChronologyButton_OnClickOpen__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__);
    sub_21FFC50(&EventInfoChronologyButton___c_TypeInfo);
    byte_593871F = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.dialogChronology;
    if ( !v6 )
      goto LABEL_19;
    if ( (unsigned int)(v6->fields.state - 3) <= 0xFFFFFFFD )
    {
      v7 = Method_EventInfoChronologyButton_OnClickOpen__;
      if ( (*((_BYTE *)Method_EventInfoChronologyButton_OnClickOpen__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_21FFC68(Method_EventInfoChronologyButton_OnClickOpen__);
      v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      v10 = this->fields.dialogChronology;
      v4 = EventInfoChronologyButton___c_TypeInfo;
      if ( !*(&EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo, v5);
        v4 = EventInfoChronologyButton___c_TypeInfo;
      }
      static_fields = v4->static_fields;
      _9__11_0 = static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !*(&v4->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v4, v5);
          static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__11_0, v13, Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__, 0);
        v14 = EventInfoChronologyButton___c_TypeInfo->static_fields;
        v14->__9__11_0 = _9__11_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v14->__9__11_0,
          (int32_t)_9__11_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v10 )
      {
        EventInfoChronologyDialog__Open(v10, _9__11_0, v9);
        return;
      }
LABEL_19:
      sub_21FFECC(v4, v5);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5938722 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5938722 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIBase__ReleaseEventUIAssetData_52543816((EventInfoUIBase_o *)this, eventUiEntity, 0);
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v5 = (UnityEngine_Object_o *)dialogChronology;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventUiEntity);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_dialogChronology )
      sub_21FFECC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_dialogChronology = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_dialogChronology, 0, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoChronologyButton__SwitchSpotState(
        EventInfoChronologyButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0 )
    sub_21FFECC(button, isOpen);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0);
}


void EventInfoChronologyButton___Initialization_b__12_0(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalSceneComponent_c *v14; // x0
  System_Nullable_Vector3__o v15; // 0:x2.16

  if ( (byte_5938725 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5938725 = 1;
  }
  v4 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 this->fields.dialogChronologyAssetName,
                                 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  mInstance = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    if ( !v4 )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dialogChronology,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v14->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v15.fields.hasValue = 0,
          *(_QWORD *)&v15.fields.value.fields.y = 0,
          TerminalSceneComponent__LocateDialogToUiRoot(mInstance, (BaseDialog_o *)this->fields.dialogChronology, v15, 0),
          (mInstance = (TerminalSceneComponent_o *)this->fields.button) == 0) )
    {
LABEL_16:
      sub_21FFECC(mInstance, v6);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0);
  }
}


void EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938726 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoChronologyButton___c_TypeInfo);
    byte_5938726 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoChronologyButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoChronologyButton___c_TypeInfo->static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoChronologyButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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