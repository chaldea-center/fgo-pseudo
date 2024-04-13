void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v9; // x1
  UILabel_o *v10; // x0

  if ( (byte_42E8865 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16001/*"[purchase log]\n"*/, v5, v6, v7);
    byte_42E8865 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v10 = this->fields._puchaserLogLabel;
    if ( !v10 )
      goto LABEL_12;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v10, 0LL) )
    {
      v10 = this->fields._puchaserLogLabel;
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)StringLiteral_16001/*"[purchase log]\n"*/, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(v10, v9);
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *puchaserLogLabel; // x20
  __int64 v9; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v11; // x8
  System_String_o *mText; // x19

  if ( (byte_42E8866 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GUIUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8866 = 1;
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
    v11 = this->fields._puchaserLogLabel;
    if ( !v11 )
LABEL_15:
      sub_B5D69C(isActiveAndEnabled, v9);
    mText = v11->fields.mText;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *purchaseBehaviour; // x21
  PurchaseLogic_o *purchaseLogic; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  struct PurchaserUIScript___c_StaticFields *buyProductFinishedAction; // x8
  PurchaseLogic_ProductFinishedAction_o *_9__8_0; // x21
  Il2CppObject *v21; // x22
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v30; // x9
  __int64 v31; // x0

  if ( (byte_42E8867 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v9, v10, v11);
    sub_B5D5C4(&PurchaserUIScript___c_TypeInfo, v12, v13, v14);
    byte_42E8867 = 1;
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
      v21 = (Il2CppObject *)buyProductFinishedAction->__9;
      _9__8_0 = (PurchaseLogic_ProductFinishedAction_o *)sub_B5D694(PurchaseLogic_ProductFinishedAction_TypeInfo);
      PurchaseLogic_ProductFinishedAction___ctor(_9__8_0, v21, Method_PurchaserUIScript___c__Purchase_b__8_0__, 0LL);
      static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = _9__8_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&static_fields->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
      {
        v31 = sub_B5D6C8(purchaseLogic);
        sub_B5D668(v31, 0LL);
      }
      v30 = this->fields._purchaseBehaviour;
      if ( v30 )
      {
        purchaseLogic = v30->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_25113528(purchaseLogic, productIdCollection->m_Items[index], 0, _9__8_0, v18);
          return;
        }
      }
    }
LABEL_22:
    sub_B5D69C(purchaseLogic, v17);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UILabel_o *stoneValueLabel; // x20
  System_String_o *purchaseLogic; // x0
  __int64 v25; // x1
  System_String_o *v26; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v28; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v30; // x0
  UnityEngine_Object_o *v31; // x20
  struct PurchaseBehaviour_o *v32; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct PurchaseBehaviour_o *v40; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8864 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_PurchaserUIScript__Start_b__5_0__, v14, v15, v16);
    sub_B5D5C4(&Method_PurchaserUIScript__Start_b__5_1__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E8864 = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v48 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v48, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_30;
  v26 = purchaseLogic ? purchaseLogic : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(stoneValueLabel, v26, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v48 = 0;
  purchaseLogic = System_Int32__ToString((int32_t)&v48, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_30;
  if ( purchaseLogic )
    v28 = purchaseLogic;
  else
    v28 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(totalPaymentValueLabel, v28, 0LL);
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL) )
  {
    v30 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__Activate((const MethodInfo *)v30);
  }
  v31 = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  purchaseLogic = (System_String_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_30;
  if ( ((unsigned int)purchaseLogic & UnityEngine_Behaviour__get_isActiveAndEnabled(
                                        (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                                        0LL) & 1) == 0 )
    return;
  v32 = this->fields._purchaseBehaviour;
  v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v33,
    (Il2CppObject *)this,
    Method_PurchaserUIScript__Start_b__5_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  if ( !v32
    || (purchaseLogic = (System_String_o *)v32->fields._purchaseLogic) == 0LL
    || (purchaseLogic[2].klass = (System_String_c *)v33,
        sub_B5D560(
          (BattleServantConfConponent_o *)&purchaseLogic[2],
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        v40 = this->fields._purchaseBehaviour,
        v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v41,
          (Il2CppObject *)this,
          Method_PurchaserUIScript__Start_b__5_1__,
          (const MethodInfo_258B320 *)Method_System_Action_string___ctor__),
        !v40)
    || (purchaseLogic = (System_String_o *)v40->fields._purchaseLogic) == 0LL )
  {
LABEL_30:
    sub_B5D69C(purchaseLogic, v25);
  }
  purchaseLogic[2].monitor = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&purchaseLogic[2].monitor,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v10; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v12; // x20
  System_String_o *v13; // x1

  if ( (byte_42E8868 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v6, v7, v8);
    byte_42E8868 = 1;
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
      v12 = this->fields._puchaserLogLabel;
      if ( v12 )
      {
        v13 = System_String__Concat_44580072(v12->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v12, v13, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(isActiveAndEnabled, v10);
    }
  }
}


void __fastcall PurchaserUIScript___Start_b__5_1(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  Il2CppObject *v15; // x21
  UnityEngine_Object_o *puchaserLogLabel; // x21
  __int64 v17; // x1
  struct UILabel_o *isActiveAndEnabled; // x0
  struct UILabel_o *v19; // x20
  System_String_o *v20; // x1

  if ( (byte_42E8869 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15953/*"[UnityIAP]課金エラー:"*/, v12, v13, v14);
    byte_42E8869 = 1;
  }
  v15 = (Il2CppObject *)System_String__Concat_44577788((System_String_o *)StringLiteral_15953/*"[UnityIAP]課金エラー:"*/, str, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v15, 0LL);
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
      v19 = this->fields._puchaserLogLabel;
      if ( v19 )
      {
        v20 = System_String__Concat_44580072(v19->fields.mText, str, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
        UILabel__set_text(v19, v20, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(isActiveAndEnabled, v17);
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PurchaserUIScript___c_StaticFields *static_fields; // x0

  if ( (byte_42E5AC7 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaserUIScript___c_TypeInfo, v1, v2, v3);
    byte_42E5AC7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PurchaserUIScript___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaserUIScript___c_o *)v4;
  sub_B5D560(static_fields);
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