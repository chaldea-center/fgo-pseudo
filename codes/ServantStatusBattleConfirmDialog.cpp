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

  if ( (byte_4A4A18E & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&BaseDialog_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B863B8(&SkillIconComponent___TypeInfo, v5);
    sub_1B863B8(&UIRangeLabel___TypeInfo, v6);
    byte_4A4A18E = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B86460(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowSkillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct UnityEngine_GameObject_array *)sub_1B86460(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v11;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nextSkillBaseList, (int32_t)v11, v12, v13);
  v14 = (struct SkillIconComponent_array *)sub_1B86460(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowSkillIconList, (int32_t)v14, v15, v16);
  v17 = (struct SkillIconComponent_array *)sub_1B86460(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v17;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nextSkillIconList, (int32_t)v17, v18, v19);
  v20 = (struct UIRangeLabel_array *)sub_1B86460(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v20;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowSkillNameList, (int32_t)v20, v21, v22);
  v23 = (struct UIRangeLabel_array *)sub_1B86460(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v23;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nextSkillNameList, (int32_t)v23, v24, v25);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_32785548(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_32785548(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A4A18A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_ServantStatusBattleConfirmDialog_EndClose__, v6);
    byte_4A4A18A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8635C(p_closeCallbackFunc, 0, v5, v6);
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

  if ( (byte_4A4A188 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A188 = 1;
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
    sub_1B86614(messageLabel, method);
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

  if ( (byte_4A4A18C & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__, method);
    byte_4A4A18C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A4A18B & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__, method);
    byte_4A4A18B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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
  long double v39; // q0
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v41; // x27
  __int64 v42; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v44; // x29
  SkillInfo_o *v45; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v48; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v50; // x24
  unsigned __int64 v51; // x9
  unsigned __int64 v52; // x29
  SkillInfo_o *v53; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v55; // x8
  __int64 v56; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v58; // x29
  struct UIRangeLabel_array *v59; // x8
  System_String_o *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *v64; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v66; // x24
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v68; // x20

  if ( (byte_4A4A189 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, nowTdInfo);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    sub_1B863B8(&StringLiteral_11694/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v22);
    sub_1B863B8(&StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v23);
    sub_1B863B8(&StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, v24);
    sub_1B863B8(&StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, v25);
    sub_1B863B8(&StringLiteral_11692/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v26);
    sub_1B863B8(&StringLiteral_9176/*"NO_ENTRY_NAME"*/, v27);
    sub_1B863B8(&StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v28);
    byte_4A4A189 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)nextTdInfo,
    (const MethodInfo *)isTdModify);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  v32 = this->fields.messageLabel;
  if ( !v32 )
    goto LABEL_94;
  WrapControlText__textAdjust(messageLabel, Name, v32->fields.mFontSize, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_94;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_94;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_94;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11694/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_94;
  v41 = Name;
  v42 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v44 = v42 - 4;
    if ( v42 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_94;
    if ( v44 >= nowSkillInfoList->max_length )
LABEL_99:
      sub_1B8661C(Name, OverwriteTDName);
    v45 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v42);
    if ( v45 && v45->fields.id >= 1 && v45->fields.lv >= 1 )
    {
      if ( v44 >= max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v42);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_94;
      if ( v44 >= nowSkillIconList->max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v42);
      if ( !Name )
        goto LABEL_94;
      SkillIconComponent__Set_39193508((SkillIconComponent_o *)Name, v45->fields.id, v45->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_94;
      if ( v44 >= nowSkillNameList->max_length )
        goto LABEL_99;
      v48 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v42);
      Name = SkillInfo__GetName(v45, 0LL);
      if ( !v48 )
        goto LABEL_94;
      UIRangeLabel__Set(v48, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v44 >= max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v42);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v42;
    if ( !nowSkillBaseList )
      goto LABEL_94;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_94;
  v50 = 4LL;
  while ( 1 )
  {
    v51 = nextSkillBaseList->max_length;
    v52 = v50 - 4;
    if ( v50 - 4 >= (int)v51 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_94;
    if ( v52 >= nextSkillInfoList->max_length )
      goto LABEL_99;
    v53 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v50);
    if ( v53 && v53->fields.id >= 1 && v53->fields.lv >= 1 )
    {
      if ( v52 >= v51 )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v50);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_94;
      if ( v52 >= nextSkillIconList->max_length )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v50);
      if ( !Name )
        goto LABEL_94;
      SkillIconComponent__Set_39193508((SkillIconComponent_o *)Name, v53->fields.id, v53->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_94;
      v55 = nowSkillInfoList->max_length;
      if ( (__int64)v52 >= (int)v55 )
        goto LABEL_59;
      if ( v52 >= v55 )
        goto LABEL_99;
      v56 = *((_QWORD *)&nowSkillInfoList->obj.klass + v50);
      if ( v56 && *(_DWORD *)(v56 + 16) == v53->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_94;
        if ( v52 >= nextSkillNameList->max_length )
          goto LABEL_99;
        v58 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v50);
        Name = SkillInfo__GetName(v53, 0LL);
        if ( !v58 )
          goto LABEL_94;
      }
      else
      {
LABEL_59:
        v59 = this->fields.nextSkillNameList;
        if ( !v59 )
          goto LABEL_94;
        if ( v52 >= v59->max_length )
          goto LABEL_99;
        v58 = (UIRangeLabel_o *)*((_QWORD *)&v59->obj.klass + v50);
        v60 = SkillInfo__GetName(v53, 0LL);
        Name = System_String__Concat_61645176(v41, v60, 0LL);
        if ( !v58 )
          goto LABEL_94;
      }
      UIRangeLabel__Set(v58, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v52 >= v51 )
        goto LABEL_99;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v50);
      if ( !Name )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v50;
    if ( !nextSkillBaseList )
      goto LABEL_94;
  }
  v61 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
    v61 = sub_1BD6A48(v39);
  v62 = *(_QWORD *)(*(_QWORD *)(v61 + 192) + 16LL);
  if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
    v62 = sub_1BD6A48(v39);
  Name = **(System_String_o ***)(v62 + 184);
  if ( !Name )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v64 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v66 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9176/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v66 )
      goto LABEL_94;
    v64 = Name;
    nowNpNameLabel = v66;
  }
  UILabel__set_text(nowNpNameLabel, v64, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9176/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_96:
      Name = System_String__Concat_61645176(v41, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_94;
      goto LABEL_97;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9176/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_97:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_98;
    }
LABEL_94:
    sub_1B86614(Name, OverwriteTDName);
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
  v68 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
}


System_String_o *__fastcall ServantStatusBattleConfirmDialog__get_closeBtnPath(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4A18D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_4A4A18D = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CD170;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD128;
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
  if ( (byte_4A4A18F & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isDecide);
    byte_4A4A18F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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