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

  if ( (byte_49FDE3C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_15941/*"[purchase log]\n"*/, v3);
    byte_49FDE3C = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
      goto LABEL_11;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v6, 0LL) )
    {
      v6 = this->fields._puchaserLogLabel;
      if ( v6 )
      {
        UILabel__set_text(v6, (System_String_o *)StringLiteral_15941/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_11:
      sub_1B64ACC(v6, v5);
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

  if ( (byte_49FDE3D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_GUIUtility_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FDE3D = 1;
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
    v7 = this->fields._puchaserLogLabel;
    if ( !v7 )
LABEL_13:
      sub_1B64ACC(isActiveAndEnabled, v5);
    mText = v7->fields.mText;
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
  const MethodInfo *v11; // x5
  PurchaseLogic_ProductFinishedAction_o *monitor; // x21
  Il2CppObject *klass; // x22
  const MethodInfo *v14; // x3
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v19; // x9

  if ( (byte_49FDE3E & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&PurchaseLogic_ProductFinishedAction_TypeInfo, v5);
    sub_1B64870(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v6);
    sub_1B64870(&PurchaserUIScript___c_TypeInfo, v7);
    byte_49FDE3E = 1;
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
      monitor = (PurchaseLogic_ProductFinishedAction_o *)sub_1B64ABC(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(monitor, klass, Method_PurchaserUIScript___c__Purchase_b__8_0__, v14);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = monitor;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)monitor, v16, v17);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
        sub_1B64AD4(purchaseLogic, v10);
      v19 = this->fields._purchaseBehaviour;
      if ( v19 )
      {
        purchaseLogic = v19->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_38237516(
            purchaseLogic,
            index + 1,
            productIdCollection->m_Items[index],
            0,
            monitor,
            v11);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64ACC(purchaseLogic, v10);
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
  __int64 v10; // x1
  System_String_o *v11; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v13; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v15; // x0
  UnityEngine_Object_o *v16; // x20
  struct PurchaseBehaviour_o *v17; // x22
  System_Action_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  struct PurchaseBehaviour_o *v21; // x22
  System_Action_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FDE3B & 1) == 0 )
  {
    sub_1B64870(&System_Action_string__TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&PurchaseBehaviour_TypeInfo, v4);
    sub_1B64870(&Method_PurchaserUIScript__Start_b__5_0__, v5);
    sub_1B64870(&Method_PurchaserUIScript__Start_b__5_1__, v6);
    sub_1B64870(&StringLiteral_1/*""*/, v7);
    byte_49FDE3B = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v25 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_27;
  v11 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v11, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v25 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_27;
  if ( purchaseLogic )
    v13 = purchaseLogic;
  else
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v13, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v15 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__Activate((const MethodInfo *)v15);
  }
  v16 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_27;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v17 = this->fields._purchaseBehaviour;
  v18 = (System_Action_object__o *)sub_1B64ABC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v18, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_0__, 0LL);
  if ( !v17
    || (purchaseLogic = (System_String_o *)v17->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].klass = (System_String_c *)v18,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&purchaseLogic[2], (int32_t)v18, v19, v20),
        v21 = this->fields._purchaseBehaviour,
        v22 = (System_Action_object__o *)sub_1B64ABC(System_Action_string__TypeInfo),
        System_Action_object____ctor(v22, (Il2CppObject *)this, Method_PurchaserUIScript__Start_b__5_1__, 0LL),
        !v21)
    || (purchaseLogic = (System_String_o *)v21->fields._purchaseLogic) == 0LL )
  {
LABEL_27:
    sub_1B64ACC(purchaseLogic, v10);
  }
  purchaseLogic[2].monitor = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&purchaseLogic[2].monitor, (int32_t)v22, v23, v24);
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

  if ( (byte_49FDE3F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, str);
    sub_1B64870(&StringLiteral_43/*"\n"*/, v5);
    byte_49FDE3F = 1;
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
      v9 = this->fields._puchaserLogLabel;
      if ( v9 )
      {
        v10 = System_String__Concat_61394836(v9->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v9, v10, 0LL);
        return;
      }
LABEL_11:
      sub_1B64ACC(isActiveAndEnabled, v7);
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

  if ( (byte_49FDE40 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Debug_TypeInfo, str);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&StringLiteral_43/*"\n"*/, v6);
    sub_1B64870(&StringLiteral_15893/*"[UnityIAP]課金エラー:"*/, v7);
    byte_49FDE40 = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_61383576((System_String_o *)StringLiteral_15893/*"[UnityIAP]課金エラー:"*/, str, 0LL);
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
      v12 = this->fields._puchaserLogLabel;
      if ( v12 )
      {
        v13 = System_String__Concat_61394836(v12->fields.mText, str, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        UILabel__set_text(v12, v13, 0LL);
        return;
      }
LABEL_13:
      sub_1B64ACC(isActiveAndEnabled, v10);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FDE41 & 1) == 0 )
  {
    sub_1B64870(&PurchaserUIScript___c_TypeInfo, v1);
    byte_49FDE41 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaserUIScript___c_TypeInfo->static_fields->__9 = (struct PurchaserUIScript___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)PurchaserUIScript___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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