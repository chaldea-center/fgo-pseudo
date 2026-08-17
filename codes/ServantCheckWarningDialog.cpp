void ServantCheckWarningDialog___ctor(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596C5DD & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C5DD = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E9C5E0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C5D4 & 1) == 0 )
  {
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_OnSliderDragFinished__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C5D4 = 1;
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
  v5 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantCheckWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v5,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&checkSlider->fields.onDragFinished,
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
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantCheckWarningDialog__OnClickCancel(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596C5DB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_OnClickCancel__);
    sub_2213A60(&Method_ServantCheckWarningDialog__OnClickCancel_b__28_0__);
    byte_596C5DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCheckWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.state = 3;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickCancel_b__28_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void ServantCheckWarningDialog__OnClickDecide(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_596C5DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_OnClickDecide__);
    sub_2213A60(&Method_ServantCheckWarningDialog__OnClickDecide_b__27_0__);
    byte_596C5DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_2213CDC(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_ServantCheckWarningDialog_OnClickDecide__;
    if ( value >= 1.0 )
    {
      if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ServantCheckWarningDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      this->fields.state = 3;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickDecide_b__27_0__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v8, 0);
    }
    else
    {
      if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ServantCheckWarningDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ServantCheckWarningDialog__OnEnable(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596C5DC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596C5DC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ServantCheckWarningDialog__OnSliderDragFinished(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s1
  bool v6; // w20
  const MethodInfo *v7; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_6;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( value < 0.9 )
  {
    v5 = 0.0;
    if ( checkSlider )
      goto LABEL_4;
LABEL_6:
    sub_2213CDC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  ServantCheckWarningDialog__SetSlider(this, v6, v7);
}


void ServantCheckWarningDialog__OpenAppendSkillWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v24; // x20

  if ( (byte_596C5D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_2213A60(&StringLiteral_2109/*"APPEND_SKILL_WARNING_CONFIRM"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2111/*"APPEND_SKILL_WARNING_TITLE"*/);
    sub_2213A60(&StringLiteral_2110/*"APPEND_SKILL_WARNING_SLIDER"*/);
    byte_596C5D9 = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
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
    ServantCheckEquipListViewManager__SetMode_41691076((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2111/*"APPEND_SKILL_WARNING_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"APPEND_SKILL_WARNING_CONFIRM"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2110/*"APPEND_SKILL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_2213CDC(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellCombineWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        System_Action_long__o *onModifyServant,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_596C5D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12207/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12208/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/);
    sub_2213A60(&StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_596C5D6 = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
      onModifyServant,
      v17);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_41691076((ServantCheckEquipListViewManager_o *)gameObject, 3, v18);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_2213CDC(gameObject, v16);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v24; // x20

  if ( (byte_596C5D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12209/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12210/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/);
    sub_2213A60(&StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_596C5D8 = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
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
    ServantCheckEquipListViewManager__SetMode_41691076((ServantCheckEquipListViewManager_o *)gameObject, 3, v16);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12209/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_2213CDC(gameObject, v14);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
    this->fields.state = 1;
  }
}


void ServantCheckWarningDialog__OpenSellSSRareWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        System_Action_long__o *onModifyServant,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_596C5D7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckWarningDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12212/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12213/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/);
    sub_2213A60(&StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/);
    byte_596C5D7 = 1;
  }
  if ( this->fields.state != 1 )
  {
    ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
    this->fields.closeFunc = closeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
      (int32_t)closeCallback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
      onModifyServant,
      v17);
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ServantCheckEquipListViewManager__SetMode_41691076((ServantCheckEquipListViewManager_o *)gameObject, 3, v18);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, 0);
    if ( !warningLabel )
      goto LABEL_16;
    UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
    reInforeceLabel = this->fields.reInforeceLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SERVANT_SELL_WARNING_SLIDER"*/, 0);
    if ( !reInforeceLabel
      || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0),
          decideButtonLabel = this->fields.decideButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideButtonLabel)
      || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_16:
      sub_2213CDC(gameObject, v16);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
    this->fields.state = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckWarningDialog__SetSlider(ServantCheckWarningDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_596C5D5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21576/*"img_slider_thumb_locked"*/);
    sub_2213A60(&StringLiteral_21575/*"img_slider_thumb"*/);
    byte_596C5D5 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_12;
  v6 = &StringLiteral_21575/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21576/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, (System_String_o *)*v6, 0);
  a = 1.0;
  b = 1.0;
  sliderSprite = (UISprite_o *)this->fields.decideButton;
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
    || (sliderSprite->klass->vtable._14_OnEnable.methodPtr(),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_12:
    sub_2213CDC(sliderSprite, sliderOn);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
  this->fields.invoke_impl = (intptr_t)sub_20058A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2005858;
}


System_IAsyncResult_o *ServantCheckWarningDialog_ClickDelegate__BeginInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
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
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantCheckWarningDialog_ClickDelegate__EndInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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