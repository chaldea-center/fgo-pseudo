void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41885ED & 1) == 0 )
  {
    sub_B2C35C(&FatigueRecoveryConfirmationDialog_TypeInfo, v1);
    byte_41885ED = 1;
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
  __int64 v18; // x1
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
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v31; // x1
  System_String_o *v32; // x25
  UILabel_o *inLabel; // x28
  UnityEngine_Object_o *inSvtIcon; // x20
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v36; // x20
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *v44; // x20
  FatigueRecoveryConfirmationDialog_c *v45; // x0
  UILabel_o *inAfterTimeLabel; // x20
  UILabel_o *outLabel; // x26
  UnityEngine_Object_o *outSvtIcon; // x20
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v50; // x20
  struct UnityEngine_GameObject_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *v58; // x20
  FatigueRecoveryConfirmationDialog_c *v59; // x0
  UILabel_o *outBeforeTimeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v62; // x0
  UILabel_o *v63; // x21
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v69; // x20

  if ( (byte_41885EC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&Method_CommonConfirmDialog_EndOpen__, v18);
    sub_B2C35C(&FatigueRecoveryConfirmationDialog_TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_11757/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, v23);
    sub_B2C35C(&StringLiteral_11743/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, v24);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v25);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v26);
    sub_B2C35C(&StringLiteral_11761/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, v27);
    sub_B2C35C(&StringLiteral_11664/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, v28);
    sub_B2C35C(&StringLiteral_11735/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, v29);
    byte_41885EC = 1;
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
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
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11761/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_73;
  v32 = (System_String_o *)inRootGameObject;
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
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11735/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
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
      v36 = *p_inSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108((UnityEngine_Object_o *)v36, 0LL);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0LL,
               0LL);
    this->fields.inSvtIcon = Object;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.inSvtIcon,
      (System_Int32_array **)Object,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = this->fields.inSvtIcon;
    v45 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v45 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_31325816(v44, v45->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_31328080(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v32, inAfterTime, 0LL);
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
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
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
      v50 = *p_outSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108((UnityEngine_Object_o *)v50, 0LL);
    }
    v51 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0LL,
            0LL);
    this->fields.outSvtIcon = v51;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.outSvtIcon,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v58 = this->fields.outSvtIcon;
    v59 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v59 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_31325816(v58, v59->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_31328080(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, 0LL);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v32, outBeforeTime, 0LL);
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
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
          GameObjectExtensions__SetLocalPositionX(v62, 127.0, 0LL);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0LL);
            v63 = this->fields.outLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11664/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0LL);
            if ( v63 )
            {
              UILabel__set_text(v63, (System_String_o *)inRootGameObject, 0LL);
              goto LABEL_65;
            }
          }
        }
      }
LABEL_73:
      sub_B2C434(inRootGameObject, v31);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v64, 6.0, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v65, 6.0, 0LL);
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
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11757/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_73;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_73;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_73;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v69 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}