void __fastcall BattleRetryConfirmContents___ctor(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF9F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
    byte_4BDF9F2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
  this->fields.needSetCondensedScaleList = (struct System_Collections_Generic_List_RetryConfirmItem__o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.needSetCondensedScaleList,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmContents__CostPointLabelCentering(
        BattleRetryConfirmContents_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v2; // x19
  struct RetryConfirmItem_array *items; // x19
  BattleRetryConfirmContents___c_c *v4; // x0
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4BDF9F1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_RetryConfirmItem__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_RetryConfirmItem___);
    sub_1C21E38(&Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__);
    this = (BattleRetryConfirmContents_o *)sub_1C21E38(&BattleRetryConfirmContents___c_TypeInfo);
    byte_4BDF9F1 = 1;
  }
  items = v2->fields.items;
  if ( !items )
    sub_1C22094(this, method);
  if ( (int)items->max_length <= 2 )
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
      _9__7_0 = (System_Action_object__o *)sub_1C22084(System_Action_RetryConfirmItem__TypeInfo);
      System_Action_object____ctor(
        _9__7_0,
        v6,
        Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__7_0__,
        0LL);
      static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Action_RetryConfirmItem__o *)_9__7_0;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v8, v9, v10, v11, v12, v13);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)items,
      (System_Action_T__o *)_9__7_0,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_RetryConfirmItem___);
  }
}


void __fastcall BattleRetryConfirmContents__Initialized(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  UILabel_o *mainText; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4BDF9EE & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3010/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/);
    byte_4BDF9EE = 1;
  }
  mainText = this->fields.mainText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3010/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0LL);
  if ( !mainText )
    sub_1C22094(v4, v5);
  UILabel__set_text(mainText, v4, 0LL);
}


void __fastcall BattleRetryConfirmContents__SetCondensedScalePossessionAmount(
        BattleRetryConfirmContents_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents___c_c *v3; // x0
  System_Collections_Generic_List_object__o *needSetCondensedScaleList; // x19
  System_Action_object__o *_9__6_0; // x20
  Il2CppObject *v6; // x21
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF9F0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_RetryConfirmItem__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
    sub_1C21E38(&Method_BattleRetryConfirmContents___c__SetCondensedScalePossessionAmount_b__6_0__);
    sub_1C21E38(&BattleRetryConfirmContents___c_TypeInfo);
    byte_4BDF9F0 = 1;
  }
  v3 = BattleRetryConfirmContents___c_TypeInfo;
  needSetCondensedScaleList = (System_Collections_Generic_List_object__o *)this->fields.needSetCondensedScaleList;
  if ( !BattleRetryConfirmContents___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmContents___c_TypeInfo);
    v3 = BattleRetryConfirmContents___c_TypeInfo;
  }
  _9__6_0 = (System_Action_object__o *)v3->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleRetryConfirmContents___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__6_0 = (System_Action_object__o *)sub_1C22084(System_Action_RetryConfirmItem__TypeInfo);
    System_Action_object____ctor(
      _9__6_0,
      v6,
      Method_BattleRetryConfirmContents___c__SetCondensedScalePossessionAmount_b__6_0__,
      0LL);
    static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Action_RetryConfirmItem__o *)_9__6_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !needSetCondensedScaleList )
    sub_1C22094(v3, method);
  System_Collections_Generic_List_object___ForEach(
    needSetCondensedScaleList,
    (System_Action_T__o *)_9__6_0,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
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
  int64_t v15; // x2
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v24; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v25; // [xsp+30h] [xbp-70h]
  __int128 v26; // [xsp+40h] [xbp-60h]
  _BYTE v27[7]; // [xsp+58h] [xbp-48h]

  v5 = this;
  if ( (byte_4BDF9EF & 1) == 0 )
  {
    this = (BattleRetryConfirmContents_o *)sub_1C21E38(&Method_System_Collections_Generic_List_RetryConfirmItem__Add__);
    byte_4BDF9EF = 1;
  }
  items = v5->fields.items;
  if ( !items )
LABEL_17:
    sub_1C22094(this, costItems);
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
          v25 = *(_OWORD *)(v8 - 33),
          v26 = v11,
          v12 = *(_DWORD *)v8,
          v13 = *(v8 - 1),
          *(_DWORD *)&v27[3] = *(_DWORD *)(v8 + 3),
          *(_DWORD *)v27 = v12,
          v7 >= max_length) )
    {
      sub_1C2209C(this, costItems);
    }
    v14 = items->m_Items[v7];
    v24.fields.isIndividualLimit = v13;
    *(_OWORD *)&v24.fields.useName = v25;
    *(_OWORD *)&v24.fields.possessionName = v26;
    *((_DWORD *)&v24.fields.isIndividualLimit + 1) = *(_DWORD *)&v27[3];
    *(_DWORD *)(&v24.fields.isIndividualLimit + 1) = *(_DWORD *)v27;
    BattleRetryConfirmContents__SetCostValues_45718488(this, &v24, v14, v3);
    if ( v13 )
    {
      this = (BattleRetryConfirmContents_o *)v5->fields.needSetCondensedScaleList;
      if ( !this )
        goto LABEL_17;
      v20 = *(_QWORD *)&this->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_RetryConfirmItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v20 )
        goto LABEL_17;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v14,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v23 + 32) = v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v14, v15, (int32_t)v3, v16, v17, v18, v19);
      }
    }
    items = v5->fields.items;
    ++v7;
    v8 += 40;
    if ( !items )
      goto LABEL_17;
  }
}


void __fastcall BattleRetryConfirmContents__SetCostValues_45718488(
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
    sub_1C22094(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


void __fastcall BattleRetryConfirmContents___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF9F3 & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmContents___c_TypeInfo);
    byte_4BDF9F3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleRetryConfirmContents___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleRetryConfirmContents___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmContents___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleRetryConfirmContents___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  RetryConfirmItem__CenteringAmountLabel(item, (const MethodInfo *)item);
}


void __fastcall BattleRetryConfirmContents___c___SetCondensedScalePossessionAmount_b__6_0(
        BattleRetryConfirmContents___c_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !item )
    sub_1C22094(this, 0LL);
  v4 = RetryConfirmItem__SetCondensedScalePossessionAmount(item, (const MethodInfo *)item);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)item, v4, 0LL);
}