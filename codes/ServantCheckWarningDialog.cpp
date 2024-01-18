// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog___ctor(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v7; // s0
  int v8; // s1
  int v9; // s2
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4189E72 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189E72 = 1;
  }
  v7 = 1050320830;
  v10 = (struct UnityEngine_Color_o)0LL;
  v8 = 1050320830;
  v9 = 1050320830;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DisableColor = v10;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog__Init(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UIWidget_o *v6; // x20
  int v7; // s0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4189E6A & 1) == 0 )
  {
    sub_B2C35C(&UIProgressBar_OnDragFinished_TypeInfo, method);
    sub_B2C35C(&Method_ServantCheckWarningDialog_OnSliderDragFinished__, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189E6A = 1;
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
  v6 = (UIWidget_o *)this->fields.titleLabel;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !v6 )
    goto LABEL_13;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_13;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0LL);
  checkSlider = this->fields.checkSlider;
  v12 = (UIProgressBar_OnDragFinished_o *)sub_B2C42C(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantCheckWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v12,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&checkSlider->fields.onDragFinished,
          (System_Int32_array **)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        ServantCheckWarningDialog__SetSlider(this, 0, v19),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B2C434(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckWarningDialog__OnClickCancel(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4189E70 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantCheckWarningDialog__OnClickCancel_b__27_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189E70 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickCancel_b__27_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall ServantCheckWarningDialog__OnClickDecide(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *checkSlider; // x0
  System_Action_o *v6; // x20

  if ( (byte_4189E6F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantCheckWarningDialog__OnClickDecide_b__26_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189E6F = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_B2C434(0LL, method);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 3;
      v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantCheckWarningDialog__OnClickDecide_b__26_0__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
}


void __fastcall ServantCheckWarningDialog__OnEnable(ServantCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4189E71 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, v3);
    byte_4189E71 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ServantCheckWarningDialog__OnSliderDragFinished(
        ServantCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  const MethodInfo *v5; // x2
  ServantCheckWarningDialog_o *v6; // x0
  bool v7; // w1

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_B2C434(checkSlider, method);
  }
  if ( value >= 0.9 )
  {
    UIProgressBar__set_value(checkSlider, 1.0, 0LL);
    v7 = 1;
    v6 = this;
  }
  else
  {
    UIProgressBar__set_value(checkSlider, 0.0, 0LL);
    v6 = this;
    v7 = 0;
  }
  ServantCheckWarningDialog__SetSlider(v6, v7, v5);
}


void __fastcall ServantCheckWarningDialog__OpenSellCombineWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v27; // x20

  if ( (byte_4189E6C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userSvtEntityList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantCheckWarningDialog_EndOpen__, v8);
    sub_B2C35C(&StringLiteral_11790/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, v9);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_B2C35C(&StringLiteral_11791/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, v13);
    byte_4189E6C = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__CreateCombineServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__SetMode_25384324((ServantCheckEquipListViewManager_o *)gameObject, 3, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11791/*"SERVANT_SELL_WARNING_COMBINE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11790/*"SERVANT_SELL_WARNING_COMBINE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_15:
    sub_B2C434(gameObject, v21);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v27; // x20

  if ( (byte_4189E6E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userSvtEntityList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantCheckWarningDialog_EndOpen__, v8);
    sub_B2C35C(&StringLiteral_11792/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, v9);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_B2C35C(&StringLiteral_11793/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, v13);
    byte_4189E6E = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__CreateMaterialTdServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__SetMode_25384324((ServantCheckEquipListViewManager_o *)gameObject, 3, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11793/*"SERVANT_SELL_WARNING_MATERIAL_TD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11792/*"SERVANT_SELL_WARNING_MATERIAL_TD_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_15:
    sub_B2C434(gameObject, v21);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall ServantCheckWarningDialog__OpenSellSSRareWarning(
        ServantCheckWarningDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        ServantCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v27; // x20

  if ( (byte_4189E6D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userSvtEntityList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantCheckWarningDialog_EndOpen__, v8);
    sub_B2C35C(&StringLiteral_11795/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, v9);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_B2C35C(&StringLiteral_11796/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, v13);
    byte_4189E6D = 1;
  }
  ServantCheckWarningDialog__Init(this, (const MethodInfo *)userSvtEntityList);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__CreateSSRareServantList(
    (ServantCheckEquipListViewManager_o *)gameObject,
    userSvtEntityList,
    0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantEquipListViewManager;
  if ( !gameObject )
    goto LABEL_15;
  ServantCheckEquipListViewManager__SetMode_25384324((ServantCheckEquipListViewManager_o *)gameObject, 3, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SELL_WARNING_SSRARE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SELL_WARNING_SSRARE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_SELL_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, (System_String_o *)gameObject, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_15:
    sub_B2C434(gameObject, v21);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog__SetSlider(
        ServantCheckWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v7; // x8
  UIButtonColor_o *decideButton; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v13; // x1

  if ( (byte_4189E6B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19633/*"img_slider_thumb_locked"*/, sliderOn);
    sub_B2C35C(&StringLiteral_19632/*"img_slider_thumb"*/, v5);
    byte_4189E6B = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_16;
  v7 = (System_String_o **)&StringLiteral_19632/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_19633/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
  decideButton = this->fields.decideButton;
  if ( sliderOn )
  {
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
    if ( !decideButton )
      goto LABEL_16;
  }
  else
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
    if ( !decideButton )
      goto LABEL_16;
  }
  UIButtonColor__set_defaultColor(decideButton, *(UnityEngine_Color_o *)&r, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite
    || (!sliderOn ? (v13 = 3LL) : (v13 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v13,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B2C434(sliderSprite, sliderOn);
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
  ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B2C434(0LL, method);
  ServantCheckWarningDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
}


void __fastcall ServantCheckWarningDialog___OnClickDecide_b__26_0(
        ServantCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  ServantCheckWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B2C434(0LL, method);
  ServantCheckWarningDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog_ClickDelegate___ctor(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckWarningDialog_ClickDelegate__BeginInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_41853CC & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_41853CC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantCheckWarningDialog_ClickDelegate__EndInvoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckWarningDialog_ClickDelegate__Invoke(
        ServantCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantCheckWarningDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantCheckWarningDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantCheckWarningDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantCheckWarningDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}