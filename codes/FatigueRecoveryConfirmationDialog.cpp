void FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_5932B45 & 1) == 0 )
  {
    sub_21FFC50(&FatigueRecoveryConfirmationDialog_TypeInfo);
    byte_5932B45 = 1;
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
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Component_o *inRootGameObject; // x0
  __int64 v22; // x1
  System_String_o *v23; // x25
  __int64 v24; // x2
  UILabel_o *inLabel; // x28
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *inSvtIcon; // x28
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *v31; // x28
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  __int64 v40; // x2
  FatigueRecoveryConfirmationDialog_c *v41; // x0
  UnityEngine_GameObject_o *v42; // x28
  const MethodInfo *v43; // x2
  UILabel_o *inAfterTimeLabel; // x27
  UILabel_o *outLabel; // x26
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *outSvtIcon; // x26
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Object_o *v51; // x26
  struct UnityEngine_GameObject_o *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  __int64 v60; // x2
  FatigueRecoveryConfirmationDialog_c *v61; // x0
  UnityEngine_GameObject_o *v62; // x26
  const MethodInfo *v63; // x2
  UILabel_o *outBeforeTimeLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  UILabel_o *v69; // x21
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v77; // x20
  System_String_o *value; // [xsp+8h] [xbp-78h]

  if ( (byte_5932B44 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonConfirmDialog_EndOpen__);
    sub_21FFC50(&FatigueRecoveryConfirmationDialog_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12151/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/);
    sub_21FFC50(&StringLiteral_12146/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12155/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/);
    sub_21FFC50(&StringLiteral_12066/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/);
    sub_21FFC50(&StringLiteral_12138/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/);
    byte_5932B44 = 1;
  }
  this->fields.clickFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    (System_String_o *)inSvtEnt,
    (int32_t)inBeforeTime,
    (int32_t)inAfterTime,
    (bool)outSvtEnt,
    (bool)outBeforeTime);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_62;
  v23 = (System_String_o *)inRootGameObject;
  UILabel__set_text(this->fields.titleLabel, title, 0);
  inRootGameObject = (UnityEngine_Component_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(inRootGameObject, 0);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inRootGameObject, inSvtEnt != 0, 0);
  inRootGameObject = (UnityEngine_Component_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  inRootGameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(inRootGameObject, 0);
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inRootGameObject, outSvtEnt != 0, 0);
  if ( inSvtEnt )
  {
    inLabel = this->fields.inLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v24);
    inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0);
    if ( !inLabel )
      goto LABEL_62;
    UILabel__set_text(inLabel, (System_String_o *)inRootGameObject, 0);
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( UnityEngine_Object__op_Inequality(0, inSvtIcon, 0) )
    {
      v31 = (UnityEngine_Object_o *)this->fields.inSvtIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
      UnityEngine_Object__DestroyImmediate_83246828(v31, 0);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0,
               0);
    this->fields.inSvtIcon = Object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.inSvtIcon,
      (int32_t)Object,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v41 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v42 = this->fields.inSvtIcon;
    if ( !*(&FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo, v39, v40);
      v41 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_42876016(v42, v41->static_fields->SVT_ICON_POS, 0);
    GameObjectExtensions__SetLocalScale_42878128(
      this->fields.inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0);
    inRootGameObject = (UnityEngine_Component_o *)this->fields.inSvtIcon;
    if ( !inRootGameObject )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)inRootGameObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, v43);
    inRootGameObject = (UnityEngine_Component_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_Component_o *)System_String__Concat_75438412(v23, inAfterTime, 0);
    if ( !inAfterTimeLabel )
      goto LABEL_62;
    UILabel__set_text(inAfterTimeLabel, (System_String_o *)inRootGameObject, 0);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v24);
    inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0);
    if ( !outLabel )
      goto LABEL_62;
    UILabel__set_text(outLabel, (System_String_o *)inRootGameObject, 0);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
    if ( UnityEngine_Object__op_Inequality(0, outSvtIcon, 0) )
    {
      v51 = (UnityEngine_Object_o *)this->fields.outSvtIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
      UnityEngine_Object__DestroyImmediate_83246828(v51, 0);
    }
    v52 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0,
            0);
    this->fields.outSvtIcon = v52;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.outSvtIcon,
      (int32_t)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v61 = FatigueRecoveryConfirmationDialog_TypeInfo;
    v62 = this->fields.outSvtIcon;
    if ( !*(&FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo, v59, v60);
      v61 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_42876016(v62, v61->static_fields->SVT_ICON_POS, 0);
    GameObjectExtensions__SetLocalScale_42878128(
      this->fields.outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0);
    inRootGameObject = (UnityEngine_Component_o *)this->fields.outSvtIcon;
    if ( !inRootGameObject )
      goto LABEL_62;
    inRootGameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)inRootGameObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_62;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, v63);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_Component_o *)System_String__Concat_75438412(v23, outBeforeTime, 0);
    if ( !outBeforeTimeLabel )
      goto LABEL_62;
    UILabel__set_text(outBeforeTimeLabel, (System_String_o *)inRootGameObject, 0);
    inRootGameObject = (UnityEngine_Component_o *)this->fields.outAfterTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)inRootGameObject, value, 0);
    if ( inSvtEnt )
    {
      inRootGameObject = (UnityEngine_Component_o *)this->fields.outRootGameObject;
      if ( inRootGameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject(inRootGameObject, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, -125.0, 0);
        inRootGameObject = (UnityEngine_Component_o *)this->fields.inRootGameObject;
        if ( inRootGameObject )
        {
          v66 = UnityEngine_Component__get_gameObject(inRootGameObject, 0);
          GameObjectExtensions__SetLocalPositionX(v66, 127.0, 0);
          inRootGameObject = (UnityEngine_Component_o *)this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inRootGameObject, 1, 0);
            v69 = this->fields.outLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
            inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12066/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                            0);
            if ( v69 )
            {
              UILabel__set_text(v69, (System_String_o *)inRootGameObject, 0);
              goto LABEL_55;
            }
          }
        }
      }
LABEL_62:
      sub_21FFECC(inRootGameObject, v22);
    }
  }
  inRootGameObject = (UnityEngine_Component_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v70 = UnityEngine_Component__get_gameObject(inRootGameObject, 0);
  GameObjectExtensions__SetLocalPositionX(v70, 6.0, 0);
  inRootGameObject = (UnityEngine_Component_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_62;
  v71 = UnityEngine_Component__get_gameObject(inRootGameObject, 0);
  GameObjectExtensions__SetLocalPositionX(v71, 6.0, 0);
  inRootGameObject = (UnityEngine_Component_o *)this->fields.changeArrow;
  if ( !inRootGameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inRootGameObject, 0, 0);
LABEL_55:
  inRootGameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !inRootGameObject )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)inRootGameObject, message, 0);
  confirmLabel = this->fields.confirmLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
  inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0);
  if ( !confirmLabel )
    goto LABEL_62;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_62;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_62;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v77 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0, 0);
}