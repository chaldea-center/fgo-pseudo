void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  UILabel_o *v5; // x0

  if ( (byte_49FBD44 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_15939/*"[purchase log]\n"*/, v3);
    byte_49FBD44 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v5 = this->fields._puchaserLogLabel;
    if ( !v5 )
      goto LABEL_11;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v5, 0LL) )
    {
      v5 = this->fields._puchaserLogLabel;
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)StringLiteral_15939/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_11:
      sub_1B64324(v5);
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x19

  if ( (byte_49FBD45 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GUIUtility_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FBD45 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
LABEL_13:
      sub_1B64324(isActiveAndEnabled);
    mText = v6->fields.mText;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaserUIScript__Purchase(PurchaserUIScript_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x5
  PurchaseLogic_ProductFinishedAction_o *monitor; // x21
  Il2CppObject *klass; // x22
  const MethodInfo *v15; // x3
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v20; // x9

  if ( (byte_49FBD46 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v5);
    sub_1B640C8(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v6);
    sub_1B640C8(&PurchaserUIScript___c_TypeInfo, v7);
    byte_49FBD46 = 1;
  }
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(PurchaserUIScript___c_TypeInfo);
      purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    }
    monitor = (PurchaseLogic_ProductFinishedAction_o *)purchaseLogic[2].fields._buyProductFinishedAction->monitor;
    if ( !monitor )
    {
      if ( !LODWORD(purchaseLogic[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(purchaseLogic);
        purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
      }
      klass = (Il2CppObject *)purchaseLogic[2].fields._buyProductFinishedAction->klass;
      monitor = (PurchaseLogic_ProductFinishedAction_o *)sub_1B64314(
                                                           PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                           v10,
                                                           v11);
      PurchaseLogic_ProductFinishedAction___ctor(monitor, klass, Method_PurchaserUIScript___c__Purchase_b__8_0__, v15);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = monitor;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)monitor, v17, v18);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
        sub_1B6432C(purchaseLogic, v10);
      v20 = this->fields._purchaseBehaviour;
      if ( v20 )
      {
        purchaseLogic = v20->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_38233152(
            purchaseLogic,
            index + 1,
            productIdCollection->m_Items[index],
            0,
            monitor,
            v12);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64324(purchaseLogic);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  System_String_o *v10; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v12; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v14; // x0
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  struct PurchaseBehaviour_o *v18; // x22
  System_Action_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct PurchaseBehaviour_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBD43 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v4);
    sub_1B640C8(&Method_PurchaserUIScript__Start_b__5_0__, v5);
    sub_1B640C8(&Method_PurchaserUIScript__Start_b__5_1__, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBD43 = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_27;
  v10 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v10, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_27;
  if ( purchaseLogic )
    v12 = purchaseLogic;
  else
    v12 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v12, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v14 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__Activate((const MethodInfo *)v14);
  }
  v15 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_27;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v18 = this->fields._purchaseBehaviour;
  v19 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v16, v17);
  System_Action_object____ctor(v19, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_0__, 0LL);
  if ( !v18
    || (purchaseLogic = (System_String_o *)v18->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].klass = (System_String_c *)v19,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&purchaseLogic[2], (int32_t)v19, v20, v21),
        v22 = this->fields._purchaseBehaviour,
        v25 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v23, v24),
        System_Action_object____ctor(v25, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_1__, 0LL),
        !v22)
    || (purchaseLogic = (System_String_o *)v22->fields._purchaseLogic) == 0LL )
  {
LABEL_27:
    sub_1B64324(purchaseLogic);
  }
  purchaseLogic[2].monitor = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&purchaseLogic[2].monitor, (int32_t)v25, v26, v27);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x21
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x1

  if ( (byte_49FBD47 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, str);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v5);
    byte_49FBD47 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        v9 = System_String__Concat_61386656(v8->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v8, v9, 0LL);
        return;
      }
LABEL_11:
      sub_1B64324(isActiveAndEnabled);
    }
  }
}


void __fastcall PurchaserUIScript___Start_b__5_1(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  UnityEngine_Object_o *puchaserLogLabel; // x21
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v11; // x20
  System_String_o *v12; // x1

  if ( (byte_49FBD48 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, str);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v6);
    sub_1B640C8(&StringLiteral_15891/*"[UnityIAP]課金エラー:"*/, v7);
    byte_49FBD48 = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_15891/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v8, 0LL);
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v11 = this->fields._puchaserLogLabel;
      if ( v11 )
      {
        v12 = System_String__Concat_61386656(v11->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v11, v12, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(isActiveAndEnabled);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBD49 & 1) == 0 )
  {
    sub_1B640C8(&PurchaserUIScript___c_TypeInfo, v1);
    byte_49FBD49 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PurchaserUIScript___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PurchaserUIScript___c_TypeInfo->static_fields->__9 = (struct PurchaserUIScript___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)PurchaserUIScript___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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