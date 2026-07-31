void BattleRetryConfirmContents___ctor(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C2F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
    byte_593C2F2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
  this->fields.needSetCondensedScaleList = (struct System_Collections_Generic_List_RetryConfirmItem__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.needSetCondensedScaleList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRetryConfirmContents__CostPointLabelCentering(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v2; // x19
  struct RetryConfirmItem_array *items; // x19
  BattleRetryConfirmContents___c_c *v4; // x0
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v7; // x21
  struct BattleRetryConfirmContents___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  if ( (byte_593C2F1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_RetryConfirmItem__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_RetryConfirmItem___);
    sub_21FFC50(&Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__);
    this = (BattleRetryConfirmContents_o *)sub_21FFC50(&BattleRetryConfirmContents___c_TypeInfo);
    byte_593C2F1 = 1;
  }
  items = v2->fields.items;
  if ( !items )
    sub_21FFECC(this, method);
  if ( SLODWORD(items->max_length) <= 2 )
  {
    v4 = BattleRetryConfirmContents___c_TypeInfo;
    if ( !*(&BattleRetryConfirmContents___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmContents___c_TypeInfo, method);
      v4 = BattleRetryConfirmContents___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__7_0 = (System_Action_object__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_RetryConfirmItem__TypeInfo);
      System_Action_object____ctor(
        _9__7_0,
        v7,
        Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__,
        0);
      v8 = BattleRetryConfirmContents___c_TypeInfo->static_fields;
      v8->__9__7_0 = (struct System_Action_RetryConfirmItem__o *)_9__7_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__7_0, (int32_t)_9__7_0, v9, v10, v11, v12, v13, v14);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)items,
      (System_Action_T__o *)_9__7_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_RetryConfirmItem___);
  }
}


void BattleRetryConfirmContents__Initialized(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  UILabel_o *mainText; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_593C2EE & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/);
    byte_593C2EE = 1;
  }
  mainText = this->fields.mainText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0);
  if ( !mainText )
    sub_21FFECC(v4, v5);
  UILabel__set_text(mainText, v4, 0);
}


