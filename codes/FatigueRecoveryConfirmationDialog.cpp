void __fastcall FatigueRecoveryConfirmationDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8CBD & 1) == 0 )
  {
    sub_B5D5C4(&FatigueRecoveryConfirmationDialog_TypeInfo, v1, v2, v3);
    byte_42E8CBD = 1;
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  UnityEngine_GameObject_o *inRootGameObject; // x0
  __int64 v55; // x1
  System_String_o *v56; // x25
  UILabel_o *inLabel; // x28
  UnityEngine_Object_o *inSvtIcon; // x20
  UnityEngine_GameObject_o **p_inSvtIcon; // x28
  UnityEngine_GameObject_o *v60; // x20
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_GameObject_o *v68; // x20
  FatigueRecoveryConfirmationDialog_c *v69; // x0
  UILabel_o *inAfterTimeLabel; // x20
  UILabel_o *outLabel; // x26
  UnityEngine_Object_o *outSvtIcon; // x20
  UnityEngine_GameObject_o **p_outSvtIcon; // x26
  UnityEngine_GameObject_o *v74; // x20
  struct UnityEngine_GameObject_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_GameObject_o *v82; // x20
  FatigueRecoveryConfirmationDialog_c *v83; // x0
  UILabel_o *outBeforeTimeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v86; // x0
  UILabel_o *v87; // x21
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  UILabel_o *confirmLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20
  System_Action_o *v93; // x20

  if ( (byte_42E8CBC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, inSvtEnt);
    sub_B5D5C4(&Method_CommonConfirmDialog_EndOpen__, v18, v19, v20);
    sub_B5D5C4(&FatigueRecoveryConfirmationDialog_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11887/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11882/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11891/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_11802/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11874/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, v51, v52, v53);
    byte_42E8CBC = 1;
  }
  this->fields.clickFunc = func;
  sub_B5D560(
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
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_RECOVERY_FATIGUE_LIST_PICKUP_COLOR"*/, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_73;
  v56 = (System_String_o *)inRootGameObject;
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
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11874/*"SERVANT_IN_RECOVERY_FATIGUE_TEXT"*/, 0LL);
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
      v60 = *p_inSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)v60, 0LL);
    }
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.servantIconPrefab,
               this->fields.inRootGameObject,
               0LL,
               0LL);
    this->fields.inSvtIcon = Object;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.inSvtIcon,
      (System_Int32_array **)Object,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields.inSvtIcon;
    v69 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v69 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_32430388(v68, v69->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_32432652(
      *p_inSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_inSvtIcon;
    if ( !*p_inSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, inSvtEnt, 0LL);
    inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inBeforeTimeLabel;
    if ( !inRootGameObject )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)inRootGameObject, inBeforeTime, 0LL);
    inAfterTimeLabel = this->fields.inAfterTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v56, inAfterTime, 0LL);
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
    inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_OUT_RECOVERY_FATIGUE_TEXT"*/, 0LL);
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
      v74 = *p_outSvtIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)v74, 0LL);
    }
    v75 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            this->fields.servantIconPrefab,
            this->fields.outRootGameObject,
            0LL,
            0LL);
    this->fields.outSvtIcon = v75;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.outSvtIcon,
      (System_Int32_array **)v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    v82 = this->fields.outSvtIcon;
    v83 = FatigueRecoveryConfirmationDialog_TypeInfo;
    if ( (BYTE3(FatigueRecoveryConfirmationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FatigueRecoveryConfirmationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FatigueRecoveryConfirmationDialog_TypeInfo);
      v83 = FatigueRecoveryConfirmationDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition_32430388(v82, v83->static_fields->SVT_ICON_POS, 0LL);
    GameObjectExtensions__SetLocalScale_32432652(
      *p_outSvtIcon,
      FatigueRecoveryConfirmationDialog_TypeInfo->static_fields->SVT_ICON_SCALE,
      0LL);
    inRootGameObject = *p_outSvtIcon;
    if ( !*p_outSvtIcon )
      goto LABEL_73;
    inRootGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     inRootGameObject,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueChangeDialogItem___);
    if ( !inRootGameObject )
      goto LABEL_73;
    EventServantFatigueChangeDialogItem__Set((EventServantFatigueChangeDialogItem_o *)inRootGameObject, outSvtEnt, 0LL);
    outBeforeTimeLabel = this->fields.outBeforeTimeLabel;
    inRootGameObject = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v56, outBeforeTime, 0LL);
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
          v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
          GameObjectExtensions__SetLocalPositionX(v86, 127.0, 0LL);
          inRootGameObject = this->fields.changeArrow;
          if ( inRootGameObject )
          {
            UnityEngine_GameObject__SetActive(inRootGameObject, 1, 0LL);
            v87 = this->fields.outLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11802/*"SERVANT_CHANGE_RECOVERY_FATIGUE_TEXT"*/,
                                                             0LL);
            if ( v87 )
            {
              UILabel__set_text(v87, (System_String_o *)inRootGameObject, 0LL);
              goto LABEL_65;
            }
          }
        }
      }
LABEL_73:
      sub_B5D69C(inRootGameObject, v55);
    }
  }
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.outRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v88, 6.0, 0LL);
  inRootGameObject = (UnityEngine_GameObject_o *)this->fields.inRootGameObject;
  if ( !inRootGameObject )
    goto LABEL_73;
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inRootGameObject, 0LL);
  GameObjectExtensions__SetLocalPositionX(v89, 6.0, 0LL);
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
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_RECOVERY_FATIGUE_DIALOG_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_73;
  UILabel__set_text(confirmLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_73;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)inRootGameObject, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  inRootGameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_73;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)inRootGameObject, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v93 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v93, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
}