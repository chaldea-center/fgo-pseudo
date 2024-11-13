void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B111A2 & 1) == 0 )
  {
    sub_1BCA7E0(&FatigueRecoveryConfirmationDialog_TypeInfo, v1, v2);
    byte_4B111A2 = 1;
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v45; // x1
  System_String_o *v46; // x25
  UILabel_o *inLabel; // x28
  __int64 v48; // x1
  UnityEngine_Object_o *inSvtIcon; // x29
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  __int64 v51; // x1
  UnityEngine_GameObject_o *v52; // x29
  struct UnityEngine_GameObject_o *Object; // x0
  __int64 v54; // x1
  FatigueRecoveryConfirmationDialog_c *v55; // x0
  UnityEngine_GameObject_o *v56; // x29
  const MethodInfo *v57; // x2
  UILabel_o *inAfterTimeLabel; // x27
  UILabel_o *outLabel; // x26
  __int64 v60; // x1
  UnityEngine_Object_o *outSvtIcon; // x27
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  __int64 v63; // x1
  UnityEngine_GameObject_o *v64; // x27
  struct UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x1
  FatigueRecoveryConfirmationDialog_c *v67; // x0
  UnityEngine_GameObject_o *v68; // x27
  const MethodInfo *v69; // x2
  UILabel_o *outBeforeTimeLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v72; // x0
  __int64 v73; // x1
  UILabel_o *v74; // x21
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  __int64 v77; // x1
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Action_o *v84; // x20

  v12 = isDecideSe;
  if ( (byte_4B111A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&Method_CommonConfirmDialog_EndOpen__, v19, v20);
    sub_1BCA7E0(&FatigueRecoveryConfirmationDialog_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_11771/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11766/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11775/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_11686/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11758/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, v41, v42);
    byte_4B111A1 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11775/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_62;
  v46 = (System_String_o *)inRootGameObject;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !inLabel )
      goto LABEL_62;
    UILabel__set_text(inLabel, (System_String_o *)inRootGameObject, 0LL);
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    p_inSvtIcon = &this->fields.inSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, inSvtIcon, 0LL) )
    {
      v52 = *p_inSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
      UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)v52, 0LL);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0LL,
               0LL);
    this->fields.inSvtIcon = Object;
    sub_1BCA784(&this->fields.inSvtIcon, Object);
    v55 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v56 = this->fields.inSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo, v54);
      v55 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_34330940(v56, v55->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_34333164(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    v12 = isDecideSe;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, v57);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v46, inAfterTime, 0LL);
    if ( !inAfterTimeLabel )
      goto LABEL_62;
    UILabel__set_text(inAfterTimeLabel, (System_String_o *)inRootGameObject, 0LL);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !outLabel )
      goto LABEL_62;
    UILabel__set_text(outLabel, (System_String_o *)inRootGameObject, 0LL);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
    p_outSvtIcon = &this->fields.outSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, outSvtIcon, 0LL) )
    {
      v64 = *p_outSvtIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
      UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)v64, 0LL);
    }
    v65 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0LL,
            0LL);
    this->fields.outSvtIcon = v65;
    sub_1BCA784(&this->fields.outSvtIcon, v65);
    v67 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v68 = this->fields.outSvtIcon;
    if ( !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo, v66);
      v67 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_34330940(v68, v67->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_34333164(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     inRootGameObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, v69);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v46, outBeforeTime, 0LL);
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
          v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
          GameObjectExtensions__SetLocalPositionX(v72, 127.0, 0LL);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0LL);
            v74 = this->fields.outLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11686/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0LL);
            if ( v74 )
            {
              UILabel__set_text(v74, (System_String_o *)inRootGameObject, 0LL);
              goto LABEL_55;
            }
          }
        }
      }
LABEL_62:
      sub_1BCAA3C(inRootGameObject, v45);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v75, 6.0, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v76, 6.0, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_62;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_62;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_62;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = v12;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
}