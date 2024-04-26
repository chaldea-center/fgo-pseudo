void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4352234 & 1) == 0 )
  {
    sub_B70694(&FatigueRecoveryConfirmationDialog_TypeInfo);
    byte_4352234 = 1;
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
  const MethodInfo *v11; // [xsp+18h] [xbp-8h]

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
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v19; // x1
  System_String_o *v20; // x25
  UILabel_o *inLabel; // x28
  UnityEngine_Object_o *inSvtIcon; // x20
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v24; // x20
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x20
  FatigueRecoveryConfirmationDialog_c *v33; // x0
  UILabel_o *inAfterTimeLabel; // x20
  UILabel_o *outLabel; // x26
  UnityEngine_Object_o *outSvtIcon; // x20
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v38; // x20
  struct UnityEngine_GameObject_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *v46; // x20
  FatigueRecoveryConfirmationDialog_c *v47; // x0
  UILabel_o *outBeforeTimeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  UILabel_o *v51; // x21
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v57; // x20

  if ( (byte_4352233 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommonConfirmDialog_EndOpen__);
    sub_B70694(&FatigueRecoveryConfirmationDialog_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_11908/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/);
    sub_B70694(&StringLiteral_11903/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/);
    sub_B70694(&StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_11912/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/);
    sub_B70694(&StringLiteral_11823/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/);
    sub_B70694(&StringLiteral_11895/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/);
    byte_4352233 = 1;
  }
  this->fields.clickFunc = func;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message,
    (System_String_array **)inSvtEnt,
    (System_Boolean_array **)inBeforeTime,
    (System_Int32_array **)inAfterTime,
    (System_Int32_array *)outSvtEnt,
    (System_Int32_array *)outBeforeTime);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_73;
  v20 = (System_String_o *)inRootGameObject;
  UILabel__set_text(this->fields.titleLabel, title, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  if ( !inRootGameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(inRootGameObject, inSvtEnt != 0LL, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  inRootGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  if ( !inRootGameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(inRootGameObject, outSvtEnt != 0LL, 0LL);
  if ( inSvtEnt )
  {
    inLabel = this->fields.inLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !inLabel )
      goto LABEL_73;
    UILabel__set_text(inLabel, (System_String_o *)inRootGameObject, 0LL);
    p_inSvtIcon = &this->fields.inSvtIcon;
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(0LL, inSvtIcon, 0LL) )
    {
      v24 = *p_inSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420((UnityEngine_Object_o *)v24, 0LL);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0LL,
               0LL);
    this->fields.inSvtIcon = Object;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.inSvtIcon,
      (System_Int32_array **)Object,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = this->fields.inSvtIcon;
    v33 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v33 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_32497320(v32, v33->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_32499584(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44758168(v20, inAfterTime, 0LL);
    if ( !inAfterTimeLabel )
      goto LABEL_73;
    UILabel__set_text(inAfterTimeLabel, (System_String_o *)inRootGameObject, 0LL);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !outLabel )
      goto LABEL_73;
    UILabel__set_text(outLabel, (System_String_o *)inRootGameObject, 0LL);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_outSvtIcon = &this->fields.outSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, outSvtIcon, 0LL) )
    {
      v38 = *p_outSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420((UnityEngine_Object_o *)v38, 0LL);
    }
    v39 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0LL,
            0LL);
    this->fields.outSvtIcon = v39;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.outSvtIcon,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = this->fields.outSvtIcon;
    v47 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v47 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_32497320(v46, v47->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_32499584(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, 0LL);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44758168(v20, outBeforeTime, 0LL);
    if ( !outBeforeTimeLabel )
      goto LABEL_73;
    UILabel__set_text(outBeforeTimeLabel, (System_String_o *)inRootGameObject, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outAfterTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_73;
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
          v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
          GameObjectExtensions__SetLocalPositionX(v50, 127.0, 0LL);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0LL);
            v51 = this->fields.outLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11823/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0LL);
            if ( v51 )
            {
              UILabel__set_text(v51, (System_String_o *)inRootGameObject, 0LL);
              goto LABEL_65;
            }
          }
        }
      }
LABEL_73:
      sub_B7076C(inRootGameObject, v19);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v52, 6.0, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v53, 6.0, 0LL);
  inRootGameObject = this->fields.changeArrow;
  if ( !inRootGameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(inRootGameObject, 0, 0LL);
LABEL_65:
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !inRootGameObject )
    goto LABEL_73;
  UILabel__set_text((UILabel_o *)inRootGameObject, message, 0LL);
  confirmLabel = this->fields.confirmLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_73;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_73;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_73;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v57 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}