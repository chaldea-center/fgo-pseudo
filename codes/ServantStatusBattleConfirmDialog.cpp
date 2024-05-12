void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UnityEngine_GameObject_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct SkillIconComponent_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SkillIconComponent_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UIRangeLabel_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UIRangeLabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_43895C6 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&SkillIconComponent___TypeInfo);
    sub_B775C4(&UIRangeLabel___TypeInfo);
    byte_43895C6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_B775DC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillBaseList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UnityEngine_GameObject_array *)sub_B775DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillBaseList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct SkillIconComponent_array *)sub_B775DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillIconList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct SkillIconComponent_array *)sub_B775DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillIconList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UIRangeLabel_array *)sub_B775DC(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nowSkillNameList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIRangeLabel_array *)sub_B775DC(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v39;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.nextSkillNameList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_22010932(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_22010932(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_43895C3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusBattleConfirmDialog_EndClose__);
    byte_43895C3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  UILabel_o *messageLabel; // x0

  if ( (byte_43895C1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43895C1 = 1;
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
    sub_B7769C(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_43895C5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43895C5 = 1;
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

  if ( (byte_43895C4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43895C4 = 1;
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
  System_String_o *v20; // x28
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v24; // x0
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v27; // x8
  UILabel_o *nowSkillTitleLabel; // x22
  UILabel_o *nextSkillTitleLabel; // x22
  UILabel_o *nowNpTitleLabel; // x22
  UILabel_o *nextNpTitleLabel; // x22
  UILabel_o *buttonDecideLabel; // x22
  UILabel_o *buttonCancelLabel; // x22
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v35; // x27
  __int64 v36; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v38; // x28
  SkillInfo_o *v39; // x22
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v42; // x28
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v44; // x24
  unsigned __int64 v45; // x9
  unsigned __int64 v46; // x22
  SkillInfo_o *v47; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v49; // x8
  __int64 v50; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v52; // x22
  struct UIRangeLabel_array *v53; // x8
  System_String_o *v54; // x0
  __int64 v55; // x22
  __int64 v56; // x22
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_String_o *v58; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v60; // x22
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v62; // x20
  __int64 v63; // x0

  if ( (byte_43895C2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusBattleConfirmDialog_EndOpen__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&StringLiteral_12182/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_B775C4(&StringLiteral_12183/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/);
    sub_B775C4(&StringLiteral_12186/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_12181/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_9524/*"NO_ENTRY_NAME"*/);
    sub_B775C4(&StringLiteral_12187/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/);
    sub_B775C4(&StringLiteral_12184/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_12185/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/);
    byte_43895C2 = 1;
  }
  this->fields.clickFunc = func;
  sub_B77560(
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_19;
    goto LABEL_10;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_10:
    if ( !System_String__IsNullOrEmpty(v20, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v20 = System_String__Concat_44901936(v20, v21, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v20 = System_String__Concat_44901936(v20, v22, 0LL);
  }
LABEL_19:
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v24, (Il2CppObject *)v20, 0LL);
  v27 = this->fields.messageLabel;
  if ( !v27 )
    goto LABEL_114;
  WrapControlText__textAdjust(messageLabel, Name, v27->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_114;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_114;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12182/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_114;
  v35 = Name;
  v36 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v38 = v36 - 4;
    if ( v36 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_114;
    if ( v38 >= nowSkillInfoList->max_length )
    {
LABEL_119:
      v63 = sub_B776C8(Name);
      sub_B77668(v63, 0LL);
    }
    v39 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v36);
    if ( v39 && v39->fields.id >= 1 && v39->fields.lv >= 1 )
    {
      if ( v38 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v36);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_114;
      if ( v38 >= nowSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v36);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_26844016((SkillIconComponent_o *)Name, v39->fields.id, v39->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_114;
      if ( v38 >= nowSkillNameList->max_length )
        goto LABEL_119;
      v42 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v36);
      Name = SkillInfo__GetName(v39, 0LL);
      if ( !v42 )
        goto LABEL_114;
      UIRangeLabel__Set(v42, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v38 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v36);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v36;
    if ( !nowSkillBaseList )
      goto LABEL_114;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_114;
  v44 = 4LL;
  while ( 1 )
  {
    v45 = nextSkillBaseList->max_length;
    v46 = v44 - 4;
    if ( v44 - 4 >= (int)v45 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_114;
    if ( v46 >= nextSkillInfoList->max_length )
      goto LABEL_119;
    v47 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v44);
    if ( v47 && v47->fields.id >= 1 && v47->fields.lv >= 1 )
    {
      if ( v46 >= v45 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v44);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_114;
      if ( v46 >= nextSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v44);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_26844016((SkillIconComponent_o *)Name, v47->fields.id, v47->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_114;
      v49 = nowSkillInfoList->max_length;
      if ( (__int64)v46 >= (int)v49 )
        goto LABEL_76;
      if ( v46 >= v49 )
        goto LABEL_119;
      v50 = *((_QWORD *)&nowSkillInfoList->obj.klass + v44);
      if ( v50 && *(_DWORD *)(v50 + 16) == v47->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_114;
        if ( v46 >= nextSkillNameList->max_length )
          goto LABEL_119;
        v52 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v44);
        Name = SkillInfo__GetName(v47, 0LL);
        if ( !v52 )
          goto LABEL_114;
      }
      else
      {
LABEL_76:
        v53 = this->fields.nextSkillNameList;
        if ( !v53 )
          goto LABEL_114;
        if ( v46 >= v53->max_length )
          goto LABEL_119;
        v52 = (UIRangeLabel_o *)*((_QWORD *)&v53->obj.klass + v44);
        v54 = SkillInfo__GetName(v47, 0LL);
        Name = System_String__Concat_44901936(v35, v54, 0LL);
        if ( !v52 )
          goto LABEL_114;
      }
      UIRangeLabel__Set(v52, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v46 >= v45 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v44);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v44;
    if ( !nextSkillBaseList )
      goto LABEL_114;
  }
  v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v56 = **(_QWORD **)(v55 + 192);
  if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
    sub_B0F2C4(v56);
  Name = **(System_String_o ***)(v56 + 184);
  if ( !Name )
    goto LABEL_114;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Name,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v58 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v60 = this->fields.nowNpNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9524/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v60 )
      goto LABEL_114;
    v58 = Name;
    nowNpNameLabel = v60;
  }
  UILabel__set_text(nowNpNameLabel, v58, 0LL);
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
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9524/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_116:
      Name = System_String__Concat_44901936(v35, OverwriteTDName, 0LL);
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
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9524/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_117:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_118;
    }
LABEL_114:
    sub_B7769C(Name, OverwriteTDName);
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
  v62 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4388E42 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4388E42 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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