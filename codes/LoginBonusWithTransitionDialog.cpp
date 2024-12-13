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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x25
  System_String_o *buttonDecideLabel; // x0
  GiftEntity_o *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  CommonConfirmDialog_ClickDelegate_o *v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UILabel_o *buttonCancelLabel; // x23
  UILabel_o *titleLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *TransitionDialog; // x0
  UILabel_o *messageLabel; // x22
  System_Collections_Generic_Dictionary_string__object__o *v48; // x0
  System_Action_o *v49; // x20

  if ( (byte_4B39B48 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, bonusData);
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, v14);
    sub_1BD3458(&Method_CommonConfirmDialog_EndOpen__, v15);
    sub_1BD3458(&LocalizationManager_TypeInfo, v16);
    sub_1BD3458(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__, v17);
    sub_1BD3458(&LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo, v18);
    sub_1BD3458(&StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, v19);
    sub_1BD3458(&StringLiteral_18814/*"detail"*/, v20);
    sub_1BD3458(&StringLiteral_22252/*"name"*/, v21);
    byte_4B39B48 = 1;
  }
  v22 = sub_1BD36A4(LoginBonusWithTransitionDialog___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_15;
  *(_QWORD *)(v22 + 16) = onDecideCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)onDecideCallback, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = onCancelCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)onCancelCallback, v31, v32, v33, v34, v35, v36);
  v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v37,
    (Il2CppObject *)v22,
    Method_LoginBonusWithTransitionDialog___c__DisplayClass1_0__Open_b__0__,
    0LL);
  this->fields.clickFunc = v37;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buttonDecideLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
                        (System_String_o *)StringLiteral_22252/*"name"*/,
                        0LL,
                        0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, buttonDecideLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  v48 = CommonUI_CampaignDirectBonusData__GetTransitionDialog(bonusData, 0LL);
  buttonDecideLabel = EntityScriptUtil__GetStringValue(v48, (System_String_o *)StringLiteral_18814/*"detail"*/, 0LL, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, buttonDecideLabel, 0LL), !giftMst)
    || (buttonDecideLabel = (System_String_o *)GiftMaster__getDataById(giftMst, bonusData->fields.giftId, 0LL)) == 0LL
    || (v24 = (GiftEntity_o *)buttonDecideLabel,
        (buttonDecideLabel = (System_String_o *)this->fields.bonusItemIcon) == 0LL) )
  {
LABEL_15:
    sub_1BD36B4(buttonDecideLabel, v24);
  }
  ItemIconComponent__SetGift((ItemIconComponent_o *)buttonDecideLabel, v24, v24->fields.num, 0, 0LL);
  v49 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LoginBonusWithTransitionDialog__Open_44010360(
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
    sub_1BD36B4(buttonDecide, bonusData);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4B39B49 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isDecide);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BD3458(&Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__, v6);
    sub_1BD3458(&LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo, v7);
    byte_4B39B49 = 1;
  }
  v8 = sub_1BD36A4(LoginBonusWithTransitionDialog___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_LoginBonusWithTransitionDialog___c__DisplayClass1_1__Open_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BD36B4(v9, v10);
  }
  CommonUI__CloseLoginBonusWithTransitionDialog((CommonUI_o *)Instance, v18, 0LL);
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
    sub_1BD36B4(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}