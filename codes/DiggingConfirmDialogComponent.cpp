void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F1FA & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F1FA = 1;
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
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F1F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1F5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0LL),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0LL),
        !transform) )
  {
    sub_1B8880C(v6, v7);
  }
  v13 = v10;
  v14 = v11;
  v15 = v12;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v17.fields.x = v13;
  v17.fields.y = v14;
  v17.fields.z = v15;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  return v8;
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5F1F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
    byte_4A5F1F6 = 1;
  }
  v3 = Method_DiggingConfirmDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
    sub_1B8880C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A5F1F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    sub_1B885B0(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__);
    byte_4A5F1F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DiggingConfirmDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v5);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__OnClickDecideBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  void *gameObject; // x0
  System_String_o *v7; // x20
  bool activeSelf; // w0
  const MethodInfo *v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4A5F1F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingConfirmDialogComponent_EndClose__);
    sub_1B885B0(&Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    sub_1B885B0(&DiggingManager_TypeInfo);
    byte_4A5F1F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DiggingConfirmDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    gameObject = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v7 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_1B8880C(gameObject, v5);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v7, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v9);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  DataManager_o **v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v20; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v23; // x25
  CommonConsumeEntity_o *v24; // x0
  CommonConsumeEntity_o *v25; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v31; // x24
  Il2CppObject *ComponentInChildren_object; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x20
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5F1F0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__);
    sub_1B885B0(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5031/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1B885B0(&StringLiteral_5030/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5032/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_5029/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4A5F1F0 = 1;
  }
  v41 = 0;
  v11 = sub_1B887FC(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_40;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = panelData;
  v16 = (DataManager_o **)(v11 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)panelData, v17, v18);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v20, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v16 )
    goto LABEL_40;
  saveDataMapList = (*v16)->fields.saveDataMapList;
  if ( !saveDataMapList || !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             saveDataMapList->fields._size,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v23 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v24 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v23[1].monitor), 1, 0LL);
    if ( v24 )
    {
      v25 = v24;
      consumeIcon = this->fields.consumeIcon;
      objectId = v24->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(consumeIcon, objectId, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5032/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v16;
        if ( *v16 )
        {
          consumeNum = this->fields.consumeNum;
          num = v25->fields.num;
          v41 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v13) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v41, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_26;
          }
        }
      }
LABEL_40:
      sub_1B8880C(Instance, v13);
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
                                (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !this->fields.closeButton )
    goto LABEL_40;
  v31 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_40;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v31 )
    goto LABEL_40;
  UILabel__set_text(v31, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5029/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5031/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_40;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5030/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_40;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel, (int32_t)setMask, v35, v36);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v37, v38);
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
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v39);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v9; // x1

  if ( (byte_4A5F1F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&StringLiteral_12572/*"SelectAnimation"*/);
    byte_4A5F1F2 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_nowPlaySelectAnimBlock, (int32_t)panelData, v6, v7);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      selectAnimObj,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1B8880C(selectAnimObj, v9);
  }
  UnityEngine_Animation__Play_69204472(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12572/*"SelectAnimation"*/,
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x23
  CommonConsumeEntity_o *v15; // x0
  CommonConsumeEntity_o *v16; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5F1F1 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5032/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    byte_4A5F1F1 = 1;
  }
  v27 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_19;
            v14 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_21;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_21;
            v15 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v14[1].monitor), 1, 0LL);
            if ( !v15 )
            {
LABEL_19:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v13);
              this->fields.activateMaskPanel = setMask;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel,
                (int32_t)setMask,
                v23,
                v24);
              this->fields.closeCallbackFunc = closeCallback;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
                (int32_t)closeCallback,
                v25,
                v26);
              return;
            }
            v16 = v15;
            consumeIcon = this->fields.consumeIcon;
            objectId = v15->fields.objectId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetItem(consumeIcon, objectId, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5032/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v16->fields.num;
              v27 = DiggingBlockComponent__GetHintConsumeNum(panelData, v22) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v27, 0LL);
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
    sub_1B8880C(Instance, v10);
  }
}


void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  DiggingConfirmDialogComponent_o *transform; // x0
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Component_o *v14; // x21
  int32_t v15; // w1
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F1F4 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1F4 = 1;
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
                   v12);
    if ( !gameObject )
      goto LABEL_24;
    v13 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject
      || (v14 = (UnityEngine_Component_o *)gameObject,
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)gameObject,
                                                      0LL)) == 0LL)
      || (v19.fields.y = m_YMin + (float)(m_Height * 0.5),
          v19.fields.x = (float)(m_Width * 0.5) + m_XMin,
          v19.fields.z = 1.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v19, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1B8880C(gameObject, v10);
    }
    v20.fields.x = 0.1;
    v20.fields.z = 1.0;
    v20.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v20, 0LL);
    if ( m_Width == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)m_Width;
    UIWidget__set_width((UIWidget_o *)v14, v15, 0LL);
    if ( m_Height == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)m_Height;
    UIWidget__set_height((UIWidget_o *)v14, v16, 0LL);
    this->fields.tutorialPeepWindow = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tutorialPeepWindow, (int32_t)v13, v17, v18);
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

  if ( (byte_4A5F1F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1F3 = 1;
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
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v6 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v6->fields.selectAnimObj) == 0LL )
    {
      sub_1B8880C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F1FB & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5F1FB = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5F1F9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1F9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(_4__this, method);
  }
  v5->fields.state = 2;
}