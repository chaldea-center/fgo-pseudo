void __fastcall DiggingConfirmDialogComponent___ctor(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3EC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A3EC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *transform; // x20
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A3E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab, parentObject);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A3E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8
    || (v10 = v8,
        transform = UnityEngine_GameObject__get_transform(v8, 0LL),
        (v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v8, 0LL),
        !transform) )
  {
    sub_1BCAA3C(v8, v9);
  }
  v15 = v12;
  v16 = v13;
  v17 = v14;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v19);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v20, v21);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v23.fields.x = v15;
  v23.fields.y = v16;
  v23.fields.z = v17;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  return v10;
}


void __fastcall DiggingConfirmDialogComponent__EndClose(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DiggingConfirmDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall DiggingConfirmDialogComponent__Init(DiggingConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCheckBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x19

  if ( (byte_4B1A3E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent_OnClickCheckBtn__, method, v2);
    byte_4B1A3E8 = 1;
  }
  v4 = Method_DiggingConfirmDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_DiggingConfirmDialogComponent_OnClickCheckBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v8 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v9 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v9) )
  {
    sub_1BCAA3C(checkedSp, v6);
  }
  UnityEngine_GameObject__SetActive(v9, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__OnClickCloseBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B1A3EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent_OnClickCloseBtn__, v6, v7);
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__, v8, v9);
    byte_4B1A3EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_DiggingConfirmDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_DiggingConfirmDialogComponent_OnClickCloseBtn__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v12);
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_DiggingConfirmDialogComponent__OnClickCloseBtn_b__24_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent__OnClickDecideBtn(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  void *gameObject; // x0
  System_String_o *v16; // x20
  bool activeSelf; // w0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_4B1A3E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent_EndClose__, v6, v7);
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent_OnClickDecideBtn__, v8, v9);
    sub_1BCA7E0(&DiggingManager_TypeInfo, v10, v11);
    byte_4B1A3E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v12 = Method_DiggingConfirmDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_DiggingConfirmDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_DiggingConfirmDialogComponent_OnClickDecideBtn__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
    gameObject = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v14);
      gameObject = DiggingManager_TypeInfo;
    }
    if ( !this->fields.checkedSp
      || (v16 = (System_String_o *)**((_QWORD **)gameObject + 23),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.checkedSp, 0LL)) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v14);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v16, activeSelf, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
    DiggingConfirmDialogComponent__StopSelectBlockAnim(this, v18);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.activateMaskPanel,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  DataManager_o **v50; // x24
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  UnityEngine_Object_o *tutorialPeepWindow; // x25
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v63; // x25
  CommonConsumeEntity_o *v64; // x0
  CommonConsumeEntity_o *v65; // x25
  UISprite_o *consumeIcon; // x26
  int32_t objectId; // w27
  __int64 v68; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *consumeNum; // x24
  int32_t num; // w25
  UILabel_o *v72; // x24
  __int64 v73; // x1
  Il2CppObject *ComponentInChildren_object; // x25
  UILabel_o *consumeLabel; // x24
  UILabel_o *checkBoxLabel; // x24
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Action_o *v93; // x20
  int v94; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1A3E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, panelData, tutorialPeepWindowTexturePrefab);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__, v27, v28);
    sub_1BCA7E0(&DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_5105/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5104/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5106/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5103/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39, v40);
    byte_4B1A3E2 = 1;
  }
  v94 = 0;
  v41 = sub_1BCAA2C(
          DiggingConfirmDialogComponent___c__DisplayClass16_0_TypeInfo,
          panelData,
          tutorialPeepWindowTexturePrefab,
          setMask);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_40;
  *(_QWORD *)(v41 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)this, v44, v45, v46, v47, v48, v49);
  *(_QWORD *)(v41 + 24) = panelData;
  v50 = (DataManager_o **)(v41 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)panelData, v51, v52, v53, v54, v55, v56);
  this->fields.state = 1;
  tutorialPeepWindow = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  if ( UnityEngine_Object__op_Inequality(tutorialPeepWindow, 0LL, 0LL) )
  {
    v60 = (UnityEngine_Object_o *)this->fields.tutorialPeepWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
    UnityEngine_Object__Destroy_70154244(v60, 0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !*v50 )
    goto LABEL_40;
  saveDataMapList = (*v50)->fields.saveDataMapList;
  if ( !saveDataMapList || !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             saveDataMapList->fields._size,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( Entity )
  {
    v63 = Entity;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v64 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v63[1].monitor), 1, 0LL);
    if ( v64 )
    {
      v65 = v64;
      consumeIcon = this->fields.consumeIcon;
      objectId = v64->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
      AtlasManager__SetItem(consumeIcon, objectId, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5106/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        Instance = *v50;
        if ( *v50 )
        {
          consumeNum = this->fields.consumeNum;
          num = v65->fields.num;
          v94 = DiggingBlockComponent__GetHintConsumeNum((DiggingBlockComponent_o *)Instance, v43) + num;
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v94, 0LL);
          if ( consumeNum )
          {
            UILabel__set_text(consumeNum, (System_String_o *)Instance, 0LL);
            goto LABEL_26;
          }
        }
      }
LABEL_40:
      sub_1BCAA3C(Instance, v43);
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
                                (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !this->fields.closeButton )
    goto LABEL_40;
  v72 = (UILabel_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !Instance )
    goto LABEL_40;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v72 )
    goto LABEL_40;
  UILabel__set_text(v72, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5103/*"DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5105/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_40;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  checkBoxLabel = this->fields.checkBoxLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5104/*"DIGGING_CONFIRM_DIALOG_CHECK_MESSAGE"*/, 0LL);
  if ( !checkBoxLabel )
    goto LABEL_40;
  UILabel__set_text(checkBoxLabel, (System_String_o *)Instance, 0LL);
  this->fields.activateMaskPanel = setMask;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel,
    (int64_t)setMask,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
  DiggingConfirmDialogComponent__SetClippingMask(this, tutorialPeepWindowTexturePrefab, v89);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v90, v91, v92);
  System_Action___ctor(
    v93,
    (Il2CppObject *)v41,
    Method_DiggingConfirmDialogComponent___c__DisplayClass16_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v93, 1, 0LL);
}


