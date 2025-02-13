void __fastcall LoginBonusWithTransitionDialog___ctor(LoginBonusWithTransitionDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall LoginBonusWithTransitionDialog__CheckAssertion(
        LoginBonusWithTransitionDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall LoginBonusWithTransitionDialog__Open(
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
  GiftEntity_o *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CommonConfirmDialog_ClickDelegate_o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UILabel_o *buttonCancelLabel; // x23
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *TransitionDialog; // x0
  UILabel_o *messageLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *v40; // x0
  System_Action_o *v41; // x20

  if ( (byte_4BDEF97 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__);
    sub_1C21E38(&LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_18912/*"detail"*/);
    sub_1C21E38(&StringLiteral_22383/*"name"*/);
    byte_4BDEF97 = 1;
  }
  v14 = sub_1C22084(LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = onDecideCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)onDecideCallback, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = onCancelCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)onCancelCallback, v23, v24, v25, v26, v27, v28);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v14,
    Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__,
    0LL);
  this->fields.clickFunc = v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buttonDecideLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !buttonCancelLabel )
    goto LABEL_15;
  UILabel__set_text(buttonCancelLabel, buttonDecideLabel, 0LL);
  buttonDecideLabel = (System_String_o *)this->fields.buttonDecideLabel;
  if ( !buttonDecideLabel )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)buttonDecideLabel, decideButtonText, 0LL);
  if ( !bonusData )
    goto LABEL_15;
  titleLabel = this->fields.titleLabel;
  TransitionDialog = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0LL);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(
                        TransitionDialog,
                        (System_String_o *)StringLiteral_22383/*"name"*/,
                        0LL,
                        0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, buttonDecideLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  v40 = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0LL);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(v40, (System_String_o *)StringLiteral_18912/*"detail"*/, 0LL, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, buttonDecideLabel, 0LL), !giftMst)
    || (buttonDecideLabel = (System_String_o *)GiftMaster__getDataById(giftMst, bonusData->fields.giftId, 0LL)) == 0LL
    || (v16 = (GiftEntity_o *)buttonDecideLabel,
        (buttonDecideLabel = (System_String_o *)this->fields.bonusItemIcon) == 0LL) )
  {
LABEL_15:
    sub_1C22094(buttonDecideLabel, v16);
  }
  ItemIconComponent__SetGift((ItemIconComponent_o *)buttonDecideLabel, v16, v16->fields.num, 0, 0LL);
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LoginBonusWithTransitionDialog__Open_44486160(
        LoginBonusWithTransitionDialog_o *this,
        CommonUI_CampaignDirectBonusData_o *bonusData,
        GiftMaster_o *giftMst,
        ItemMaster_o *itemMst,
        System_Action_o *onCancelCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buttonDecide; // x0
  UnityEngine_Transform_o *v11; // x23
  int v12; // s1
  int v13; // s8
  int v14; // s2
  int v15; // s0
  int v16; // s1
  ItemMaster_o *v17; // x3
  const MethodInfo *v18; // x7

  buttonDecide = this->fields.buttonDecide;
  if ( !buttonDecide )
    goto LABEL_10;
  buttonDecide = UnityEngine_GameObject__get_gameObject(buttonDecide, 0LL);
  if ( !buttonDecide )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(buttonDecide, 0, 0LL);
  buttonDecide = this->fields.buttonCancel;
  if ( !buttonDecide )
    goto LABEL_10;
  buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buttonDecide, 0LL);
  if ( !this->fields.buttonCancel
    || (v11 = (UnityEngine_Transform_o *)buttonDecide,
        (buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                      this->fields.buttonCancel,
                                                      0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)buttonDecide,
                                                 0LL),
        (buttonDecide = this->fields.buttonCancel) == 0LL)
    || (v13 = v12,
        (buttonDecide = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buttonDecide, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)buttonDecide,
                                                 0LL),
        !v11) )
  {
LABEL_10:
    sub_1C22094(buttonDecide, bonusData);
  }
  v15 = 0;
  v16 = v13;
  UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)(&v14 - 2), 0LL);
  LoginBonusWithTransitionDialog__Open(this, bonusData, giftMst, v17, onCancelCallback, 0LL, 0LL, v18);
}


void __fastcall LoginBonusWithTransitionDialog___c__DisplayClass1_0___ctor(
        LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LoginBonusWithTransitionDialog___c__DisplayClass1_0___Open_b__0(
        LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BDEF98 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__);
    sub_1C21E38(&LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo);
    byte_4BDEF98 = 1;
  }
  v5 = sub_1C22084(LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
  }
  CommonUI__CloseLoginBonusWithTransitionDialog((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall LoginBonusWithTransitionDialog___c__DisplayClass1_1___ctor(
        LoginBonusWithTransitionDialog___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LoginBonusWithTransitionDialog___c__DisplayClass1_1___Open_b__1(
        LoginBonusWithTransitionDialog___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *CS___8__locals1; // x8
  __int64 v3; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C22094(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}