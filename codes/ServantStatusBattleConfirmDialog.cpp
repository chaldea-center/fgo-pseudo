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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SkillIconComponent_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SkillIconComponent_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UIRangeLabel_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UIRangeLabel_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B17B3C & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&BaseDialog_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v5);
    sub_1BCAFF8(&UIRangeLabel___TypeInfo, v6);
    byte_4B17B3C = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowSkillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nextSkillBaseList, (int32_t)v11, v12, v13);
  v14 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowSkillIconList, (int32_t)v14, v15, v16);
  v17 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nextSkillIconList, (int32_t)v17, v18, v19);
  v20 = (struct UIRangeLabel_array *)sub_1BCB0A0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowSkillNameList, (int32_t)v20, v21, v22);
  v23 = (struct UIRangeLabel_array *)sub_1BCB0A0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nextSkillNameList, (int32_t)v23, v24, v25);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_33015228(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_33015228(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B17B38 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_ServantStatusBattleConfirmDialog_EndClose__, v6);
    byte_4B17B38 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__EndClose(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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

  if ( (byte_4B17B36 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17B36 = 1;
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
    sub_1BCB254(messageLabel, method);
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

  if ( (byte_4B17B3A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__, method);
    byte_4B17B3A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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

  if ( (byte_4B17B39 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__, method);
    byte_4B17B39 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UILabel_o *messageLabel; // x27
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v32; // x8
  UILabel_o *nowSkillTitleLabel; // x27
  UILabel_o *nextSkillTitleLabel; // x27
  UILabel_o *nowNpTitleLabel; // x27
  UILabel_o *nextNpTitleLabel; // x27
  UILabel_o *buttonDecideLabel; // x27
  UILabel_o *buttonCancelLabel; // x27
  __int64 v39; // x2
  long double v40; // q0
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v42; // x27
  __int64 v43; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v45; // x29
  SkillInfo_o *v46; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v49; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v51; // x24
  unsigned __int64 v52; // x9
  unsigned __int64 v53; // x29
  SkillInfo_o *v54; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v56; // x8
  __int64 v57; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v59; // x29
  struct UIRangeLabel_array *v60; // x8
  System_String_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *v65; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v67; // x24
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v69; // x20

  if ( (byte_4B17B37 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, nowTdInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v19);
    sub_1BCAFF8(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    sub_1BCAFF8(&StringLiteral_11794/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v22);
    sub_1BCAFF8(&StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v23);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v24);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v25);
    sub_1BCAFF8(&StringLiteral_11792/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v26);
    sub_1BCAFF8(&StringLiteral_9253/*"NO_ENTRY_NAME"*/, v27);
    sub_1BCAFF8(&StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v28);
    byte_4B17B37 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)nextTdInfo,
    (const MethodInfo *)isTdModify);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11792/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  v32 = this->fields.messageLabel;
  if ( !v32 )
    goto LABEL_94;
  WrapControlText__textAdjust(messageLabel, Name, v32->fields.mFontSize, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_94;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_94;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_94;
  v42 = Name;
  v43 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v45 = v43 - 4;
    if ( v43 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_94;
    if ( v45 >= nowSkillInfoList->max_length )
LABEL_99:
      sub_1BCB25C(Name, OverwriteTDName, v39);
    v46 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v43);
    if ( v46 && v46->fields.id >= 1 && v46->fields.lv >= 1 )
    {
      if ( v45 >= max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v43);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_94;
      if ( v45 >= nowSkillIconList->max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v43);
      if ( !Name )
        goto LABEL_94;
      SkillIconComponent__Set_40207908((SkillIconComponent_o *)Name, v46->fields.id, v46->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_94;
      if ( v45 >= nowSkillNameList->max_length )
        goto LABEL_99;
      v49 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v43);
      Name = SkillInfo__GetName(v46, 0LL);
      if ( !v49 )
        goto LABEL_94;
      UIRangeLabel__Set(v49, Name, 0LL, 1, 0, 0, 0LL);
    }
    else
    {
      if ( v45 >= max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v43);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v43;
    if ( !nowSkillBaseList )
      goto LABEL_94;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_94;
  v51 = 4LL;
  while ( 1 )
  {
    v52 = nextSkillBaseList->max_length;
    v53 = v51 - 4;
    if ( v51 - 4 >= (int)v52 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_94;
    if ( v53 >= nextSkillInfoList->max_length )
      goto LABEL_99;
    v54 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v51);
    if ( v54 && v54->fields.id >= 1 && v54->fields.lv >= 1 )
    {
      if ( v53 >= v52 )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_94;
      if ( v53 >= nextSkillIconList->max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v51);
      if ( !Name )
        goto LABEL_94;
      SkillIconComponent__Set_40207908((SkillIconComponent_o *)Name, v54->fields.id, v54->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_94;
      v56 = nowSkillInfoList->max_length;
      if ( (__int64)v53 >= (int)v56 )
        goto LABEL_59;
      if ( v53 >= v56 )
        goto LABEL_99;
      v57 = *((_QWORD *)&nowSkillInfoList->obj.klass + v51);
      if ( v57 && *(_DWORD *)(v57 + 16) == v54->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_94;
        if ( v53 >= nextSkillNameList->max_length )
          goto LABEL_99;
        v59 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v51);
        Name = SkillInfo__GetName(v54, 0LL);
        if ( !v59 )
          goto LABEL_94;
      }
      else
      {
LABEL_59:
        v60 = this->fields.nextSkillNameList;
        if ( !v60 )
          goto LABEL_94;
        if ( v53 >= v60->max_length )
          goto LABEL_99;
        v59 = (UIRangeLabel_o *)*((_QWORD *)&v60->obj.klass + v51);
        v61 = SkillInfo__GetName(v54, 0LL);
        Name = System_String__Concat_62450424(v42, v61, 0LL);
        if ( !v59 )
          goto LABEL_94;
      }
      UIRangeLabel__Set(v59, Name, 0LL, 1, 0, 0, 0LL);
    }
    else
    {
      if ( v53 >= v52 )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v51;
    if ( !nextSkillBaseList )
      goto LABEL_94;
  }
  v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
    v62 = sub_1C1B45C(v40);
  v63 = *(_QWORD *)(*(_QWORD *)(v62 + 192) + 16LL);
  if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
    v63 = sub_1C1B45C(v40);
  Name = **(System_String_o ***)(v63 + 184);
  if ( !Name )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
  {
    Name = TreasureDvcInfo__GetName(nowTdInfo, svtId, 0LL);
    if ( !MasterData_object )
      goto LABEL_94;
    Name = ServantLimitAddMaster__GetOverwriteTDName(
             (ServantLimitAddMaster_o *)MasterData_object,
             svtId,
             nowLimitCount,
             Name,
             0,
             0LL);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_94;
    v65 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v67 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v67 )
      goto LABEL_94;
    v65 = Name;
    nowNpNameLabel = v67;
  }
  UILabel__set_text(nowNpNameLabel, v65, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_96:
      Name = System_String__Concat_62450424(v42, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_94;
      goto LABEL_97;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_97:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_98;
    }
LABEL_94:
    sub_1BCB254(Name, OverwriteTDName);
  }
  Name = TreasureDvcInfo__GetName(nextTdInfo, svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_94;
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
    goto LABEL_96;
  }
  Name = (System_String_o *)this->fields.nextNpNameLabel;
  if ( !Name )
    goto LABEL_94;
LABEL_98:
  UILabel__set_text((UILabel_o *)Name, OverwriteTDName, 0LL);
  this->fields.isButtonEnable = 0;
  v69 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


System_String_o *__fastcall ServantStatusBattleConfirmDialog__get_closeBtnPath(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17B3B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15507/*"Window/CancelButton"*/, method);
    byte_4B17B3B = 1;
  }
  return (System_String_o *)StringLiteral_15507/*"Window/CancelButton"*/;
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0EAEC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EAA4;
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
  if ( (byte_4B17B3D & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isDecide);
    byte_4B17B3D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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