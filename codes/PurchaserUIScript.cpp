void __fastcall PurchaserUIScript___ctor(PurchaserUIScript_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaserUIScript__ClearLog(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  UnityEngine_Behaviour_o *v5; // x0
  UILabel_o *v6; // x0

  if ( (byte_40FA09F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15747, v3);
    byte_40FA09F = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields._puchaserLogLabel;
    if ( !v5 )
      goto LABEL_12;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v5, 0LL) )
    {
      v6 = this->fields._puchaserLogLabel;
      if ( v6 )
      {
        UILabel__set_text(v6, (System_String_o *)StringLiteral_15747, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}


void __fastcall PurchaserUIScript__CopyLogToClipboard(PurchaserUIScript_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x20
  UnityEngine_Behaviour_o *v5; // x0
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x19

  if ( (byte_40FA0A0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GUIUtility_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA0A0 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields._puchaserLogLabel;
    if ( !v5 )
      goto LABEL_15;
    if ( !UnityEngine_Behaviour__get_isActiveAndEnabled(v5, 0LL) )
      return;
    v6 = this->fields._puchaserLogLabel;
    if ( !v6 )
LABEL_15:
      sub_B170D4();
    mText = v6->fields.mText;
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
  _BOOL4 v9; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  PurchaserUIScript___c_c *v14; // x0
  struct PurchaserUIScript___c_StaticFields *static_fields; // x8
  PurchaseLogic_ProductFinishedAction_o *_9__8_0; // x21
  Il2CppObject *v17; // x22
  struct PurchaserUIScript___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *productIdCollection; // x8
  struct PurchaseBehaviour_o *v26; // x9
  PurchaseLogic_o *purchaseLogic; // x0

  if ( (byte_40FA0A1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v5);
    sub_B16FFC(&Method_PurchaserUIScript___c__Purchase_b__8_0__, v6);
    sub_B16FFC(&PurchaserUIScript___c_TypeInfo, v7);
    byte_40FA0A1 = 1;
  }
  purchaseBehaviour = (UnityEngine_Object_o *)this->fields._purchaseBehaviour;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(purchaseBehaviour, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_22;
  if ( (v9 & UnityEngine_Behaviour__get_isActiveAndEnabled(
               (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
               0LL) & 1) != 0 )
  {
    v14 = PurchaserUIScript___c_TypeInfo;
    if ( (BYTE3(PurchaserUIScript___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaserUIScript___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaserUIScript___c_TypeInfo);
      v14 = PurchaserUIScript___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__8_0 = static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = PurchaserUIScript___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (PurchaseLogic_ProductFinishedAction_o *)sub_B170CC(
                                                           PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12,
                                                           v13);
      PurchaseLogic_ProductFinishedAction___ctor(_9__8_0, v17, Method_PurchaserUIScript___c__Purchase_b__8_0__, 0LL);
      v18 = PurchaserUIScript___c_TypeInfo->static_fields;
      v18->__9__8_0 = _9__8_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    productIdCollection = this->fields._productIdCollection;
    if ( productIdCollection )
    {
      if ( productIdCollection->max_length <= index )
      {
        sub_B17100(v14, v10, v11);
        sub_B170A0();
      }
      v26 = this->fields._purchaseBehaviour;
      if ( v26 )
      {
        purchaseLogic = v26->fields._purchaseLogic;
        if ( purchaseLogic )
        {
          PurchaseLogic__InitiatePurchase_25232092(purchaseLogic, productIdCollection->m_Items[index], 0, _9__8_0, v13);
          return;
        }
      }
    }
LABEL_22:
    sub_B170D4();
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
  System_String_o *v10; // x0
  System_String_o *v11; // x1
  UILabel_o *totalPaymentValueLabel; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x1
  UnityEngine_Object_o *purchaseBehaviour; // x20
  PurchaseBehaviour_c *v16; // x0
  UnityEngine_Object_o *v17; // x20
  _BOOL4 v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct PurchaseBehaviour_o *v23; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0
  struct PurchaseBehaviour_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct PurchaseLogic_o *v44; // x0
  int v45; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA09E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v5);
    sub_B16FFC(&Method_PurchaserUIScript__Start_b__5_0__, v6);
    sub_B16FFC(&Method_PurchaserUIScript__Start_b__5_1__, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FA09E = 1;
  }
  PurchaserUIScript__ClearLog(this, method);
  stoneValueLabel = this->fields._stoneValueLabel;
  v45 = 0;
  v10 = System_Int32__ToString((int32_t)&v45, 0LL);
  if ( !stoneValueLabel )
    goto LABEL_30;
  v11 = v10 ? v10 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(stoneValueLabel, v11, 0LL);
  totalPaymentValueLabel = this->fields._totalPaymentValueLabel;
  v45 = 0;
  v13 = System_Int32__ToString((int32_t)&v45, 0LL);
  if ( !totalPaymentValueLabel )
    goto LABEL_30;
  if ( v13 )
    v14 = v13;
  else
    v14 = (System_String_o *)StringLiteral_1;
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
  v18 = UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( !this->fields._purchaseBehaviour )
    goto LABEL_30;
  if ( (v18 & UnityEngine_Behaviour__get_isActiveAndEnabled(
                (UnityEngine_Behaviour_o *)this->fields._purchaseBehaviour,
                0LL) & 1) == 0 )
    return;
  v23 = this->fields._purchaseBehaviour;
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_string__TypeInfo,
                                                                               v19,
                                                                               v20,
                                                                               v21,
                                                                               v22);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)this,
    Method_PurchaserUIScript__Start_b__5_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  if ( !v23
    || (purchaseLogic = v23->fields._purchaseLogic) == 0LL
    || (purchaseLogic->fields._logOutputAction = (struct System_Action_string__o *)v24,
        sub_B16F98(
          (BattleServantConfConponent_o *)&purchaseLogic->fields._logOutputAction,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        v32 = this->fields._purchaseBehaviour,
        v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_string__TypeInfo,
                                                                                     v33,
                                                                                     v34,
                                                                                     v35,
                                                                                     v36),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v37,
          (Il2CppObject *)this,
          Method_PurchaserUIScript__Start_b__5_1__,
          (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__),
        !v32)
    || (v44 = v32->fields._purchaseLogic) == 0LL )
  {
LABEL_30:
    sub_B170D4();
  }
  v44->fields._logErrorOutputAction = (struct System_Action_string__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v44->fields._logErrorOutputAction,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


void __fastcall PurchaserUIScript___Start_b__5_0(
        PurchaserUIScript_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *puchaserLogLabel; // x21
  UnityEngine_Behaviour_o *v7; // x0
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x1

  if ( (byte_40FA0A2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, str);
    sub_B16FFC(&StringLiteral_26, v5);
    byte_40FA0A2 = 1;
  }
  puchaserLogLabel = (UnityEngine_Object_o *)this->fields._puchaserLogLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(puchaserLogLabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields._puchaserLogLabel;
    if ( !v7 )
      goto LABEL_12;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v7, 0LL) )
    {
      v8 = this->fields._puchaserLogLabel;
      if ( v8 )
      {
        v9 = System_String__Concat_43746016(v8->fields.mText, str, (System_String_o *)StringLiteral_26, 0LL);
        UILabel__set_text(v8, v9, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
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
  UnityEngine_Behaviour_o *v10; // x0
  struct UILabel_o *v11; // x20
  System_String_o *v12; // x1

  if ( (byte_40FA0A3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, str);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26, v6);
    sub_B16FFC(&StringLiteral_15700, v7);
    byte_40FA0A3 = 1;
  }
  v8 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)StringLiteral_15700, str, 0LL);
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
    v10 = (UnityEngine_Behaviour_o *)this->fields._puchaserLogLabel;
    if ( !v10 )
      goto LABEL_15;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v10, 0LL) )
    {
      v11 = this->fields._puchaserLogLabel;
      if ( v11 )
      {
        v12 = System_String__Concat_43746016(v11->fields.mText, str, (System_String_o *)StringLiteral_26, 0LL);
        UILabel__set_text(v11, v12, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall PurchaserUIScript___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA2D0 & 1) == 0 )
  {
    sub_B16FFC(&PurchaserUIScript___c_TypeInfo, v1);
    byte_40FA2D0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(PurchaserUIScript___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaserUIScript___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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