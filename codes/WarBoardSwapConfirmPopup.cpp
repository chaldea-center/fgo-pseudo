void WarBoardSwapConfirmPopup___ctor(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  if ( (byte_4CC50B9 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardInfoPopupBase_TypeInfo);
    byte_4CC50B9 = 1;
  }
  this->fields.nameLabelMaxWidth = 440.0;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardSwapConfirmPopup__ClosePopup(
        WarBoardSwapConfirmPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4CC50B8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC50B8 = 1;
  }
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0);
  v18 = v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1C719A4(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback,
    (int32_t)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


void WarBoardSwapConfirmPopup__Initialize(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1C71608(0, v3);
  UISkinSprite__setupSprite(windowBase, 0, 0);
}


void WarBoardSwapConfirmPopup__OnClickNo(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4CC50B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_WarBoardSwapConfirmPopup_OnClickNo__);
    byte_4CC50B7 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickNo__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickNo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_WarBoardSwapConfirmPopup_OnClickNo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        0,
        clickCallback->fields.method);
  }
}


void WarBoardSwapConfirmPopup__OnClickYes(WarBoardSwapConfirmPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4CC50B6 & 1) == 0 )
  {
    sub_1C713B0(&Method_WarBoardSwapConfirmPopup_OnClickYes__);
    byte_4CC50B6 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardSwapConfirmPopup_OnClickYes__;
    if ( (*((_BYTE *)Method_WarBoardSwapConfirmPopup_OnClickYes__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_WarBoardSwapConfirmPopup_OnClickYes__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        1,
        clickCallback->fields.method);
  }
}


void WarBoardSwapConfirmPopup__OpenConfirmPopup(
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    (int32_t)message,
    (int32_t)nameMessage1,
    nameMessage2,
    (int32_t)yesButton,
    (int64_t)noButton,
    (System_String_o *)method);
  nameLabel01 = (UILabel_o *)*(p_clickCallback - 6);
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, message, 0);
  nameLabel01 = this->fields.nameLabel01;
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, nameMessage1, 0);
  nameLabel01 = this->fields.nameLabel02;
  if ( !nameLabel01 )
    goto LABEL_9;
  UILabel__set_text(nameLabel01, nameMessage2, 0);
  nameLabel01 = this->fields.yesButtonLabel;
  if ( !nameLabel01
    || (UILabel__set_text(nameLabel01, yesButton, 0), (nameLabel01 = this->fields.noButtonLabel) == 0)
    || (UILabel__set_text(nameLabel01, noButton, 0), (nameLabel01 = this->fields.nameLabel01) == 0)
    || (UILabel__SetCondensedScale_49893052(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0),
        (nameLabel01 = this->fields.nameLabel02) == 0) )
  {
LABEL_9:
    sub_1C71608(nameLabel01, v15);
  }
  UILabel__SetCondensedScale_49893052(nameLabel01, this->fields.nameLabelMaxWidth, 0.0, 0);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v17);
}