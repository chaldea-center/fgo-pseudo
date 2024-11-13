void __fastcall ServantCheckWarningDialog___ctor(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B124D5 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B124D5 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BD2D90;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckWarningDialog__Close(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall ServantCheckWarningDialog__EndOpen(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckWarningDialog__Init(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *titleLabel; // x0
  struct UISlider_o *checkSlider; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UIProgressBar_OnDragFinished_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B124CD & 1) == 0 )
  {
    sub_1BCA7E0(&UIProgressBar_OnDragFinished_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_OnSliderDragFinished__, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B124CD = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.servantEquipListViewManager;
  if ( !titleLabel )
    goto LABEL_13;
  ListViewManager__DestroyList((ListViewManager_o *)titleLabel, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v21, 0LL);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_13;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0LL);
  checkSlider = this->fields.checkSlider;
  v13 = (UIProgressBar_OnDragFinished_o *)sub_1BCAA2C(UIProgressBar_OnDragFinished_TypeInfo, v10, v11, v12);
  UIProgressBar_OnDragFinished___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantCheckWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v13,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&checkSlider->fields.onDragFinished,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        ServantCheckWarningDialog__SetSlider(this, 0, v20),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckWarningDialog__OnClickCancel(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B124D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog__OnClickCancel_b__27_0__, v6, v7);
    byte_4B124D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_ServantCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantCheckWarningDialog_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickCancel_b__27_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall ServantCheckWarningDialog__OnClickDecide(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B124D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog__OnClickDecide_b__26_0__, v6, v7);
    byte_4B124D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1BCAA3C(0LL, method);
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v10 = Method_ServantCheckWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantCheckWarningDialog_OnClickDecide__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      this->fields.state = 3;
      v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickDecide_b__26_0__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    }
  }
}


void __fastcall ServantCheckWarningDialog__OnEnable(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B124D4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B124D4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ServantCheckWarningDialog__OnSliderDragFinished(
        ServantCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BCAA3C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  ServantCheckWarningDialog__SetSlider(this, v7, v8);
}


void __fastcall ServantCheckWarningDialog__OpenSellCombineWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x20

  if ( (byte_4B124CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtEntityList, closeCallback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_EndOpen__, v9, v10);
    sub_1BCA7E0(&StringLiteral_11804/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11805/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, v19, v20);
    byte_4B124CF = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__CreateCombineServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__SetMode_33225148((ServantCheckEquipListViewManager_o *)gameObject, 3, v30);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_14;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, v28);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x20

  if ( (byte_4B124D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtEntityList, closeCallback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_EndOpen__, v9, v10);
    sub_1BCA7E0(&StringLiteral_11806/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11807/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, v19, v20);
    byte_4B124D1 = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__CreateMaterialTdServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__SetMode_33225148((ServantCheckEquipListViewManager_o *)gameObject, 3, v30);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_14;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, v28);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall ServantCheckWarningDialog__OpenSellSSRareWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x20

  if ( (byte_4B124D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtEntityList, closeCallback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantCheckWarningDialog_EndOpen__, v9, v10);
    sub_1BCA7E0(&StringLiteral_11809/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11810/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, v19, v20);
    byte_4B124D0 = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__CreateSSRareServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_14;
  ServantCheckEquipListViewManager__SetMode_33225148((ServantCheckEquipListViewManager_o *)gameObject, 3, v30);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_14;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, v28);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog__SetSlider(
        ServantCheckWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *sliderSprite; // x0
  System_String_o **v8; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v13; // x1

  if ( (byte_4B124CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20689/*"img_slider_thumb_locked"*/, sliderOn, method);
    sub_1BCA7E0(&StringLiteral_20688/*"img_slider_thumb"*/, v5, v6);
    byte_4B124CE = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v8 = (System_String_o **)&StringLiteral_20688/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v8 = (System_String_o **)&StringLiteral_20689/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v8, 0LL);
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
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL)
    || (!sliderOn ? (v13 = 3LL) : (v13 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v13,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall ServantCheckWarningDialog___OnClickCancel_b__27_0(
        ServantCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  struct ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall ServantCheckWarningDialog___OnClickDecide_b__26_0(
        ServantCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  struct ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog_ClickDelegate___ctor(
        ServantCheckWarningDialog_ClickDelegate_o *this,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08328;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A082E0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckWarningDialog_ClickDelegate__BeginInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B124D6 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B124D6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantCheckWarningDialog_ClickDelegate__EndInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantCheckWarningDialog_ClickDelegate__Invoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}