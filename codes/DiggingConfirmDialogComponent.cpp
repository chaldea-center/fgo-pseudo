void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FBC95 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FBC95 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__CreatePrefab(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parentObject,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v10; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBC90 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FBC90 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v8 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v10 = UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale(v10, 0LL), !transform) )
  {
    sub_B170D4();
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v19.fields.x = v14;
  v19.fields.y = v15;
  v19.fields.z = v16;
  UnityEngine_Transform__set_localScale(transform, v19, 0LL);
  return v8;
}


void __fastcall DiggingConfirmDialogComponent__EndClose(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DiggingConfirmDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCheckBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x19
  UnityEngine_GameObject_o *v7; // x0
  bool activeSelf; // w0

  if ( (byte_40FBC91 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC91 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (gameObject = UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v6 = gameObject, (v7 = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL)
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(v7, 0LL), !v6) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, !activeSelf, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FBC93 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FBC93 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v6);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__OnClickDecideBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DiggingManager_c *v7; // x0
  System_String_o *DIGGING_CHECK_BOX_STATE_KEY; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w0
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40FBC92 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_DiggingConfirmDialogComponent_EndClose__, v4);
    sub_B16FFC(&DiggingManager_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FBC92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v7 = DiggingManager_TypeInfo;
    if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
      v7 = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (DIGGING_CHECK_BOX_STATE_KEY = v7->static_fields->DIGGING_CHECK_BOX_STATE_KEY,
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(DIGGING_CHECK_BOX_STATE_KEY, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v11);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__Open(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DiggingBlockComponent_o **v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v41; // x25
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v46; // x25
  WebViewManager_o *v47; // x0
  CommonConsumeMaster_o *v48; // x0
  CommonConsumeEntity_o *v49; // x0
  CommonConsumeEntity_o *v50; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  System_String_o *v54; // x0
  const MethodInfo *v55; // x1
  DiggingBlockComponent_o *v56; // x0
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  System_String_o *v59; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v63; // x24
  UnityEngine_Component_o *v64; // x0
  UILabel_o *v65; // x25
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *consumeLabel; // x24
  System_String_o *v69; // x0
  UILabel_o *checkBoxLabel; // x24
  System_String_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v86; // x0
  const MethodInfo *v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  System_Action_o *v92; // x20
  int v93; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FBC8B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, panelData);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, v19);
    sub_B16FFC(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_4568/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v21);
    sub_B16FFC(&StringLiteral_4567/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, v22);
    sub_B16FFC(&StringLiteral_4569/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_B16FFC(&StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v24);
    sub_B16FFC(&StringLiteral_4566/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, v25);
    byte_40FBC8B = 1;
  }
  v93 = 0;
  v26 = sub_B170CC(
          DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo,
          panelData,
          tutorialPeepWindowTexturePrefab,
          setMask,
          closeCallback);
  DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
    (DiggingConfirmDialogComponent___c__DisplayClass16_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_45;
  *(_QWORD *)(v26 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v26 + 24) = panelData;
  v33 = (DiggingBlockComponent_o **)(v26 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)panelData, v34, v35, v36, v37, v38, v39);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v41 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v41, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v33 )
    goto LABEL_45;
  blockInfo = (*v33)->fields.blockInfo;
  if ( !blockInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v46 = Entity;
    v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v47 )
      goto LABEL_45;
    v48 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v47,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !v48 )
      goto LABEL_45;
    v49 = CommonConsumeMaster__GetEntity(v48, HIDWORD(v46->fields.age), 1, 0LL);
    if ( v49 )
    {
      v50 = v49;
      consumeIcon = this->fields.consumeIcon;
      objectId = v49->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(consumeIcon, objectId, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_4569/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v54, 0LL);
        v56 = *v33;
        if ( *v33 )
        {
          consumeNum = this->fields.consumeNum;
          num = v50->fields.num;
          v93 = DiggingBlockComponent__GetHintConsumeNum(v56, v55) + num;
          v59 = System_Int32__ToString((int32_t)&v93, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, v59, 0LL);
            goto LABEL_30;
          }
        }
      }
LABEL_45:
      sub_B170D4();
    }
  }
