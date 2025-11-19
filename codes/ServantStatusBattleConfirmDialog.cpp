void ServantStatusBattleConfirmDialog___ctor(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UnityEngine_GameObject_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct SkillIconComponent_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UIRangeLabel_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UIRangeLabel_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB157A & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    sub_1C6BA08(&SkillIconComponent___TypeInfo);
    sub_1C6BA08(&UIRangeLabel___TypeInfo);
    byte_4CB157A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseList = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nowSkillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseList = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nextSkillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1C6BAB0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillIconList = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nowSkillIconList, (int32_t)v10, v11, v12);
  v13 = (struct SkillIconComponent_array *)sub_1C6BAB0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillIconList = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nextSkillIconList, (int32_t)v13, v14, v15);
  v16 = (struct UIRangeLabel_array *)sub_1C6BAB0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nowSkillNameList = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nowSkillNameList, (int32_t)v16, v17, v18);
  v19 = (struct UIRangeLabel_array *)sub_1C6BAB0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillNameList = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nextSkillNameList, (int32_t)v19, v20, v21);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantStatusBattleConfirmDialog__Close(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusBattleConfirmDialog__Close_33631480(this, 0, v2);
}


void ServantStatusBattleConfirmDialog__Close_33631480(
        ServantStatusBattleConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB1576 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantStatusBattleConfirmDialog_EndClose__);
    byte_4CB1576 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ServantStatusBattleConfirmDialog__EndClose(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantStatusBattleConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C6B9AC(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusBattleConfirmDialog__EndOpen(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ServantStatusBattleConfirmDialog__Init(ServantStatusBattleConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4CB1574 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1574 = 1;
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
    sub_1C6BC60(messageLabel, method);
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

  if ( (byte_4CB1578 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    byte_4CB1578 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantStatusBattleConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB1577 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    byte_4CB1577 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ServantStatusBattleConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantStatusBattleConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantStatusBattleConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
  UILabel_o *messageLabel; // x20
  System_String_o *Master_object; // x0
  System_String_o *OverwriteTDName; // x1
  struct UILabel_o *v22; // x8
  UILabel_o *nowSkillTitleLabel; // x20
  UILabel_o *nextSkillTitleLabel; // x20
  UILabel_o *nowNpTitleLabel; // x20
  UILabel_o *nextNpTitleLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  struct UnityEngine_GameObject_array *nowSkillBaseList; // x8
  ServantLimitAddMaster_o *v30; // x29
  int32_t v31; // w23
  __int64 v32; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v34; // x20
  SkillInfo_o *v35; // x21
  struct SkillIconComponent_array *nowSkillIconList; // x8
  struct UIRangeLabel_array *nowSkillNameList; // x8
  UIRangeLabel_o *v38; // x20
  int32_t LimitCountByDispLimit; // w0
  int32_t id; // w28
  int32_t v41; // w22
  struct UnityEngine_GameObject_array *nextSkillBaseList; // x8
  __int64 v43; // x22
  unsigned __int64 v44; // x9
  unsigned __int64 v45; // x24
  SkillInfo_o *v46; // x21
  struct SkillIconComponent_array *nextSkillIconList; // x8
  unsigned __int64 v48; // x8
  __int64 v49; // x23
  int32_t v50; // w0
  int32_t v51; // w20
  int32_t v52; // w28
  struct UIRangeLabel_array *nextSkillNameList; // x8
  struct UIRangeLabel_array *v54; // x8
  System_String_o *v55; // x20
  TreasureDvcInfo_o *v56; // x22
  System_String_o *v57; // x1
  UILabel_o *nowNpNameLabel; // x0
  struct UILabel_o *v59; // x20
  struct UILabel_o *nextNpNameLabel; // x20
  System_Action_o *v61; // x20
  TreasureDvcInfo_o *v62; // [xsp+8h] [xbp-88h]
  TreasureDvcInfo_o *v63; // [xsp+10h] [xbp-80h]
  System_String_o *str0; // [xsp+18h] [xbp-78h]

  if ( (byte_4CB1575 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_ServantStatusBattleConfirmDialog_EndOpen__);
    sub_1C6BA08(&StringLiteral_11898/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_1C6BA08(&StringLiteral_11901/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3680/*"COMMON_CONFIRM_NO"*/);
    sub_1C6BA08(&StringLiteral_3685/*"COMMON_CONFIRM_YES"*/);
    sub_1C6BA08(&StringLiteral_11896/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_9322/*"NO_ENTRY_NAME"*/);
    sub_1C6BA08(&StringLiteral_11899/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    byte_4CB1575 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)nextTdInfo,
    (const MethodInfo *)isTdModify);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE"*/, 0);
  v22 = this->fields.messageLabel;
  if ( !v22 )
    goto LABEL_100;
  WrapControlText__textAdjust(messageLabel, Master_object, v22->fields.mFontSize, 0, 0);
  nowSkillTitleLabel = this->fields.nowSkillTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nowSkillTitleLabel )
    goto LABEL_100;
  UILabel__set_text(nowSkillTitleLabel, Master_object, 0);
  nextSkillTitleLabel = this->fields.nextSkillTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nextSkillTitleLabel )
    goto LABEL_100;
  UILabel__set_text(nextSkillTitleLabel, Master_object, 0);
  nowNpTitleLabel = this->fields.nowNpTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nowNpTitleLabel )
    goto LABEL_100;
  UILabel__set_text(nowNpTitleLabel, Master_object, 0);
  nextNpTitleLabel = this->fields.nextNpTitleLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nextNpTitleLabel )
    goto LABEL_100;
  UILabel__set_text(nextNpTitleLabel, Master_object, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_100;
  UILabel__set_text(buttonDecideLabel, Master_object, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_NO"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_100;
  v62 = nextTdInfo;
  v63 = nowTdInfo;
  UILabel__set_text(buttonCancelLabel, Master_object, 0);
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  nowSkillBaseList = this->fields.nowSkillBaseList;
  if ( !nowSkillBaseList )
    goto LABEL_100;
  v30 = (ServantLimitAddMaster_o *)Master_object;
  v31 = svtId;
  v32 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(nowSkillBaseList->max_length);
    v34 = v32 - 4;
    if ( v32 - 4 >= (int)max_length_low )
      break;
    if ( !nowSkillInfoList )
      goto LABEL_100;
    if ( v34 >= LODWORD(nowSkillInfoList->max_length) )
LABEL_105:
      sub_1C6BC68(Master_object);
    v35 = (SkillInfo_o *)*((_QWORD *)&nowSkillInfoList->obj.klass + v32);
    if ( v35 && v35->fields.id >= 1 && v35->fields.lv >= 1 )
    {
      if ( v34 >= max_length_low )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v32);
      if ( !Master_object )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      nowSkillIconList = this->fields.nowSkillIconList;
      if ( !nowSkillIconList )
        goto LABEL_100;
      if ( v34 >= LODWORD(nowSkillIconList->max_length) )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillIconList->obj.klass + v32);
      if ( !Master_object )
        goto LABEL_100;
      SkillIconComponent__Set_41257104((SkillIconComponent_o *)Master_object, v35->fields.id, v35->fields.lv, 0);
      nowSkillNameList = this->fields.nowSkillNameList;
      if ( !nowSkillNameList )
        goto LABEL_100;
      if ( v34 >= LODWORD(nowSkillNameList->max_length) )
        goto LABEL_105;
      v38 = (UIRangeLabel_o *)*((_QWORD *)&nowSkillNameList->obj.klass + v32);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(nowLimitCount, limitCount, 0);
      id = v35->fields.id;
      v41 = LimitCountByDispLimit;
      Master_object = SkillInfo__GetName(v35, 0);
      if ( !v30 )
        goto LABEL_100;
      Master_object = ServantLimitAddMaster__GetOverwriteSkillName(v30, svtId, v41, id, Master_object, 0);
      if ( !v38 )
        goto LABEL_100;
      UIRangeLabel__Set(v38, Master_object, 0, 1, 0, 0, 0);
    }
    else
    {
      if ( v34 >= max_length_low )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nowSkillBaseList->obj.klass + v32);
      if ( !Master_object )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    nowSkillBaseList = this->fields.nowSkillBaseList;
    ++v32;
    if ( !nowSkillBaseList )
      goto LABEL_100;
  }
  nextSkillBaseList = this->fields.nextSkillBaseList;
  if ( !nextSkillBaseList )
    goto LABEL_100;
  v43 = 4;
  while ( 1 )
  {
    v44 = LODWORD(nextSkillBaseList->max_length);
    v45 = v43 - 4;
    if ( v43 - 4 >= (int)v44 )
      break;
    if ( !nextSkillInfoList )
      goto LABEL_100;
    if ( v45 >= LODWORD(nextSkillInfoList->max_length) )
      goto LABEL_105;
    v46 = (SkillInfo_o *)*((_QWORD *)&nextSkillInfoList->obj.klass + v43);
    if ( v46 && v46->fields.id >= 1 && v46->fields.lv >= 1 )
    {
      if ( v45 >= v44 )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v43);
      if ( !Master_object )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      nextSkillIconList = this->fields.nextSkillIconList;
      if ( !nextSkillIconList )
        goto LABEL_100;
      if ( v45 >= LODWORD(nextSkillIconList->max_length) )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillIconList->obj.klass + v43);
      if ( !Master_object )
        goto LABEL_100;
      SkillIconComponent__Set_41257104((SkillIconComponent_o *)Master_object, v46->fields.id, v46->fields.lv, 0);
      if ( !nowSkillInfoList )
        goto LABEL_100;
      v48 = LODWORD(nowSkillInfoList->max_length);
      if ( (__int64)v45 >= (int)v48 )
      {
        v49 = 0;
      }
      else
      {
        if ( v45 >= v48 )
          goto LABEL_105;
        v49 = *((_QWORD *)&nowSkillInfoList->obj.klass + v43);
      }
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v50 = ImageLimitCount__GetLimitCountByDispLimit(nextLimitCount, limitCount, 0);
      v51 = v46->fields.id;
      v52 = v50;
      Master_object = SkillInfo__GetName(v46, 0);
      if ( !v30 )
        goto LABEL_100;
      Master_object = ServantLimitAddMaster__GetOverwriteSkillName(v30, svtId, v52, v51, Master_object, 0);
      OverwriteTDName = Master_object;
      if ( v49 && *(_DWORD *)(v49 + 16) == v46->fields.id )
      {
        nextSkillNameList = this->fields.nextSkillNameList;
        if ( !nextSkillNameList )
          goto LABEL_100;
        if ( v45 >= LODWORD(nextSkillNameList->max_length) )
          goto LABEL_105;
        Master_object = (System_String_o *)*((_QWORD *)&nextSkillNameList->obj.klass + v43);
        if ( !Master_object )
          goto LABEL_100;
        v31 = svtId;
      }
      else
      {
        v54 = this->fields.nextSkillNameList;
        if ( !v54 )
          goto LABEL_100;
        if ( v45 >= LODWORD(v54->max_length) )
          goto LABEL_105;
        v55 = (System_String_o *)*((_QWORD *)&v54->obj.klass + v43);
        v31 = svtId;
        Master_object = System_String__Concat_63966792(str0, Master_object, 0);
        if ( !v55 )
          goto LABEL_100;
        OverwriteTDName = Master_object;
        Master_object = v55;
      }
      UIRangeLabel__Set((UIRangeLabel_o *)Master_object, OverwriteTDName, 0, 1, 0, 0, 0);
    }
    else
    {
      if ( v45 >= v44 )
        goto LABEL_105;
      Master_object = (System_String_o *)*((_QWORD *)&nextSkillBaseList->obj.klass + v43);
      if ( !Master_object )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    nextSkillBaseList = this->fields.nextSkillBaseList;
    ++v43;
    if ( !nextSkillBaseList )
      goto LABEL_100;
  }
  if ( v63 && v63->fields.id >= 1 )
  {
    Master_object = TreasureDvcInfo__GetName(v63, v31, 0);
    v56 = v62;
    if ( !v30 )
      goto LABEL_100;
    Master_object = ServantLimitAddMaster__GetOverwriteTDName(v30, v31, nowLimitCount, Master_object, 0, 0);
    if ( !this->fields.nowNpNameLabel )
      goto LABEL_100;
    v57 = Master_object;
    nowNpNameLabel = this->fields.nowNpNameLabel;
  }
  else
  {
    v59 = this->fields.nowNpNameLabel;
    v56 = v62;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NO_ENTRY_NAME"*/, 0);
    if ( !v59 )
      goto LABEL_100;
    v57 = Master_object;
    nowNpNameLabel = v59;
  }
  UILabel__set_text(nowNpNameLabel, v57, 0);
  if ( !v56 || v56->fields.id < 1 )
  {
    if ( v63 && v63->fields.id >= 1 )
    {
      nextNpNameLabel = this->fields.nextNpNameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NO_ENTRY_NAME"*/, 0);
LABEL_102:
      Master_object = System_String__Concat_63966792(str0, OverwriteTDName, 0);
      if ( !nextNpNameLabel )
        goto LABEL_100;
      goto LABEL_103;
    }
    nextNpNameLabel = this->fields.nextNpNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NO_ENTRY_NAME"*/, 0);
    if ( nextNpNameLabel )
    {
LABEL_103:
      OverwriteTDName = Master_object;
      Master_object = (System_String_o *)nextNpNameLabel;
      goto LABEL_104;
    }
LABEL_100:
    sub_1C6BC60(Master_object, OverwriteTDName);
  }
  Master_object = TreasureDvcInfo__GetName(v56, v31, 0);
  if ( !v30 )
    goto LABEL_100;
  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(v30, v31, nextLimitCount, Master_object, 0, 0);
  if ( !v63 || v63->fields.id != v56->fields.id )
  {
    nextNpNameLabel = this->fields.nextNpNameLabel;
    goto LABEL_102;
  }
  Master_object = (System_String_o *)this->fields.nextNpNameLabel;
  if ( !Master_object )
    goto LABEL_100;
LABEL_104:
  UILabel__set_text((UILabel_o *)Master_object, OverwriteTDName, 0);
  this->fields.isButtonEnable = 0;
  v61 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ServantStatusBattleConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0, 0);
}


System_String_o *ServantStatusBattleConfirmDialog__get_closeBtnPath(
        ServantStatusBattleConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1579 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4CB1579 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


void ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9AC60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9AC18;
}


System_IAsyncResult_o *ServantStatusBattleConfirmDialog_ClickDelegate__BeginInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB157B & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB157B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ServantStatusBattleConfirmDialog_ClickDelegate__EndInvoke(
        ServantStatusBattleConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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