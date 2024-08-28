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
  Il2CppObject *Object_object__48415484; // x20
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  TerminalSceneComponent_c *v18; // x0
  System_Nullable_Vector3__o v19; // 0:x2.16

  if ( (byte_4A0979C & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, assetData);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___, v5);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&System_IO_Path_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13528/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, v10);
    byte_4A0979C = 1;
  }
  if ( assetData )
  {
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    FileName = System_IO_Path__GetFileName((System_String_o *)StringLiteral_13528/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, 0LL);
    Object_object__48415484 = AssetData__GetObject_object__48415484(
                                assetData,
                                FileName,
                                (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mInstance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48415484,
                                              (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !mInstance )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         mInstance,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyDialog___);
    this->fields.dialogChronology = (struct EventInfoChronologyDialog_o *)Component_object;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.dialogChronology,
      (int32_t)Component_object,
      v16,
      v17);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A03EAD )
    {
      sub_1B686D4(&TerminalSceneComponent_TypeInfo, v14);
      byte_4A03EAD = 1;
    }
    v18 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v18 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_GameObject_o *)v18->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v19.fields.hasValue = 0LL,
          *(_QWORD *)&v19.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialogChronology,
            v19,
            0LL),
          (mInstance = (UnityEngine_GameObject_o *)this->fields.button) == 0LL) )
    {
LABEL_19:
      sub_1B68930(mInstance, v14);
    }
    UICommonButton__SetEnable((UICommonButton_o *)mInstance, 1, 0LL);
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

  if ( (byte_4A0979A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A0979A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, method);
    byte_4A03EAD = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A03EAD )
    {
      sub_1B686D4(&TerminalSceneComponent_TypeInfo, v6);
      byte_4A03EAD = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v8 = v7->static_fields->mInstance;
    if ( v8 )
    {
      mTitleInfo = (UnityEngine_Object_o *)v8->fields.mTitleInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
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
    sub_1B68930(v7, v6);
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
  System_String_o *button; // x0
  __int64 v14; // x1
  UISprite_o *buttonSprite; // x20
  System_String_o *DirectoryName; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_4A09799 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, entity);
    sub_1B686D4(&AtlasManager_TypeInfo, v4);
    sub_1B686D4(&Method_EventInfoChronologyButton_CallbackLoadAsset__, v5);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&System_IO_Path_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_13528/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, v9);
    sub_1B686D4(&StringLiteral_17902/*"chronology_button"*/, v10);
    sub_1B686D4(&StringLiteral_3447/*"CHRONOLOGY_OPEN_BUTTON"*/, v11);
    byte_4A09799 = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = LocalizationManager__Get((System_String_o *)StringLiteral_3447/*"CHRONOLOGY_OPEN_BUTTON"*/, 0LL);
  if ( !buttonLabel )
    goto LABEL_14;
  UILabel__set_text(buttonLabel, button, 0LL);
  buttonSprite = this->fields.buttonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(buttonSprite, (System_String_o *)StringLiteral_17902/*"chronology_button"*/, 0LL);
  button = (System_String_o *)this->fields.button;
  if ( !button )
LABEL_14:
    sub_1B68930(button, v14);
  UICommonButton__SetEnable((UICommonButton_o *)button, 0, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  DirectoryName = System_IO_Path__GetDirectoryName((System_String_o *)StringLiteral_13528/*"Terminal/Info/TitleInfoChronologyDialogPrefab"*/, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventInfoChronologyButton_CallbackLoadAsset__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DirectoryName, v17, 1, 0LL);
  EventInfoChronologyButton__InitButtonPosition(this, v18);
}


void __fastcall EventInfoChronologyButton__OnClickOpen(EventInfoChronologyButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *dialogChronology; // x20
  EventInfoChronologyButton___c_c *v8; // x0
  __int64 v9; // x1
  struct EventInfoChronologyDialog_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  EventInfoChronologyDialog_o *v14; // x19
  System_Action_o *_9__9_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoChronologyButton___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A09798 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_EventInfoChronologyButton_OnClickOpen__, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, v5);
    sub_1B686D4(&EventInfoChronologyButton___c_TypeInfo, v6);
    byte_4A09798 = 1;
  }
  dialogChronology = (UnityEngine_Object_o *)this->fields.dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (EventInfoChronologyButton___c_c *)UnityEngine_Object__op_Inequality(dialogChronology, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = this->fields.dialogChronology;
    if ( !v10 )
      goto LABEL_19;
    if ( (unsigned int)(v10->fields.state - 1) >= 2 )
    {
      v11 = Method_EventInfoChronologyButton_OnClickOpen__;
      if ( (*((_BYTE *)Method_EventInfoChronologyButton_OnClickOpen__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B686EC(Method_EventInfoChronologyButton_OnClickOpen__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B686B8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      v14 = this->fields.dialogChronology;
      v8 = EventInfoChronologyButton___c_TypeInfo;
      if ( !EventInfoChronologyButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoChronologyButton___c_TypeInfo);
        v8 = EventInfoChronologyButton___c_TypeInfo;
      }
      _9__9_0 = v8->static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = EventInfoChronologyButton___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v8->static_fields->__9;
        _9__9_0 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(_9__9_0, v16, Method_EventInfoChronologyButton___c__OnClickOpen_b__9_0__, 0LL);
        static_fields = EventInfoChronologyButton___c_TypeInfo->static_fields;
        static_fields->__9__9_0 = _9__9_0;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v18, v19);
      }
      if ( v14 )
      {
        EventInfoChronologyDialog__Open(v14, _9__9_0, v13);
        return;
      }
LABEL_19:
      sub_1B68930(v8, v9);
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
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0979B & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0979B = 1;
  }
  dialogChronology = this->fields.dialogChronology;
  p_dialogChronology = (UnityEngine_Component_o **)&this->fields.dialogChronology;
  v4 = (UnityEngine_Object_o *)dialogChronology;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_dialogChronology )
      sub_1B68930(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialogChronology, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(gameObject, 0LL);
    *p_dialogChronology = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)p_dialogChronology, 0, v8, v9);
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
    sub_1B68930(button, isOpen);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, !isOpen, 0LL);
}


void __fastcall EventInfoChronologyButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0979D & 1) == 0 )
  {
    sub_1B686D4(&EventInfoChronologyButton___c_TypeInfo, v1);
    byte_4A0979D = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(EventInfoChronologyButton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoChronologyButton___c_TypeInfo->static_fields->__9 = (struct EventInfoChronologyButton___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)EventInfoChronologyButton___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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