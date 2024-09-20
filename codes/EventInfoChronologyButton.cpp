void __fastcall EventInfoChronologyButton___ctor(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5BAAA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17967/*"chronology_button"*/);
    sub_1B885B0(&StringLiteral_14467/*"TitleInfoChronologyDialogPrefab"*/);
    byte_4A5BAAA = 1;
  }
  *(_QWORD *)&this->fields.defaultPosY = 0xC3310000C2D20000LL;
  v5 = StringLiteral_17967/*"chronology_button"*/;
  this->fields.buttonSpriteName = (struct System_String_o *)StringLiteral_17967/*"chronology_button"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttonSpriteName, v5, v2, v3);
  v6 = StringLiteral_14467/*"TitleInfoChronologyDialogPrefab"*/;
  this->fields.dialogChronologyAssetName = (struct System_String_o *)StringLiteral_14467/*"TitleInfoChronologyDialogPrefab"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogChronologyAssetName, v6, v7, v8);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoChronologyButton__CallbackLoadAsset(
        EventInfoChronologyButton_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  TerminalSceneComponent_c *v11; // x0
  System_Nullable_Vector3__o v12; // 0:x2.16

  if ( (byte_4A5BAA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5BAA9 = 1;
  }
  if ( assetData )
  {
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                assetData,
                                this->fields.dialogChronologyAssetName,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mInstance,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogChronology, (int32_t)Component_object, v9, v10);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v11 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v11 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v11->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v12.fields.hasValue = 0LL,
          *(_QWORD *)&v12.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v12,
            0LL),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(mInstance, v7);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton__InitButtonPosition(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *v7; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float recollectionPosY; // s0

  if ( (byte_4A5BAA7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5BAA7 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    v7 = v6->static_fields->mInstance;
    if ( v7 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v7->fields.mTitleInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
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
    sub_1B8880C(v6, v5);
  }
}


void __fastcall EventInfoChronologyButton__Initialization(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x1
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4A5BAA6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoChronologyButton_CallbackLoadAsset__);
    sub_1B885B0(&Method_EventInfoChronologyButton__Initialization_b__12_0__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3471/*"CHRONOLOGY_OPEN_BUTTON"*/);
    sub_1B885B0(&StringLiteral_13591/*"Terminal/Info"*/);
    byte_4A5BAA6 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  button = (System_String_o *)UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL);
  if ( ((unsigned __int8)button & 1) != 0 )
  {
    v8 = this->fields.buttonLabel;
    if ( !v8 )
      goto LABEL_21;
    if ( System_String__IsNullOrEmpty(v8->fields.mText, 0LL) )
    {
      v9 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      button = LocalizationManager__Get((System_String_o *)StringLiteral_3471/*"CHRONOLOGY_OPEN_BUTTON"*/, 0LL);
      if ( !v9 )
LABEL_21:
        sub_1B8880C(button, v7);
      UILabel__set_text(v9, button, 0LL);
    }
  }
  buttonSprite = this->fields.buttonSprite;
  buttonSpriteName = this->fields.buttonSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(buttonSprite, buttonSpriteName, 0LL);
  button = (System_String_o *)this->fields.button;
  if ( !button )
    goto LABEL_21;
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0LL);
  this->fields.eventUiEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v12, v13);
  if ( this->fields.loadDialogAssetFromEventUI )
  {
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoChronologyButton__Initialization_b__12_0__, 0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v14, 0LL);
  }
  else
  {
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventInfoChronologyButton_CallbackLoadAsset__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13591/*"Terminal/Info"*/, v16, 1, 0LL);
  }
  EventInfoChronologyButton__InitButtonPosition(this, v15);
}


void __fastcall EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v4; // x0
  __int64 v5; // x1
  struct EventInfoChronologyDialog_o *v6; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  EventInfoChronologyDialog_o *v10; // x19
  System_Action_o *_9__11_0; // x20
  Il2CppObject *v12; // x21
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5BAA5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoChronologyButton_OnClickOpen__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__);
    sub_1B885B0(&EventInfoChronologyButton___c_TypeInfo);
    byte_4A5BAA5 = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.dialogChronology;
    if ( !v6 )
      goto LABEL_19;
    if ( (unsigned int)(v6->fields.state - 1) >= 2 )
    {
      v7 = Method_EventInfoChronologyButton_OnClickOpen__;
      if ( (*((_BYTE *)Method_EventInfoChronologyButton_OnClickOpen__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_EventInfoChronologyButton_OnClickOpen__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      v10 = this->fields.dialogChronology;
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
        v12 = (Il2CppObject *)v4->static_fields->__9;
        _9__11_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__11_0, v12, Method_EventInfoChronologyButton___c__OnClickOpen_b__11_0__, 0LL);
        static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v14, v15);
      }
      if ( v10 )
      {
        EventInfoChronologyDialog__Open(v10, _9__11_0, v9);
        return;
      }
LABEL_19:
      sub_1B8880C(v4, v5);
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
  EventUiEntity_o *eventUiEntity; // x1
  UnityEngine_Component_o **p_dialogChronology; // x19
  UnityEngine_Object_o *v5; // x20
  struct EventInfoChronologyDialog_o *dialogChronology; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5BAA8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BAA8 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIBase__ReleaseEventUIAssetData_42142280((EventInfoUIBase_o *)this, eventUiEntity, 0LL);
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v5 = (UnityEngine_Object_o *)dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_dialogChronology )
      sub_1B8880C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_dialogChronology = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_dialogChronology, 0, v9, v10);
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
    sub_1B8880C(button, isOpen);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0LL);
}


void __fastcall EventInfoChronologyButton___Initialization_b__12_0(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_c *v9; // x0
  System_Nullable_Vector3__o v10; // 0:x2.16

  if ( (byte_4A5BAAB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5BAAB = 1;
  }
  v3 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 this->fields.dialogChronologyAssetName,
                                 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mInstance = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v3,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogChronology, (int32_t)Component_object, v7, v8);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v9 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v9->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v10.fields.hasValue = 0LL,
          *(_QWORD *)&v10.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v10,
            0LL),
          (mInstance = (TerminalSceneComponent_o *)this->fields.button) == 0LL) )
    {
LABEL_16:
      sub_1B8880C(mInstance, v5);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BAAC & 1) == 0 )
  {
    sub_1B885B0(&EventInfoChronologyButton___c_TypeInfo);
    byte_4A5BAAC = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoChronologyButton___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoChronologyButton___c_TypeInfo->static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoChronologyButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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