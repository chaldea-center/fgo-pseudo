void __fastcall BattleRetryConfirmContents___ctor(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B4816B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_RetryConfirmItem___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_RetryConfirmItem__TypeInfo, v3);
    byte_4B4816B = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_RetryConfirmItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_RetryConfirmItem___ctor__);
  this->fields.needSetCondensedScaleList = (struct System_Collections_Generic_List_RetryConfirmItem__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.needSetCondensedScaleList, (int32_t)v4, v5, v6);
  this->fields.isDispUseItemUI = 1;
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
  System_Action_object__o *_9__9_0; // x20
  Il2CppObject *v9; // x21
  struct BattleRetryConfirmContents___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4B4816A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_RetryConfirmItem__TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_RetryConfirmItem___, v3);
    sub_1BDB878(&Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__9_0__, v4);
    this = (BattleRetryConfirmContents_o *)sub_1BDB878(&BattleRetryConfirmContents___c_TypeInfo, v5);
    byte_4B4816A = 1;
  }
  if ( v2->fields.isDispUseItemUI || !v2->fields.isPointOnly )
  {
    items = v2->fields.items;
    if ( !items )
      sub_1BDBAD4(this, method);
    if ( (int)items->max_length <= 2 )
    {
      v7 = BattleRetryConfirmContents___c_TypeInfo;
      if ( !BattleRetryConfirmContents___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmContents___c_TypeInfo);
        v7 = BattleRetryConfirmContents___c_TypeInfo;
      }
      _9__9_0 = (System_Action_object__o *)v7->static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = BattleRetryConfirmContents___c_TypeInfo;
        }
        v9 = (Il2CppObject *)v7->static_fields->__9;
        _9__9_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_RetryConfirmItem__TypeInfo);
        System_Action_object____ctor(
          _9__9_0,
          v9,
          Method_BattleRetryConfirmContents___c__CostPointLabelCentering_b__9_0__,
          0LL);
        static_fields = BattleRetryConfirmContents___c_TypeInfo->static_fields;
        static_fields->__9__9_0 = (struct System_Action_RetryConfirmItem__o *)_9__9_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v11, v12);
      }
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)items,
        (System_Action_T__o *)_9__9_0,
        (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_RetryConfirmItem___);
    }
  }
}


void __fastcall BattleRetryConfirmContents__Initialized(BattleRetryConfirmContents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *mainText; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4B48167 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_2881/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, v3);
    byte_4B48167 = 1;
  }
  mainText = this->fields.mainText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0LL);
  if ( !mainText )
    sub_1BDBAD4(v5, v6);
  UILabel__set_text(mainText, v5, 0LL);
}


void __fastcall BattleRetryConfirmContents__SetCondensedScalePossessionAmount(
        BattleRetryConfirmContents_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *needSetCondensedScaleList; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B48169 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_RetryConfirmItem__TypeInfo, method);
    sub_1BDB878(&Method_BattleRetryConfirmContents__SetCondensedScalePossessionAmount_b__8_0__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__, v4);
    byte_4B48169 = 1;
  }
  needSetCondensedScaleList = (System_Collections_Generic_List_object__o *)this->fields.needSetCondensedScaleList;
  v6 = (System_Action_object__o *)sub_1BDBAC4(System_Action_RetryConfirmItem__TypeInfo);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmContents__SetCondensedScalePossessionAmount_b__8_0__,
    0LL);
  if ( !needSetCondensedScaleList )
    sub_1BDBAD4(v7, v8);
  System_Collections_Generic_List_object___ForEach(
    needSetCondensedScaleList,
    (System_Action_T__o *)v6,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_RetryConfirmItem__ForEach__);
}


