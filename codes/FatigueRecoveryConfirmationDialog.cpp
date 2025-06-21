void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B16E6F & 1) == 0 )
  {
    sub_1BCAFF8(&FatigueRecoveryConfirmationDialog_TypeInfo, v1);
    byte_4B16E6F = 1;
  }
  FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_POS = (struct UnityEngine_Vector2_o)0x4180000040000000LL;
  FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE = 0.715;
}


void __fastcall FatigueRecoveryConfirmationDialog___ctor(
        FatigueRecoveryConfirmationDialog_o *this,
        const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FatigueRecoveryConfirmationDialog__OpenDecideDlg(
        FatigueRecoveryConfirmationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        UserServantEntity_o *inSvt,
        System_String_o *inBeforeTime,
        System_String_o *inAfterTime,
        UserServantEntity_o *outSvt,
        System_String_o *outBeforeTime,
        System_String_o *outAfterTime,
        CommonConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-18h]

  FatigueRecoveryConfirmationDialog__Setup(
    this,
    title,
    message,
    inSvt,
    inBeforeTime,
    inAfterTime,
    outSvt,
    outBeforeTime,
    outAfterTime,
    1,
    func,
    v11);
}


void __fastcall FatigueRecoveryConfirmationDialog__Setup(
        FatigueRecoveryConfirmationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        UserServantEntity_o *inSvtEnt,
        System_String_o *inBeforeTime,
        System_String_o *inAfterTime,
        UserServantEntity_o *outSvtEnt,
        System_String_o *outBeforeTime,
        System_String_o *outAfterTime,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  bool v12; // w29
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v32; // x1
  System_String_o *v33; // x25
  UILabel_o *inLabel; // x28
  UnityEngine_Object_o *inSvtIcon; // x29
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v37; // x29
  FatigueRecoveryConfirmationDialog_c *v38; // x0
  UnityEngine_GameObject_o *v39; // x29
  UILabel_o *inAfterTimeLabel; // x27
  UILabel_o *outLabel; // x26
  UnityEngine_Object_o *outSvtIcon; // x27
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v44; // x27
  FatigueRecoveryConfirmationDialog_c *v45; // x0
  UnityEngine_GameObject_o *v46; // x27
  UILabel_o *outBeforeTimeLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v49; // x0
  UILabel_o *v50; // x21
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v56; // x20

  v12 = isDecideSe;
  if ( (byte_4B16E6E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, title);
    sub_1BCAFF8(&Method_CommonConfirmDialog_EndOpen__, v19);
    sub_1BCAFF8(&FatigueRecoveryConfirmationDialog_TypeInfo, v20);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___, v21);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v22);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_11561/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, v24);
    sub_1BCAFF8(&StringLiteral_11556/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, v25);
    sub_1BCAFF8(&StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, v26);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v27);
    sub_1BCAFF8(&StringLiteral_11565/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, v28);
    sub_1BCAFF8(&StringLiteral_11476/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, v29);
    sub_1BCAFF8(&StringLiteral_11548/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, v30);
    byte_4B16E6E = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCAF9C(&this->fields.clickFunc);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11565/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_62;
  v33 = (System_String_o *)inRootGameObject;
  UILabel__set_text(this->fields.titleLabel, title, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, inSvtEnt != 0LL, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, outSvtEnt != 0LL, 0LL);
  if ( inSvtEnt )
  {
    inLabel = this->fields.inLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11548/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !inLabel )
      goto LABEL_62;
    UILabel__set_text(inLabel, (System_String_o *)inRootGameObject, 0LL);
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_inSvtIcon = &this->fields.inSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, inSvtIcon, 0LL) )
    {
      v37 = *p_inSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70136264((UnityEngine_Object_o *)v37, 0LL);
    }
    this->fields.inSvtIcon = BaseMonoBehaviour__createObject(
                               (BaseMonoBehaviour_o *)this,
                               this->fields.servantIconPrefab,
                               this->fields.inRootGameObject,
                               0LL,
                               0LL);
    sub_1BCAF9C(&this->fields.inSvtIcon);
    v38 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v39 = this->fields.inSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v38 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_35356744(v39, v38->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_35358856(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    v12 = isDecideSe;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_62450424(v33, inAfterTime, 0LL);
    if ( !inAfterTimeLabel )
      goto LABEL_62;
    UILabel__set_text(inAfterTimeLabel, (System_String_o *)inRootGameObject, 0LL);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11556/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !outLabel )
      goto LABEL_62;
    UILabel__set_text(outLabel, (System_String_o *)inRootGameObject, 0LL);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_outSvtIcon = &this->fields.outSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, outSvtIcon, 0LL) )
    {
      v44 = *p_outSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70136264((UnityEngine_Object_o *)v44, 0LL);
    }
    this->fields.outSvtIcon = BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                this->fields.servantIconPrefab,
                                this->fields.outRootGameObject,
                                0LL,
                                0LL);
    sub_1BCAF9C(&this->fields.outSvtIcon);
    v45 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v46 = this->fields.outSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v45 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_35356744(v46, v45->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_35358856(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, 0LL);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_62450424(v33, outBeforeTime, 0LL);
    if ( !outBeforeTimeLabel )
      goto LABEL_62;
    UILabel__set_text(outBeforeTimeLabel, (System_String_o *)inRootGameObject, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outAfterTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, outAfterTime, 0LL);
    if ( inSvtEnt )
    {
      inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
      if ( inRootGameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, -125.0, 0LL);
        inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
        if ( inRootGameObject )
        {
          v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
          GameObjectExtensions__SetLocalPositionX(v49, 127.0, 0LL);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0LL);
            v50 = this->fields.outLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11476/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0LL);
            if ( v50 )
            {
              UILabel__set_text(v50, (System_String_o *)inRootGameObject, 0LL);
              goto LABEL_55;
            }
          }
        }
      }
LABEL_62:
      sub_1BCB254(inRootGameObject, v32);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v51, 6.0, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v52, 6.0, 0LL);
  inRootGameObject = this->fields.changeArrow;
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, 0, 0LL);
LABEL_55:
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !inRootGameObject )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)inRootGameObject, message, 0LL);
  confirmLabel = this->fields.confirmLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_62;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_62;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_62;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v12;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v56 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
}