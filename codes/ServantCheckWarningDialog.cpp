void ServantCheckWarningDialog___ctor(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA521 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEA521 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_CF5EF0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCheckWarningDialog__Close(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


void ServantCheckWarningDialog__EndOpen(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ServantCheckWarningDialog__Init(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEA518 & 1) == 0 )
  {
    sub_1C7BAE8(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_OnSliderDragFinished__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA518 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.servantEquipListViewManager;
  if ( !titleLabel )
    goto LABEL_13;
  ListViewManager__DestroyList((ListViewManager_o *)titleLabel, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v13, 0);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_13;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v5 = (UIProgressBar_OnDragFinished_o *)sub_1C7BD34(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantCheckWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v5,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&checkSlider->fields.onDragFinished,
          (int32_t)v5,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        ServantCheckWarningDialog__SetSlider(this, 0, v12),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_13:
    sub_1C7BD40(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantCheckWarningDialog__OnClickCancel(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CEA51F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_OnClickCancel__);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog__OnClickCancel_b__28_0__);
    byte_4CEA51F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ServantCheckWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickCancel_b__28_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void ServantCheckWarningDialog__OnClickDecide(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4CEA51E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_OnClickDecide__);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog__OnClickDecide_b__27_0__);
    byte_4CEA51E = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C7BD40(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_ServantCheckWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_ServantCheckWarningDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      this->fields.state = 3;
      v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickDecide_b__27_0__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v7, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ServantCheckWarningDialog__OnEnable(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CEA520 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15707/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CEA520 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15707/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ServantCheckWarningDialog__OnSliderDragFinished(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C7BD40(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  ServantCheckWarningDialog__SetSlider(this, v7, v8);
}


void ServantCheckWarningDialog__OpenAppendSkillWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_4CEA51D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_1C7BAE8(&StringLiteral_2011/*"APPEND_SKILL_WARNING_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_2013/*"APPEND_SKILL_WARNING_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_2012/*"APPEND_SKILL_WARNING_SLIDER"*/);
    byte_4CEA51D = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__CreateCombinedAppendSkillServantList(
      (ServantCheckEquipListViewManager_o *)gameObject,
      userSvtEntityList,
      v15);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_35333124((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2013/*"APPEND_SKILL_WARNING_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"APPEND_SKILL_WARNING_CONFIRM"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2012/*"APPEND_SKILL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_1C7BD40(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellCombineWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_4CEA51A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_1C7BAE8(&StringLiteral_11749/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11750/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_4CEA51A = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__CreateCombineServantList(
      (ServantCheckEquipListViewManager_o *)gameObject,
      userSvtEntityList,
      v15);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_35333124((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11750/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_1C7BD40(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_4CEA51C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_1C7BAE8(&StringLiteral_11751/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11752/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_4CEA51C = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__CreateMaterialTdServantList(
      (ServantCheckEquipListViewManager_o *)gameObject,
      userSvtEntityList,
      v15);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_35333124((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11752/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11751/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_1C7BD40(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellSSRareWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_4CEA51B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_1C7BAE8(&StringLiteral_11754/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11755/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_4CEA51B = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__CreateSSRareServantList(
      (ServantCheckEquipListViewManager_o *)gameObject,
      userSvtEntityList,
      v15);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_35333124((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11755/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11754/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_1C7BD40(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
    this->fields.state = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckWarningDialog__SetSlider(ServantCheckWarningDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  __int64 v11; // x1

  if ( (byte_4CEA519 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20753/*"img_slider_thumb_locked"*/);
    sub_1C7BAE8(&StringLiteral_20752/*"img_slider_thumb"*/);
    byte_4CEA519 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20752/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20753/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (!sliderOn ? (v11 = 3) : (v11 = 0),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
          sliderSprite,
          v11,
          1,
          sliderSprite->klass->vtable._14_OnEnable.method),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_1C7BD40(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void ServantCheckWarningDialog___OnClickCancel_b__28_0(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  struct ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    0,
    closeFunc->fields.method);
}


void ServantCheckWarningDialog___OnClickDecide_b__27_0(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  struct ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    1,
    closeFunc->fields.method);
}


void ServantCheckWarningDialog_ClickDelegate___ctor(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAC728;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAC6E0;
}


System_IAsyncResult_o *ServantCheckWarningDialog_ClickDelegate__BeginInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CEA522 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEA522 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ServantCheckWarningDialog_ClickDelegate__EndInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ServantCheckWarningDialog_ClickDelegate__Invoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}