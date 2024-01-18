void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UnityEngine_GameObject_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct SkillIconComponent_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UIRangeLabel_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UIRangeLabel_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_4185F80 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v5);
    sub_B2C35C(&UIRangeLabel___TypeInfo, v6);
    byte_4185F80 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowSkillBaseList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nextSkillBaseList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowSkillIconList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nextSkillIconList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UIRangeLabel_array *)sub_B2C374(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowSkillNameList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct UIRangeLabel_array *)sub_B2C374(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nextSkillNameList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_21716444(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_21716444(
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
  System_Action_o *v11; // x20

  if ( (byte_4185F7D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantStatusBattleConfirmDialog_EndClose__, v10);
    byte_4185F7D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4185F7B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4185F7B = 1;
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
    sub_B2C434(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4185F7F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F7F = 1;
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

  if ( (byte_4185F7E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F7E = 1;
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
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v42; // x8
  UILabel_o *nowSkillTitleLabel; // x22
  UILabel_o *nextSkillTitleLabel; // x22
  UILabel_o *nowNpTitleLabel; // x22
  UILabel_o *nextNpTitleLabel; // x22
  UILabel_o *buttonDecideLabel; // x22
  UILabel_o *buttonCancelLabel; // x22
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v50; // x27
  __int64 v51; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v53; // x28
  SkillInfo_o *v54; // x22
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v57; // x28
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v59; // x24
  unsigned __int64 v60; // x9
  unsigned __int64 v61; // x22
  SkillInfo_o *v62; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v64; // x8
  __int64 v65; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v67; // x22
  struct UIRangeLabel_array *v68; // x8
  System_String_o *v69; // x0
  __int64 v70; // x22
  __int64 v71; // x22
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_String_o *v73; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v75; // x22
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v77; // x20
  __int64 v78; // x0

  if ( (byte_4185F7C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, nowTdInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B2C35C(&StringLiteral_11948/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v24);
    sub_B2C35C(&StringLiteral_11949/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, v25);
    sub_B2C35C(&StringLiteral_11952/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v27);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v28);
    sub_B2C35C(&StringLiteral_11947/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v29);
    sub_B2C35C(&StringLiteral_9354/*"NO_ENTRY_NAME"*/, v30);
    sub_B2C35C(&StringLiteral_11953/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, v31);
    sub_B2C35C(&StringLiteral_11950/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v32);
    sub_B2C35C(&StringLiteral_1/*""*/, v33);
    sub_B2C35C(&StringLiteral_11951/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, v34);
    byte_4185F7C = 1;
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_19;
    goto LABEL_10;
  }
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_10:
    if ( !System_String__IsNullOrEmpty(v35, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11953/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v35 = System_String__Concat_44305532(v35, v36, 0LL);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v35 = System_String__Concat_44305532(v35, v37, 0LL);
  }
LABEL_19:
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v39, (Il2CppObject *)v35, 0LL);
  v42 = this->fields.messageLabel;
  if ( !v42 )
    goto LABEL_114;
  WrapControlText__textAdjust(messageLabel, Name, v42->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11952/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11952/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_114;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_114;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_114;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_114;
  v50 = Name;
  v51 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v53 = v51 - 4;
    if ( v51 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_114;
    if ( v53 >= nowSkillInfoList->max_length )
    {
LABEL_119:
      v78 = sub_B2C460(Name);
      sub_B2C400(v78, 0LL);
    }
    v54 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v51);
    if ( v54 && v54->fields.id >= 1 && v54->fields.lv >= 1 )
    {
      if ( v53 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_114;
      if ( v53 >= nowSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v51);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_23787276((SkillIconComponent_o *)Name, v54->fields.id, v54->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_114;
      if ( v53 >= nowSkillNameList->max_length )
        goto LABEL_119;
      v57 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v51);
      Name = SkillInfo__GetName(v54, 0LL);
      if ( !v57 )
        goto LABEL_114;
      UIRangeLabel__Set(v57, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v53 >= max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v51;
    if ( !nowSkillBaseList )
      goto LABEL_114;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_114;
  v59 = 4LL;
  while ( 1 )
  {
    v60 = nextSkillBaseList->max_length;
    v61 = v59 - 4;
    if ( v59 - 4 >= (int)v60 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_114;
    if ( v61 >= nextSkillInfoList->max_length )
      goto LABEL_119;
    v62 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v59);
    if ( v62 && v62->fields.id >= 1 && v62->fields.lv >= 1 )
    {
      if ( v61 >= v60 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v59);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_114;
      if ( v61 >= nextSkillIconList->max_length )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v59);
      if ( !Name )
        goto LABEL_114;
      SkillIconComponent__Set_23787276((SkillIconComponent_o *)Name, v62->fields.id, v62->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_114;
      v64 = nowSkillInfoList->max_length;
      if ( (__int64)v61 >= (int)v64 )
        goto LABEL_76;
      if ( v61 >= v64 )
        goto LABEL_119;
      v65 = *((_QWORD *)&nowSkillInfoList->obj.klass + v59);
      if ( v65 && *(_DWORD *)(v65 + 16) == v62->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_114;
        if ( v61 >= nextSkillNameList->max_length )
          goto LABEL_119;
        v67 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v59);
        Name = SkillInfo__GetName(v62, 0LL);
        if ( !v67 )
          goto LABEL_114;
      }
      else
      {
LABEL_76:
        v68 = this->fields.nextSkillNameList;
        if ( !v68 )
          goto LABEL_114;
        if ( v61 >= v68->max_length )
          goto LABEL_119;
        v67 = (UIRangeLabel_o *)*((_QWORD *)&v68->obj.klass + v59);
        v69 = SkillInfo__GetName(v62, 0LL);
        Name = System_String__Concat_44305532(v50, v69, 0LL);
        if ( !v67 )
          goto LABEL_114;
      }
      UIRangeLabel__Set(v67, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v61 >= v60 )
        goto LABEL_119;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v59);
      if ( !Name )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v59;
    if ( !nextSkillBaseList )
      goto LABEL_114;
  }
  v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v71 = **(_QWORD **)(v70 + 192);
  if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
    sub_AC505C(v71);
  Name = **(System_String_o ***)(v71 + 184);
  if ( !Name )
    goto LABEL_114;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Name,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v73 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v75 = this->fields.nowNpNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v75 )
      goto LABEL_114;
    v73 = Name;
    nowNpNameLabel = v75;
  }
  UILabel__set_text(nowNpNameLabel, v73, 0LL);
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
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_116:
      Name = System_String__Concat_44305532(v50, OverwriteTDName, 0LL);
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
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_117:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_118;
    }
LABEL_114:
    sub_B2C434(Name, OverwriteTDName);
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
  v77 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185419 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4185419 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusBattleConfirmDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusBattleConfirmDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}