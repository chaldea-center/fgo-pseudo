void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x0

  if ( (byte_4B15BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16174/*"[purchase log]\n"*/, v4, v5);
    byte_4B15BB0 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v8 = this->fields._puchaserLogLabel;
    if ( !v8 )
      goto LABEL_11;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v8, 0LL) )
    {
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        UILabel__set_text(v8, (System_String_o *)StringLiteral_16174/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_11:
      sub_1BCAA3C(v8, v7);
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v7; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v9; // x8
  System_String_o *mText; // x19

  if ( (byte_4B15BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GUIUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15BB1 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_13;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) == 0 )
      return;
    v9 = this->fields._puchaserLogLabel;
    if ( !v9 )
LABEL_13:
      sub_1BCAA3C(isActiveAndEnabled, v7);
    mText = v9->fields.mText;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo, v7);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaserUIScript__Purchase(PurchaserUIScript_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  const MethodInfo *v16; // x5
  PurchaseLogic_ProductFinishedAction_o *v17; // x21
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x3
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v28; // x9

  if ( (byte_4B15BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&PurchaseLogic_ProductFinishedAction_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v7, v8);
    sub_1BCA7E0(&PurchaserUIScript___c_TypeInfo, v9, v10);
    byte_4B15BB2 = 1;
  }
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  purchaseLogic = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_19;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) != 0 )
  {
    purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    if ( !PurchaserUIScript___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaserUIScript___c_TypeInfo, v13);
      purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    }
    v17 = (PurchaseLogic_ProductFinishedAction_o *)*((_QWORD *)purchaseLogic[2].monitor + 1);
    if ( !v17 )
    {
      if ( !LODWORD(purchaseLogic[2].fields._buyProductFinishedAction) )
      {
        j_il2cpp_runtime_class_init_0(purchaseLogic, v13);
        purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
      }
      v18 = *(Il2CppObject **)purchaseLogic[2].monitor;
      v17 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BCAA2C(
                                                       PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15);
      PurchaseLogic_ProductFinishedAction___ctor(v17, v18, Method_PurchaserUIScript___c__Purchase_b__8_0__, v19);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = v17;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v17, v21, v22, v23, v24, v25, v26);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
        sub_1BCAA44(purchaseLogic, v13);
      v28 = this->fields._purchaseBehaviour;
      if ( v28 )
      {
        purchaseLogic = v28->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_39337900(
            purchaseLogic,
            index + 1,
            productIdCollection->m_Items[index],
            0,
            v17,
            v16);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(purchaseLogic, v13);
  }
}


void __fastcall PurchaserUIScript__Purchase0(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 0, v2);
}


void __fastcall PurchaserUIScript__Purchase1(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 1, v2);
}


void __fastcall PurchaserUIScript__Purchase2(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 2, v2);
}


void __fastcall PurchaserUIScript__Purchase3(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 3, v2);
}


void __fastcall PurchaserUIScript__Purchase4(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 4, v2);
}


void __fastcall PurchaserUIScript__Purchase5(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 5, v2);
}


void __fastcall PurchaserUIScript__Start(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  __int64 v16; // x1
  System_String_o *v17; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  __int64 v22; // x1
  PurchaseBehaviour_c *v23; // x0
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct PurchaseBehaviour_o *v28; // x22
  System_Action_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct PurchaseBehaviour_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_object__o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int v47; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15BAF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PurchaserUIScript__Start_b__5_0__, v8, v9);
    sub_1BCA7E0(&Method_PurchaserUIScript__Start_b__5_1__, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B15BAF = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v47 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v47, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_27;
  v17 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v17, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v47 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v47, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_27;
  if ( purchaseLogic )
    v19 = purchaseLogic;
  else
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v19, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v23 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v22);
    PurchaseBehaviour__Activate((const MethodInfo *)v23);
  }
  v24 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_27;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v28 = this->fields._purchaseBehaviour;
  v29 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v25, v26, v27);
  System_Action_object____ctor(v29, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_0__, 0LL);
  if ( !v28
    || (purchaseLogic = (System_String_o *)v28->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].monitor = v29,
        sub_1BCA784((PartyOrganizationUtility_o *)&purchaseLogic[2].monitor, (int64_t)v29, v30, v31, v32, v33, v34, v35),
        v36 = this->fields._purchaseBehaviour,
        v40 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v37, v38, v39),
        System_Action_object____ctor(v40, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_1__, 0LL),
        !v36)
    || (purchaseLogic = (System_String_o *)v36->fields._purchaseLogic) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(purchaseLogic, v16);
  }
  purchaseLogic[2].fields = (System_String_Fields)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&purchaseLogic[2].fields, (int64_t)v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v8; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v10; // x20
  System_String_o *v11; // x1

  if ( (byte_4B15BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, str, method);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v5, v6);
    byte_4B15BB3 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_11;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v10 = this->fields._puchaserLogLabel;
      if ( v10 )
      {
        v11 = System_String__Concat_62412480(v10->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v10, v11, 0LL);
        return;
      }
LABEL_11:
      sub_1BCAA3C(isActiveAndEnabled, v8);
    }
  }
}


void __fastcall PurchaserUIScript___Start_b__5_1(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v15; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v17; // x20
  System_String_o *v18; // x1

  if ( (byte_4B15BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, str, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, v9, v10);
    byte_4B15BB4 = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_16126/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v11);
  UnityEngine_Debug__LogError(v12, 0LL);
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_13;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v17 = this->fields._puchaserLogLabel;
      if ( v17 )
      {
        v18 = System_String__Concat_62412480(v17->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v17, v18, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(isActiveAndEnabled, v15);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaserUIScript___c_TypeInfo, v1, v2);
    byte_4B15BB5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PurchaserUIScript___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PurchaserUIScript___c_TypeInfo->static_fields->__9 = (struct PurchaserUIScript___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaserUIScript___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PurchaserUIScript___c___ctor(PurchaserUIScript___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaserUIScript___c___Purchase_b__8_0(
        PurchaserUIScript___c_o *this,
        int32_t result,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  ;
}