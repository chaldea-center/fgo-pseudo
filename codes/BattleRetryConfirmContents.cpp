void __fastcall BattleRetryConfirmContents___ctor(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1FC85 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RetryConfirmItem___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_RetryConfirmItem__TypeInfo, v3);
    byte_4B1FC85 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
  this->fields.needSetCondensedScaleList = (struct System_Collections_Generic_List_RetryConfirmItem__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.needSetCondensedScaleList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmContents__CostPointLabelCentering(
        BattleRetryConfirmContents_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RetryConfirmItem_array *items; // x19
  BattleRetryConfirmContents___c_c *v7; // x0
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4B1FC84 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_RetryConfirmItem__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_RetryConfirmItem___, v3);
    sub_1BCAFF8(&Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__, v4);
    this = (BattleRetryConfirmContents_o *)sub_1BCAFF8(&BattleRetryConfirmContents___c_TypeInfo, v5);
    byte_4B1FC84 = 1;
  }
  items = v2->fields.items;
  if ( !items )
    sub_1BCB254(this, method);
  if ( (int)items->max_length <= 2 )
  {
    v7 = BattleRetryConfirmContents___c_TypeInfo;
    if ( !BattleRetryConfirmContents___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmContents___c_TypeInfo);
      v7 = BattleRetryConfirmContents___c_TypeInfo;
    }
    _9__7_0 = (System_Action_object__o *)v7->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleRetryConfirmContents___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__7_0 = (System_Action_object__o *)sub_1BCB244(System_Action_RetryConfirmItem__TypeInfo);
      System_Action_object____ctor(
        _9__7_0,
        v9,
        Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__,
        0LL);
      static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Action_RetryConfirmItem__o *)_9__7_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)items,
      (System_Action_T__o *)_9__7_0,
      (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_RetryConfirmItem___);
  }
}


