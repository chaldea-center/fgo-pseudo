void BattleRetryConfirmContents___ctor(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4689F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
    byte_4C4689F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
  this->fields.needSetCondensedScaleList = (struct System_Collections_Generic_List_RetryConfirmItem__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.needSetCondensedScaleList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRetryConfirmContents__CostPointLabelCentering(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v2; // x19
  struct RetryConfirmItem_array *items; // x19
  BattleRetryConfirmContents___c_c *v4; // x0
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4C4689E & 1) == 0 )
  {
    sub_1C37058(&System_Action_RetryConfirmItem__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_RetryConfirmItem___);
    sub_1C37058(&Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__);
    this = (BattleRetryConfirmContents_o *)sub_1C37058(&BattleRetryConfirmContents___c_TypeInfo);
    byte_4C4689E = 1;
  }
  items = v2->fields.items;
  if ( !items )
    sub_1C372B4(this);
  if ( SLODWORD(items->max_length) <= 2 )
  {
    v4 = BattleRetryConfirmContents___c_TypeInfo;
    if ( !BattleRetryConfirmContents___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmContents___c_TypeInfo);
      v4 = BattleRetryConfirmContents___c_TypeInfo;
    }
    _9__7_0 = (System_Action_object__o *)v4->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleRetryConfirmContents___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__7_0 = (System_Action_object__o *)sub_1C372A4(System_Action_RetryConfirmItem__TypeInfo);
      System_Action_object____ctor(
        _9__7_0,
        v6,
        Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__,
        0);
      static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Action_RetryConfirmItem__o *)_9__7_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)items,
      (System_Action_T__o *)_9__7_0,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_RetryConfirmItem___);
  }
}


void BattleRetryConfirmContents__Initialized(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  UILabel_o *mainText; // x19
  System_String_o *v4; // x0

  if ( (byte_4C4689B & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/);
    byte_4C4689B = 1;
  }
  mainText = this->fields.mainText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0);
  if ( !mainText )
    sub_1C372B4(v4);
  UILabel__set_text(mainText, v4, 0);
}


void BattleRetryConfirmContents__SetCondensedScalePossessionAmount(
        BattleRetryConfirmContents_o *this,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *needSetCondensedScaleList; // x19
  System_Action_object__o *v8; // x20

  if ( (byte_4C4689D & 1) == 0 )
  {
    sub_1C37058(&System_Action_RetryConfirmItem__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
    sub_1C37058(&Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__);
    sub_1C37058(&BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo);
    byte_4C4689D = 1;
  }
  v5 = sub_1C372A4(BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isDispUseItemUI,
        needSetCondensedScaleList = (System_Collections_Generic_List_object__o *)this->fields.needSetCondensedScaleList,
        v8 = (System_Action_object__o *)sub_1C372A4(System_Action_RetryConfirmItem__TypeInfo),
        System_Action_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__,
          0),
        !needSetCondensedScaleList) )
  {
    sub_1C372B4(v6);
  }
  System_Collections_Generic_List_object___ForEach(
    needSetCondensedScaleList,
    (System_Action_T__o *)v8,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
}


void BattleRetryConfirmContents__SetCostValues(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *costItems,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleRetryConfirmContents_o *v5; // x20
  struct RetryConfirmItem_array *items; // x8
  unsigned __int64 v7; // x22
  bool *v8; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x10
  __int128 v11; // q0
  int v12; // w11
  bool v13; // w26
  RetryConfirmItem_o *v14; // x21
  int32_t v15; // w2
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v20; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v21; // [xsp+30h] [xbp-70h]
  __int128 v22; // [xsp+40h] [xbp-60h]
  _BYTE v23[7]; // [xsp+58h] [xbp-48h]

  v5 = this;
  if ( (byte_4C4689C & 1) == 0 )
  {
    this = (BattleRetryConfirmContents_o *)sub_1C37058(&Method_System_Collections_Generic_List_RetryConfirmItem__Add__);
    byte_4C4689C = 1;
  }
  items = v5->fields.items;
  if ( !items )
LABEL_17:
    sub_1C372B4(this);
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
    if ( v7 >= v10
      || (v11 = *(_OWORD *)(v8 - 17),
          v21 = *(_OWORD *)(v8 - 33),
          v22 = v11,
          v12 = *(_DWORD *)v8,
          v13 = *(v8 - 1),
          *(_DWORD *)&v23[3] = *(_DWORD *)(v8 + 3),
          *(_DWORD *)v23 = v12,
          v7 >= max_length_low) )
    {
      sub_1C372BC(this);
    }
    v14 = items->m_Items[v7];
    v20.fields.isIndividualLimit = v13;
    *(_OWORD *)&v20.fields.useName = v21;
    *(_OWORD *)&v20.fields.possessionName = v22;
    *((_DWORD *)&v20.fields.isIndividualLimit + 1) = *(_DWORD *)&v23[3];
    *(_DWORD *)(&v20.fields.isIndividualLimit + 1) = *(_DWORD *)v23;
    BattleRetryConfirmContents__SetCostValues_47775548(this, &v20, v14, v3);
    if ( v13 )
    {
      this = (BattleRetryConfirmContents_o *)v5->fields.needSetCondensedScaleList;
      if ( !this )
        goto LABEL_17;
      m_CachedPtr = this->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_RetryConfirmItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_17;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v14,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v14, v15, v3);
      }
    }
    items = v5->fields.items;
    ++v7;
    v8 += 40;
    if ( !items )
      goto LABEL_17;
  }
}


void BattleRetryConfirmContents__SetCostValues_47775548(
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
    sub_1C372B4(this);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0);
}


void BattleRetryConfirmContents___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C468A0 & 1) == 0 )
  {
    sub_1C37058(&BattleRetryConfirmContents___c_TypeInfo);
    byte_4C468A0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleRetryConfirmContents___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmContents___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmContents___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleRetryConfirmContents___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  v4 = RetryConfirmItem__SetCondensedScalePossessionAmount(item, this->fields.isDispUseItemUI, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)item, v4, 0);
}