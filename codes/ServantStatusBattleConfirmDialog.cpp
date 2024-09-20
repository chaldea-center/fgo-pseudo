void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  struct SkillIconComponent_array *v6; // x0
  struct SkillIconComponent_array *v7; // x0
  struct UIRangeLabel_array *v8; // x0
  struct UIRangeLabel_array *v9; // x0

  if ( (byte_4A56CA4 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&SkillIconComponent___TypeInfo);
    sub_1B885B0(&UIRangeLabel___TypeInfo);
    byte_4A56CA4 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v4;
  sub_1B88554(&this->fields.nowSkillBaseList, v4);
  v5 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v5;
  sub_1B88554(&this->fields.nextSkillBaseList, v5);
  v6 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v6;
  sub_1B88554(&this->fields.nowSkillIconList, v6);
  v7 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v7;
  sub_1B88554(&this->fields.nextSkillIconList, v7);
  v8 = (struct UIRangeLabel_array *)sub_1B88658(
                                      UIRangeLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v8;
  sub_1B88554(&this->fields.nowSkillNameList, v8);
  v9 = (struct UIRangeLabel_array *)sub_1B88658(
                                      UIRangeLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v9;
  sub_1B88554(&this->fields.nextSkillNameList, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_31635476(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_31635476(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A56CA1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusBattleConfirmDialog_EndClose__);
    byte_4A56CA1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0LL);
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
  UILabel_o *messageLabel; // x0

  if ( (byte_4A56C9F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56C9F = 1;
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
    sub_1B8880C(messageLabel, method);
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

  if ( (byte_4A56CA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    byte_4A56CA3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A56CA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    byte_4A56CA2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
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
  System_String_o *v20; // x28
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *messageLabel; // x27
  System_String_o *v24; // x0
  System_String_o *Name; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v27; // x8
  UILabel_o *nowSkillTitleLabel; // x27
  UILabel_o *nextSkillTitleLabel; // x27
  UILabel_o *nowNpTitleLabel; // x27
  UILabel_o *nextNpTitleLabel; // x27
  UILabel_o *buttonDecideLabel; // x27
  UILabel_o *buttonCancelLabel; // x27
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v35; // x27
  __int64 v36; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v38; // x29
  SkillInfo_o *v39; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v42; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v44; // x24
  unsigned __int64 v45; // x9
  unsigned __int64 v46; // x29
  SkillInfo_o *v47; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v49; // x8
  __int64 v50; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v52; // x29
  struct UIRangeLabel_array *v53; // x8
  System_String_o *v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *v58; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v60; // x24
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v62; // x20

  if ( (byte_4A56CA0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusBattleConfirmDialog_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_11845/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_1B885B0(&StringLiteral_11846/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/);
    sub_1B885B0(&StringLiteral_11849/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_11844/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9298/*"NO_ENTRY_NAME"*/);
    sub_1B885B0(&StringLiteral_11850/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/);
    sub_1B885B0(&StringLiteral_11847/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11848/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/);
    byte_4A56CA0 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B88554(&this->fields.clickFunc, func);
  if ( isSkillModify )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
    if ( !isTdModify )
      goto LABEL_16;
    goto LABEL_9;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( isTdModify )
  {
LABEL_9:
    if ( !System_String__IsNullOrEmpty(v20, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v20 = System_String__Concat_61707032(v20, v21, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v20 = System_String__Concat_61707032(v20, v22, 0LL);
  }
LABEL_16:
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v24, (Il2CppObject *)v20, 0LL);
  v27 = this->fields.messageLabel;
  if ( !v27 )
    goto LABEL_107;
  WrapControlText__textAdjust(messageLabel, Name, v27->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11849/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11849/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11847/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11847/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_107;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_107;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_107;
  v35 = Name;
  v36 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v38 = v36 - 4;
    if ( v36 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_107;
    if ( v38 >= nowSkillInfoList->max_length )
LABEL_112:
      sub_1B88814(Name, OverwriteTDName);
    v39 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v36);
    if ( v39 && v39->fields.id >= 1 && v39->fields.lv >= 1 )
    {
      if ( v38 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v36);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_107;
      if ( v38 >= nowSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v36);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_38235592((SkillIconComponent_o *)Name, v39->fields.id, v39->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_107;
      if ( v38 >= nowSkillNameList->max_length )
        goto LABEL_112;
      v42 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v36);
      Name = SkillInfo__GetName(v39, 0LL);
      if ( !v42 )
        goto LABEL_107;
      UIRangeLabel__Set(v42, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v38 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v36);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v36;
    if ( !nowSkillBaseList )
      goto LABEL_107;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_107;
  v44 = 4LL;
  while ( 1 )
  {
    v45 = nextSkillBaseList->max_length;
    v46 = v44 - 4;
    if ( v44 - 4 >= (int)v45 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_107;
    if ( v46 >= nextSkillInfoList->max_length )
      goto LABEL_112;
    v47 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v44);
    if ( v47 && v47->fields.id >= 1 && v47->fields.lv >= 1 )
    {
      if ( v46 >= v45 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v44);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_107;
      if ( v46 >= nextSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v44);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_38235592((SkillIconComponent_o *)Name, v47->fields.id, v47->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_107;
      v49 = nowSkillInfoList->max_length;
      if ( (__int64)v46 >= (int)v49 )
        goto LABEL_72;
      if ( v46 >= v49 )
        goto LABEL_112;
      v50 = *((_QWORD *)&nowSkillInfoList->obj.klass + v44);
      if ( v50 && *(_DWORD *)(v50 + 16) == v47->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_107;
        if ( v46 >= nextSkillNameList->max_length )
          goto LABEL_112;
        v52 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v44);
        Name = SkillInfo__GetName(v47, 0LL);
        if ( !v52 )
          goto LABEL_107;
      }
      else
      {
LABEL_72:
        v53 = this->fields.nextSkillNameList;
        if ( !v53 )
          goto LABEL_107;
        if ( v46 >= v53->max_length )
          goto LABEL_112;
        v52 = (UIRangeLabel_o *)*((_QWORD *)&v53->obj.klass + v44);
        v54 = SkillInfo__GetName(v47, 0LL);
        Name = System_String__Concat_61707032(v35, v54, 0LL);
        if ( !v52 )
          goto LABEL_107;
      }
      UIRangeLabel__Set(v52, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v46 >= v45 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v44);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v44;
    if ( !nextSkillBaseList )
      goto LABEL_107;
  }
  v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
    v55 = sub_1BDA48C(v55);
  v56 = *(_QWORD *)(*(_QWORD *)(v55 + 192) + 16LL);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1BDA48C(v56);
  Name = **(System_String_o ***)(v56 + 184);
  if ( !Name )
    goto LABEL_107;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v58 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v60 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v60 )
      goto LABEL_107;
    v58 = Name;
    nowNpNameLabel = v60;
  }
  UILabel__set_text(nowNpNameLabel, v58, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_109:
      Name = System_String__Concat_61707032(v35, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_107;
      goto LABEL_110;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_110:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_111;
    }
LABEL_107:
    sub_1B8880C(Name, OverwriteTDName);
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
  v62 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C82F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C82A8;
}


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
  if ( (byte_4A56CA5 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56CA5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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