void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418942D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418942D = 1;
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *transform; // x21
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189428 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4189428 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v9 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v7, 0LL),
        !transform) )
  {
    sub_B2C434(v7, v8);
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
  return v9;
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_4189429 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189429 = 1;
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
    sub_B2C434(checkedSp, v3);
  }
  UnityEngine_GameObject__SetActive(v6, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_418942B & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418942B = 1;
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
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v6);
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v7; // x1
  void *gameObject; // x0
  System_String_o *v9; // x20
  bool activeSelf; // w0
  const MethodInfo *v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_418942A & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_DiggingConfirmDialogComponent_EndClose__, v4);
    sub_B2C35C(&DiggingManager_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418942A = 1;
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
      || (v9 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_B2C434(gameObject, v7);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v9, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v11);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o **v35; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v43; // x25
  __int64 v44; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v46; // x25
  CommonConsumeEntity_o *v47; // x0
  CommonConsumeEntity_o *v48; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v54; // x24
  UILabel_o *ComponentInChildren_UILabel; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x2
  System_Action_o *v71; // x20
  int v72; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4189423 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, panelData);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, v19);
    sub_B2C35C(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_4583/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v21);
    sub_B2C35C(&StringLiteral_4582/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, v22);
    sub_B2C35C(&StringLiteral_4584/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_4581/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, v25);
    byte_4189423 = 1;
  }
  v72 = 0;
  v26 = sub_B2C42C(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
    (DiggingConfirmDialogComponent___c__DisplayClass16_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_45;
  *(_QWORD *)(v26 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 24) = panelData;
  v35 = (DataManager_o **)(v26 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)panelData, v36, v37, v38, v39, v40, v41);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v43 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v43, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v35 )
    goto LABEL_45;
  v44 = *(_QWORD *)&(*v35)->fields.lastFrameTime;
  if ( !v44 || !Instance )
    goto LABEL_45;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v44 + 24),
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v46 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_45;
    v47 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v46->fields.age), 1, 0LL);
    if ( v47 )
    {
      v48 = v47;
      consumeIcon = this->fields.consumeIcon;
      objectId = v47->fields.objectId;
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
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4584/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v35;
        if ( *v35 )
        {
          consumeNum = this->fields.consumeNum;
          num = v48->fields.num;
          v72 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v28) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v72, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_30;
          }
        }
      }
LABEL_45:
      sub_B2C434(Instance, v28);
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
                                (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !this->fields.closeButton )
    goto LABEL_45;
  v54 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_45;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v54 )
    goto LABEL_45;
  UILabel__set_text(v54, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4581/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_45;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4583/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_45;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4582/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_45;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v70);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v71 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v26,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v71, 1, 0LL);
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
  __int64 v14; // x1

  if ( (byte_4189425 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, panelData);
    sub_B2C35C(&StringLiteral_12657/*"SelectAnimation"*/, v5);
    byte_4189425 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_B2C2F8(
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
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      selectAnimObj,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B2C434(selectAnimObj, v14);
  }
  UnityEngine_Animation__Play_50201580(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12657/*"SelectAnimation"*/,
    0LL);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x2
  WarEntity_o *v20; // x23
  CommonConsumeEntity_o *v21; // x0
  CommonConsumeEntity_o *v22; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189424 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, panelData);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_4584/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v14);
    byte_4189424 = 1;
  }
  v41 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_21;
            v20 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_23;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_23;
            v21 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v20->fields.age), 1, 0LL);
            if ( !v21 )
            {
LABEL_21:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v19);
              this->fields.activateMaskPanel = setMask;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
                (System_Int32_array **)setMask,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              this->fields.closeCallbackFunc = closeCallback;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
                (System_Int32_array **)closeCallback,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40);
              return;
            }
            v22 = v21;
            consumeIcon = this->fields.consumeIcon;
            objectId = v21->fields.objectId;
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4584/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v22->fields.num;
              v41 = DiggingBlockComponent__GetHintConsumeNum(panelData, v28) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v41, 0LL);
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
    sub_B2C434(Instance, v16);
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
  __int64 v14; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Component_o *v18; // x21
  UnityEngine_Transform_o *v19; // x22
  float m_XMin; // s8
  float y; // s1
  float v22; // s2
  float v23; // s0
  float width; // s0
  double v25; // d0
  float height; // s0
  double v27; // d0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189427 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, tutorialPeepWindowTexturePrefab);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4189427 = 1;
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
      v36.fields.m_XMin = x + FSUtility__GetOffsetX(68.0, 0, 0LL);
      UnityEngine_Rect__set_x(v36, v12, &var40);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    gameObject = DiggingConfirmDialogComponent__CreatePrefab(
                   (DiggingConfirmDialogComponent_o *)transform,
                   tutorialPeepWindowTexturePrefab,
                   transform,
                   v16);
    if ( !gameObject )
      goto LABEL_28;
    v17 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject )
      goto LABEL_28;
    v18 = (UnityEngine_Component_o *)gameObject;
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    *(UnityEngine_Vector2_o *)&v38.fields.m_XMin = UnityEngine_Rect__get_center(v37, &var40);
    m_XMin = v38.fields.m_XMin;
    y = UnityEngine_Rect__get_center(v38, &var40).fields.y;
    if ( !v19
      || (v22 = 1.0,
          v23 = m_XMin,
          UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)(&y - 1), 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v18, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B2C434(gameObject, v14);
    }
    v35.fields.x = 0.1;
    v35.fields.z = 1.0;
    v35.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v35, 0LL);
    width = UnityEngine_Rect__get_width(v39, &var40);
    if ( width == INFINITY )
      v25 = -width;
    else
      v25 = width;
    UIWidget__set_width((UIWidget_o *)v18, (int)v25, 0LL);
    height = UnityEngine_Rect__get_height(v40, &var40);
    if ( height == INFINITY )
      v27 = -INFINITY;
    else
      v27 = height;
    UIWidget__set_height((UIWidget_o *)v18, (int)v27, 0LL);
    this->fields.tutorialPeepWindow = v17;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindow,
      (System_Int32_array **)v17,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


void __fastcall DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v7; // x8

  if ( (byte_4189426 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189426 = 1;
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
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v7 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v7->fields.selectAnimObj) == 0LL )
    {
      sub_B2C434(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418942E & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_418942E = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_418942C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418942C = 1;
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
    sub_B2C434(0LL, v4);
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
    sub_B2C434(_4__this, method);
  }
  v4->fields.state = 2;
}