void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA972 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA972 = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *transform; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA96D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)prefab, (_DWORD)parentObject, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EA96D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9
    || (v11 = v9,
        transform = UnityEngine_GameObject__get_transform(v9, 0LL),
        (v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v9, 0LL),
        !transform) )
  {
    sub_B5D69C(v9, v10);
  }
  v16 = v13;
  v17 = v14;
  v18 = v15;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v21.fields.x = v16;
  v21.fields.y = v17;
  v21.fields.z = v18;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  return v11;
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCheckBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_42EA96E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA96E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v7 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v8 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v8) )
  {
    sub_B5D69C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
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
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20

  if ( (byte_42EA970 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EA970 = 1;
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
      (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v14);
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__OnClickDecideBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
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
  __int64 v17; // x1
  void *gameObject; // x0
  System_String_o *v19; // x20
  bool activeSelf; // w0
  const MethodInfo *v21; // x1
  System_Action_o *v22; // x20

  if ( (byte_42EA96F & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DiggingConfirmDialogComponent_EndClose__, v8, v9, v10);
    sub_B5D5C4(&DiggingManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EA96F = 1;
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
      || (v19 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_B5D69C(gameObject, v17);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v19, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v21);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
    v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 v56; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  DataManager_o **v65; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v73; // x25
  __int64 v74; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v76; // x25
  CommonConsumeEntity_o *v77; // x0
  CommonConsumeEntity_o *v78; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v84; // x24
  UILabel_o *ComponentInChildren_UILabel; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  const MethodInfo *v100; // x2
  System_Action_o *v101; // x20
  int v102; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA968 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)panelData, (_DWORD)tutorialPeepWindowTexturePrefab, setMask);
    sub_B5D5C4(&AtlasManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, v35, v36, v37);
    sub_B5D5C4(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_4657/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_4656/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_4658/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_4655/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, v53, v54, v55);
    byte_42EA968 = 1;
  }
  v102 = 0;
  v56 = sub_B5D694(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
    (DiggingConfirmDialogComponent___c__DisplayClass16_0_o *)v56,
    0LL);
  if ( !v56 )
    goto LABEL_45;
  *(_QWORD *)(v56 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 16), (System_Int32_array **)this, v59, v60, v61, v62, v63, v64);
  *(_QWORD *)(v56 + 24) = panelData;
  v65 = (DataManager_o **)(v56 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 24), (System_Int32_array **)panelData, v66, v67, v68, v69, v70, v71);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v73 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v73, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v65 )
    goto LABEL_45;
  v74 = *(_QWORD *)&(*v65)->fields.lastFrameTime;
  if ( !v74 || !Instance )
    goto LABEL_45;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v74 + 24),
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v76 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_45;
    v77 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v76->fields.age), 1, 0LL);
    if ( v77 )
    {
      v78 = v77;
      consumeIcon = this->fields.consumeIcon;
      objectId = v77->fields.objectId;
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
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4658/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v65;
        if ( *v65 )
        {
          consumeNum = this->fields.consumeNum;
          num = v78->fields.num;
          v102 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v58) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v102, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_30;
          }
        }
      }
LABEL_45:
      sub_B5D69C(Instance, v58);
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
                                (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( !this->fields.closeButton )
    goto LABEL_45;
  v84 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_45;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v84 )
    goto LABEL_45;
  UILabel__set_text(v84, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4655/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_45;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4657/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_45;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4656/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_45;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
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
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v100);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v101 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v101,
    (Il2CppObject *)v56,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v101, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v17; // x1

  if ( (byte_42EA96A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)panelData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12807/*"SelectAnimation"*/, v6, v7, v8);
    byte_42EA96A = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_nowPlaySelectAnimBlock,
    (System_Int32_array **)panelData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      selectAnimObj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B5D69C(selectAnimObj, v17);
  }
  UnityEngine_Animation__Play_51249124(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12807/*"SelectAnimation"*/,
    0LL);
}


void __fastcall DiggingConfirmDialogComponent__Redisplay(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v31; // x2
  WarEntity_o *v32; // x23
  CommonConsumeEntity_o *v33; // x0
  CommonConsumeEntity_o *v34; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA969 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)panelData, (_DWORD)setMask, closeCallback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_4658/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v24, v25, v26);
    byte_42EA969 = 1;
  }
  v53 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_21;
            v32 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_23;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_23;
            v33 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v32->fields.age), 1, 0LL);
            if ( !v33 )
            {
LABEL_21:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v31);
              this->fields.activateMaskPanel = setMask;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
                (System_Int32_array **)setMask,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              this->fields.closeCallbackFunc = closeCallback;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
                (System_Int32_array **)closeCallback,
                v47,
                v48,
                v49,
                v50,
                v51,
                v52);
              return;
            }
            v34 = v33;
            consumeIcon = this->fields.consumeIcon;
            objectId = v33->fields.objectId;
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4658/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v34->fields.num;
              v53 = DiggingBlockComponent__GetHintConsumeNum(panelData, v40) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v53, 0LL);
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
    sub_B5D69C(Instance, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // s0
  float x; // s8
  float v17; // s4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v21; // x3
  struct UnityEngine_GameObject_o *v22; // x20
  UnityEngine_Component_o *v23; // x21
  UnityEngine_Transform_o *v24; // x22
  float m_XMin; // s8
  float y; // s1
  float v27; // s2
  float v28; // s0
  float width; // s0
  double v30; // d0
  float height; // s0
  double v32; // d0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA96C & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)tutorialPeepWindowTexturePrefab, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EA96C = 1;
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
      x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v12, &var40);
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v41.fields.m_XMin = x + FSUtility__GetOffsetX(68.0, 0, 0LL);
      UnityEngine_Rect__set_x(v41, v17, &var40);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    gameObject = DiggingConfirmDialogComponent__CreatePrefab(
                   (DiggingConfirmDialogComponent_o *)transform,
                   tutorialPeepWindowTexturePrefab,
                   transform,
                   v21);
    if ( !gameObject )
      goto LABEL_28;
    v22 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject )
      goto LABEL_28;
    v23 = (UnityEngine_Component_o *)gameObject;
    v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    *(UnityEngine_Vector2_o *)&v43.fields.m_XMin = UnityEngine_Rect__get_center(v42, &var40);
    m_XMin = v43.fields.m_XMin;
    y = UnityEngine_Rect__get_center(v43, &var40).fields.y;
    if ( !v24
      || (v27 = 1.0,
          v28 = m_XMin,
          UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)(&y - 1), 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v23, 0LL)) == 0LL) )
    {
LABEL_28:
      sub_B5D69C(gameObject, v19);
    }
    v40.fields.x = 0.1;
    v40.fields.z = 1.0;
    v40.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v40, 0LL);
    width = UnityEngine_Rect__get_width(v44, &var40);
    if ( width == INFINITY )
      v30 = -width;
    else
      v30 = width;
    UIWidget__set_width((UIWidget_o *)v23, (int)v30, 0LL);
    height = UnityEngine_Rect__get_height(v45, &var40);
    if ( height == INFINITY )
      v32 = -INFINITY;
    else
      v32 = height;
    UIWidget__set_height((UIWidget_o *)v23, (int)v32, 0LL);
    this->fields.tutorialPeepWindow = v22;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindow,
      (System_Int32_array **)v22,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
}


void __fastcall DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v11; // x8

  if ( (byte_42EA96B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA96B = 1;
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
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v11 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v11->fields.selectAnimObj) == 0LL )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA973 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EA973 = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EA971 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA971 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
    sub_B5D69C(_4__this, method);
  }
  v4->fields.state = 2;
}