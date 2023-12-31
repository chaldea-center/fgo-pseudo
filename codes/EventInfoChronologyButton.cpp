void __fastcall EventInfoChronologyButton___ctor(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.defaultPosY = 0xC3310000C2D20000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoChronologyButton__CallbackLoadAsset(
        EventInfoChronologyButton_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *FileName; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v13; // x0
  struct EventInfoChronologyDialog_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  TerminalSceneComponent_c *v22; // x0
  TerminalSceneComponent_o *mInstance; // x0
  UICommonButton_o *button; // x0
  System_Nullable_Vector3__o v25; // 0:x2.16

  if ( (byte_40FB6FC & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&System_IO_Path_TypeInfo, v8);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13548, v10);
    byte_40FB6FC = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_IO_Path_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    }
    FileName = System_IO_Path__GetFileName((System_String_o *)StringLiteral_13548, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 assetData,
                                                                                 FileName,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v13 )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoChronologyDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v13,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dialogChronology,
      (System_Int32_array **)Component_srcLineSprite,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v21);
      byte_40F6042 = 1;
    }
    v22 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v22 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v22->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v25.fields.value.fields.x = 0LL,
          *(_QWORD *)&v25.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v25,
            0LL),
          (button = this->fields.button) == 0LL) )
    {
LABEL_23:
      sub_B170D4();
    }
    UICommonButton__SetEnable(button, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton__InitButtonPosition(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *v8; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float recollectionPosY; // s0

  if ( (byte_40FB6FA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40FB6FA = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
      byte_40F6042 = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v8 = v7->static_fields->mInstance;
    if ( v8 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v8->fields.mTitleInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


void __fastcall EventInfoChronologyButton__Initialization(
        EventInfoChronologyButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v13; // x0
  UISprite_o *buttonSprite; // x20
  UICommonButton_o *button; // x0
  System_String_o *DirectoryName; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  const MethodInfo *v22; // x1

  if ( (byte_40FB6F9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, entity);
    sub_B16FFC(&AtlasManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventInfoChronologyButton_CallbackLoadAsset__, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&System_IO_Path_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_13548, v9);
    sub_B16FFC(&StringLiteral_17357, v10);
    sub_B16FFC(&StringLiteral_2978, v11);
    byte_40FB6F9 = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2978, 0LL);
  if ( !buttonLabel )
    goto LABEL_18;
  UILabel__set_text(buttonLabel, v13, 0LL);
  buttonSprite = this->fields.buttonSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(buttonSprite, (System_String_o *)StringLiteral_17357, 0LL);
  button = this->fields.button;
  if ( !button )
LABEL_18:
    sub_B170D4();
  UICommonButton__SetEnable(button, 0, 0LL);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  DirectoryName = System_IO_Path__GetDirectoryName((System_String_o *)StringLiteral_13548, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19, v20);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_EventInfoChronologyButton_CallbackLoadAsset__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DirectoryName, v21, 1, 0LL);
  EventInfoChronologyButton__InitButtonPosition(this, v22);
}


void __fastcall EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *dialogChronology; // x20
  struct EventInfoChronologyDialog_o *v8; // x8
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  EventInfoChronologyDialog_o *v13; // x19
  EventInfoChronologyButton___c_c *v14; // x0
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x20
  Il2CppObject *v17; // x21
  struct EventInfoChronologyButton___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FB6F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, v5);
    sub_B16FFC(&EventInfoChronologyButton___c_TypeInfo, v6);
    byte_40FB6F8 = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dialogChronology, 0LL, 0LL) )
  {
    v8 = this->fields.dialogChronology;
    if ( !v8 )
      goto LABEL_23;
    if ( (unsigned int)(v8->fields.state - 1) >= 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v13 = this->fields.dialogChronology;
      v14 = EventInfoChronologyButton___c_TypeInfo;
      if ( (BYTE3(EventInfoChronologyButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo);
        v14 = EventInfoChronologyButton___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__9_0 = static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__9_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
        System_Action___ctor(_9__9_0, v17, Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, 0LL);
        v18 = EventInfoChronologyButton___c_TypeInfo->static_fields;
        v18->__9__9_0 = _9__9_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v18->__9__9_0,
          (System_Int32_array **)_9__9_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      if ( v13 )
      {
        EventInfoChronologyDialog__Open(v13, _9__9_0, v10);
        return;
      }
LABEL_23:
      sub_B170D4();
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
  UnityEngine_Component_o **p_dialogChronology; // x19
  UnityEngine_Object_o *v4; // x20
  struct EventInfoChronologyDialog_o *dialogChronology; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB6FB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB6FB = 1;
  }
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v4 = (UnityEngine_Object_o *)dialogChronology;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_dialogChronology )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_dialogChronology = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_dialogChronology, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventInfoChronologyButton__SwitchSpotState(
        EventInfoChronologyButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button || (gameObject = UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, !isOpen, 0LL);
}


void __fastcall EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FBC & 1) == 0 )
  {
    sub_B16FFC(&EventInfoChronologyButton___c_TypeInfo, v1);
    byte_40F6FBC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoChronologyButton___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoChronologyButton___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoChronologyButton___c___ctor(EventInfoChronologyButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoChronologyButton___c___OnClickOpen_b__9_0(
        EventInfoChronologyButton___c_o *this,
        const MethodInfo *method)
{
  ;
}