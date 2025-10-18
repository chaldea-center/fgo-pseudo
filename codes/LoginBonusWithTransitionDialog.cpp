void LoginBonusWithTransitionDialog___ctor(LoginBonusWithTransitionDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0);
}


void LoginBonusWithTransitionDialog__CheckAssertion(LoginBonusWithTransitionDialog_o *this, const MethodInfo *method)
{
  ;
}


void LoginBonusWithTransitionDialog__Open(
        LoginBonusWithTransitionDialog_o *this,
        CommonUI_CampaignDirectBonusData_o *bonusData,
        GiftMaster_o *giftMst,
        ItemMaster_o *itemMst,
        System_Action_o *onCancelCallback,
        System_String_o *decideButtonText,
        System_Action_o *onDecideCallback,
        const MethodInfo *method)
{
  __int64 v14; // x25
  System_String_o *buttonDecideLabel; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CommonConfirmDialog_ClickDelegate_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UILabel_o *buttonCancelLabel; // x23
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *TransitionDialog; // x0
  UILabel_o *messageLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *v27; // x0
  GiftEntity_o *v28; // x1
  System_Action_o *v29; // x20

  if ( (byte_4C45875 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__);
    sub_1C37058(&LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_18600/*"detail"*/);
    sub_1C37058(&StringLiteral_22150/*"name"*/);
    byte_4C45875 = 1;
  }
  v14 = sub_1C372A4(LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = onDecideCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)onDecideCallback, v16, v17);
  *(_QWORD *)(v14 + 24) = onCancelCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)onCancelCallback, v18, v19);
  v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)v14,
    Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__,
    0);
  this->fields.clickFunc = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)v20, v21, v22);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buttonDecideLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_15;
  UILabel__set_text(buttonCancelLabel, buttonDecideLabel, 0);
  buttonDecideLabel = (System_String_o *)this->fields.buttonDecideLabel;
  if ( !buttonDecideLabel )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)buttonDecideLabel, decideButtonText, 0);
  if ( !bonusData )
    goto LABEL_15;
  titleLabel = this->fields.titleLabel;
  TransitionDialog = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(TransitionDialog, (System_String_o *)StringLiteral_22150/*"name"*/, 0, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, buttonDecideLabel, 0);
  messageLabel = this->fields.messageLabel;
  v27 = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(v27, (System_String_o *)StringLiteral_18600/*"detail"*/, 0, 0);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, buttonDecideLabel, 0), !giftMst)
    || (buttonDecideLabel = (System_String_o *)GiftMaster__getDataById(giftMst, bonusData->fields.giftId, 0)) == 0
    || (v28 = (GiftEntity_o *)buttonDecideLabel, (buttonDecideLabel = (System_String_o *)this->fields.bonusItemIcon) == 0) )
  {
LABEL_15:
    sub_1C372B4(buttonDecideLabel);
  }
  ItemIconComponent__SetGift((ItemIconComponent_o *)buttonDecideLabel, v28, v28->fields.num, 0, 0);
  v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
}


void LoginBonusWithTransitionDialog__Open_45893228(
        LoginBonusWithTransitionDialog_o *this,
        CommonUI_CampaignDirectBonusData_o *bonusData,
        GiftMaster_o *giftMst,
        ItemMaster_o *itemMst,
        System_Action_o *onCancelCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buttonDecide; // x0
  UnityEngine_Transform_o *v11; // x23
  float y; // s8
  int v13; // s0
  float v14; // s1
  ItemMaster_o *v15; // x3
  const MethodInfo *v16; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  buttonDecide = this->fields.buttonDecide;
  if ( !buttonDecide )
    goto LABEL_10;
  buttonDecide = UnityEngine_GameObject__get_gameObject(buttonDecide, 0);
  if ( !buttonDecide )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(buttonDecide, 0, 0);
  buttonDecide = this->fields.buttonCancel;
  if ( !buttonDecide )
    goto LABEL_10;
  buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buttonDecide, 0);
  if ( !this->fields.buttonCancel
    || (v11 = (UnityEngine_Transform_o *)buttonDecide,
        (buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.buttonCancel, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)buttonDecide, 0),
        (buttonDecide = this->fields.buttonCancel) == 0)
    || (y = localPosition.fields.y,
        (buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buttonDecide, 0)) == 0)
    || (v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)buttonDecide, 0), !v11) )
  {
LABEL_10:
    sub_1C372B4(buttonDecide);
  }
  v13 = 0;
  v14 = y;
  UnityEngine_Transform__set_localPosition(v11, v18, 0);
  LoginBonusWithTransitionDialog__Open(this, bonusData, giftMst, v15, onCancelCallback, 0, 0, v16);
}


void LoginBonusWithTransitionDialog___c__DisplayClass1_0___ctor(
        LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LoginBonusWithTransitionDialog___c__DisplayClass1_0___Open_b__0(
        LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C45876 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__);
    sub_1C37058(&LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo);
    byte_4C45876 = 1;
  }
  v5 = sub_1C372A4(LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__,
          0),
        !Instance) )
  {
    sub_1C372B4(v6);
  }
  CommonUI__CloseLoginBonusWithTransitionDialog((CommonUI_o *)Instance, v10, 0);
}


void LoginBonusWithTransitionDialog___c__DisplayClass1_1___ctor(
        LoginBonusWithTransitionDialog___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LoginBonusWithTransitionDialog___c__DisplayClass1_1___Open_b__1(
        LoginBonusWithTransitionDialog___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *CS___8__locals1; // x8
  __int64 v3; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C372B4(this);
  v3 = 24;
  if ( this->fields.isDecide )
    v3 = 16;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0);
}