void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A02B31 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A02B31 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  UnityEngine_Transform_o *transform; // x20
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02B2C & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A02B2C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v9 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v7, 0LL),
        !transform) )
  {
    sub_1B64C5C(v7, v8);
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F9821 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9827 )
  {
    sub_1B64A00(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F9827 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v20.fields.x = v14;
  v20.fields.y = v15;
  v20.fields.z = v16;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  return v9;
}


void __fastcall DiggingConfirmDialogComponent__EndClose(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DiggingConfirmDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCheckBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_4A02B2D & 1) == 0 )
  {
    sub_1B64A00(&Method_DiggingConfirmDialogComponent_OnClickCheckBtn__, method);
    byte_4A02B2D = 1;
  }
  v3 = Method_DiggingConfirmDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    sub_1B64C5C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4A02B2F & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionExtensions_Call_bool___, method);
    sub_1B64A00(&System_Action_TypeInfo, v3);
    sub_1B64A00(&Method_DiggingConfirmDialogComponent_OnClickCloseBtn__, v4);
    sub_1B64A00(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, v5);
    byte_4A02B2F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_DiggingConfirmDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2D9327C *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v8);
    v9 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  void *gameObject; // x0
  System_String_o *v11; // x20
  bool activeSelf; // w0
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_4A02B2E & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionExtensions_Call_bool___, method);
    sub_1B64A00(&System_Action_TypeInfo, v3);
    sub_1B64A00(&Method_DiggingConfirmDialogComponent_EndClose__, v4);
    sub_1B64A00(&Method_DiggingConfirmDialogComponent_OnClickDecideBtn__, v5);
    sub_1B64A00(&DiggingManager_TypeInfo, v6);
    byte_4A02B2E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v7 = Method_DiggingConfirmDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B64A18(Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    gameObject = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v11 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_1B64C5C(gameObject, v9);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v11, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v13);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2D9327C *)Method_ActionExtensions_Call_bool___);
    v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
  int32_t v29; // w2
  int32_t v30; // w3
  DataManager_o **v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v35; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v38; // x25
  CommonConsumeEntity_o *v39; // x0
  CommonConsumeEntity_o *v40; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v46; // x24
  Il2CppObject *ComponentInChildren_object; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  const MethodInfo *v54; // x2
  System_Action_o *v55; // x20
  int v56; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A02B27 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, panelData);
    sub_1B64A00(&AtlasManager_TypeInfo, v11);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760, v12);
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v13);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v14);
    sub_1B64A00(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v15);
    sub_1B64A00(&LocalizationManager_TypeInfo, v16);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64A00(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, v19);
    sub_1B64A00(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo, v20);
    sub_1B64A00(&StringLiteral_5009/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v21);
    sub_1B64A00(&StringLiteral_5008/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, v22);
    sub_1B64A00(&StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_1B64A00(&StringLiteral_11023/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v24);
    sub_1B64A00(&StringLiteral_5007/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, v25);
    byte_4A02B27 = 1;
  }
  v56 = 0;
  v26 = sub_1B64C4C(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_40;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v29, v30);
  *(_QWORD *)(v26 + 24) = panelData;
  v31 = (DataManager_o **)(v26 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 24), (int32_t)panelData, v32, v33);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v35 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v35, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v31 )
    goto LABEL_40;
  saveDataMapList = (*v31)->fields.saveDataMapList;
  if ( !saveDataMapList || !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             saveDataMapList->fields._size,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v38 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v39 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v38[1].monitor), 1, 0LL);
    if ( v39 )
    {
      v40 = v39;
      consumeIcon = this->fields.consumeIcon;
      objectId = v39->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(consumeIcon, objectId, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v31;
        if ( *v31 )
        {
          consumeNum = this->fields.consumeNum;
          num = v40->fields.num;
          v56 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v28) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v56, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_26;
          }
        }
      }
LABEL_40:
      sub_1B64C5C(Instance, v28);
    }
  }
