void __fastcall WarBoardSwapConfirmPopup___ctor(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  if ( (byte_4BFB5C8 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_4BFB5C8 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4BFB5C7 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, hideCallback);
    byte_4BFB5C7 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  v18 = (int64_t)v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1C2E648(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback, v18, v12, v13, v14, v15, v16, v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


void __fastcall WarBoardSwapConfirmPopup__Initialize(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1C2E388(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardSwapConfirmPopup__OnClickNo(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4BFB5C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_WarBoardSwapConfirmPopup_OnClickNo__, method);
    byte_4BFB5C6 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickNo__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickNo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_WarBoardSwapConfirmPopup_OnClickNo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
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

  if ( (byte_4BFB5C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_WarBoardSwapConfirmPopup_OnClickYes__, method);
    byte_4BFB5C5 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickYes__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickYes__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_WarBoardSwapConfirmPopup_OnClickYes__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    (int64_t)message,
    (int32_t)nameMessage1,
    nameMessage2,
    (BattleSetupInfo_o *)yesButton,
    (FollowerInfo_o *)noButton,
    (PartyListViewItem_o *)method);
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
    || (UILabel__SetCondensedScale_48350976(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0LL),
        (nameLabel01 = this->fields.nameLabel02) == 0LL) )
  {
LABEL_9:
    sub_1C2E388(nameLabel01, v15);
  }
  UILabel__SetCondensedScale_48350976(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v17);
}