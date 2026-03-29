void PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4D3033F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16097/*"[purchase log]\n"*/);
    byte_4D3033F = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0, 0) )
  {
    v5 = this->fields._puchaserLogLabel;
    if ( !v5 )
      goto LABEL_11;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v5, 0) )
    {
      v5 = this->fields._puchaserLogLabel;
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)StringLiteral_16097/*"[purchase log]\n"*/, 0);
        return;
      }
LABEL_11:
      sub_1C93D2C(v5, v4);
    }
  }
}


void PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x19

  if ( (byte_4D30340 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GUIUtility_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30340 = 1;
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
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
LABEL_13:
      sub_1C93D2C(isActiveAndEnabled, v4);
    mText = v6->fields.mText;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0);
  }
}


void PurchaserUIScript__Purchase(PurchaserUIScript_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  PurchaseLogic_ProductFinishedAction_o *v9; // x21
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x3
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v20; // x9

  if ( (byte_4D30341 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C93AD4(&Method_PurchaserUIScript___c__Purchase_b__8_0__);
    sub_1C93AD4(&PurchaserUIScript___c_TypeInfo);
    byte_4D30341 = 1;
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
    v9 = (PurchaseLogic_ProductFinishedAction_o *)*((_QWORD *)purchaseLogic[2].monitor + 1);
    if ( !v9 )
    {
      if ( !LODWORD(purchaseLogic[2].fields._buyProductFinishedAction) )
      {
        j_il2cpp_runtime_class_init_0(purchaseLogic);
        purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
      }
      v10 = *(Il2CppObject **)purchaseLogic[2].monitor;
      v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C93D20(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(v9, v10, Method_PurchaserUIScript___c__Purchase_b__8_0__, v11);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = v9;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)v9, v13, v14, v15, v16, v17, v18);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( LODWORD(productIdCollection->max_length) <= index )
        sub_1C93D34(purchaseLogic);
      v20 = this->fields._purchaseBehaviour;
      if ( v20 )
      {
        purchaseLogic = v20->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_42167436(
            purchaseLogic,
            index + 1,
            productIdCollection->m_Items[index],
            0,
            v9,
            v8);
          return;
        }
      }
    }
LABEL_19:
    sub_1C93D2C(purchaseLogic, v7);
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
  __int64 v5; // x1
  System_String_o *v6; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v8; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v10; // x0
  UnityEngine_Object_o *v11; // x20
  struct PurchaseBehaviour_o *v12; // x22
  System_Action_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct PurchaseBehaviour_o *v20; // x22
  System_Action_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D3033E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    sub_1C93AD4(&Method_PurchaserUIScript__Start_b__5_0__);
    sub_1C93AD4(&Method_PurchaserUIScript__Start_b__5_1__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3033E = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0);
  if ( !stoneValueLabel )
    goto LABEL_27;
  v6 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v6, 0);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0);
  if ( !totalPaymentValueLabel )
    goto LABEL_27;
  if ( purchaseLogic )
    v8 = purchaseLogic;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v8, 0);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0, 0) )
  {
    v10 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__Activate((const MethodInfo *)v10);
  }
  v11 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_27;
  if ( ((unsigned int)purchaseLogic
      & UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour, 0)
      & 1) == 0 )
    return;
  v12 = this->fields._purchaseBehaviour;
  v13 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
  System_Action_object____ctor(v13, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_0__, 0);
  if ( !v12
    || (purchaseLogic = (System_String_o *)v12->fields._purchaseLogic) == 0
    || (purchaseLogic[2].monitor = v13,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&purchaseLogic[2].monitor,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        v20 = this->fields._purchaseBehaviour,
        v21 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo),
        System_Action_object____ctor(v21, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_1__, 0),
        !v20)
    || (purchaseLogic = (System_String_o *)v20->fields._purchaseLogic) == 0 )
  {
LABEL_27:
    sub_1C93D2C(purchaseLogic, v5);
  }
  purchaseLogic[2].fields = (System_String_Fields)v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&purchaseLogic[2].fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


void PurchaserUIScript___Start_b__5_0(PurchaserUIScript_o *this, System_String_o *str, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v6; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x1

  if ( (byte_4D30342 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    byte_4D30342 = 1;
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
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        v9 = System_String__Concat_64463988(v8->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        UILabel__set_text(v8, v9, 0);
        return;
      }
LABEL_11:
      sub_1C93D2C(isActiveAndEnabled, v6);
    }
  }
}


void PurchaserUIScript___Start_b__5_1(PurchaserUIScript_o *this, System_String_o *str, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v7; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v9; // x20
  System_String_o *v10; // x1

  if ( (byte_4D30343 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_16048/*"[UnityIAP]課金エラー:"*/);
    byte_4D30343 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_16048/*"[UnityIAP]課金エラー:"*/, str, 0);
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
      v9 = this->fields._puchaserLogLabel;
      if ( v9 )
      {
        v10 = System_String__Concat_64463988(v9->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        UILabel__set_text(v9, v10, 0);
        return;
      }
LABEL_13:
      sub_1C93D2C(isActiveAndEnabled, v7);
    }
  }
}


void PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30344 & 1) == 0 )
  {
    sub_1C93AD4(&PurchaserUIScript___c_TypeInfo);
    byte_4D30344 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaserUIScript___c_TypeInfo->static_fields->__9 = (struct PurchaserUIScript___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PurchaserUIScript___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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