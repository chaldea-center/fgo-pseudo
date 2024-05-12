void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_438B662 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16102/*"[purchase log]\n"*/);
    byte_438B662 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v5 = this->fields._puchaserLogLabel;
    if ( !v5 )
      goto LABEL_12;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v5, 0LL) )
    {
      v5 = this->fields._puchaserLogLabel;
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)StringLiteral_16102/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_12:
      sub_B7769C(v5, v4);
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x19

  if ( (byte_438B663 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_GUIUtility_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B663 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_15;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) == 0 )
      return;
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
LABEL_15:
      sub_B7769C(isActiveAndEnabled, v4);
    mText = v6->fields.mText;
    if ( (BYTE3(UnityEngine_GUIUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
  }
}


void __fastcall PurchaserUIScript__Purchase(PurchaserUIScript_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct PurchaserUIScript___c_StaticFields *buyProductFinishedAction; // x8
  PurchaseLogic_ProductFinishedAction_o *_9__8_0; // x21
  Il2CppObject *v11; // x22
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v20; // x9
  __int64 v21; // x0

  if ( (byte_438B664 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_B775C4(&Method_PurchaserUIScript___c__Purchase_b__8_0__);
    sub_B775C4(&PurchaserUIScript___c_TypeInfo);
    byte_438B664 = 1;
  }
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  purchaseLogic = (PurchaseLogic_o *)UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_22;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) != 0 )
  {
    purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    if ( (BYTE3(PurchaserUIScript___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaserUIScript___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaserUIScript___c_TypeInfo);
      purchaseLogic = (PurchaseLogic_o *)PurchaserUIScript___c_TypeInfo;
    }
    buyProductFinishedAction = (struct PurchaserUIScript___c_StaticFields *)purchaseLogic[2].fields._buyProductFinishedAction;
    _9__8_0 = buyProductFinishedAction->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(purchaseLogic[4].fields._pendingProducts) & 4) != 0 && !LODWORD(purchaseLogic[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(purchaseLogic);
        buyProductFinishedAction = PurchaserUIScript___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)buyProductFinishedAction->__9;
      _9__8_0 = (PurchaseLogic_ProductFinishedAction_o *)sub_B77694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(_9__8_0, v11, Method_PurchaserUIScript___c__Purchase_b__8_0__, 0LL);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = _9__8_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&static_fields->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
      {
        v21 = sub_B776C8(purchaseLogic);
        sub_B77668(v21, 0LL);
      }
      v20 = this->fields._purchaseBehaviour;
      if ( v20 )
      {
        purchaseLogic = v20->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_25741792(purchaseLogic, productIdCollection->m_Items[index], 0, _9__8_0, v8);
          return;
        }
      }
    }
LABEL_22:
    sub_B7769C(purchaseLogic, v7);
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
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  __int64 v5; // x1
  System_String_o *v6; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v8; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v10; // x0
  UnityEngine_Object_o *v11; // x20
  struct PurchaseBehaviour_o *v12; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct PurchaseBehaviour_o *v20; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B661 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&Method_PurchaserUIScript__Start_b__5_0__);
    sub_B775C4(&Method_PurchaserUIScript__Start_b__5_1__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B661 = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_30;
  v6 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v6, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v28 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_30;
  if ( purchaseLogic )
    v8 = purchaseLogic;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v8, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v10 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__Activate((const MethodInfo *)v10);
  }
  v11 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_30;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v12 = this->fields._purchaseBehaviour;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)this,
    Method_PurchaserUIScript__Start_b__5_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
  if ( !v12
    || (purchaseLogic = (System_String_o *)v12->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].klass = (System_String_c *)v13,
        sub_B77560(
          (BattleServantConfConponent_o *)&purchaseLogic[2],
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        v20 = this->fields._purchaseBehaviour,
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)this,
          Method_PurchaserUIScript__Start_b__5_1__,
          (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__),
        !v20)
    || (purchaseLogic = (System_String_o *)v20->fields._purchaseLogic) == 0LL )
  {
LABEL_30:
    sub_B7769C(purchaseLogic, v5);
  }
  purchaseLogic[2].monitor = v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&purchaseLogic[2].monitor,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v6; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x1

  if ( (byte_438B665 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    byte_438B665 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_12;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        v9 = System_String__Concat_44904220(v8->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v8, v9, 0LL);
        return;
      }
LABEL_12:
      sub_B7769C(isActiveAndEnabled, v6);
    }
  }
}


void __fastcall PurchaserUIScript___Start_b__5_1(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v7; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v9; // x20
  System_String_o *v10; // x1

  if ( (byte_438B666 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Debug_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_16054/*"[UnityIAP]課金エラー:"*/);
    byte_438B666 = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_44901936((System_String_o *)StringLiteral_16054/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v5, 0LL);
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    isActiveAndEnabled = this->fields._puchaserLogLabel;
    if ( !isActiveAndEnabled )
      goto LABEL_15;
    isActiveAndEnabled = (struct UILabel_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                               0LL);
    if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
    {
      v9 = this->fields._puchaserLogLabel;
      if ( v9 )
      {
        v10 = System_String__Concat_44904220(v9->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v9, v10, 0LL);
        return;
      }
LABEL_15:
      sub_B7769C(isActiveAndEnabled, v7);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B140 & 1) == 0 )
  {
    sub_B775C4(&PurchaserUIScript___c_TypeInfo);
    byte_438B140 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaserUIScript___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
        const MethodInfo *method)
{
  ;
}