void __fastcall BattleRetryConfirmContents__SetCostValues(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *costItems,
        bool isDisplayUseItemUI,
        bool isPointOnlyLayout,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v6; // x20
  bool v7; // w22
  bool v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  BattleRetryConfirmContents_o *v12; // x21
  float v13; // s8
  int32_t v14; // w22
  struct RetryConfirmItem_array *items; // x8
  unsigned __int64 v16; // x24
  bool *v17; // x26
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x10
  __int128 v20; // q0
  int v21; // w11
  bool v22; // w29
  UnityEngine_Component_o *v23; // x23
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8
  il2cpp_array_size_t max_length; // w8
  unsigned int m_CancellationTokenSource; // w8
  int v31; // w8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v33; // [xsp+30h] [xbp-90h]
  __int128 v34; // [xsp+40h] [xbp-80h]
  _BYTE v35[7]; // [xsp+58h] [xbp-68h]

  v6 = this;
  v7 = isDisplayUseItemUI;
  v8 = isPointOnlyLayout;
  if ( (byte_4B48168 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_RetryConfirmItem__Add__, costItems);
    this = (BattleRetryConfirmContents_o *)sub_1BDB878(&float___TypeInfo, v9);
    byte_4B48168 = 1;
  }
  v6->fields.isDispUseItemUI = v7;
  v6->fields.isPointOnly = v8;
  if ( !costItems )
    goto LABEL_42;
  this = (BattleRetryConfirmContents_o *)sub_1BDB920(float___TypeInfo, costItems->max_length);
  v12 = this;
  v13 = 0.0;
  if ( v6->fields.isDispUseItemUI )
  {
LABEL_5:
    v14 = 0;
    goto LABEL_6;
  }
  max_length = costItems->max_length;
  switch ( max_length )
  {
    case 3u:
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v6->fields.mainText, 146.0, 0LL);
      this = (BattleRetryConfirmContents_o *)v6->fields.mainText;
      if ( !this )
        goto LABEL_42;
      UILabel__set_fontSize((UILabel_o *)this, 22, 0LL);
      if ( !v12 )
        goto LABEL_42;
      m_CancellationTokenSource = (unsigned int)v12->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_43;
      LODWORD(v12->fields.mainText) = 1105199104;
      if ( m_CancellationTokenSource == 1 )
        goto LABEL_43;
      HIDWORD(v12->fields.mainText) = -1041235968;
      if ( m_CancellationTokenSource <= 2 )
        goto LABEL_43;
      v14 = 22;
      v13 = -8.0;
      LODWORD(v12->fields.items) = -1028653056;
      break;
    case 2u:
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v6->fields.mainText, 142.0, 0LL);
      this = (BattleRetryConfirmContents_o *)v6->fields.mainText;
      if ( !this )
        goto LABEL_42;
      UILabel__set_fontSize((UILabel_o *)this, 24, 0LL);
      if ( !v12 )
        goto LABEL_42;
      v31 = (int)v12->fields.m_CancellationTokenSource;
      if ( !v31 )
        goto LABEL_43;
      LODWORD(v12->fields.mainText) = 0;
      if ( v31 == 1 )
        goto LABEL_43;
      v14 = 24;
      HIDWORD(v12->fields.mainText) = -1031274496;
      v13 = -12.0;
      break;
    case 1u:
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v6->fields.mainText, 142.0, 0LL);
      if ( v12 )
      {
        if ( LODWORD(v12->fields.m_CancellationTokenSource) )
        {
          v14 = 0;
          LODWORD(v12->fields.mainText) = -1040711680;
          break;
        }
LABEL_43:
        sub_1BDBADC(this, costItems, v10);
      }
LABEL_42:
      sub_1BDBAD4(this, costItems);
    default:
      goto LABEL_5;
  }
LABEL_6:
  items = v6->fields.items;
  if ( !items )
    goto LABEL_42;
  v16 = 0LL;
  v17 = &costItems->m_Items[0].fields.isIndividualLimit + 1;
  while ( 1 )
  {
    v18 = items->max_length;
    if ( (__int64)v16 >= (int)v18 )
      break;
    v19 = costItems->max_length;
    if ( (__int64)v16 >= (int)v19 )
      break;
    if ( v16 >= v19 )
      goto LABEL_43;
    v20 = *(_OWORD *)(v17 - 17);
    v33 = *(_OWORD *)(v17 - 33);
    v34 = v20;
    v21 = *(_DWORD *)v17;
    v22 = *(v17 - 1);
    *(_DWORD *)&v35[3] = *(_DWORD *)(v17 + 3);
    *(_DWORD *)v35 = v21;
    if ( v16 >= v18 )
      goto LABEL_43;
    v23 = (UnityEngine_Component_o *)items->m_Items[v16];
    if ( !v6->fields.isDispUseItemUI )
    {
      if ( !v12 )
        goto LABEL_42;
      if ( v16 >= LODWORD(v12->fields.m_CancellationTokenSource) )
        goto LABEL_43;
      ComponentHelper__SetLocalPositionY(v23, *((float *)&v12->fields.mainText + v16), 0LL);
    }
    *(_OWORD *)&v32.fields.useName = v33;
    *(_OWORD *)&v32.fields.possessionName = v34;
    v32.fields.isIndividualLimit = v22;
    *((_DWORD *)&v32.fields.isIndividualLimit + 1) = *(_DWORD *)&v35[3];
    *(_DWORD *)(&v32.fields.isIndividualLimit + 1) = *(_DWORD *)v35;
    BattleRetryConfirmContents__SetCostValues_46521172(v6, &v32, (RetryConfirmItem_o *)v23, v14, v13, v11);
    if ( v22 )
    {
      this = (BattleRetryConfirmContents_o *)v6->fields.needSetCondensedScaleList;
      if ( !this )
        goto LABEL_42;
      v25 = *(_QWORD *)&this->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_RetryConfirmItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v25 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v23,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = v25 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v28 + 32) = v23;
        sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v23, v10, v24);
      }
    }
    items = v6->fields.items;
    ++v16;
    v17 += 40;
    if ( !items )
      goto LABEL_42;
  }
}


