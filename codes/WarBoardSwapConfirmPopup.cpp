void __fastcall WarBoardSwapConfirmPopup___ctor(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB39 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_40FBB39 = 1;
  }
  this->fields.nameLabelMaxWidth = 440.0;
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  }
  WarBoardInfoPopupBase___ctor((WarBoardInfoPopupBase_o *)this, 0LL);
}


void __fastcall WarBoardSwapConfirmPopup__ClosePopup(
        WarBoardSwapConfirmPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardSwapConfirmPopup_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_40FBB38 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, hideCallback);
    byte_40FBB38 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
  {
    v17 = (WarBoardSwapConfirmPopup_o *)sub_B173C8(v10);
    WarBoardSwapConfirmPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, 0LL);
  }
}


void __fastcall WarBoardSwapConfirmPopup__Initialize(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, 0LL);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_B170D4();
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardSwapConfirmPopup__OnClickNo(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40FBB37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBB37 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 0, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardSwapConfirmPopup__OnClickYes(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40FBB36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBB36 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardSwapConfirmPopup__OpenConfirmPopup(
        WarBoardSwapConfirmPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *nameMessage1,
        System_String_o *nameMessage2,
        System_String_o *yesButton,
        System_String_o *noButton,
        const MethodInfo *method)
{
  struct System_Action_bool__o **p_clickCallback; // x25
  UILabel_o *v15; // x0
  UILabel_o *nameLabel01; // x0
  UILabel_o *nameLabel02; // x0
  UILabel_o *yesButtonLabel; // x0
  UILabel_o *noButtonLabel; // x0
  UILabel_o *v20; // x0
  UILabel_o *v21; // x0

  this->fields.clickCallback = clickCallback;
  p_clickCallback = &this->fields.clickCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    (System_String_array **)message,
    (System_String_array **)nameMessage1,
    (System_Boolean_array **)nameMessage2,
    (System_Int32_array **)yesButton,
    (System_Int32_array *)noButton,
    (System_Int32_array *)method);
  v15 = (UILabel_o *)*(p_clickCallback - 6);
  if ( !v15 )
    goto LABEL_9;
  UILabel__set_text(v15, message, 0LL);
  nameLabel01 = this->fields.nameLabel01;
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, nameMessage1, 0LL);
  nameLabel02 = this->fields.nameLabel02;
  if ( !nameLabel02 )
    goto LABEL_9;
  UILabel__set_text(nameLabel02, nameMessage2, 0LL);
  yesButtonLabel = this->fields.yesButtonLabel;
  if ( !yesButtonLabel
    || (UILabel__set_text(yesButtonLabel, yesButton, 0LL), (noButtonLabel = this->fields.noButtonLabel) == 0LL)
    || (UILabel__set_text(noButtonLabel, noButton, 0LL), (v20 = this->fields.nameLabel01) == 0LL)
    || (UILabel__SetCondensedScale_40440812(v20, this->fields.nameLabelMaxWidth, 0LL),
        (v21 = this->fields.nameLabel02) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__SetCondensedScale_40440812(v21, this->fields.nameLabelMaxWidth, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}