void DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AA5D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AA5D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AA58 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA58 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, parentObject);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0), !transform) )
  {
    sub_2213CDC(v6, v7);
  }
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Transform__set_parent(transform, parentObject, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v15, 0);
  return v8;
}


void DiggingConfirmDialogComponent__EndClose(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DiggingConfirmDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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

  if ( (byte_596AA59 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
    byte_596AA59 = 1;
  }
  v3 = Method_DiggingConfirmDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    sub_2213CDC(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0);
}


void DiggingConfirmDialogComponent__OnClickCloseBtn(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _BYTE *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_596AA5B & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    sub_2213A60(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__);
    byte_596AA5B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DiggingConfirmDialogComponent_OnClickCloseBtn__;
    this->fields.state = 3;
    if ( (v3[83] & 2) != 0 )
      v3 = (_BYTE *)sub_2213A78(v3);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, *((_QWORD *)v3 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v5);
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void DiggingConfirmDialogComponent__OnClickDecideBtn(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  void *gameObject; // x0
  System_String_o *v8; // x20
  bool activeSelf; // w0
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_596AA5A & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingConfirmDialogComponent_EndClose__);
    sub_2213A60(&Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    sub_2213A60(&DiggingManager_TypeInfo);
    byte_596AA5A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DiggingConfirmDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    gameObject = DiggingManager_TypeInfo;
    if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v5, v6);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v8 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0)) == 0) )
    {
      sub_2213CDC(gameObject, v5);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
    UnityEngine_PlayerPrefs__SetInt(v8, activeSelf, 0);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v10);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_DiggingConfirmDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0);
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
  __int64 v11; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  DataManager_o **v20; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_c *v29; // x0
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v36; // x25
  CommonConsumeEntity_o *v37; // x0
  __int64 v38; // x2
  CommonConsumeEntity_o *v39; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *ComponentInChildren_object; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x2
  System_Action_o *v66; // x20
  int v67; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596AA53 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__);
    sub_2213A60(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&StringLiteral_5188/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_2213A60(&StringLiteral_5187/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5189/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_5186/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_596AA53 = 1;
  }
  v67 = 0;
  v11 = sub_2213CCC(DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_40;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = panelData;
  v20 = (DataManager_o **)(v11 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)panelData, v21, v22, v23, v24, v25, v26);
  v29 = UnityEngine_Object_TypeInfo;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  this->fields.state = 1;
  if ( !*(&v29->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v29, v27, v28);
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0, 0) )
  {
    v33 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    UnityEngine_Object__Destroy_83459800(v33, 0);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v20 )
    goto LABEL_40;
  saveDataMapList = (*v20)->fields.saveDataMapList;
  if ( !saveDataMapList || !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             saveDataMapList->fields._size,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v36 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v37 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v36[1].monitor), 1, 0);
    if ( v37 )
    {
      v39 = v37;
      consumeIcon = this->fields.consumeIcon;
      objectId = v37->fields.objectId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v38);
      AtlasManager__SetItem(consumeIcon, objectId, 0);
      titleLabel = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5189/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
        Instance = *v20;
        if ( *v20 )
        {
          consumeNum = this->fields.consumeNum;
          num = v39->fields.num;
          v67 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v13) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v67, 0);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0);
            goto LABEL_26;
          }
        }
      }
LABEL_40:
      sub_2213CDC(Instance, v13);
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
                                (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  if ( !this->fields.closeButton )
    goto LABEL_40;
  v47 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0);
  if ( !Instance )
    goto LABEL_40;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48, v49);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !v47 )
    goto LABEL_40;
  UILabel__set_text(v47, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5186/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5188/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0);
  if ( !consumeLabel )
    goto LABEL_40;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5187/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0);
  if ( !checkBoxLabel )
    goto LABEL_40;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0);
  this->fields.activateMaskPanel = setMask;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activateMaskPanel,
    (int32_t)setMask,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.closeCallbackFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v65);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  v66 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v11,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v66, 1, 0, 0);
}


void DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v13; // x1

  if ( (byte_596AA55 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&StringLiteral_13205/*"SelectAnimation"*/);
    byte_596AA55 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_nowPlaySelectAnimBlock,
    (int32_t)panelData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0)) == 0
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      selectAnimObj,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
    sub_2213CDC(selectAnimObj, v13);
  }
  UnityEngine_Animation__Play_83078544(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_13205/*"SelectAnimation"*/,
    0);
}


void DiggingConfirmDialogComponent__Redisplay(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        System_Action_bool__o *setMask,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t state; // w8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *Entity; // x0
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x23
  CommonConsumeEntity_o *v16; // x0
  __int64 v17; // x1
  CommonConsumeEntity_o *v18; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596AA54 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5189/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    byte_596AA54 = 1;
  }
  state = this->fields.state;
  v39 = 0;
  if ( state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_19;
            v15 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_21;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_21;
            v16 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v15[1].monitor), 1, 0);
            if ( !v16 )
            {
LABEL_19:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v14);
              this->fields.activateMaskPanel = setMask;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.activateMaskPanel,
                (int32_t)setMask,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              this->fields.closeCallbackFunc = closeCallback;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
                (int32_t)closeCallback,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              return;
            }
            v18 = v16;
            consumeIcon = this->fields.consumeIcon;
            objectId = v16->fields.objectId;
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v14);
            AtlasManager__SetItem(consumeIcon, objectId, 0);
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5189/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
              consumeNum = this->fields.consumeNum;
              num = v18->fields.num;
              v39 = DiggingBlockComponent__GetHintConsumeNum(panelData, v26) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v39, 0);
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
    sub_2213CDC(Instance, v11);
  }
}


void DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  DiggingConfirmDialogComponent_o *transform; // x0
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Component_o *v18; // x21
  int32_t v19; // w1
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AA57 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA57 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tutorialPeepWindowTexturePrefab, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tutorialPeepWindowTexturePrefab, 0, 0) )
  {
    m_XMin = this->fields.clippingRect.fields.m_XMin;
    m_YMin = this->fields.clippingRect.fields.m_YMin;
    m_Width = this->fields.clippingRect.fields.m_Width;
    m_Height = this->fields.clippingRect.fields.m_Height;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5, v6);
    if ( !FSUtility__IsUnderVista(0) )
    {
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v11, v12);
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
                   v16);
    if ( !gameObject )
      goto LABEL_24;
    v17 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject
      || (v18 = (UnityEngine_Component_o *)gameObject,
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)gameObject,
                                                      0)) == 0)
      || (v27.fields.z = 1.0,
          v27.fields.y = m_YMin + (float)(m_Height * 0.5),
          v27.fields.x = (float)(m_Width * 0.5) + m_XMin,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v18, 0)) == 0) )
    {
LABEL_24:
      sub_2213CDC(gameObject, v14);
    }
    v28.fields.z = 1.0;
    v28.fields.x = 0.1;
    v28.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v28, 0);
    if ( m_Width == INFINITY )
      v19 = 0x80000000;
    else
      v19 = (int)m_Width;
    UIWidget__set_width((UIWidget_o *)v18, v19, 0);
    if ( m_Height == INFINITY )
      v20 = 0x80000000;
    else
      v20 = (int)m_Height;
    UIWidget__set_height((UIWidget_o *)v18, v20, 0);
    this->fields.tutorialPeepWindow = v17;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialPeepWindow,
      (int32_t)v17,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
}


void DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v7; // x8

  if ( (byte_596AA56 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA56 = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0),
          (v7 = this->fields.nowPlaySelectAnimBlock) == 0)
      || (gameObject = (UnityEngine_Component_o *)v7->fields.selectAnimObj) == 0 )
    {
      sub_2213CDC(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_596AA5E & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596AA5E = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AA5C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA5C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
    sub_2213CDC(_4__this, method);
  }
  v5->fields.state = 2;
}