void __fastcall BattleRetryConfirmContents__SetCostValues_46521172(
        BattleRetryConfirmContents_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *value,
        RetryConfirmItem_o *item,
        int32_t fontSize,
        float possessionLabelPosY,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *v6; // x20
  float v11; // s0
  float v12; // s0

  if ( !item )
    goto LABEL_20;
  v6 = this;
  this = (BattleRetryConfirmContents_o *)item->fields.useName;
  if ( !this )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)this, value->fields.useName, 0LL);
  this = (BattleRetryConfirmContents_o *)item->fields.useAmount;
  if ( !this )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)this, value->fields.useAmount, 0LL);
  this = (BattleRetryConfirmContents_o *)item->fields.possessionName;
  if ( !this )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)this, value->fields.possessionName, 0LL);
  this = (BattleRetryConfirmContents_o *)item->fields.possessionAmount;
  if ( !this )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
  if ( v6->fields.isDispUseItemUI )
    return;
  if ( fontSize >= 1 )
  {
    this = (BattleRetryConfirmContents_o *)item->fields.useName;
    if ( this )
    {
      UILabel__set_fontSize((UILabel_o *)this, fontSize, 0LL);
      this = (BattleRetryConfirmContents_o *)item->fields.useAmount;
      if ( this )
      {
        UILabel__set_fontSize((UILabel_o *)this, fontSize, 0LL);
        this = (BattleRetryConfirmContents_o *)item->fields.possessionName;
        if ( this )
        {
          UILabel__set_fontSize((UILabel_o *)this, fontSize, 0LL);
          this = (BattleRetryConfirmContents_o *)item->fields.possessionAmount;
          if ( this )
          {
            UILabel__set_fontSize((UILabel_o *)this, fontSize, 0LL);
            ComponentHelper__SetLocalPositionY(
              (UnityEngine_Component_o *)item->fields.possessionName,
              possessionLabelPosY,
              0LL);
            ComponentHelper__SetLocalPositionY(
              (UnityEngine_Component_o *)item->fields.possessionAmount,
              possessionLabelPosY,
              0LL);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_20:
    sub_1BDBAD4(this, value);
  }
LABEL_13:
  if ( v6->fields.isPointOnly )
    v11 = 124.0;
  else
    v11 = 191.0;
  ComponentHelper__SetLocalPositionX((UnityEngine_Component_o *)item->fields.useAmount, v11, 0LL);
  if ( v6->fields.isPointOnly )
    v12 = 124.0;
  else
    v12 = 191.0;
  ComponentHelper__SetLocalPositionX((UnityEngine_Component_o *)item->fields.possessionAmount, v12, 0LL);
}


void __fastcall BattleRetryConfirmContents___SetCondensedScalePossessionAmount_b__8_0(
        BattleRetryConfirmContents_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  v4 = RetryConfirmItem__SetCondensedScalePossessionAmount(item, this->fields.isDispUseItemUI, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)item, v4, 0LL);
}


void __fastcall BattleRetryConfirmContents___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4816C & 1) == 0 )
  {
    sub_1BDB878(&BattleRetryConfirmContents___c_TypeInfo, v1);
    byte_4B4816C = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleRetryConfirmContents___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmContents___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmContents___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BattleRetryConfirmContents___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRetryConfirmContents___c___ctor(BattleRetryConfirmContents___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmContents___c___CostPointLabelCentering_b__9_0(
        BattleRetryConfirmContents___c_o *this,
        RetryConfirmItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BDBAD4(this, 0LL);
  RetryConfirmItem__CenteringAmountLabel(item, (const MethodInfo *)item);
}