void PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  UILabel_o *v4; // x0

  if ( (byte_4C37303 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_15997/*"[purchase log]\n"*/);
    byte_4C37303 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0, 0) )
  {
    v4 = this->fields._puchaserLogLabel;
    if ( !v4 )
      goto LABEL_11;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v4, 0) )
    {
      v4 = this->fields._puchaserLogLabel;
      if ( v4 )
      {
        UILabel__set_text(v4, (System_String_o *)StringLiteral_15997/*"[purchase log]\n"*/, 0);
        return;
      }
LABEL_11:
      sub_1C32E7C(v4);
    }
  }
}


void PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v5; // x8
  System_String_o *mText; // x19

  if ( (byte_4C37304 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GUIUtility_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37304 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0, 0) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_13;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) == 0 )
      return;
    v5 = this->fields._puchaserLogLabel;
    if ( !v5 )
LABEL_13:
      sub_1C32E7C(isActiveAndEnabled);
    mText = v5->fields.mText;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0);
  }
}


void PurchaserUIScript__Purchase(PurchaserUIScript_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  const MethodInfo *v7; // x5
  PurchaseLogic_ProductFinishedAction_o *v8; // x21
  Il2CppObject *v9; // x22
  const MethodInfo *v10; // x3
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v15; // x9

  if ( (byte_4C37305 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C32C20(&Method_PurchaserUIScript___c__Purchase_b__8_0__);
    sub_1C32C20(&PurchaserUIScript___c_TypeInfo);
    byte_4C37305 = 1;
  }
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogic = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(purchaseBehaviour, 0, 0);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_19;
  if ( ((unsigned int)purchaseLogic
      & UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour, 0)
      & 1) != 0 )
  {
    purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    if ( !PurchaserUIScript___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaserUIScript___c_TypeInfo);
      purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    }
    v8 = (PurchaseLogic_ProductFinishedAction_o *)*((_QWORD *)purchaseLogic[2].monitor + 1);
    if ( !v8 )
    {
      if ( !LODWORD(purchaseLogic[2].fields._buyProductFinishedAction) )
      {
        j_il2cpp_runtime_class_init_0(purchaseLogic);
        purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
      }
      v9 = *(Il2CppObject **)purchaseLogic[2].monitor;
      v8 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C32E6C(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v8, v9, Method_PurchaserUIScript___c__Purchase_b__8_0__, v10);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)v8, v12, v13);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( LODWORD(productIdCollection->max_length) <= index )
        sub_1C32E84(purchaseLogic);
      v15 = this->fields._purchaseBehaviour;
      if ( v15 )
      {
        purchaseLogic = v15->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_41336488(
            purchaseLogic,
            index + 1,
            productIdCollection->m_Items[index],
            0,
            v8,
            v7);
          return;
        }
      }
    }
LABEL_19:
    sub_1C32E7C(purchaseLogic);
  }
}


void PurchaserUIScript__Purchase0(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 0, v2);
}


void PurchaserUIScript__Purchase1(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 1, v2);
}


void PurchaserUIScript__Purchase2(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 2, v2);
}


void PurchaserUIScript__Purchase3(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 3, v2);
}


void PurchaserUIScript__Purchase4(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 4, v2);
}


void PurchaserUIScript__Purchase5(PurchaserUIScript_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PurchaserUIScript__Purchase(this, 5, v2);
}


void PurchaserUIScript__Start(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  System_String_o *v5; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v7; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v9; // x0
  UnityEngine_Object_o *v10; // x20
  struct PurchaseBehaviour_o *v11; // x22
  System_Action_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct PurchaseBehaviour_o *v15; // x22
  System_Action_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C37302 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_PurchaserUIScript__Start_b__5_0__);
    sub_1C32C20(&Method_PurchaserUIScript__Start_b__5_1__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37302 = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v19 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v19, 0);
  if ( !stoneValueLabel )
    goto LABEL_27;
  v5 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v5, 0);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v19 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v19, 0);
  if ( !totalPaymentValueLabel )
    goto LABEL_27;
  if ( purchaseLogic )
    v7 = purchaseLogic;
  else
    v7 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v7, 0);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0, 0) )
  {
    v9 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__Activate((const MethodInfo *)v9);
  }
  v10 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_27;
  if ( ((unsigned int)purchaseLogic
      & UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour, 0)
      & 1) == 0 )
    return;
  v11 = this->fields._purchaseBehaviour;
  v12 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
  System_Action_object____ctor(v12, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_0__, 0);
  if ( !v11
    || (purchaseLogic = (System_String_o *)v11->fields._purchaseLogic) == 0
    || (purchaseLogic[2].monitor = v12,
        sub_1C32BC4((CGThumbnailListItem_o *)&purchaseLogic[2].monitor, (int32_t)v12, v13, v14),
        v15 = this->fields._purchaseBehaviour,
        v16 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo),
        System_Action_object____ctor(v16, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_1__, 0),
        !v15)
    || (purchaseLogic = (System_String_o *)v15->fields._purchaseLogic) == 0 )
  {
LABEL_27:
    sub_1C32E7C(purchaseLogic);
  }
  purchaseLogic[2].fields = (System_String_Fields)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&purchaseLogic[2].fields, (int32_t)v16, v17, v18);
}


void PurchaserUIScript___Start_b__5_0(PurchaserUIScript_o *this, System_String_o *str, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x21
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v7; // x20
  System_String_o *v8; // x1

  if ( (byte_4C37306 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    byte_4C37306 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0, 0) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_11;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v7 = this->fields._puchaserLogLabel;
      if ( v7 )
      {
        v8 = System_String__Concat_63556792(v7->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        UILabel__set_text(v7, v8, 0);
        return;
      }
LABEL_11:
      sub_1C32E7C(isActiveAndEnabled);
    }
  }
}


void PurchaserUIScript___Start_b__5_1(PurchaserUIScript_o *this, System_String_o *str, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  UnityEngine_Object_o *puchaserLogLabel; // x21
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x1

  if ( (byte_4C37307 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_15948/*"[UnityIAP]課金エラー:"*/);
    byte_4C37307 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_15948/*"[UnityIAP]課金エラー:"*/, str, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v5, 0);
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0, 0) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_13;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        v9 = System_String__Concat_63556792(v8->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        UILabel__set_text(v8, v9, 0);
        return;
      }
LABEL_13:
      sub_1C32E7C(isActiveAndEnabled);
    }
  }
}


void PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37308 & 1) == 0 )
  {
    sub_1C32C20(&PurchaserUIScript___c_TypeInfo);
    byte_4C37308 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaserUIScript___c_TypeInfo->static_fields->__9 = (struct PurchaserUIScript___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PurchaserUIScript___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PurchaserUIScript___c___ctor(PurchaserUIScript___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaserUIScript___c___Purchase_b__8_0(
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