void __fastcall BattleRetryConfirmContents__Initialized(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *mainText; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1FC81 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_2838/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, v3);
    byte_4B1FC81 = 1;
  }
  mainText = this->fields.mainText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2838/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0LL);
  if ( !mainText )
    sub_1BCB254(v5, v6);
  UILabel__set_text(mainText, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetryConfirmContents__SetCondensedScalePossessionAmount(
        BattleRetryConfirmContents_o *this,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *needSetCondensedScaleList; // x19
  System_Action_object__o *v12; // x20

  if ( (byte_4B1FC83 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_RetryConfirmItem__TypeInfo, isDispUseItemUI);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__, v5);
    sub_1BCAFF8(&Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__, v6);
    sub_1BCAFF8(&BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo, v7);
    byte_4B1FC83 = 1;
  }
  v8 = sub_1BCB244(BattleRetryConfirmContents___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_BYTE *)(v8 + 16) = isDispUseItemUI,
        needSetCondensedScaleList = (System_Collections_Generic_List_object__o *)this->fields.needSetCondensedScaleList,
        v12 = (System_Action_object__o *)sub_1BCB244(System_Action_RetryConfirmItem__TypeInfo),
        System_Action_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_BattleRetryConfirmContents___c__DisplayClass6_0__SetCondensedScalePossessionAmount_b__0__,
          0LL),
        !needSetCondensedScaleList) )
  {
    sub_1BCB254(v9, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    needSetCondensedScaleList,
    (System_Action_T__o *)v12,
    (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
}


void __fastcall BattleRetryConfirmContents__SetCostValues(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *costItems,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleRetryConfirmContents_o *v5; // x20
  struct RetryConfirmItem_array *items; // x8
  unsigned __int64 v7; // x22
  bool *v8; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x10
  __int128 v11; // q0
  int v12; // w11
  bool v13; // w26
  RetryConfirmItem_o *v14; // x21
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v18; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v19; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v20; // [xsp+30h] [xbp-70h]
  __int128 v21; // [xsp+40h] [xbp-60h]
  _BYTE v22[7]; // [xsp+58h] [xbp-48h]

  v5 = this;
  if ( (byte_4B1FC82 & 1) == 0 )
  {
    this = (BattleRetryConfirmContents_o *)sub_1BCAFF8(
                                             &Method_System_Collections_Generic_List_RetryConfirmItem__Add__,
                                             costItems);
    byte_4B1FC82 = 1;
  }
  items = v5->fields.items;
  if ( !items )
LABEL_17:
    sub_1BCB254(this, costItems);
  v7 = 0LL;
  v8 = &costItems->m_Items[0].fields.isIndividualLimit + 1;
  while ( 1 )
  {
    max_length = items->max_length;
    if ( (__int64)v7 >= (int)max_length )
      break;
    if ( !costItems )
      goto LABEL_17;
    v10 = costItems->max_length;
    if ( (__int64)v7 >= (int)v10 )
      break;
    if ( v7 >= v10
      || (v11 = *(_OWORD *)(v8 - 17),
          v20 = *(_OWORD *)(v8 - 33),
          v21 = v11,
          v12 = *(_DWORD *)v8,
          v13 = *(v8 - 1),
          *(_DWORD *)&v22[3] = *(_DWORD *)(v8 + 3),
          *(_DWORD *)v22 = v12,
          v7 >= max_length) )
    {
      sub_1BCB25C(this, costItems, method);
    }
    v14 = items->m_Items[v7];
    v19.fields.isIndividualLimit = v13;
    *(_OWORD *)&v19.fields.useName = v20;
    *(_OWORD *)&v19.fields.possessionName = v21;
    *((_DWORD *)&v19.fields.isIndividualLimit + 1) = *(_DWORD *)&v22[3];
    *(_DWORD *)(&v19.fields.isIndividualLimit + 1) = *(_DWORD *)v22;
    BattleRetryConfirmContents__SetCostValues_46761068(this, &v19, v14, v3);
    if ( v13 )
    {
      this = (BattleRetryConfirmContents_o *)v5->fields.needSetCondensedScaleList;
      if ( !this )
        goto LABEL_17;
      v15 = *(_QWORD *)&this->fields.m_CachedPtr;
      v16 = Method_System_Collections_Generic_List_RetryConfirmItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v15 )
        goto LABEL_17;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v15 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v14,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = v15 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v18 + 32) = v14;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v14, (int32_t)method, v3);
      }
    }
    items = v5->fields.items;
    ++v7;
    v8 += 40;
    if ( !items )
      goto LABEL_17;
  }
}


void __fastcall BattleRetryConfirmContents__SetCostValues_46761068(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *value,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  if ( !item
    || (this = (BattleRetryConfirmContents_o *)item->fields.useName) == 0LL
    || (UILabel__set_text((UILabel_o *)this, value->fields.useName, 0LL),
        (this = (BattleRetryConfirmContents_o *)item->fields.useAmount) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, value->fields.useAmount, 0LL),
        (this = (BattleRetryConfirmContents_o *)item->fields.possessionName) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, value->fields.possessionName, 0LL),
        (this = (BattleRetryConfirmContents_o *)item->fields.possessionAmount) == 0LL) )
  {
    sub_1BCB254(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


void __fastcall BattleRetryConfirmContents___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1FC86 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleRetryConfirmContents___c_TypeInfo, v1);
    byte_4B1FC86 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleRetryConfirmContents___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmContents___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmContents___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleRetryConfirmContents___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRetryConfirmContents___c___ctor(BattleRetryConfirmContents___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmContents___c___CostPointLabelCentering_b__7_0(
        BattleRetryConfirmContents___c_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCB254(this, 0LL);
  RetryConfirmItem__CenteringAmountLabel(item, (const MethodInfo *)item);
}


void __fastcall BattleRetryConfirmContents___c__DisplayClass6_0___ctor(
        BattleRetryConfirmContents___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmContents___c__DisplayClass6_0___SetCondensedScalePossessionAmount_b__0(
        BattleRetryConfirmContents___c__DisplayClass6_0_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !item )
    sub_1BCB254(this, 0LL);
  v4 = RetryConfirmItem__SetCondensedScalePossessionAmount(item, this->fields.isDispUseItemUI, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)item, v4, 0LL);
}