void __fastcall WarBoardSwapConfirmPopup___ctor(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  if ( (byte_4A4C209 & 1) == 0 )
  {
    sub_1B863B8(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_4A4C209 = 1;
  }
  this->fields.nameLabelMaxWidth = 440.0;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSwapConfirmPopup__ClosePopup(
        WarBoardSwapConfirmPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4A4C208 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, hideCallback);
    byte_4A4C208 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3);
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.hideCompleteCallback,
         (System_Delegate_o *)hideCallback,
         0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1B868D4(v7);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v10;
  }
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.hideCompleteCallback, (int32_t)v10, v8, v9);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v12);
}


void __fastcall WarBoardSwapConfirmPopup__Initialize(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1B86614(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardSwapConfirmPopup__OnClickNo(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4A4C207 & 1) == 0 )
  {
    sub_1B863B8(&Method_WarBoardSwapConfirmPopup_OnClickNo__, method);
    byte_4A4C207 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickNo__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickNo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_WarBoardSwapConfirmPopup_OnClickNo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall WarBoardSwapConfirmPopup__OnClickYes(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4A4C206 & 1) == 0 )
  {
    sub_1B863B8(&Method_WarBoardSwapConfirmPopup_OnClickYes__, method);
    byte_4A4C206 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickYes__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickYes__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_WarBoardSwapConfirmPopup_OnClickYes__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
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
  __int64 v15; // x1
  UILabel_o *nameLabel01; // x0
  const MethodInfo *v17; // x1

  this->fields.clickCallback = clickCallback;
  p_clickCallback = &this->fields.clickCallback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    (int32_t)message,
    (const MethodInfo *)nameMessage1);
  nameLabel01 = (UILabel_o *)*(p_clickCallback - 6);
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, message, 0LL);
  nameLabel01 = this->fields.nameLabel01;
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, nameMessage1, 0LL);
  nameLabel01 = this->fields.nameLabel02;
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, nameMessage2, 0LL);
  nameLabel01 = this->fields.yesButtonLabel;
  if ( !nameLabel01
    || (UILabel__set_text(nameLabel01, yesButton, 0LL), (nameLabel01 = this->fields.noButtonLabel) == 0LL)
    || (UILabel__set_text(nameLabel01, noButton, 0LL), (nameLabel01 = this->fields.nameLabel01) == 0LL)
    || (UILabel__SetCondensedScale_48026468(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0LL),
        (nameLabel01 = this->fields.nameLabel02) == 0LL) )
  {
LABEL_9:
    sub_1B86614(nameLabel01, v15);
  }
  UILabel__SetCondensedScale_48026468(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v17);
}