void __fastcall DiggingConfirmDialogComponent__PlaySelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct DiggingBlockComponent_o **p_nowPlaySelectAnimBlock; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_GameObject_o *selectAnimObj; // x0
  __int64 v15; // x1

  if ( (byte_4B1A3E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, panelData, method);
    sub_1BCA7E0(&StringLiteral_12730/*"SelectAnimation"*/, v5, v6);
    byte_4B1A3E4 = 1;
  }
  DiggingConfirmDialogComponent__StopSelectBlockAnim(this, (const MethodInfo *)panelData);
  this->fields.nowPlaySelectAnimBlock = panelData;
  p_nowPlaySelectAnimBlock = &this->fields.nowPlaySelectAnimBlock;
  sub_1BCA784((PartyOrganizationUtility_o *)p_nowPlaySelectAnimBlock, (int64_t)panelData, v8, v9, v10, v11, v12, v13);
  if ( !*p_nowPlaySelectAnimBlock
    || (selectAnimObj = (*p_nowPlaySelectAnimBlock)->fields.selectAnimObj) == 0LL
    || (UnityEngine_GameObject__SetActive(selectAnimObj, 1, 0LL),
        (selectAnimObj = (UnityEngine_GameObject_o *)*p_nowPlaySelectAnimBlock) == 0LL)
    || (selectAnimObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectAnimObj, 0LL)) == 0LL
    || (selectAnimObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      selectAnimObj,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1BCAA3C(selectAnimObj, v15);
  }
  UnityEngine_Animation__Play_69899248(
    (UnityEngine_Animation_o *)selectAnimObj,
    (System_String_o *)StringLiteral_12730/*"SelectAnimation"*/,
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *Entity; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x23
  CommonConsumeEntity_o *v27; // x0
  __int64 v28; // x1
  CommonConsumeEntity_o *v29; // x23
  UISprite_o *consumeIcon; // x24
  int32_t objectId; // w25
  __int64 v32; // x1
  UILabel_o *titleLabel; // x24
  UILabel_o *consumeNum; // x24
  int32_t num; // w23
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A3E3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, panelData, setMask);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_5106/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v19, v20);
    byte_4B1A3E3 = 1;
  }
  v49 = 0;
  if ( this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
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
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_19;
            v26 = Entity;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_21;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
            if ( !Instance )
              goto LABEL_21;
            v27 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)Instance, HIDWORD(v26[1].monitor), 1, 0LL);
            if ( !v27 )
            {
LABEL_19:
              DiggingConfirmDialogComponent__PlaySelectBlockAnim(this, panelData, v25);
              this->fields.activateMaskPanel = setMask;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel,
                (int64_t)setMask,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
              this->fields.closeCallbackFunc = closeCallback;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
                (int64_t)closeCallback,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48);
              return;
            }
            v29 = v27;
            consumeIcon = this->fields.consumeIcon;
            objectId = v27->fields.objectId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
            AtlasManager__SetItem(consumeIcon, objectId, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5106/*"DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            if ( titleLabel )
            {
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              consumeNum = this->fields.consumeNum;
              num = v29->fields.num;
              v49 = DiggingBlockComponent__GetHintConsumeNum(panelData, v36) + num;
              Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0LL);
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
    sub_1BCAA3C(Instance, v22);
  }
}


void __fastcall DiggingConfirmDialogComponent__SetClippingMask(
        DiggingConfirmDialogComponent_o *this,
        UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  DiggingConfirmDialogComponent_o *transform; // x0
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Component_o *v20; // x21
  int32_t v21; // w1
  int32_t v22; // w1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A3E6 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, tutorialPeepWindowTexturePrefab, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1A3E6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tutorialPeepWindowTexturePrefab);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tutorialPeepWindowTexturePrefab, 0LL, 0LL) )
  {
    m_XMin = this->fields.clippingRect.fields.m_XMin;
    m_YMin = this->fields.clippingRect.fields.m_YMin;
    m_Width = this->fields.clippingRect.fields.m_Width;
    m_Height = this->fields.clippingRect.fields.m_Height;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v9);
    if ( !FSUtility__IsUnderVista(0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v14);
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
                   v18);
    if ( !gameObject )
      goto LABEL_24;
    v19 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
    if ( !gameObject
      || (v20 = (UnityEngine_Component_o *)gameObject,
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)gameObject,
                                                      0LL)) == 0LL)
      || (v29.fields.y = m_YMin + (float)(m_Height * 0.5),
          v29.fields.x = (float)(m_Width * 0.5) + m_XMin,
          v29.fields.z = 1.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1BCAA3C(gameObject, v16);
    }
    v30.fields.x = 0.1;
    v30.fields.z = 1.0;
    v30.fields.y = 0.1;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v30, 0LL);
    if ( m_Width == INFINITY )
      v21 = 0x80000000;
    else
      v21 = (int)m_Width;
    UIWidget__set_width((UIWidget_o *)v20, v21, 0LL);
    if ( m_Height == INFINITY )
      v22 = 0x80000000;
    else
      v22 = (int)m_Height;
    UIWidget__set_height((UIWidget_o *)v20, v22, 0LL);
    this->fields.tutorialPeepWindow = v19;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.tutorialPeepWindow,
      (int64_t)v19,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
}


void __fastcall DiggingConfirmDialogComponent__StopSelectBlockAnim(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *nowPlaySelectAnimBlock; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct DiggingBlockComponent_o *v9; // x8

  if ( (byte_4B1A3E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A3E5 = 1;
  }
  nowPlaySelectAnimBlock = (UnityEngine_Object_o *)this->fields.nowPlaySelectAnimBlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nowPlaySelectAnimBlock, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.nowPlaySelectAnimBlock;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL
      || (UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL),
          (v9 = this->fields.nowPlaySelectAnimBlock) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)v9->fields.selectAnimObj) == 0LL )
    {
      sub_1BCAA3C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


void __fastcall DiggingConfirmDialogComponent___OnClickCloseBtn_b__24_0(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A3ED = 1;
  }
  DiggingConfirmDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall DiggingConfirmDialogComponent__get_closeBtnObject(
        DiggingConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A3EB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3EB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
    sub_1BCAA3C(_4__this, method);
  }
  v5->fields.state = 2;
}