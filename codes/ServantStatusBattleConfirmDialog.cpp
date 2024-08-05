void __fastcall ServantStatusBattleConfirmDialog___ctor(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0

  if ( (byte_49FA1CA & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&BaseDialog_TypeInfo, v3);
    sub_1B64870(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B64870(&SkillIconComponent___TypeInfo, v5);
    sub_1B64870(&UIRangeLabel___TypeInfo, v6);
    byte_49FA1CA = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.nowSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64918(
                                                                           UnityEngine_GameObject___TypeInfo,
                                                                           (unsigned int)v7->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nowSkillBaseList);
  this->fields.nextSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64918(
                                                                            UnityEngine_GameObject___TypeInfo,
                                                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nextSkillBaseList);
  this->fields.nowSkillIconList = (struct SkillIconComponent_array *)sub_1B64918(
                                                                       SkillIconComponent___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nowSkillIconList);
  this->fields.nextSkillIconList = (struct SkillIconComponent_array *)sub_1B64918(
                                                                        SkillIconComponent___TypeInfo,
                                                                        (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nextSkillIconList);
  this->fields.nowSkillNameList = (struct UIRangeLabel_array *)sub_1B64918(
                                                                 UIRangeLabel___TypeInfo,
                                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nowSkillNameList);
  this->fields.nextSkillNameList = (struct UIRangeLabel_array *)sub_1B64918(
                                                                  UIRangeLabel___TypeInfo,
                                                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B64814(&this->fields.nextSkillNameList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantStatusBattleConfirmDialog__Close(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_31469496(this, 0LL, v2);
}


void __fastcall ServantStatusBattleConfirmDialog__Close_31469496(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_49FA1C7 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_ServantStatusBattleConfirmDialog_EndClose__, v5);
    byte_49FA1C7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B64ACC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B64814(p_closeCallbackFunc);
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

  if ( (byte_49FA1C5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FA1C5 = 1;
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
    sub_1B64ACC(messageLabel, method);
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

  if ( (byte_49FA1C9 & 1) == 0 )
  {
    sub_1B64870(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__, method);
    byte_49FA1C9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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

  if ( (byte_49FA1C8 & 1) == 0 )
  {
    sub_1B64870(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__, method);
    byte_49FA1C8 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  System_String_o *v50; // x27
  __int64 v51; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v53; // x29
  SkillInfo_o *v54; // x28
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v57; // x29
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v59; // x24
  unsigned __int64 v60; // x9
  unsigned __int64 v61; // x29
  SkillInfo_o *v62; // x28
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v64; // x8
  __int64 v65; // x8
  struct UIRangeLabel_array *nextSkillNameList; // x8
  UIRangeLabel_o *v67; // x29
  struct UIRangeLabel_array *v68; // x8
  System_String_o *v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  Il2CppObject *MasterData_object; // x25
  System_String_o *v73; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v75; // x24
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v77; // x20

  if ( (byte_49FA1C6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, nowTdInfo);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B64870(&LocalizationManager_TypeInfo, v21);
    sub_1B64870(&Method_ServantStatusBattleConfirmDialog_EndOpen__, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_1B64870(&StringLiteral_11793/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v24);
    sub_1B64870(&StringLiteral_11794/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, v25);
    sub_1B64870(&StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v26);
    sub_1B64870(&StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, v27);
    sub_1B64870(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v28);
    sub_1B64870(&StringLiteral_11792/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, v29);
    sub_1B64870(&StringLiteral_9258/*"NO_ENTRY_NAME"*/, v30);
    sub_1B64870(&StringLiteral_11798/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, v31);
    sub_1B64870(&StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v32);
    sub_1B64870(&StringLiteral_1/*""*/, v33);
    sub_1B64870(&StringLiteral_11796/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, v34);
    byte_49FA1C6 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B64814(&this->fields.clickFunc);
  if ( isSkillModify )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_NAME"*/, 0LL);
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
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SPLIT"*/, 0LL);
      v35 = System_String__Concat_61383576(v35, v36, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_NAME"*/, 0LL);
    v35 = System_String__Concat_61383576(v35, v37, 0LL);
  }
LABEL_16:
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11792/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0LL);
  Name = System_String__Format(v39, (Il2CppObject *)v35, 0LL);
  v42 = this->fields.messageLabel;
  if ( !v42 )
    goto LABEL_107;
  WrapControlText__textAdjust(messageLabel, Name, v42->fields.mFontSize, 0, 0, 0LL);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowSkillTitleLabel, Name, 0LL);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nextSkillTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextSkillTitleLabel, Name, 0LL);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nowNpTitleLabel, Name, 0LL);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextNpTitleLabel )
    goto LABEL_107;
  UILabel__set_text(nextNpTitleLabel, Name, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_107;
  UILabel__set_text(buttonDecideLabel, Name, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_107;
  UILabel__set_text(buttonCancelLabel, Name, 0LL);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_11793/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_107;
  v50 = Name;
  v51 = 4LL;
  while ( 1 )
  {
    max_length = nowSkillBaseList->max_length;
    v53 = v51 - 4;
    if ( v51 - 4 >= (int)max_length )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_107;
    if ( v53 >= nowSkillInfoList->max_length )
LABEL_112:
      sub_1B64AD4(Name, OverwriteTDName);
    v54 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v51);
    if ( v54 && v54->fields.id >= 1 && v54->fields.lv >= 1 )
    {
      if ( v53 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_107;
      if ( v53 >= nowSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v51);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_37925516((SkillIconComponent_o *)Name, v54->fields.id, v54->fields.lv, 0LL);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_107;
      if ( v53 >= nowSkillNameList->max_length )
        goto LABEL_112;
      v57 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v51);
      Name = SkillInfo__GetName(v54, 0LL);
      if ( !v57 )
        goto LABEL_107;
      UIRangeLabel__Set(v57, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v53 >= max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v51);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v51;
    if ( !nowSkillBaseList )
      goto LABEL_107;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_107;
  v59 = 4LL;
  while ( 1 )
  {
    v60 = nextSkillBaseList->max_length;
    v61 = v59 - 4;
    if ( v59 - 4 >= (int)v60 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_107;
    if ( v61 >= nextSkillInfoList->max_length )
      goto LABEL_112;
    v62 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v59);
    if ( v62 && v62->fields.id >= 1 && v62->fields.lv >= 1 )
    {
      if ( v61 >= v60 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v59);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_107;
      if ( v61 >= nextSkillIconList->max_length )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v59);
      if ( !Name )
        goto LABEL_107;
      SkillIconComponent__Set_37925516((SkillIconComponent_o *)Name, v62->fields.id, v62->fields.lv, 0LL);
      if ( !nowSkillInfoList )
        goto LABEL_107;
      v64 = nowSkillInfoList->max_length;
      if ( (__int64)v61 >= (int)v64 )
        goto LABEL_72;
      if ( v61 >= v64 )
        goto LABEL_112;
      v65 = *((_QWORD *)&nowSkillInfoList->obj.klass + v59);
      if ( v65 && *(_DWORD *)(v65 + 16) == v62->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_107;
        if ( v61 >= nextSkillNameList->max_length )
          goto LABEL_112;
        v67 = (UIRangeLabel_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v59);
        Name = SkillInfo__GetName(v62, 0LL);
        if ( !v67 )
          goto LABEL_107;
      }
      else
      {
LABEL_72:
        v68 = this->fields.nextSkillNameList;
        if ( !v68 )
          goto LABEL_107;
        if ( v61 >= v68->max_length )
          goto LABEL_112;
        v67 = (UIRangeLabel_o *)*((_QWORD *)&v68->obj.klass + v59);
        v69 = SkillInfo__GetName(v62, 0LL);
        Name = System_String__Concat_61383576(v50, v69, 0LL);
        if ( !v67 )
          goto LABEL_107;
      }
      UIRangeLabel__Set(v67, Name, 0LL, 1, 0, 0LL);
    }
    else
    {
      if ( v61 >= v60 )
        goto LABEL_112;
      Name = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v59);
      if ( !Name )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v59;
    if ( !nextSkillBaseList )
      goto LABEL_107;
  }
  v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
    v70 = sub_1BB674C(v70);
  v71 = *(_QWORD *)(*(_QWORD *)(v70 + 192) + 16LL);
  if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
    v71 = sub_1BB674C(v71);
  Name = **(System_String_o ***)(v71 + 184);
  if ( !Name )
    goto LABEL_107;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Name,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    v73 = Name;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v75 = this->fields.nowNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v75 )
      goto LABEL_107;
    v73 = Name;
    nowNpNameLabel = v75;
  }
  UILabel__set_text(nowNpNameLabel, v73, 0LL);
  if ( !nextTdInfo || nextTdInfo->fields.id < 1 )
  {
    if ( nowTdInfo && nowTdInfo->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_109:
      Name = System_String__Concat_61383576(v50, OverwriteTDName, 0LL);
      if ( !nextNpNameLabel )
        goto LABEL_107;
      goto LABEL_110;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NO_ENTRY_NAME"*/, 0LL);
    if ( nextNpNameLabel )
    {
LABEL_110:
      OverwriteTDName = Name;
      Name = (System_String_o *)nextNpNameLabel;
      goto LABEL_111;
    }
LABEL_107:
    sub_1B64ACC(Name, OverwriteTDName);
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
  v77 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A64B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A646C;
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
  if ( (byte_49FA1CB & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isDecide);
    byte_49FA1CB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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