void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct UnityEngine_GameObject_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x2
  struct UnityEngine_GameObject_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct SkillIconComponent_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  struct SkillIconComponent_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  struct UIRangeLabel_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x2
  struct UIRangeLabel_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40F86FB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v6);
    sub_B16FFC(&UIRangeLabel___TypeInfo, v7);
    byte_40F86FB = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v8->static_fields->SvtSkillListMax,
                                                v2);
  this->fields.nowSkillBaseList = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowSkillBaseList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                                 v16);
  this->fields.nextSkillBaseList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nextSkillBaseList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                             v24);
  this->fields.nowSkillIconList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowSkillIconList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                             v32);
  this->fields.nextSkillIconList = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nextSkillIconList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = (struct UIRangeLabel_array *)sub_B17014(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                       v40);
  this->fields.nowSkillNameList = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowSkillNameList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v49 = (struct UIRangeLabel_array *)sub_B17014(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                       v48);
  this->fields.nextSkillNameList = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nextSkillNameList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_22344208(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_22344208(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F86F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantStatusBattleConfirmDialog_EndClose__, v10);
    byte_40F86F8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__EndClose(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ServantStatusBattleConfirmDialog__EndOpen(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ServantStatusBattleConfirmDialog__Init(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UILabel_o *nowSkillTitleLabel; // x0
  UILabel_o *nextSkillTitleLabel; // x0
  UILabel_o *nowNpTitleLabel; // x0
  UILabel_o *nextNpTitleLabel; // x0
  UILabel_o *buttonDecideLabel; // x0
  UILabel_o *buttonCancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F86F6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F86F6 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  if ( !nowSkillTitleLabel )
    goto LABEL_12;
  UILabel__set_text(nowSkillTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  if ( !nextSkillTitleLabel )
    goto LABEL_12;
  UILabel__set_text(nextSkillTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  if ( !nowNpTitleLabel )
    goto LABEL_12;
  UILabel__set_text(nowNpTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  if ( !nextNpTitleLabel
    || (UILabel__set_text(nextNpTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (buttonDecideLabel = this->fields.buttonDecideLabel) == 0LL)
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (buttonCancelLabel = this->fields.buttonCancelLabel) == 0LL)
    || (UILabel__set_text(buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        this->fields.isButtonEnable = 0,
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40F86FA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86FA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickDecide(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40F86F9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86F9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog__Open(
        ServantStatusBattleConfirmDialog_o *this,
        TreasureDvcInfo_o *nowTdInfo,
        TreasureDvcInfo_o *nextTdInfo,
        bool isTdModify,
        SkillInfo_array *nowSkillInfoList,
        SkillInfo_array *nextSkillInfoList,
        bool isSkillModify,
        ServantStatusBattleConfirmDialog_ClickDelegate_o *func,
        int32_t svtId,
        int32_t nowLimitCount,
        int32_t nextLimitCount,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  System_String_o *v35; // x28
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  struct UILabel_o *v41; // x8
  UILabel_o *nowSkillTitleLabel; // x22
  System_String_o *v43; // x0
  UILabel_o *nextSkillTitleLabel; // x22
  System_String_o *v45; // x0
  UILabel_o *nowNpTitleLabel; // x22
  System_String_o *v47; // x0
  UILabel_o *nextNpTitleLabel; // x22
  System_String_o *v49; // x0
  UILabel_o *buttonDecideLabel; // x22
  System_String_o *v51; // x0
  UILabel_o *buttonCancelLabel; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v58; // x27
  __int64 v59; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v61; // x28
  SkillInfo_o *v62; // x22
  UnityEngine_GameObject_o *v63; // x0
  struct SkillIconComponent_array *nowSkillIconList; // x8
  SkillIconComponent_o *v65; // x0
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v67; // x28
  System_String_o *Name; // x0
  UnityEngine_GameObject_o *v69; // x0
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v71; // x23
  unsigned __int64 v72; // x9
  unsigned __int64 v73; // x22
  SkillInfo_o *v74; // x28
  UnityEngine_GameObject_o *v75; // x0
  struct SkillIconComponent_array *nextSkillIconList; // x8
  SkillIconComponent_o *v77; // x0
  unsigned __int64 v78; // x8
  __int64 v79; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v81; // x22
  System_String_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  struct UIRangeLabel_array *v84; // x8
  System_String_o *v85; // x0
  __int64 v86; // x22
  __int64 v87; // x22
  DataManager_o *v88; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_String_o *v90; // x0
  System_String_o *OverwriteTDName; // x0
  System_String_o *v92; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v94; // x22
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x1
  UILabel_o *v98; // x0
  struct UILabel_o *nextNpNameLabel; // x20
  System_String_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  System_Action_o *v105; // x20

  if ( (byte_40F86F7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, nowTdInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B16FFC(&StringLiteral_11898/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v24);
    sub_B16FFC(&StringLiteral_11899/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, v25);
    sub_B16FFC(&StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v26);
    sub_B16FFC(&StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, v27);
    sub_B16FFC(&StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, v28);
    sub_B16FFC(&StringLiteral_11897/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v29);
    sub_B16FFC(&StringLiteral_9324/*"NO_ENTRY_NAME"*/, v30);
    sub_B16FFC(&StringLiteral_11903/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, v31);
    sub_B16FFC(&StringLiteral_11900/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v32);
    sub_B16FFC(&StringLiteral_1/*""*/, v33);
    sub_B16FFC(&StringLiteral_11901/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, v34);
    byte_40F86F7 = 1;
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)nextTdInfo,
    (System_String_array **)isTdModify,
    (System_Boolean_array **)nowSkillInfoList,
    (System_Int32_array **)nextSkillInfoList,
    (System_Int32_array *)isSkillModify,
    (System_Int32_array *)func);
  if ( isSkillModify )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
  }
  else
  {
    v35 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( isTdModify )
  {
    if ( !System_String__IsNullOrEmpty(v35, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v35 = System_String__Concat_43743732(v35, v36, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v35 = System_String__Concat_43743732(v35, v37, 0LL);
  }
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  v40 = System_String__Format(v39, (Il2CppObject *)v35, 0LL);
  v41 = this->fields.messageLabel;
  if ( !v41 )
    goto LABEL_114;
  WrapControlText__textAdjust(messageLabel, v40, v41->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowSkillTitleLabel, v43, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextSkillTitleLabel, v45, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowNpTitleLabel, v47, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextNpTitleLabel, v49, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_114;
  UILabel__set_text(buttonDecideLabel, v51, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_114;
  UILabel__set_text(buttonCancelLabel, v53, 0LL);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_114;
  v58 = v54;
  v59 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v61 = v59 - 4;
    if ( v59 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_114;
    if ( v61 >= nowSkillInfoList->max_length )
    {
LABEL_119:
      sub_B17100(v54, v55, v56);
      sub_B170A0();
    }
    v62 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v59);
    if ( v62 && v62->fields.id >= 1 && v62->fields.lv >= 1 )
    {
      if ( v61 >= max_length )
        goto LABEL_119;
      v63 = (UnityEngine_GameObject_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v59);
      if ( !v63 )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(v63, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_114;
      if ( v61 >= nowSkillIconList->max_length )
        goto LABEL_119;
      v65 = (SkillIconComponent_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v59);
      if ( !v65 )
        goto LABEL_114;
      SkillIconComponent__Set_23613360(v65, v62->fields.id, v62->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_114;
      if ( v61 >= nowSkillNameList->max_length )
        goto LABEL_119;
      v67 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v59);
      Name = SkillInfo__GetName(v62, 0LL);
      if ( !v67 )
        goto LABEL_114;
      UIRangeLabel__Set(v67, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v61 >= max_length )
        goto LABEL_119;
      v69 = (UnityEngine_GameObject_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v59);
      if ( !v69 )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(v69, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v59;
    if ( !nowSkillBaseList )
      goto LABEL_114;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_114;
  v71 = 4LL;
  while ( 1 )
  {
    v72 = nextSkillBaseList->max_length;
    v73 = v71 - 4;
    if ( v71 - 4 >= (int)v72 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_114;
    if ( v73 >= nextSkillInfoList->max_length )
      goto LABEL_119;
    v74 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v71);
    if ( v74 && v74->fields.id >= 1 && v74->fields.lv >= 1 )
    {
      if ( v73 >= v72 )
        goto LABEL_119;
      v75 = (UnityEngine_GameObject_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v71);
      if ( !v75 )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(v75, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_114;
      if ( v73 >= nextSkillIconList->max_length )
        goto LABEL_119;
      v77 = (SkillIconComponent_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v71);
      if ( !v77 )
        goto LABEL_114;
      SkillIconComponent__Set_23613360(v77, v74->fields.id, v74->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_114;
      v78 = nowSkillInfoList->max_length;
      if ( (__int64)v73 >= (int)v78 )
        goto LABEL_76;
      if ( v73 >= v78 )
        goto LABEL_119;
      v79 = *((_QWORD *)&nowSkillInfoList->obj.klass + v71);
      if ( v79 && *(_DWORD *)(v79 + 16) == v74->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_114;
        if ( v73 >= nextSkillNameList->max_length )
          goto LABEL_119;
        v81 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v71);
        v82 = SkillInfo__GetName(v74, 0LL);
        if ( !v81 )
          goto LABEL_114;
      }
      else
      {
LABEL_76:
        v84 = this->fields.nextSkillNameList;
        if ( !v84 )
          goto LABEL_114;
        if ( v73 >= v84->max_length )
          goto LABEL_119;
        v81 = (UIRangeLabel_o *)*((_QWORD *)&v84->obj.klass + v71);
        v85 = SkillInfo__GetName(v74, 0LL);
        v82 = System_String__Concat_43743732(v58, v85, 0LL);
        if ( !v81 )
          goto LABEL_114;
      }
      UIRangeLabel__Set(v81, v82, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v73 >= v72 )
        goto LABEL_119;
      v83 = (UnityEngine_GameObject_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v71);
      if ( !v83 )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive(v83, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v71;
    if ( !nextSkillBaseList )
      goto LABEL_114;
  }
  v86 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v87 = **(_QWORD **)(v86 + 192);
  if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
    sub_AAFCFC(v87);
  v88 = **(DataManager_o ***)(v87 + 184);
  if ( !v88 )
    goto LABEL_114;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    v88,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
  {
    v90 = TreasureDvcInfo__GetName(nowTdInfo, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_114;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        MasterData_WarQuestSelectionMaster,
                        svtId,
                        nowLimitCount,
                        v90,
                        0,
                        0LL);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_114;
    v92 = OverwriteTDName;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v94 = this->fields.nowNpNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v94 )
      goto LABEL_114;
    v92 = v95;
    nowNpNameLabel = v94;
  }
  UILabel__set_text(nowNpNameLabel, v92, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_116:
      v100 = System_String__Concat_43743732(v58, v97, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_114;
      goto LABEL_117;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_117:
      v97 = v100;
      v98 = nextNpNameLabel;
      goto LABEL_118;
    }
LABEL_114:
    sub_B170D4();
  }
  v96 = TreasureDvcInfo__GetName(nextTdInfo, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_114;
  v97 = ServantLimitAddMaster__GetOverwriteTDName(
          MasterData_WarQuestSelectionMaster,
          svtId,
          nextLimitCount,
          v96,
          0,
          0LL);
  if ( !nowTdInfo || nowTdInfo->fields.id != nextTdInfo->fields.id )
  {
    nextNpNameLabel = this->fields.nextNpNameLabel;
    goto LABEL_116;
  }
  v98 = this->fields.nextNpNameLabel;
  if ( !v98 )
    goto LABEL_114;
LABEL_118:
  UILabel__set_text(v98, v97, 0LL);
  this->fields.isButtonEnable = 0;
  v105 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v101, v102, v103, v104);
  System_Action___ctor(v105, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v105, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusBattleConfirmDialog_ClickDelegate__BeginInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F765D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F765D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantStatusBattleConfirmDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantStatusBattleConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}