void BattleRetryConfirmContents__SetCondensedScalePossessionAmount(
        BattleRetryConfirmContents_o *this,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  bool v8; // w9
  System_Collections_Generic_List_object__o *needSetCondensedScaleList; // x19
  System_Action_object__o *v10; // x20

  if ( (byte_593C2F0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_RetryConfirmItem__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
    sub_21FFC50(&Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__);
    sub_21FFC50(&BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo);
    byte_593C2F0 = 1;
  }
  v5 = sub_21FFEBC(BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (v8 = isDispUseItemUI,
        needSetCondensedScaleList = (System_Collections_Generic_List_object__o *)this->fields.needSetCondensedScaleList,
        *(_BYTE *)(v5 + 16) = v8,
        v10 = (System_Action_object__o *)sub_21FFEBC(System_Action_RetryConfirmItem__TypeInfo),
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__,
          0),
        !needSetCondensedScaleList) )
  {
    sub_21FFECC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    needSetCondensedScaleList,
    (System_Action_T__o *)v10,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
}


void BattleRetryConfirmContents__SetCostValues(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *costItems,
        const MethodInfo *method)
{
  MethodInfo *v3; // x3
  BattleRetryConfirmContents_o *v5; // x20
  struct RetryConfirmItem_array *items; // x8
  unsigned __int64 v7; // x22
  bool *v8; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x10
  __int128 v11; // q1
  bool v12; // w26
  int v13; // w9
  RetryConfirmItem_o *v14; // x21
  int v15; // w10
  System_String_o *v16; // x2
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v24; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v25; // [xsp+0h] [xbp-80h] BYREF

  v5 = this;
  if ( (byte_593C2EF & 1) == 0 )
  {
    this = (BattleRetryConfirmContents_o *)sub_21FFC50(&Method_System_Collections_Generic_List_RetryConfirmItem__Add__);
    byte_593C2EF = 1;
  }
  items = v5->fields.items;
  if ( !items )
LABEL_17:
    sub_21FFECC(this, costItems);
  v7 = 0;
  v8 = &costItems->m_Items[0].fields.isIndividualLimit + 1;
  while ( 1 )
  {
    max_length_low = LODWORD(items->max_length);
    if ( (__int64)v7 >= (int)max_length_low )
      break;
    if ( !costItems )
      goto LABEL_17;
    v10 = LODWORD(costItems->max_length);
    if ( (__int64)v7 >= (int)v10 )
      break;
    if ( v7 >= v10 || v7 >= max_length_low )
      sub_21FFED4(this);
    v11 = *(_OWORD *)(v8 - 17);
    v12 = *(v8 - 1);
    v13 = *(_DWORD *)v8;
    v14 = items->m_Items[v7];
    v15 = *(_DWORD *)(v8 + 3);
    *(_OWORD *)&v25.fields.useName = *(_OWORD *)(v8 - 33);
    *(_OWORD *)&v25.fields.possessionName = v11;
    v25.fields.isIndividualLimit = v12;
    *(_DWORD *)(&v25.fields.isIndividualLimit + 1) = v13;
    *((_DWORD *)&v25.fields.isIndividualLimit + 1) = v15;
    BattleRetryConfirmContents__SetCostValues_55049776(this, &v25, v14, v3);
    if ( v12 )
    {
      this = (BattleRetryConfirmContents_o *)v5->fields.needSetCondensedScaleList;
      if ( !this )
        goto LABEL_17;
      m_CachedPtr = this->fields.m_CachedPtr;
      v22 = Method_System_Collections_Generic_List_RetryConfirmItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_17;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v14,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v24 + 32) = v14;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v24 + 32),
          (int32_t)v14,
          v16,
          (System_String_o *)v3,
          v17,
          v18,
          v19,
          v20);
      }
    }
    items = v5->fields.items;
    ++v7;
    v8 += 40;
    if ( !items )
      goto LABEL_17;
  }
}


void BattleRetryConfirmContents__SetCostValues_55049776(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *value,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  if ( !item
    || (this = (BattleRetryConfirmContents_o *)item->fields.useName) == 0
    || (UILabel__set_text((UILabel_o *)this, value->fields.useName, 0),
        (this = (BattleRetryConfirmContents_o *)item->fields.useAmount) == 0)
    || (UILabel__set_text((UILabel_o *)this, value->fields.useAmount, 0),
        (this = (BattleRetryConfirmContents_o *)item->fields.possessionName) == 0)
    || (UILabel__set_text((UILabel_o *)this, value->fields.possessionName, 0),
        (this = (BattleRetryConfirmContents_o *)item->fields.possessionAmount) == 0) )
  {
    sub_21FFECC(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0);
}


void BattleRetryConfirmContents___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C2F3 & 1) == 0 )
  {
    sub_21FFC50(&BattleRetryConfirmContents___c_TypeInfo);
    byte_593C2F3 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleRetryConfirmContents___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmContents___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmContents___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleRetryConfirmContents___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleRetryConfirmContents___c___ctor(BattleRetryConfirmContents___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmContents___c___CostPointLabelCentering_b__7_0(
        BattleRetryConfirmContents___c_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_21FFECC(this, 0);
  RetryConfirmItem__CenteringAmountLabel(item, (const MethodInfo *)item);
}


void BattleRetryConfirmContents___c__DisplayClass6_0___ctor(
        BattleRetryConfirmContents___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmContents___c__DisplayClass6_0___SetCondensedScalePossessionAmount_b__0(
        BattleRetryConfirmContents___c__DisplayClass6_0_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !item )
    sub_21FFECC(this, 0);
  v4 = RetryConfirmItem__SetCondensedScalePossessionAmount(item, this->fields.isDispUseItemUI, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)item, v4, 0);
}