LABEL_30:
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_45;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideButton, 0LL);
  if ( !transform )
    goto LABEL_45;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_45;
  v63 = ComponentInChildren_UILabel;
  v64 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.closeButton,
                                     0LL);
  if ( !v64 )
    goto LABEL_45;
  v65 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v64,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v63 )
    goto LABEL_45;
  UILabel__set_text(v63, v66, 0LL);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_4566/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !v65 )
    goto LABEL_45;
  UILabel__set_text(v65, v67, 0LL);
  consumeLabel = this->fields.consumeLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_4568/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_45;
  UILabel__set_text(consumeLabel, v69, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_4567/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_45;
  UILabel__set_text(checkBoxLabel, v71, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(checkedSp, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v86 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v86, 1, 0LL);
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v87);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v92 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v88, v89, v90, v91);
  System_Action___ctor(
    v92,
    (Il2CppObject *)v26,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v92, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *selectAnimObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0

  if ( (byte_40FBC8D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, panelData);
    sub_B16FFC(&StringLiteral_12601/*"SelectAnimation"*/, v5);
    byte_40FBC8D = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_nowPlaySelectAnimBlock,
    (System_Int32_array **)panelData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL), !*p_nowPlaySelectAnimBlock)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_nowPlaySelectAnimBlock, 0LL)) == 0LL
    || (Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Animation__Play_49744236(Component_srcLineSprite, (System_String_o *)StringLiteral_12601/*"SelectAnimation"*/, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__Redisplay(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x2
  WarEntity_o *v20; // x23
  WebViewManager_o *v21; // x0
  CommonConsumeMaster_o *v22; // x0
  CommonConsumeEntity_o *v23; // x0
  CommonConsumeEntity_o *v24; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  System_String_o *v28; // x0
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FBC8C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, panelData);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_4569/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v14);
    byte_40FBC8C = 1;
  }
  v45 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
      if ( panelData )
      {
        blockInfo = panelData->fields.blockInfo;
        if ( blockInfo )
        {
          if ( MasterData_WarQuestSelectionMaster )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       blockInfo->fields.diggingBlockId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_21;
            v20 = Entity;
            v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v21 )
              goto LABEL_23;
            v22 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v21,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !v22 )
              goto LABEL_23;
            v23 = CommonConsumeMaster__GetEntity(v22, HIDWORD(v20->fields.age), 1, 0LL);
            if ( !v23 )
            {
LABEL_21:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v19);
              this->fields.activateMaskPanel = setMask;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
                (System_Int32_array **)setMask,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              this->fields.closeCallbackFunc = closeCallback;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
                (System_Int32_array **)closeCallback,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              return;
            }
            v24 = v23;
            consumeIcon = this->fields.consumeIcon;
            objectId = v23->fields.objectId;
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            AtlasManager__SetItem(consumeIcon, objectId, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v28 = LocalizationManager__Get((System_String_o *)StringLiteral_4569/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, v28, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v24->fields.num;
              v45 = DiggingBlockComponent__GetHintConsumeNum(panelData, v31) + num;
              v32 = System_Int32__ToString((int32_t)&v45, 0LL);
              if ( consumeNum )
              {
                UILabel__set_text(consumeNum, v32, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // s0
  float x; // s8
  float v12; // s4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *Prefab; // x0
  struct UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v19; // x21
  UnityEngine_Transform_o *v20; // x22
  float m_XMin; // s8
  float y; // s1
  float v23; // s2
  float v24; // s0
  UnityEngine_Transform_o *v25; // x0
  float width; // s0
  double v27; // d0
  float height; // s0
  double v29; // d0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBC8F & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, tutorialPeepWindowTexturePrefab);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FBC8F = 1;
  }
  *(_OWORD *)&var40.methodPointer = 0uLL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tutorialPeepWindowTexturePrefab, 0LL, 0LL) )
  {
    *(struct UnityEngine_Rect_o *)&var40.methodPointer = this->fields.clippingRect;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsUnderVista(0LL) )
    {
      x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v7, &var40);
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v38.fields.m_XMin = x + FSUtility__GetOffsetX(68.0, 0, 0LL);
      UnityEngine_Rect__set_x(v38, v12, &var40);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    Prefab = DiggingConfirmDialogComponent__CreatePrefab(
               (DiggingConfirmDialogComponent_o *)transform,
               tutorialPeepWindowTexturePrefab,
               transform,
               v15);
    if ( !Prefab )
      goto LABEL_28;
    v17 = Prefab;
    Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           Prefab,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !Component_srcLineSprite )
      goto LABEL_28;
    v19 = Component_srcLineSprite;
    v20 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
    *(UnityEngine_Vector2_o *)&v40.fields.m_XMin = UnityEngine_Rect__get_center(v39, &var40);
    m_XMin = v40.fields.m_XMin;
    y = UnityEngine_Rect__get_center(v40, &var40).fields.y;
    if ( !v20
      || (v23 = 1.0,
          v24 = m_XMin,
          UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)(&y - 1), 0LL),
          (v25 = UnityEngine_Component__get_transform(v19, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B170D4();
    }
    v37.fields.x = 0.1;
    v37.fields.z = 1.0;
    v37.fields.y = 0.1;
    UnityEngine_Transform__set_localScale(v25, v37, 0LL);
    width = UnityEngine_Rect__get_width(v41, &var40);
    if ( width == INFINITY )
      v27 = -width;
    else
      v27 = width;
    UIWidget__set_width((UIWidget_o *)v19, (int)v27, 0LL);
    height = UnityEngine_Rect__get_height(v42, &var40);
    if ( height == INFINITY )
      v29 = -INFINITY;
    else
      v29 = height;
    UIWidget__set_height((UIWidget_o *)v19, (int)v29, 0LL);
    this->fields.tutorialPeepWindow = v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindow,
      (System_Int32_array **)v17,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
}


void __fastcall DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0
  struct DiggingBlockComponent_o *v8; // x8
  UnityEngine_GameObject_o *selectAnimObj; // x0

  if ( (byte_40FBC8E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBC8E = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !v5
      || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL
      || (Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 gameObject,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop(Component_srcLineSprite, 0LL), (v8 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (selectAnimObj = v8->fields.selectAnimObj) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(selectAnimObj, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FBC96 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FBC96 = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FBC94 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBC94 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
        DiggingConfirmDialogComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent___c__DisplayClass16_0___Open_b__0(
        DiggingConfirmDialogComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  DiggingConfirmDialogComponent_o *_4__this; // x0
  struct DiggingConfirmDialogComponent_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingConfirmDialogComponent__PlaySelectBlockAnim(_4__this, this->fields.panelData, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v4->fields.state = 2;
}