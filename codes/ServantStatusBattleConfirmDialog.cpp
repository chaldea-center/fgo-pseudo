void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
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
  BalanceConfig_c *v17; // x0
  struct UnityEngine_GameObject_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct SkillIconComponent_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct SkillIconComponent_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UIRangeLabel_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UIRangeLabel_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E6DE6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UIRangeLabel___TypeInfo, v14, v15, v16);
    byte_42E6DE6 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v17->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillBaseList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillBaseList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillIconList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillIconList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct UIRangeLabel_array *)sub_B5D5DC(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillNameList,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (struct UIRangeLabel_array *)sub_B5D5DC(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillNameList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_22125244(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_22125244(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E6DE3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusBattleConfirmDialog_EndClose__, v10, v11, v12);
    byte_42E6DE3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__EndClose(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *messageLabel; // x0

  if ( (byte_42E6DE1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E6DE1 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.nowSkillTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.nextSkillTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.nowNpTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.nextNpTitleLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonDecideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonCancelLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E6DE5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DE5 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E6DE4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DE4 = 1;
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
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  System_String_o *v65; // x28
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v69; // x0
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v72; // x8
  UILabel_o *nowSkillTitleLabel; // x22
  UILabel_o *nextSkillTitleLabel; // x22
  UILabel_o *nowNpTitleLabel; // x22
  UILabel_o *nextNpTitleLabel; // x22
  UILabel_o *buttonDecideLabel; // x22
  UILabel_o *buttonCancelLabel; // x22
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v80; // x27
  __int64 v81; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v83; // x28
  SkillInfo_o *v84; // x22
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v87; // x28
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v89; // x24
  unsigned __int64 v90; // x9
  unsigned __int64 v91; // x22
  SkillInfo_o *v92; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v94; // x8
  __int64 v95; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v97; // x22
  struct UIRangeLabel_array *v98; // x8
  System_String_o *v99; // x0
  __int64 v100; // x22
  __int64 v101; // x22
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_String_o *v103; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v105; // x22
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v107; // x20
  __int64 v108; // x0

  if ( (byte_42E6DE2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)nowTdInfo, (_DWORD)nextTdInfo, isTdModify);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12097/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12098/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12101/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12096/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_9450/*"NO_ENTRY_NAME"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12102/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12099/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_1/*""*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12100/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, v62, v63, v64);
    byte_42E6DE2 = 1;
  }
  this->fields.clickFunc = func;
  sub_B5D560(
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
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_19;
    goto LABEL_10;
  }
  v65 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_10:
    if ( !System_String__IsNullOrEmpty(v65, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v65 = System_String__Concat_44577788(v65, v66, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v65 = System_String__Concat_44577788(v65, v67, 0LL);
  }
LABEL_19:
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v69, (Il2CppObject *)v65, 0LL);
  v72 = this->fields.messageLabel;
  if ( !v72 )
    goto LABEL_114;
  WrapControlText__textAdjust(messageLabel, Name, v72->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_114;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_114;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12097/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_114;
  v80 = Name;
  v81 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v83 = v81 - 4;
    if ( v81 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_114;
    if ( v83 >= nowSkillInfoList->max_length )
    {
LABEL_119:
      v108 = sub_B5D6C8(Name);
      sub_B5D668(v108, 0LL);
    }
    v84 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v81);
    if ( v84 && v84->fields.id >= 1 && v84->fields.lv >= 1 )
    {
      if ( v83 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v81);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_114;
      if ( v83 >= nowSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v81);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_26822028((SkillIconComponent_o *)Name, v84->fields.id, v84->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_114;
      if ( v83 >= nowSkillNameList->max_length )
        goto LABEL_119;
      v87 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v81);
      Name = SkillInfo__GetName(v84, 0LL);
      if ( !v87 )
        goto LABEL_114;
      UIRangeLabel__Set(v87, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v83 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v81);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v81;
    if ( !nowSkillBaseList )
      goto LABEL_114;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_114;
  v89 = 4LL;
  while ( 1 )
  {
    v90 = nextSkillBaseList->max_length;
    v91 = v89 - 4;
    if ( v89 - 4 >= (int)v90 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_114;
    if ( v91 >= nextSkillInfoList->max_length )
      goto LABEL_119;
    v92 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v89);
    if ( v92 && v92->fields.id >= 1 && v92->fields.lv >= 1 )
    {
      if ( v91 >= v90 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v89);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_114;
      if ( v91 >= nextSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v89);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_26822028((SkillIconComponent_o *)Name, v92->fields.id, v92->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_114;
      v94 = nowSkillInfoList->max_length;
      if ( (__int64)v91 >= (int)v94 )
        goto LABEL_76;
      if ( v91 >= v94 )
        goto LABEL_119;
      v95 = *((_QWORD *)&nowSkillInfoList->obj.klass + v89);
      if ( v95 && *(_DWORD *)(v95 + 16) == v92->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_114;
        if ( v91 >= nextSkillNameList->max_length )
          goto LABEL_119;
        v97 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v89);
        Name = SkillInfo__GetName(v92, 0LL);
        if ( !v97 )
          goto LABEL_114;
      }
      else
      {
LABEL_76:
        v98 = this->fields.nextSkillNameList;
        if ( !v98 )
          goto LABEL_114;
        if ( v91 >= v98->max_length )
          goto LABEL_119;
        v97 = (UIRangeLabel_o *)*((_QWORD *)&v98->obj.klass + v89);
        v99 = SkillInfo__GetName(v92, 0LL);
        Name = System_String__Concat_44577788(v80, v99, 0LL);
        if ( !v97 )
          goto LABEL_114;
      }
      UIRangeLabel__Set(v97, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v91 >= v90 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v89);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v89;
    if ( !nextSkillBaseList )
      goto LABEL_114;
  }
  v100 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v100 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v101 = **(_QWORD **)(v100 + 192);
  if ( (*(_BYTE *)(v101 + 306) & 1) == 0 )
    sub_AF52C4(v101);
  Name = **(System_String_o ***)(v101 + 184);
  if ( !Name )
    goto LABEL_114;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Name,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
  {
    Name = TreasureDvcInfo__GetName(nowTdInfo, svtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_114;
    Name = ServantLimitAddMaster__GetOverwriteTDName(
             MasterData_WarQuestSelectionMaster,
             svtId,
             nowLimitCount,
             Name,
             0,
             0LL);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_114;
    v103 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v105 = this->fields.nowNpNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v105 )
      goto LABEL_114;
    v103 = Name;
    nowNpNameLabel = v105;
  }
  UILabel__set_text(nowNpNameLabel, v103, 0LL);
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
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_116:
      Name = System_String__Concat_44577788(v80, OverwriteTDName, 0LL);
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
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_117:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_118;
    }
LABEL_114:
    sub_B5D69C(Name, OverwriteTDName);
  }
  Name = TreasureDvcInfo__GetName(nextTdInfo, svtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_114;
  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                      MasterData_WarQuestSelectionMaster,
                      svtId,
                      nextLimitCount,
                      Name,
                      0,
                      0LL);
  if ( !nowTdInfo || nowTdInfo->fields.id != nextTdInfo->fields.id )
  {
    nextNpNameLabel = this->fields.nextNpNameLabel;
    goto LABEL_116;
  }
  Name = (System_String_o *)this->fields.nextNpNameLabel;
  if ( !Name )
    goto LABEL_114;
LABEL_118:
  UILabel__set_text((UILabel_o *)Name, OverwriteTDName, 0LL);
  this->fields.isButtonEnable = 0;
  v107 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v107, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v107, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5D92 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5D92 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}