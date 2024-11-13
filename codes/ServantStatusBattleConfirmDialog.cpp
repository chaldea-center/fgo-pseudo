void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
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
  BalanceConfig_c *v12; // x0
  struct UnityEngine_GameObject_array *v13; // x0
  struct UnityEngine_GameObject_array *v14; // x0
  struct SkillIconComponent_array *v15; // x0
  struct SkillIconComponent_array *v16; // x0
  struct UIRangeLabel_array *v17; // x0
  struct UIRangeLabel_array *v18; // x0
  __int64 v19; // x1

  if ( (byte_4B11A1E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v6, v7);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v8, v9);
    sub_1BCA7E0(&UIRangeLabel___TypeInfo, v10, v11);
    byte_4B11A1E = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v12->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v13;
  sub_1BCA784(&this->fields.nowSkillBaseList, v13);
  v14 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v14;
  sub_1BCA784(&this->fields.nextSkillBaseList, v14);
  v15 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v15;
  sub_1BCA784(&this->fields.nowSkillIconList, v15);
  v16 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v16;
  sub_1BCA784(&this->fields.nextSkillIconList, v16);
  v17 = (struct UIRangeLabel_array *)sub_1BCA888(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v17;
  sub_1BCA784(&this->fields.nowSkillNameList, v17);
  v18 = (struct UIRangeLabel_array *)sub_1BCA888(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v18;
  sub_1BCA784(&this->fields.nextSkillNameList, v18);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_32006052(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_32006052(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11A1B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantStatusBattleConfirmDialog_EndClose__, v5, v6);
    byte_4B11A1B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__EndClose(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  __int64 v2; // x2
  UILabel_o *messageLabel; // x0

  if ( (byte_4B11A19 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11A19 = 1;
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
    sub_1BCAA3C(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B11A1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__, method, v2);
    byte_4B11A1D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B11A1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__, method, v2);
    byte_4B11A1C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  System_String_o *v51; // x28
  __int64 v52; // x1
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *messageLabel; // x27
  System_String_o *v56; // x0
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v59; // x8
  UILabel_o *nowSkillTitleLabel; // x27
  UILabel_o *nextSkillTitleLabel; // x27
  UILabel_o *nowNpTitleLabel; // x27
  UILabel_o *nextNpTitleLabel; // x27
  UILabel_o *buttonDecideLabel; // x27
  UILabel_o *buttonCancelLabel; // x27
  long double v66; // q0
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v68; // x27
  __int64 v69; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v71; // x29
  SkillInfo_o *v72; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v75; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v77; // x24
  unsigned __int64 v78; // x9
  unsigned __int64 v79; // x29
  SkillInfo_o *v80; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v82; // x8
  __int64 v83; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v85; // x29
  struct UIRangeLabel_array *v86; // x8
  System_String_o *v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  Il2CppObject *MasterData_object; // x25
  System_String_o *v92; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v94; // x24
  __int64 v95; // x1
  struct UILabel_o *nextNpNameLabel; // x20
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Action_o *v100; // x20

  if ( (byte_4B11A1A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, nowTdInfo, nextTdInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_11983/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11984/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11987/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_11982/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_9430/*"NO_ENTRY_NAME"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_11988/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_11985/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_11986/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, v48, v49);
    byte_4B11A1A = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  if ( isSkillModify )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_16;
    goto LABEL_9;
  }
  v51 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_9:
    if ( !System_String__IsNullOrEmpty(v51, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v51 = System_String__Concat_62401220(v51, v53, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v51 = System_String__Concat_62401220(v51, v54, 0LL);
  }
LABEL_16:
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v56, (Il2CppObject *)v51, 0LL);
  v59 = this->fields.messageLabel;
  if ( !v59 )
    goto LABEL_107;
  WrapControlText__textAdjust(messageLabel, Name, v59->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_107;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_107;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_107;
  v68 = Name;
  v69 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v71 = v69 - 4;
    if ( v69 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_107;
    if ( v71 >= nowSkillInfoList->max_length )
LABEL_112:
      sub_1BCAA44(Name, OverwriteTDName);
    v72 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v69);
    if ( v72 && v72->fields.id >= 1 && v72->fields.lv >= 1 )
    {
      if ( v71 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v69);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_107;
      if ( v71 >= nowSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v69);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_38947272((SkillIconComponent_o *)Name, v72->fields.id, v72->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_107;
      if ( v71 >= nowSkillNameList->max_length )
        goto LABEL_112;
      v75 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v69);
      Name = SkillInfo__GetName(v72, 0LL);
      if ( !v75 )
        goto LABEL_107;
      UIRangeLabel__Set(v75, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v71 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v69);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v69;
    if ( !nowSkillBaseList )
      goto LABEL_107;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_107;
  v77 = 4LL;
  while ( 1 )
  {
    v78 = nextSkillBaseList->max_length;
    v79 = v77 - 4;
    if ( v77 - 4 >= (int)v78 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_107;
    if ( v79 >= nextSkillInfoList->max_length )
      goto LABEL_112;
    v80 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v77);
    if ( v80 && v80->fields.id >= 1 && v80->fields.lv >= 1 )
    {
      if ( v79 >= v78 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v77);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_107;
      if ( v79 >= nextSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v77);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_38947272((SkillIconComponent_o *)Name, v80->fields.id, v80->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_107;
      v82 = nowSkillInfoList->max_length;
      if ( (__int64)v79 >= (int)v82 )
        goto LABEL_72;
      if ( v79 >= v82 )
        goto LABEL_112;
      v83 = *((_QWORD *)&nowSkillInfoList->obj.klass + v77);
      if ( v83 && *(_DWORD *)(v83 + 16) == v80->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_107;
        if ( v79 >= nextSkillNameList->max_length )
          goto LABEL_112;
        v85 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v77);
        Name = SkillInfo__GetName(v80, 0LL);
        if ( !v85 )
          goto LABEL_107;
      }
      else
      {
LABEL_72:
        v86 = this->fields.nextSkillNameList;
        if ( !v86 )
          goto LABEL_107;
        if ( v79 >= v86->max_length )
          goto LABEL_112;
        v85 = (UIRangeLabel_o *)*((_QWORD *)&v86->obj.klass + v77);
        v87 = SkillInfo__GetName(v80, 0LL);
        Name = System_String__Concat_62401220(v68, v87, 0LL);
        if ( !v85 )
          goto LABEL_107;
      }
      UIRangeLabel__Set(v85, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v79 >= v78 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v77);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v77;
    if ( !nextSkillBaseList )
      goto LABEL_107;
  }
  v88 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
    v88 = sub_1C1C6BC(v66);
  v89 = *(_QWORD *)(*(_QWORD *)(v88 + 192) + 16LL);
  if ( (*(_BYTE *)(v89 + 309) & 1) == 0 )
    v89 = sub_1C1C6BC(v66);
  Name = **(System_String_o ***)(v89 + 184);
  if ( !Name )
    goto LABEL_107;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v92 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v94 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v90);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v94 )
      goto LABEL_107;
    v92 = Name;
    nowNpNameLabel = v94;
  }
  UILabel__set_text(nowNpNameLabel, v92, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_109:
      Name = System_String__Concat_62401220(v68, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_107;
      goto LABEL_110;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_110:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_111;
    }
LABEL_107:
    sub_1BCAA3C(Name, OverwriteTDName);
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
  v100 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v97, v98, v99);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A065BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06574;
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
  if ( (byte_4B11A1F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B11A1F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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