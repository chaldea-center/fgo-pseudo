void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9F9A & 1) == 0 )
  {
    sub_B16FFC(&FatigueRecoveryConfirmationDialog_TypeInfo, v1);
    byte_40F9F9A = 1;
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
  System_String_o *v30; // x0
  System_String_o *v31; // x25
  UnityEngine_Component_o *inRootGameObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *outRootGameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *inLabel; // x28
  System_String_o *v37; // x0
  UnityEngine_Object_o *inSvtIcon; // x20
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v40; // x20
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *v48; // x20
  FatigueRecoveryConfirmationDialog_c *v49; // x0
  EventServantFatigueChangeDialogItem_o *Component_srcLineSprite; // x0
  UILabel_o *inBeforeTimeLabel; // x0
  UILabel_o *inAfterTimeLabel; // x20
  System_String_o *v53; // x0
  UILabel_o *outLabel; // x26
  System_String_o *v55; // x0
  UnityEngine_Object_o *outSvtIcon; // x20
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v58; // x20
  struct UnityEngine_GameObject_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *v66; // x20
  FatigueRecoveryConfirmationDialog_c *v67; // x0
  EventServantFatigueChangeDialogItem_o *v68; // x0
  UILabel_o *outBeforeTimeLabel; // x20
  System_String_o *v70; // x0
  UILabel_o *outAfterTimeLabel; // x0
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *changeArrow; // x0
  UILabel_o *v77; // x21
  System_String_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *confirmLabel; // x20
  System_String_o *v86; // x0
  UILabel_o *buttonDecideLabel; // x20
  System_String_o *v88; // x0
  UILabel_o *buttonCancelLabel; // x20
  System_String_o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Action_o *v95; // x20

  if ( (byte_40F9F99 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&Method_CommonConfirmDialog_EndOpen__, v18);
    sub_B16FFC(&FatigueRecoveryConfirmationDialog_TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_11707/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, v23);
    sub_B16FFC(&StringLiteral_11704/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, v24);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v25);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v26);
    sub_B16FFC(&StringLiteral_11711/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, v27);
    sub_B16FFC(&StringLiteral_11625/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, v28);
    sub_B16FFC(&StringLiteral_11696/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, v29);
    byte_40F9F99 = 1;
  }
  this->fields.clickFunc = func;
  sub_B16F98(
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
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11711/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_73;
  v31 = v30;
  UILabel__set_text(this->fields.titleLabel, title, 0LL);
  inRootGameObject = (UnityEngine_Component_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject(inRootGameObject, 0LL);
  if ( !gameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(gameObject, inSvtEnt != 0LL, 0LL);
  outRootGameObject = (UnityEngine_Component_o *)this->fields.outRootGameObject;
  if ( !outRootGameObject )
    goto LABEL_73;
  v35 = UnityEngine_Component__get_gameObject(outRootGameObject, 0LL);
  if ( !v35 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v35, outSvtEnt != 0LL, 0LL);
  if ( inSvtEnt )
  {
    inLabel = this->fields.inLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11696/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !inLabel )
      goto LABEL_73;
    UILabel__set_text(inLabel, v37, 0LL);
    p_inSvtIcon = &this->fields.inSvtIcon;
    inSvtIcon = (UnityEngine_Object_o *)this->fields.inSvtIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(0LL, inSvtIcon, 0LL) )
    {
      v40 = *p_inSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)v40, 0LL);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0LL,
               0LL);
    this->fields.inSvtIcon = Object;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.inSvtIcon,
      (System_Int32_array **)Object,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v48 = this->fields.inSvtIcon;
    v49 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v49 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_27419860(v48, v49->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_27422124(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    if ( !*p_inSvtIcon )
      goto LABEL_73;
    Component_srcLineSprite = (EventServantFatigueChangeDialogItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         *p_inSvtIcon,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !Component_srcLineSprite )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set(Component_srcLineSprite, inSvtEnt, 0LL);
    inBeforeTimeLabel = this->fields.inBeforeTimeLabel;
    if ( !inBeforeTimeLabel )
      goto LABEL_73;
    UILabel__set_text(inBeforeTimeLabel, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    v53 = System_String__Concat_43743732(v31, inAfterTime, 0LL);
    if ( !inAfterTimeLabel )
      goto LABEL_73;
    UILabel__set_text(inAfterTimeLabel, v53, 0LL);
  }
  if ( outSvtEnt )
  {
    outLabel = this->fields.outLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
    if ( !outLabel )
      goto LABEL_73;
    UILabel__set_text(outLabel, v55, 0LL);
    outSvtIcon = (UnityEngine_Object_o *)this->fields.outSvtIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_outSvtIcon = &this->fields.outSvtIcon;
    if ( UnityEngine_Object__op_Inequality(0LL, outSvtIcon, 0LL) )
    {
      v58 = *p_outSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)v58, 0LL);
    }
    v59 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0LL,
            0LL);
    this->fields.outSvtIcon = v59;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.outSvtIcon,
      (System_Int32_array **)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = this->fields.outSvtIcon;
    v67 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v67 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_27419860(v66, v67->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_27422124(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    if ( !*p_outSvtIcon )
      goto LABEL_73;
    v68 = (EventServantFatigueChangeDialogItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     *p_outSvtIcon,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !v68 )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set(v68, outSvtEnt, 0LL);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    v70 = System_String__Concat_43743732(v31, outBeforeTime, 0LL);
    if ( !outBeforeTimeLabel )
      goto LABEL_73;
    UILabel__set_text(outBeforeTimeLabel, v70, 0LL);
    outAfterTimeLabel = this->fields.outAfterTimeLabel;
    if ( !outAfterTimeLabel )
      goto LABEL_73;
    UILabel__set_text(outAfterTimeLabel, outAfterTime, 0LL);
    if ( inSvtEnt )
    {
      v72 = (UnityEngine_Component_o *)this->fields.outRootGameObject;
      if ( v72 )
      {
        v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
        GameObjectExtensions__SetLocalPositionX(v73, -125.0, 0LL);
        v74 = (UnityEngine_Component_o *)this->fields.inRootGameObject;
        if ( v74 )
        {
          v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
          GameObjectExtensions__SetLocalPositionX(v75, 127.0, 0LL);
          changeArrow = this->fields.changeArrow;
          if ( changeArrow )
          {
            UnityEngine_GameObject__SetActive(changeArrow, 1, 0LL);
            v77 = this->fields.outLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11625/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, 0LL);
            if ( v77 )
            {
              UILabel__set_text(v77, v78, 0LL);
              goto LABEL_65;
            }
          }
        }
      }
LABEL_73:
      sub_B170D4();
    }
  }
  v79 = (UnityEngine_Component_o *)this->fields.outRootGameObject;
  if ( !v79 )
    goto LABEL_73;
  v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
  GameObjectExtensions__SetLocalPositionX(v80, 6.0, 0LL);
  v81 = (UnityEngine_Component_o *)this->fields.inRootGameObject;
  if ( !v81 )
    goto LABEL_73;
  v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
  GameObjectExtensions__SetLocalPositionX(v82, 6.0, 0LL);
  v83 = this->fields.changeArrow;
  if ( !v83 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v83, 0, 0LL);
LABEL_65:
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_73;
  UILabel__set_text(messageLabel, message, 0LL);
  confirmLabel = this->fields.confirmLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11707/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_73;
  UILabel__set_text(confirmLabel, v86, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_73;
  UILabel__set_text(buttonDecideLabel, v88, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_73;
  UILabel__set_text(buttonCancelLabel, v90, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v95 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
}