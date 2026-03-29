void DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AEB9 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2AEB9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


UnityEngine_GameObject_o *DiggingConfirmDialogComponent__CreatePrefab(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parentObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_4D2AEB4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AEB4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0), !transform) )
  {
    sub_1C93D2C(v6, v7);
  }
  UnityEngine_Transform__set_parent(transform, parentObject, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  return v8;
}


void DiggingConfirmDialogComponent__EndClose(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DiggingConfirmDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C93A78(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingConfirmDialogComponent__OnClickCheckBtn(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_4D2AEB5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
    byte_4D2AEB5 = 1;
  }
  v3 = Method_DiggingConfirmDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0),
        (v7 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0)
    || (v8 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0)) == 0)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0),
        !v8) )
  {
    sub_1C93D2C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0);
}


void DiggingConfirmDialogComponent__OnClickCloseBtn(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4D2AEB7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__);
    byte_4D2AEB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DiggingConfirmDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v5);
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void DiggingConfirmDialogComponent__OnClickDecideBtn(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  void *gameObject; // x0
  System_String_o *v7; // x20
  bool activeSelf; // w0
  const MethodInfo *v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4D2AEB6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent_EndClose__);
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    sub_1C93AD4(&DiggingManager_TypeInfo);
    byte_4D2AEB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DiggingConfirmDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    gameObject = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v7 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0)) == 0) )
    {
      sub_1C93D2C(gameObject, v5);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
    UnityEngine_PlayerPrefs__SetInt(v7, activeSelf, 0);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v9);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


void DiggingConfirmDialogComponent__Open(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  DataManager_o **p_monitor; // x24
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  UnityEngine_Object_o *v16; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v19; // x25
  CommonConsumeEntity_o *v20; // x0
  CommonConsumeEntity_o *v21; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v27; // x24
  Il2CppObject *ComponentInChildren_object; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  const MethodInfo *v31; // x2
  System_Action_o *v32; // x20
  int v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2AEAF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____79080416);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__);
    sub_1C93AD4(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_5019/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1C93AD4(&StringLiteral_5018/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_5020/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_11176/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_5017/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4D2AEAF = 1;
  }
  v33 = 0;
  v11 = (Il2CppObject *)sub_1C93D20(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_40;
  v11[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v11[1], this);
  v11[1].monitor = panelData;
  p_monitor = (DataManager_o **)&v11[1].monitor;
  sub_1C93A78(&v11[1].monitor, panelData);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0, 0) )
  {
    v16 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v16, 0);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*p_monitor )
    goto LABEL_40;
  saveDataMapList = (*p_monitor)->fields.saveDataMapList;
  if ( !saveDataMapList || !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             saveDataMapList->fields._size,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v20 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v19[1].monitor), 1, 0);
    if ( v20 )
    {
      v21 = v20;
      consumeIcon = this->fields.consumeIcon;
      objectId = v20->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(consumeIcon, objectId, 0);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5020/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
        Instance = *p_monitor;
        if ( *p_monitor )
        {
          consumeNum = this->fields.consumeNum;
          num = v21->fields.num;
          v33 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v13) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0);
            goto LABEL_26;
          }
        }
      }
LABEL_40:
      sub_1C93D2C(Instance, v13);
    }
  }
LABEL_26:
  Instance = (DataManager_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)Instance,
                                1,
                                (const MethodInfo_319B690 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____79080416);
  if ( !this->fields.closeButton )
    goto LABEL_40;
  v27 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0);
  if ( !Instance )
    goto LABEL_40;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_319B690 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____79080416);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11176/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !v27 )
    goto LABEL_40;
  UILabel__set_text(v27, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5017/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5019/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0);
  if ( !consumeLabel )
    goto LABEL_40;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5018/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0);
  if ( !checkBoxLabel )
    goto LABEL_40;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0);
  this->fields.activateMaskPanel = setMask;
  sub_1C93A78(&this->fields.activateMaskPanel, setMask);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C93A78(&this->fields.closeCallbackFunc, closeCallback);
  Instance = (DataManager_o *)this->fields.checkedSp;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v31);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v32, v11, Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v32, 1, 0, 0);
}


void DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v7; // x1

  if ( (byte_4D2AEB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C93AD4(&StringLiteral_12768/*"SelectAnimation"*/);
    byte_4D2AEB1 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  selectAnimObj = (UnityEngine_GameObject_o *)sub_1C93A78(p_nowPlaySelectAnimBlock, panelData);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0)) == 0
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      selectAnimObj,
                                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
    sub_1C93D2C(selectAnimObj, v7);
  }
  UnityEngine_Animation__Play_71862428(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12768/*"SelectAnimation"*/,
    0);
}


void DiggingConfirmDialogComponent__Redisplay(
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
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2AEB0 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5020/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    byte_4D2AEB0 = 1;
  }
  v23 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_3463274 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_19;
            v14 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_21;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_21;
            v15 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v14[1].monitor), 1, 0);
            if ( !v15 )
            {
LABEL_19:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v13);
              this->fields.activateMaskPanel = setMask;
              sub_1C93A78(&this->fields.activateMaskPanel, setMask);
              this->fields.closeCallbackFunc = closeCallback;
              sub_1C93A78(&this->fields.closeCallbackFunc, closeCallback);
              return;
            }
            v16 = v15;
            consumeIcon = this->fields.consumeIcon;
            objectId = v15->fields.objectId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetItem(consumeIcon, objectId, 0);
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5020/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
              consumeNum = this->fields.consumeNum;
              num = v16->fields.num;
              v23 = DiggingBlockComponent__GetHintConsumeNum(panelData, v22) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v23, 0);
              if ( consumeNum )
              {
                UILabel__set_text(consumeNum, (System_String_o *)Instance, 0);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C93D2C(Instance, v10);
  }
}


void DiggingConfirmDialogComponent__SetClippingMask(
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
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2AEB3 & 1) == 0 )
  {
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AEB3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tutorialPeepWindowTexturePrefab, 0, 0) )
  {
    m_XMin = this->fields.clippingRect.fields.m_XMin;
    m_YMin = this->fields.clippingRect.fields.m_YMin;
    m_Width = this->fields.clippingRect.fields.m_Width;
    m_Height = this->fields.clippingRect.fields.m_Height;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsUnderVista(0) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      m_XMin = m_XMin + FSUtility__GetOffsetX(68.0, 2, 0);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_24;
    transform = (DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
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
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject
      || (v14 = (UnityEngine_Component_o *)gameObject,
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)gameObject,
                                                      0)) == 0)
      || (v17.fields.y = m_YMin + (float)(m_Height * 0.5),
          v17.fields.x = (float)(m_Width * 0.5) + m_XMin,
          v17.fields.z = 1.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v17, 0),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0)) == 0) )
    {
LABEL_24:
      sub_1C93D2C(gameObject, v10);
    }
    v18.fields.x = 0.1;
    v18.fields.z = 1.0;
    v18.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v18, 0);
    if ( m_Width == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)m_Width;
    UIWidget__set_width((UIWidget_o *)v14, v15, 0);
    if ( m_Height == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)m_Height;
    UIWidget__set_height((UIWidget_o *)v14, v16, 0);
    this->fields.tutorialPeepWindow = v13;
    sub_1C93A78(&this->fields.tutorialPeepWindow, v13);
  }
}


void DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v6; // x8

  if ( (byte_4D2AEB2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AEB2 = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0),
          (v6 = this->fields.nowPlaySelectAnimBlock) == 0)
      || (gameObject = (UnityEngine_Component_o *)v6->fields.selectAnimObj) == 0 )
    {
      sub_1C93D2C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2AEBA & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    byte_4D2AEBA = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2AEB8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AEB8 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void DiggingConfirmDialogComponent___c__DisplayClass16_0___ctor(
        DiggingConfirmDialogComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingConfirmDialogComponent___c__DisplayClass16_0___Open_b__0(
        DiggingConfirmDialogComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingConfirmDialogComponent_o *_4__this; // x0
  struct DiggingConfirmDialogComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingConfirmDialogComponent__PlaySelectBlockAnim(_4__this, this->fields.panelData, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  v5->fields.state = 2;
}