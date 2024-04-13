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
  System_String_o *FileName; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v27; // x1
  struct EventInfoChronologyDialog_o *Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w2
  __int64 v36; // x3
  TerminalSceneComponent_c *v37; // x0
  System_Nullable_Vector3__o v38; // 0:x2.16

  if ( (byte_42E9FD1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13760/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, v21, v22, v23);
    byte_42E9FD1 = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_IO_Path_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    }
    FileName = System_IO_Path__GetFileName((System_String_o *)StringLiteral_13760/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 assetData,
                                                                                 FileName,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              Object_WarBoardWaitTimeSetting,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoChronologyDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      mInstance,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.dialogChronology,
      (System_Int32_array **)Component_srcLineSprite,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v27, v35, v36);
      byte_42E4B1E = 1;
    }
    v37 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v37 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v37->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v38.fields.value.fields.x = 0LL,
          *(_QWORD *)&v38.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v38,
            0LL),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0LL) )
    {
LABEL_23:
      sub_B5D69C(mInstance, v27);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
  }
}


void __fastcall EventInfoChronologyButton__InitButtonPosition(
        EventInfoChronologyButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalSceneComponent_c *v8; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v10; // x1
  int v11; // w2
  __int64 v12; // x3
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o *v14; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  bool IsRecollectionButtonActive; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  float recollectionPosY; // s0

  if ( (byte_42E9FCF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E9FCF = 1;
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
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v8->static_fields->mInstance;
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
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v10, v11, v12);
      byte_42E4B1E = 1;
    }
    v13 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v13 = TerminalSceneComponent_TypeInfo;
    }
    v14 = v13->static_fields->mInstance;
    if ( v14 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v14->fields.mTitleInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) != 0 )
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
    sub_B5D69C(v13, v10);
  }
}


void __fastcall EventInfoChronologyButton__Initialization(
        EventInfoChronologyButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UILabel_o *buttonLabel; // x20
  System_String_o *button; // x0
  __int64 v31; // x1
  UISprite_o *buttonSprite; // x20
  System_String_o *DirectoryName; // x20
  AssetLoader_LoadEndDataHandler_o *v34; // x21
  const MethodInfo *v35; // x1

  if ( (byte_42E9FCE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoChronologyButton_CallbackLoadAsset__, v8, v9, v10);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13760/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17642/*"chronology_button"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3046/*"CHRONOLOGY_OPEN_BUTTON"*/, v26, v27, v28);
    byte_42E9FCE = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  button = LocalizationManager__Get((System_String_o *)StringLiteral_3046/*"CHRONOLOGY_OPEN_BUTTON"*/, 0LL);
  if ( !buttonLabel )
    goto LABEL_18;
  UILabel__set_text(buttonLabel, button, 0LL);
  buttonSprite = this->fields.buttonSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(buttonSprite, (System_String_o *)StringLiteral_17642/*"chronology_button"*/, 0LL);
  button = (System_String_o *)this->fields.button;
  if ( !button )
LABEL_18:
    sub_B5D69C(button, v31);
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0LL);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  DirectoryName = System_IO_Path__GetDirectoryName((System_String_o *)StringLiteral_13760/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, 0LL);
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)this,
    Method_EventInfoChronologyButton_CallbackLoadAsset__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DirectoryName, v34, 1, 0LL);
  EventInfoChronologyButton__InitButtonPosition(this, v35);
}


void __fastcall EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v18; // x0
  __int64 v19; // x1
  struct EventInfoChronologyDialog_o *v20; // x8
  const MethodInfo *v21; // x2
  EventInfoChronologyDialog_o *v22; // x19
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x20
  Il2CppObject *v25; // x21
  struct EventInfoChronologyButton___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E9FCD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, v11, v12, v13);
    sub_B5D5C4(&EventInfoChronologyButton___c_TypeInfo, v14, v15, v16);
    byte_42E9FCD = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v20 = this->fields.dialogChronology;
    if ( !v20 )
      goto LABEL_23;
    if ( (unsigned int)(v20->fields.state - 1) >= 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v22 = this->fields.dialogChronology;
      v18 = EventInfoChronologyButton___c_TypeInfo;
      if ( (BYTE3(EventInfoChronologyButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo);
        v18 = EventInfoChronologyButton___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__9_0 = static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__9_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__9_0, v25, Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, 0LL);
        v26 = EventInfoChronologyButton___c_TypeInfo->static_fields;
        v26->__9__9_0 = _9__9_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v26->__9__9_0,
          (System_Int32_array **)_9__9_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      if ( v22 )
      {
        EventInfoChronologyDialog__Open(v22, _9__9_0, v21);
        return;
      }
LABEL_23:
      sub_B5D69C(v18, v19);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_dialogChronology; // x19
  UnityEngine_Object_o *v6; // x20
  struct EventInfoChronologyDialog_o *dialogChronology; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E9FD0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9FD0 = 1;
  }
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v6 = (UnityEngine_Object_o *)dialogChronology;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_dialogChronology )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_dialogChronology = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_dialogChronology, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B5D69C(button, isOpen);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0LL);
}


void __fastcall EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x0

  if ( (byte_42E6522 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoChronologyButton___c_TypeInfo, v1, v2, v3);
    byte_42E6522 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoChronologyButton___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v4;
  sub_B5D560(static_fields);
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