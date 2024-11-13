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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x25
  System_String_o *buttonDecideLabel; // x0
  GiftEntity_o *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  CommonConfirmDialog_ClickDelegate_o *v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  UILabel_o *buttonCancelLabel; // x23
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *TransitionDialog; // x0
  UILabel_o *messageLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_o *v64; // x20

  if ( (byte_4B18B6D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, bonusData, giftMst);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_CommonConfirmDialog_EndOpen__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__, v20, v21);
    sub_1BCA7E0(&LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_18786/*"detail"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v28, v29);
    byte_4B18B6D = 1;
  }
  v30 = sub_1BCAA2C(LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo, bonusData, giftMst, itemMst);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_15;
  *(_QWORD *)(v30 + 16) = onDecideCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)onDecideCallback, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = onCancelCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)onCancelCallback, v39, v40, v41, v42, v43, v44);
  v48 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v45, v46, v47);
  CommonConfirmDialog_ClickDelegate___ctor(
    v48,
    (Il2CppObject *)v30,
    Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__,
    0LL);
  this->fields.clickFunc = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  buttonDecideLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
                        (System_String_o *)StringLiteral_22219/*"name"*/,
                        0LL,
                        0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, buttonDecideLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  v60 = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0LL);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(v60, (System_String_o *)StringLiteral_18786/*"detail"*/, 0LL, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, buttonDecideLabel, 0LL), !giftMst)
    || (buttonDecideLabel = (System_String_o *)GiftMaster__getDataById(giftMst, bonusData->fields.giftId, 0LL)) == 0LL
    || (v32 = (GiftEntity_o *)buttonDecideLabel,
        (buttonDecideLabel = (System_String_o *)this->fields.bonusItemIcon) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(buttonDecideLabel, v32);
  }
  ItemIconComponent__SetGift((ItemIconComponent_o *)buttonDecideLabel, v32, v32->fields.num, 0, 0LL);
  v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LoginBonusWithTransitionDialog__Open_43900792(
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
    sub_1BCAA3C(buttonDecide, bonusData);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall LoginBonusWithTransitionDialog___c__DisplayClass1_0___Open_b__0(
        LoginBonusWithTransitionDialog___c__DisplayClass1_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B18B6E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__, v8, v9);
    sub_1BCA7E0(&LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo, v10, v11);
    byte_4B18B6E = 1;
  }
  v12 = sub_1BCAA2C(LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseLoginBonusWithTransitionDialog((CommonUI_o *)Instance, v25, 0LL);
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
    sub_1BCAA3C(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}