LABEL_26:
  Instance = (DataManager_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)Instance,
                                1,
                                (const MethodInfo_2E32C08 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760);
  if ( !this->fields.closeButton )
    goto LABEL_40;
  v46 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_40;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2E32C08 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11023/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v46 )
    goto LABEL_40;
  UILabel__set_text(v46, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5007/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5009/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_40;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5008/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_40;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel, (int32_t)setMask, v50, v51);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v52, v53);
  Instance = (DataManager_o *)this->fields.checkedSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v54);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v55 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v26,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v10; // x1

  if ( (byte_4A02B29 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Animation___, panelData);
    sub_1B64A00(&StringLiteral_12517/*"SelectAnimation"*/, v5);
    byte_4A02B29 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_nowPlaySelectAnimBlock, (int32_t)panelData, v7, v8);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      selectAnimObj,
                                                      (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1B64C5C(selectAnimObj, v10);
  }
  UnityEngine_Animation__Play_68882568(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12517/*"SelectAnimation"*/,
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x23
  CommonConsumeEntity_o *v21; // x0
  CommonConsumeEntity_o *v22; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A02B28 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, panelData);
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v10);
    sub_1B64A00(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_1B64A00(&LocalizationManager_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64A00(&StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v14);
    byte_4A02B28 = 1;
  }
  v33 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
      if ( panelData )
      {
        blockInfo = panelData->fields.blockInfo;
        if ( blockInfo )
        {
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       blockInfo->fields.diggingBlockId,
                       (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_19;
            v20 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_21;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_21;
            v21 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v20[1].monitor), 1, 0LL);
            if ( !v21 )
            {
LABEL_19:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v19);
              this->fields.activateMaskPanel = setMask;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel,
                (int32_t)setMask,
                v29,
                v30);
              this->fields.closeCallbackFunc = closeCallback;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
                (int32_t)closeCallback,
                v31,
                v32);
              return;
            }
            v22 = v21;
            consumeIcon = this->fields.consumeIcon;
            objectId = v21->fields.objectId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetItem(consumeIcon, objectId, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v22->fields.num;
              v33 = DiggingBlockComponent__GetHintConsumeNum(panelData, v28) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0LL);
              if ( consumeNum )
              {
                UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B64C5C(Instance, v16);
  }
}


void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  DiggingConfirmDialogComponent_o *transform; // x0
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Component_o *v16; // x21
  int32_t v17; // w1
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02B2B & 1) == 0 )
  {
    sub_1B64A00(&FSUtility_TypeInfo, tutorialPeepWindowTexturePrefab);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A02B2B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tutorialPeepWindowTexturePrefab, 0LL, 0LL) )
  {
    m_XMin = this->fields.clippingRect.fields.m_XMin;
    m_YMin = this->fields.clippingRect.fields.m_YMin;
    m_Width = this->fields.clippingRect.fields.m_Width;
    m_Height = this->fields.clippingRect.fields.m_Height;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsUnderVista(0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      m_XMin = m_XMin + FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    transform = (DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    gameObject = DiggingConfirmDialogComponent__CreatePrefab(
                   transform,
                   tutorialPeepWindowTexturePrefab,
                   (UnityEngine_Transform_o *)transform,
                   v14);
    if ( !gameObject )
      goto LABEL_24;
    v15 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject
      || (v16 = (UnityEngine_Component_o *)gameObject,
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)gameObject,
                                                      0LL)) == 0LL)
      || (v21.fields.y = m_YMin + (float)(m_Height * 0.5),
          v21.fields.x = (float)(m_Width * 0.5) + m_XMin,
          v21.fields.z = 1.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v16, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1B64C5C(gameObject, v12);
    }
    v22.fields.x = 0.1;
    v22.fields.z = 1.0;
    v22.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v22, 0LL);
    if ( m_Width == INFINITY )
      v17 = 0x80000000;
    else
      v17 = (int)m_Width;
    UIWidget__set_width((UIWidget_o *)v16, v17, 0LL);
    if ( m_Height == INFINITY )
      v18 = 0x80000000;
    else
      v18 = (int)m_Height;
    UIWidget__set_height((UIWidget_o *)v16, v18, 0LL);
    this->fields.tutorialPeepWindow = v15;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tutorialPeepWindow, (int32_t)v15, v19, v20);
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

  if ( (byte_4A02B2A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A02B2A = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v7 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v7->fields.selectAnimObj) == 0LL )
    {
      sub_1B64C5C(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A02B32 & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionExtensions_Call_bool___, method);
    byte_4A02B32 = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D9327C *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A02B30 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02B30 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B64C5C(0LL, v4);
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
  const MethodInfo *v2; // x2
  DiggingConfirmDialogComponent_o *_4__this; // x0
  struct DiggingConfirmDialogComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingConfirmDialogComponent__PlaySelectBlockAnim(_4__this, this->fields.panelData, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B64C5C(_4__this, method);
  }
  v5->fields.state = 2;
}