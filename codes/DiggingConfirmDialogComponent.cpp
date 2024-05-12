void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_438D054 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438D054 = 1;
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
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x21
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438D04F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D04F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0LL),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0LL),
        !transform) )
  {
    sub_B7769C(v6, v7);
  }
  v13 = v10;
  v14 = v11;
  v15 = v12;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v18.fields.x = v13;
  v18.fields.y = v14;
  v18.fields.z = v15;
  UnityEngine_Transform__set_localScale(transform, v18, 0LL);
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
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCheckBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_438D050 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D050 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v6 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v6) )
  {
    sub_B7769C(checkedSp, v3);
  }
  UnityEngine_GameObject__SetActive(v6, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_438D052 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_bool___);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D052 = 1;
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
      (const MethodInfo_2C3C310 *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v3);
    v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__OnClickDecideBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *gameObject; // x0
  System_String_o *v5; // x20
  bool activeSelf; // w0
  const MethodInfo *v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_438D051 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_bool___);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingConfirmDialogComponent_EndClose__);
    sub_B775C4(&DiggingManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D051 = 1;
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
    gameObject = DiggingManager_TypeInfo;
    if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v5 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_B7769C(gameObject, v3);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v5, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v7);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2C3C310 *)Method_ActionExtensions_Call_bool___);
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  __int64 v11; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  DataManager_o **v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v28; // x25
  __int64 v29; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v31; // x25
  CommonConsumeEntity_o *v32; // x0
  CommonConsumeEntity_o *v33; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v39; // x24
  UILabel_o *ComponentInChildren_UILabel; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x2
  System_Action_o *v56; // x20
  int v57; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438D04A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____69483608);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__);
    sub_B775C4(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
    sub_B775C4(&StringLiteral_4719/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_B775C4(&StringLiteral_4718/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/);
    sub_B775C4(&StringLiteral_4720/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_11307/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_4717/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_438D04A = 1;
  }
  v57 = 0;
  v11 = sub_B77694(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
    (DiggingConfirmDialogComponent___c__DisplayClass16_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_45;
  *(_QWORD *)(v11 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = panelData;
  v20 = (DataManager_o **)(v11 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)panelData, v21, v22, v23, v24, v25, v26);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v28, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v20 )
    goto LABEL_45;
  v29 = *(_QWORD *)&(*v20)->fields.lastFrameTime;
  if ( !v29 || !Instance )
    goto LABEL_45;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v29 + 24),
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_45;
    v32 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v31->fields.age), 1, 0LL);
    if ( v32 )
    {
      v33 = v32;
      consumeIcon = this->fields.consumeIcon;
      objectId = v32->fields.objectId;
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
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4720/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v20;
        if ( *v20 )
        {
          consumeNum = this->fields.consumeNum;
          num = v33->fields.num;
          v57 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v13) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v57, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_30;
          }
        }
      }
LABEL_45:
      sub_B7769C(Instance, v13);
    }
  }
LABEL_30:
  Instance = (DataManager_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                (UnityEngine_Component_o *)Instance,
                                1,
                                (const MethodInfo_1C6D834 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____69483608);
  if ( !this->fields.closeButton )
    goto LABEL_45;
  v39 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_45;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_1C6D834 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____69483608);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v39 )
    goto LABEL_45;
  UILabel__set_text(v39, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4717/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_45;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4719/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_45;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4718/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_45;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = (DataManager_o *)this->fields.checkedSp;
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v55);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v56 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v11,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v13; // x1

  if ( (byte_438D04C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&StringLiteral_12892/*"SelectAnimation"*/);
    byte_438D04C = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_B77560(
    (BattleServantConfConponent_o *)p_nowPlaySelectAnimBlock,
    (System_Int32_array **)panelData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      selectAnimObj,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B7769C(selectAnimObj, v13);
  }
  UnityEngine_Animation__Play_51745976(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12892/*"SelectAnimation"*/,
    0LL);
}


void __fastcall DiggingConfirmDialogComponent__Redisplay(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v13; // x2
  WarEntity_o *v14; // x23
  CommonConsumeEntity_o *v15; // x0
  CommonConsumeEntity_o *v16; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438D04B & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_4720/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    byte_438D04B = 1;
  }
  v35 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
      if ( panelData )
      {
        blockInfo = panelData->fields.blockInfo;
        if ( blockInfo )
        {
          if ( Instance )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       blockInfo->fields.diggingBlockId,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_21;
            v14 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_23;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_23;
            v15 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v14->fields.age), 1, 0LL);
            if ( !v15 )
            {
LABEL_21:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v13);
              this->fields.activateMaskPanel = setMask;
              sub_B77560(
                (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
                (System_Int32_array **)setMask,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
              this->fields.closeCallbackFunc = closeCallback;
              sub_B77560(
                (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
                (System_Int32_array **)closeCallback,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              return;
            }
            v16 = v15;
            consumeIcon = this->fields.consumeIcon;
            objectId = v15->fields.objectId;
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4720/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v16->fields.num;
              v35 = DiggingBlockComponent__GetHintConsumeNum(panelData, v22) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL);
              if ( consumeNum )
              {
                UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B7769C(Instance, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  int v5; // s0
  float x; // s8
  float v10; // s4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Component_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  float m_XMin; // s8
  float y; // s1
  float v20; // s2
  float v21; // s0
  float width; // s0
  double v23; // d0
  float height; // s0
  double v25; // d0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438D04E & 1) == 0 )
  {
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D04E = 1;
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
      x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v5, &var40);
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v34.fields.m_XMin = x + FSUtility__GetOffsetX(68.0, 0, 0LL);
      UnityEngine_Rect__set_x(v34, v10, &var40);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    gameObject = DiggingConfirmDialogComponent__CreatePrefab(
                   (DiggingConfirmDialogComponent_o *)transform,
                   tutorialPeepWindowTexturePrefab,
                   transform,
                   v14);
    if ( !gameObject )
      goto LABEL_28;
    v15 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject )
      goto LABEL_28;
    v16 = (UnityEngine_Component_o *)gameObject;
    v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    *(UnityEngine_Vector2_o *)&v36.fields.m_XMin = UnityEngine_Rect__get_center(v35, &var40);
    m_XMin = v36.fields.m_XMin;
    y = UnityEngine_Rect__get_center(v36, &var40).fields.y;
    if ( !v17
      || (v20 = 1.0,
          v21 = m_XMin,
          UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)(&y - 1), 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v16, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B7769C(gameObject, v12);
    }
    v33.fields.x = 0.1;
    v33.fields.z = 1.0;
    v33.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v33, 0LL);
    width = UnityEngine_Rect__get_width(v37, &var40);
    if ( width == INFINITY )
      v23 = -width;
    else
      v23 = width;
    UIWidget__set_width((UIWidget_o *)v16, (int)v23, 0LL);
    height = UnityEngine_Rect__get_height(v38, &var40);
    if ( height == INFINITY )
      v25 = -INFINITY;
    else
      v25 = height;
    UIWidget__set_height((UIWidget_o *)v16, (int)v25, 0LL);
    this->fields.tutorialPeepWindow = v15;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindow,
      (System_Int32_array **)v15,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
}


void __fastcall DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v6; // x8

  if ( (byte_438D04D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D04D = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v6 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v6->fields.selectAnimObj) == 0LL )
    {
      sub_B7769C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D055 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_bool___);
    byte_438D055 = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2C3C310 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_438D053 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D053 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B7769C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
    sub_B7769C(_4__this, method);
  }
  v4->fields.state = 2;
}