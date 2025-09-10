void FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4C21B6F & 1) == 0 )
  {
    sub_1C2D490(&FatigueRecoveryConfirmationDialog_TypeInfo);
    byte_4C21B6F = 1;
  }
  FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_POS = (struct UnityEngine_Vector2_o)0x4180000040000000LL;
  FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE = 0.715;
}


void FatigueRecoveryConfirmationDialog___ctor(FatigueRecoveryConfirmationDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0);
}


void FatigueRecoveryConfirmationDialog__OpenDecideDlg(
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


void FatigueRecoveryConfirmationDialog__Setup(
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
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v20; // x1
  System_String_o *v21; // x25
  UILabel_o *inLabel; // x28
  UnityEngine_Object_o *inSvtIcon; // x29
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v25; // x29
  FatigueRecoveryConfirmationDialog_c *v26; // x0
  UnityEngine_GameObject_o *v27; // x29
  UILabel_o *inAfterTimeLabel; // x27
  UILabel_o *outLabel; // x26
  UnityEngine_Object_o *outSvtIcon; // x27
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v32; // x27
  FatigueRecoveryConfirmationDialog_c *v33; // x0
  UnityEngine_GameObject_o *v34; // x27
  UILabel_o *outBeforeTimeLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  UILabel_o *v38; // x21
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v44; // x20

  v12 = isDecideSe;
  if ( (byte_4C21B6E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C2D490(&FatigueRecoveryConfirmationDialog_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11659/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_11654/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_11663/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/);
    sub_1C2D490(&StringLiteral_11574/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/);
    sub_1C2D490(&StringLiteral_11646/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/);
    byte_4C21B6E = 1;
  }
  this->fields.clickFunc = func;
  sub_1C2D434(&this->fields.clickFunc);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11663/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_62;
  v21 = (System_String_o *)inRootGameObject;
  UILabel__set_text(this->fields.titleLabel, title, 0);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, inSvtEnt != 0, 0);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, outSvtEnt != 0, 0);
  if ( inSvtEnt )
  {
    inLabel = this->fields.inLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11646/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0);
    if ( !inLabel )
      goto LABEL_62;
    UILabel__set_text(inLabel, (System_String_o *)inRootGameObject, 0);
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_inSvtIcon = &this->fields.inSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0, inSvtIcon, 0) )
    {
      v25 = *p_inSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892((UnityEngine_Object_o *)v25, 0);
    }
    this->fields.inSvtIcon = BaseMonoBehaviour__createObject(
                               (BaseMonoBehaviour_o *)this,
                               this->fields.servantIconPrefab,
                               this->fields.inRootGameObject,
                               0,
                               0);
    sub_1C2D434(&this->fields.inSvtIcon);
    v26 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v27 = this->fields.inSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v26 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_35918392(v27, v26->static_fields->SVT_ICON_POS, 0);
    GameObjectExtensions__SetLocalScale_35920504(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    v12 = isDecideSe;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, 0);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_63457864(v21, inAfterTime, 0);
    if ( !inAfterTimeLabel )
      goto LABEL_62;
    UILabel__set_text(inAfterTimeLabel, (System_String_o *)inRootGameObject, 0);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11654/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0);
    if ( !outLabel )
      goto LABEL_62;
    UILabel__set_text(outLabel, (System_String_o *)inRootGameObject, 0);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_outSvtIcon = &this->fields.outSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0, outSvtIcon, 0) )
    {
      v32 = *p_outSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892((UnityEngine_Object_o *)v32, 0);
    }
    this->fields.outSvtIcon = BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                this->fields.servantIconPrefab,
                                this->fields.outRootGameObject,
                                0,
                                0);
    sub_1C2D434(&this->fields.outSvtIcon);
    v33 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v34 = this->fields.outSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v33 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_35918392(v34, v33->static_fields->SVT_ICON_POS, 0);
    GameObjectExtensions__SetLocalScale_35920504(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, 0);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_63457864(v21, outBeforeTime, 0);
    if ( !outBeforeTimeLabel )
      goto LABEL_62;
    UILabel__set_text(outBeforeTimeLabel, (System_String_o *)inRootGameObject, 0);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outAfterTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, outAfterTime, 0);
    if ( inSvtEnt )
    {
      inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
      if ( inRootGameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, -125.0, 0);
        inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
        if ( inRootGameObject )
        {
          v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
          GameObjectExtensions__SetLocalPositionX(v37, 127.0, 0);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0);
            v38 = this->fields.outLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11574/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0);
            if ( v38 )
            {
              UILabel__set_text(v38, (System_String_o *)inRootGameObject, 0);
              goto LABEL_55;
            }
          }
        }
      }
LABEL_62:
      sub_1C2D6EC(inRootGameObject, v20);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
  GameObjectExtensions__SetLocalPositionX(v39, 6.0, 0);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0);
  GameObjectExtensions__SetLocalPositionX(v40, 6.0, 0);
  inRootGameObject = this->fields.changeArrow;
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(inRootGameObject, 0, 0);
LABEL_55:
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !inRootGameObject )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)inRootGameObject, message, 0);
  confirmLabel = this->fields.confirmLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11659/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0);
  if ( !confirmLabel )
    goto LABEL_62;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_62;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_62;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v12;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v44 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0);
}