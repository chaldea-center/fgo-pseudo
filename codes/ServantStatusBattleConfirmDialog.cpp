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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UnityEngine_GameObject_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct SkillIconComponent_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UIRangeLabel_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UIRangeLabel_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4C1DDB5 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&BaseDialog_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1C3B764(&SkillIconComponent___TypeInfo, v5);
    sub_1C3B764(&UIRangeLabel___TypeInfo, v6);
    byte_4C1DDB5 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nowSkillBaseList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v15;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nextSkillBaseList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (struct SkillIconComponent_array *)sub_1C3B80C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v22;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nowSkillIconList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (struct SkillIconComponent_array *)sub_1C3B80C(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v29;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nextSkillIconList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (struct UIRangeLabel_array *)sub_1C3B80C(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v36;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nowSkillNameList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (struct UIRangeLabel_array *)sub_1C3B80C(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v43;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nextSkillNameList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_33448368(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_33448368(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4C1DDB2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ServantStatusBattleConfirmDialog_EndClose__, v10);
    byte_4C1DDB2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__EndClose(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C3B708(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
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

  if ( (byte_4C1DDB0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DDB0 = 1;
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
    sub_1C3B9C0(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C1DDB4 & 1) == 0 )
  {
    sub_1C3B764(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__, method);
    byte_4C1DDB4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickDecide(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C1DDB3 & 1) == 0 )
  {
    sub_1C3B764(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__, method);
    byte_4C1DDB3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
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
  UILabel_o *messageLabel; // x27
  System_String_o *v39; // x0
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v42; // x8
  UILabel_o *nowSkillTitleLabel; // x27
  UILabel_o *nextSkillTitleLabel; // x27
  UILabel_o *nowNpTitleLabel; // x27
  UILabel_o *nextNpTitleLabel; // x27
  UILabel_o *buttonDecideLabel; // x27
  UILabel_o *buttonCancelLabel; // x27
  long double v49; // q0
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v51; // x27
  __int64 v52; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v54; // x29
  SkillInfo_o *v55; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v58; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v60; // x24
  unsigned __int64 v61; // x9
  unsigned __int64 v62; // x29
  SkillInfo_o *v63; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v65; // x8
  __int64 v66; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v68; // x29
  struct UIRangeLabel_array *v69; // x8
  System_String_o *v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *v74; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v76; // x24
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v78; // x20

  if ( (byte_4C1DDB1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, nowTdInfo);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v22);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_1C3B764(&StringLiteral_12096/*"SUMMON_AUTOSALE_FOU_TXT"*/, v24);
    sub_1C3B764(&StringLiteral_12097/*"SUMMON_AUTOSALE_MSG"*/, v25);
    sub_1C3B764(&StringLiteral_12100/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v26);
    sub_1C3B764(&StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, v27);
    sub_1C3B764(&StringLiteral_3807/*"CP00858"*/, v28);
    sub_1C3B764(&StringLiteral_12095/*"SUMMON_AUTOSALE_EXP_TXT"*/, v29);
    sub_1C3B764(&StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v30);
    sub_1C3B764(&StringLiteral_12101/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v31);
    sub_1C3B764(&StringLiteral_12098/*"SUMMON_AUTOSALE_TITLE"*/, v32);
    sub_1C3B764(&StringLiteral_1/*""*/, v33);
    sub_1C3B764(&StringLiteral_12099/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v34);
    byte_4C1DDB1 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.clickFunc,
    (int64_t)func,
    (int64_t)nextTdInfo,
    isTdModify,
    (System_String_o *)nowSkillInfoList,
    (BattleSetupInfo_o *)nextSkillInfoList,
    (FollowerInfo_o *)isSkillModify,
    (PartyListViewItem_o *)func);
  if ( isSkillModify )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_16;
    goto LABEL_9;
  }
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_9:
    if ( !System_String__IsNullOrEmpty(v35, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
      v35 = System_String__Concat_63368612(v35, v36, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12097/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
    v35 = System_String__Concat_63368612(v35, v37, 0LL);
  }
LABEL_16:
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  Name = System_String__Format(v39, (Il2CppObject *)v35, 0LL);
  v42 = this->fields.messageLabel;
  if ( !v42 )
    goto LABEL_107;
  WrapControlText__textAdjust(messageLabel, Name, v42->fields.mFontSize, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"CP00858"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_107;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_107;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_107;
  v51 = Name;
  v52 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v54 = v52 - 4;
    if ( v52 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_107;
    if ( v54 >= nowSkillInfoList->max_length )
LABEL_112:
      sub_1C3B9C8(Name, OverwriteTDName);
    v55 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v52);
    if ( v55 && v55->fields.id >= 1 && v55->fields.lv >= 1 )
    {
      if ( v54 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v52);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_107;
      if ( v54 >= nowSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v52);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_39659964((SkillIconComponent_o *)Name, v55->fields.id, v55->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_107;
      if ( v54 >= nowSkillNameList->max_length )
        goto LABEL_112;
      v58 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v52);
      Name = SkillInfo__GetName(v55, 0LL);
      if ( !v58 )
        goto LABEL_107;
      UIRangeLabel__Set(v58, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v54 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v52);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v52;
    if ( !nowSkillBaseList )
      goto LABEL_107;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_107;
  v60 = 4LL;
  while ( 1 )
  {
    v61 = nextSkillBaseList->max_length;
    v62 = v60 - 4;
    if ( v60 - 4 >= (int)v61 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_107;
    if ( v62 >= nextSkillInfoList->max_length )
      goto LABEL_112;
    v63 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v60);
    if ( v63 && v63->fields.id >= 1 && v63->fields.lv >= 1 )
    {
      if ( v62 >= v61 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v60);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_107;
      if ( v62 >= nextSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v60);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_39659964((SkillIconComponent_o *)Name, v63->fields.id, v63->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_107;
      v65 = nowSkillInfoList->max_length;
      if ( (__int64)v62 >= (int)v65 )
        goto LABEL_72;
      if ( v62 >= v65 )
        goto LABEL_112;
      v66 = *((_QWORD *)&nowSkillInfoList->obj.klass + v60);
      if ( v66 && *(_DWORD *)(v66 + 16) == v63->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_107;
        if ( v62 >= nextSkillNameList->max_length )
          goto LABEL_112;
        v68 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v60);
        Name = SkillInfo__GetName(v63, 0LL);
        if ( !v68 )
          goto LABEL_107;
      }
      else
      {
LABEL_72:
        v69 = this->fields.nextSkillNameList;
        if ( !v69 )
          goto LABEL_107;
        if ( v62 >= v69->max_length )
          goto LABEL_112;
        v68 = (UIRangeLabel_o *)*((_QWORD *)&v69->obj.klass + v60);
        v70 = SkillInfo__GetName(v63, 0LL);
        Name = System_String__Concat_63368612(v51, v70, 0LL);
        if ( !v68 )
          goto LABEL_107;
      }
      UIRangeLabel__Set(v68, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v62 >= v61 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v60);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v60;
    if ( !nextSkillBaseList )
      goto LABEL_107;
  }
  v71 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
    v71 = sub_1C8D640(v49);
  v72 = *(_QWORD *)(*(_QWORD *)(v71 + 192) + 16LL);
  if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
    v72 = sub_1C8D640(v49);
  Name = **(System_String_o ***)(v72 + 184);
  if ( !Name )
    goto LABEL_107;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
  {
    Name = TreasureDvcInfo__GetName(nowTdInfo, svtId, 0LL);
    if ( !MasterData_object )
      goto LABEL_107;
    Name = ServantLimitAddMaster__GetOverwriteTDName(
             (ServantLimitAddMaster_o *)MasterData_object,
             svtId,
             nowLimitCount,
             Name,
             0,
             0LL);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_107;
    v74 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v76 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL);
    if ( !v76 )
      goto LABEL_107;
    v74 = Name;
    nowNpNameLabel = v76;
  }
  UILabel__set_text(nowNpNameLabel, v74, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL);
LABEL_109:
      Name = System_String__Concat_63368612(v51, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_107;
      goto LABEL_110;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_110:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_111;
    }
LABEL_107:
    sub_1C3B9C0(Name, OverwriteTDName);
  }
  Name = TreasureDvcInfo__GetName(nextTdInfo, svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_107;
  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                      (ServantLimitAddMaster_o *)MasterData_object,
                      svtId,
                      nextLimitCount,
                      Name,
                      0,
                      0LL);
  if ( !nowTdInfo || nowTdInfo->fields.id != nextTdInfo->fields.id )
  {
    nextNpNameLabel = this->fields.nextNpNameLabel;
    goto LABEL_109;
  }
  Name = (System_String_o *)this->fields.nextNpNameLabel;
  if ( !Name )
    goto LABEL_107;
LABEL_111:
  UILabel__set_text((UILabel_o *)Name, OverwriteTDName, 0LL);
  this->fields.isButtonEnable = 0;
  v78 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A76FF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A76FAC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusBattleConfirmDialog_ClickDelegate__BeginInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C1DDB6 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C1DDB6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}