void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v5; // x1
  UILabel_o *v6; // x0

  if ( (byte_4187AE5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15810/*"[purchase log]\n"*/, v3);
    byte_4187AE5 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
      goto LABEL_12;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v6, 0LL) )
    {
      v6 = this->fields._puchaserLogLabel;
      if ( v6 )
      {
        UILabel__set_text(v6, (System_String_o *)StringLiteral_15810/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(v6, v5);
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v5; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v7; // x8
  System_String_o *mText; // x19

  if ( (byte_4187AE6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GUIUtility_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187AE6 = 1;
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
    v7 = this->fields._puchaserLogLabel;
    if ( !v7 )
LABEL_15:
      sub_B2C434(isActiveAndEnabled, v5);
    mText = v7->fields.mText;
    if ( (BYTE3(UnityEngine_GUIUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    }
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
  const MethodInfo *v11; // x4
  struct PurchaserUIScript___c_StaticFields *buyProductFinishedAction; // x8
  PurchaseLogic_ProductFinishedAction_o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v23; // x9
  __int64 v24; // x0

  if ( (byte_4187AE7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&PurchaseLogic_ProductFinishedAction_TypeInfo, v5);
    sub_B2C35C(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v6);
    sub_B2C35C(&PurchaserUIScript___c_TypeInfo, v7);
    byte_4187AE7 = 1;
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
      v14 = (Il2CppObject *)buyProductFinishedAction->__9;
      _9__8_0 = (PurchaseLogic_ProductFinishedAction_o *)sub_B2C42C(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(_9__8_0, v14, Method_PurchaserUIScript___c__Purchase_b__8_0__, 0LL);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = _9__8_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&static_fields->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
      {
        v24 = sub_B2C460(purchaseLogic);
        sub_B2C400(v24, 0LL);
      }
      v23 = this->fields._purchaseBehaviour;
      if ( v23 )
      {
        purchaseLogic = v23->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_25224224(purchaseLogic, productIdCollection->m_Items[index], 0, _9__8_0, v11);
          return;
        }
      }
    }
LABEL_22:
    sub_B2C434(purchaseLogic, v10);
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
  __int64 v8; // x1
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  __int64 v11; // x1
  System_String_o *v12; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v14; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v16; // x0
  UnityEngine_Object_o *v17; // x20
  struct PurchaseBehaviour_o *v18; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct PurchaseBehaviour_o *v26; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187AE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, method);
    sub_B2C35C(&System_Action_string__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v5);
    sub_B2C35C(&Method_PurchaserUIScript__Start_b__5_0__, v6);
    sub_B2C35C(&Method_PurchaserUIScript__Start_b__5_1__, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4187AE4 = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v34 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v34, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_30;
  v12 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v12, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v34 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v34, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_30;
  if ( purchaseLogic )
    v14 = purchaseLogic;
  else
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v14, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v16 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__Activate((const MethodInfo *)v16);
  }
  v17 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_30;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v18 = this->fields._purchaseBehaviour;
  v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v19,
    (Il2CppObject *)this,
    Method_PurchaserUIScript__Start_b__5_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
  if ( !v18
    || (purchaseLogic = (System_String_o *)v18->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].klass = (System_String_c *)v19,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&purchaseLogic[2],
          (System_Int32_array **)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v26 = this->fields._purchaseBehaviour,
        v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v27,
          (Il2CppObject *)this,
          Method_PurchaserUIScript__Start_b__5_1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__),
        !v26)
    || (purchaseLogic = (System_String_o *)v26->fields._purchaseLogic) == 0LL )
  {
LABEL_30:
    sub_B2C434(purchaseLogic, v11);
  }
  purchaseLogic[2].monitor = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&purchaseLogic[2].monitor,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v7; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v9; // x20
  System_String_o *v10; // x1

  if ( (byte_4187AE8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, str);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v5);
    byte_4187AE8 = 1;
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
      v9 = this->fields._puchaserLogLabel;
      if ( v9 )
      {
        v10 = System_String__Concat_44307816(v9->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v9, v10, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(isActiveAndEnabled, v7);
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
  __int64 v10; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v12; // x20
  System_String_o *v13; // x1

  if ( (byte_4187AE9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, str);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_15763/*"[UnityIAP]課金エラー:"*/, v7);
    byte_4187AE9 = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_44305532((System_String_o *)StringLiteral_15763/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v8, 0LL);
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
      v12 = this->fields._puchaserLogLabel;
      if ( v12 )
      {
        v13 = System_String__Concat_44307816(v12->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v12, v13, 0LL);
        return;
      }
LABEL_15:
      sub_B2C434(isActiveAndEnabled, v10);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0

  if ( (byte_41852C9 & 1) == 0 )
  {
    sub_B2C35C(&PurchaserUIScript___c_TypeInfo, v1);
    byte_41852C9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaserUIScript___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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