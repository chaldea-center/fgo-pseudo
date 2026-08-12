void ServantStatusBattleConfirmDialog___ctor(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UnityEngine_GameObject_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct SkillIconComponent_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct SkillIconComponent_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UIRangeLabel_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UIRangeLabel_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2

  if ( (byte_596BB2E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&SkillIconComponent___TypeInfo);
    sub_2213A60(&UIRangeLabel___TypeInfo);
    byte_596BB2E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nowSkillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextSkillBaseList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowSkillIconList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextSkillIconList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (struct UIRangeLabel_array *)sub_2213B20(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowSkillNameList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct UIRangeLabel_array *)sub_2213B20(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextSkillNameList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v47, v48);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantStatusBattleConfirmDialog__Close(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_40478584(this, 0, v2);
}


void ServantStatusBattleConfirmDialog__Close_40478584(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BB2A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusBattleConfirmDialog_EndClose__);
    byte_596BB2A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantStatusBattleConfirmDialog__EndClose(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ServantStatusBattleConfirmDialog__EndOpen(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ServantStatusBattleConfirmDialog__Init(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_596BB28 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BB28 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.nowSkillTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.nextSkillTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.nowNpTitleLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.nextNpTitleLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonDecideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonCancelLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_2213CDC(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantStatusBattleConfirmDialog__OnClickCancel(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596BB2C & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    byte_596BB2C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ServantStatusBattleConfirmDialog__OnClickDecide(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantStatusBattleConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596BB2B & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    byte_596BB2B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusBattleConfirmDialog__Open(
        ServantStatusBattleConfirmDialog_o *this,
        TreasureDvcInfo_o *nowTdInfo,
        TreasureDvcInfo_o *nextTdInfo,
        bool isTdModify,
        SkillInfo_array *nowSkillInfoList,
        SkillInfo_array *nextSkillInfoList,
        bool isSkillModify,
        ServantStatusBattleConfirmDialog_ClickDelegate_o *func,
        int32_t svtId,
        int32_t limitCount,
        int32_t nowLimitCount,
        int32_t nextLimitCount,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *messageLabel; // x20
  System_String_o *Master_object; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v24; // x8
  UILabel_o *nowSkillTitleLabel; // x20
  UILabel_o *nextSkillTitleLabel; // x20
  UILabel_o *nowNpTitleLabel; // x20
  UILabel_o *nextNpTitleLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x2
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  ServantLimitAddMaster_o *v35; // x29
  int32_t v36; // w23
  __int64 v37; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v39; // x20
  SkillInfo_o *v40; // x21
  struct SkillIconComponent_array *nowSkillIconList; // x8
  __int64 v42; // x2
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v44; // x20
  int32_t LimitCountByDispLimit; // w0
  int32_t id; // w28
  int32_t v47; // w22
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v49; // x22
  unsigned __int64 v50; // x9
  unsigned __int64 v51; // x24
  SkillInfo_o *v52; // x21
  struct SkillIconComponent_array *nextSkillIconList; // x8
  __int64 v54; // x2
  unsigned __int64 v55; // x8
  __int64 v56; // x23
  int32_t v57; // w0
  int32_t v58; // w20
  int32_t v59; // w28
  struct UIRangeLabel_array *nextSkillNameList; // x8
  struct UIRangeLabel_array *v61; // x8
  System_String_o *v62; // x20
  TreasureDvcInfo_o *v63; // x22
  System_String_o *v64; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v70; // x20
  TreasureDvcInfo_o *v71; // [xsp+8h] [xbp-88h]
  TreasureDvcInfo_o *v72; // [xsp+10h] [xbp-80h]
  System_String_o *str0; // [xsp+18h] [xbp-78h]

  if ( (byte_596BB29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusBattleConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12410/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_2213A60(&StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_12408/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9710/*"NO_ENTRY_NAME"*/);
    sub_2213A60(&StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    byte_596BB29 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (System_String_o *)nextTdInfo,
    (System_String_o *)isTdModify,
    (int32_t)nowSkillInfoList,
    (int32_t)nextSkillInfoList,
    isSkillModify,
    (bool)func);
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_12408/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0);
  v24 = this->fields.messageLabel;
  if ( !v24 )
    goto LABEL_75;
  WrapControlText__textAdjust(messageLabel, Master_object, v24->fields.mFontSize, 0, 0);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nowSkillTitleLabel )
    goto LABEL_75;
  UILabel__set_text(nowSkillTitleLabel, Master_object, 0);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nextSkillTitleLabel )
    goto LABEL_75;
  UILabel__set_text(nextSkillTitleLabel, Master_object, 0);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nowNpTitleLabel )
    goto LABEL_75;
  UILabel__set_text(nowNpTitleLabel, Master_object, 0);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nextNpTitleLabel )
    goto LABEL_75;
  UILabel__set_text(nextNpTitleLabel, Master_object, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_75;
  UILabel__set_text(buttonDecideLabel, Master_object, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_75;
  v71 = nextTdInfo;
  v72 = nowTdInfo;
  UILabel__set_text(buttonCancelLabel, Master_object, 0);
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_75;
  v35 = (ServantLimitAddMaster_o *)Master_object;
  v36 = svtId;
  v37 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(nowSkillBaseList->max_length);
    v39 = v37 - 4;
    if ( v37 - 4 >= (int)max_length_low )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_75;
    if ( v39 >= LODWORD(nowSkillInfoList->max_length) )
LABEL_105:
      sub_2213CE4(Master_object);
    v40 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v37);
    if ( v40 && v40->fields.id >= 1 && v40->fields.lv >= 1 )
    {
      if ( v39 >= max_length_low )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v37);
      if ( !Master_object )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_75;
      if ( v39 >= LODWORD(nowSkillIconList->max_length) )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v37);
      if ( !Master_object )
        goto LABEL_75;
      SkillIconComponent__Set_48067596((SkillIconComponent_o *)Master_object, v40->fields.id, v40->fields.lv, 0);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_75;
      if ( v39 >= LODWORD(nowSkillNameList->max_length) )
        goto LABEL_105;
      v44 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v37);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, OverwriteTDName, v42);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(nowLimitCount, limitCount, 0);
      id = v40->fields.id;
      v47 = LimitCountByDispLimit;
      Master_object = SkillInfo__GetName(v40, 0);
      if ( !v35 )
        goto LABEL_75;
      Master_object = ServantLimitAddMaster__GetOverwriteSkillName(v35, svtId, v47, id, Master_object, 0);
      if ( !v44 )
        goto LABEL_75;
      UIRangeLabel__Set(v44, Master_object, 0, 1, 0, 0, 0);
    }
    else
    {
      if ( v39 >= max_length_low )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v37);
      if ( !Master_object )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v37;
    if ( !nowSkillBaseList )
      goto LABEL_75;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_75;
  v49 = 4;
  while ( 1 )
  {
    v50 = LODWORD(nextSkillBaseList->max_length);
    v51 = v49 - 4;
    if ( v49 - 4 >= (int)v50 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_75;
    if ( v51 >= LODWORD(nextSkillInfoList->max_length) )
      goto LABEL_105;
    v52 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v49);
    if ( v52 && v52->fields.id >= 1 && v52->fields.lv >= 1 )
    {
      if ( v51 >= v50 )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v49);
      if ( !Master_object )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_75;
      if ( v51 >= LODWORD(nextSkillIconList->max_length) )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v49);
      if ( !Master_object )
        goto LABEL_75;
      SkillIconComponent__Set_48067596((SkillIconComponent_o *)Master_object, v52->fields.id, v52->fields.lv, 0);
      if ( !nowSkillInfoList )
        goto LABEL_75;
      v55 = LODWORD(nowSkillInfoList->max_length);
      if ( (__int64)v51 >= (int)v55 )
      {
        v56 = 0;
      }
      else
      {
        if ( v51 >= v55 )
          goto LABEL_105;
        v56 = *((_QWORD *)&nowSkillInfoList->obj.klass + v49);
      }
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, OverwriteTDName, v54);
      v57 = ImageLimitCount__GetLimitCountByDispLimit(nextLimitCount, limitCount, 0);
      v58 = v52->fields.id;
      v59 = v57;
      Master_object = SkillInfo__GetName(v52, 0);
      if ( !v35 )
        goto LABEL_75;
      Master_object = ServantLimitAddMaster__GetOverwriteSkillName(v35, svtId, v59, v58, Master_object, 0);
      OverwriteTDName = Master_object;
      if ( v56 && *(_DWORD *)(v56 + 16) == v52->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_75;
        if ( v51 >= LODWORD(nextSkillNameList->max_length) )
          goto LABEL_105;
        Master_object = (System_String_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v49);
        if ( !Master_object )
          goto LABEL_75;
        v36 = svtId;
      }
      else
      {
        v61 = this->fields.nextSkillNameList;
        if ( !v61 )
          goto LABEL_75;
        if ( v51 >= LODWORD(v61->max_length) )
          goto LABEL_105;
        v62 = (System_String_o *)*((_QWORD *)&v61->obj.klass + v49);
        v36 = svtId;
        Master_object = System_String__Concat_75651716(str0, Master_object, 0);
        if ( !v62 )
          goto LABEL_75;
        OverwriteTDName = Master_object;
        Master_object = v62;
      }
      UIRangeLabel__Set((UIRangeLabel_o *)Master_object, OverwriteTDName, 0, 1, 0, 0, 0);
    }
    else
    {
      if ( v51 >= v50 )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v49);
      if ( !Master_object )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v49;
    if ( !nextSkillBaseList )
      goto LABEL_75;
  }
  if ( v72 && v72->fields.id >= 1 )
  {
    Master_object = TreasureDvcInfo__GetName(v72, v36, 0);
    v63 = v71;
    if ( !v35 )
      goto LABEL_75;
    Master_object = ServantLimitAddMaster__GetOverwriteTDName(v35, v36, nowLimitCount, Master_object, 0, 0);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_75;
    v64 = Master_object;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v66 = this->fields.nowNpNameLabel;
    v63 = v71;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, OverwriteTDName, v33);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
    if ( !v66 )
      goto LABEL_75;
    v64 = Master_object;
    nowNpNameLabel = v66;
  }
  UILabel__set_text(nowNpNameLabel, v64, 0);
  if ( !v63 || v63->fields.id < 1 )
  {
    if ( v72 && v72->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
LABEL_102:
      Master_object = System_String__Concat_75651716(str0, OverwriteTDName, 0);
      if ( !nextNpNameLabel )
        goto LABEL_75;
      goto LABEL_103;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
    if ( nextNpNameLabel )
    {
LABEL_103:
      OverwriteTDName = Master_object;
      Master_object = (System_String_o *)nextNpNameLabel;
      goto LABEL_104;
    }
LABEL_75:
    sub_2213CDC(Master_object, OverwriteTDName);
  }
  Master_object = TreasureDvcInfo__GetName(v63, v36, 0);
  if ( !v35 )
    goto LABEL_75;
  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(v35, v36, nextLimitCount, Master_object, 0, 0);
  if ( !v72 || v72->fields.id != v63->fields.id )
  {
    nextNpNameLabel = this->fields.nextNpNameLabel;
    goto LABEL_102;
  }
  Master_object = (System_String_o *)this->fields.nextNpNameLabel;
  if ( !Master_object )
    goto LABEL_75;
LABEL_104:
  UILabel__set_text((UILabel_o *)Master_object, OverwriteTDName, 0);
  this->fields.isButtonEnable = 0;
  v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0, 0);
}


System_String_o *ServantStatusBattleConfirmDialog__get_closeBtnPath(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596BB2D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596BB2D = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003114;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20030CC;
}


System_IAsyncResult_o *ServantStatusBattleConfirmDialog_ClickDelegate__BeginInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusBattleConfirmDialog_ClickDelegate__Invoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}