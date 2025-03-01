void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDDBD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFDDBD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall RestrictionEntity__GetClassIndividualityRestrictionMessage(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  RestrictionEntity_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v22; // x0
  System_String_o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  RestrictionEntity___c_c *v25; // x0
  System_Func_int__int__o *_9__16_0; // x22
  Il2CppObject *v27; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  RestrictionEntity___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_T__TResult__o *_9__16_1; // x22
  Il2CppObject *v39; // x23
  struct RestrictionEntity___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_string__o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x19
  System_String_o *v55; // x19
  Il2CppObject *v56; // x20
  Il2CppObject *v57; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4BFDDBC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_int__int___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_int__string___, v6);
    sub_1C2E12C(&System_Func_int__int__TypeInfo, v7);
    sub_1C2E12C(&System_Func_int__string__TypeInfo, v8);
    sub_1C2E12C(&int_TypeInfo, v9);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&Restriction_RangeType_TypeInfo, v11);
    sub_1C2E12C(&string_TypeInfo, v12);
    sub_1C2E12C(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__, v13);
    sub_1C2E12C(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__, v14);
    sub_1C2E12C(&RestrictionEntity___c_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v16);
    sub_1C2E12C(&StringLiteral_10496/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v17);
    sub_1C2E12C(&StringLiteral_10497/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v18);
    this = (RestrictionEntity_o *)sub_1C2E12C(&StringLiteral_11771/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v19);
    byte_4BFDDBC = 1;
  }
  targetVals = v5->fields.targetVals;
  if ( !targetVals )
    sub_1C2E388(this, method);
  if ( targetVals->max_length != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v5->fields.targetVals2;
  if ( !targetVals2 || !*(_QWORD *)&targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v60 = targetVals->m_Items[1];
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v2, v3, v4);
  v23 = System_String__Format((System_String_o *)StringLiteral_11771/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v23, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.targetVals2;
  v25 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v25 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_0 = v25->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = RestrictionEntity___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__16_0 = (System_Func_int__int__o *)sub_1C2E378(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__16_0,
      v27,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__,
      0LL);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = System_Linq_Enumerable__OrderBy_int__int_(
          v24,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (const MethodInfo_2FFB298 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v36 = RestrictionEntity___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v36 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v36->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = RestrictionEntity___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__16_1,
      v39,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__,
      0LL);
    v40 = RestrictionEntity___c_TypeInfo->static_fields;
    v40->__9__16_1 = (struct System_Func_int__string__o *)_9__16_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v40->__9__16_1, (int64_t)_9__16_1, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v37,
                                                              (System_Func_TSource__TResult__o *)_9__16_1,
                                                              (const MethodInfo_30014BC *)Method_System_Linq_Enumerable_Select_int__string___);
  v48 = System_String__Join_63251240((System_String_o *)StringLiteral_16410/*"_"*/, v47, 0LL);
  v49 = System_String__Concat_63235584((System_String_o *)StringLiteral_10496/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v48, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v49, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v5->fields.rangeType;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType, v50, v51, v52);
  v54 = System_String__Format((System_String_o *)StringLiteral_10497/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v53, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v54, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v55 = LocalizationManager__Get(v54, 0LL);
  v56 = (Il2CppObject *)LocalizationManager__Get(v23, 0LL);
  v57 = (Il2CppObject *)LocalizationManager__Get(v49, 0LL);
  return System_String__Format_63249956(v55, v56, v57, 0LL);
}


int32_t __fastcall RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  __int64 v4; // x9

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  v4 = *(_QWORD *)&targetVals2->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
    sub_1C2E390(this, method);
  return targetVals2->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  __int64 v6; // x9
  struct System_Int32_array *v7; // x8
  __int64 v8; // x9

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals(this, v, method);
    case 2:
      return RestrictionEntity__IsSearchVals(this, v, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_13;
      v6 = *(_QWORD *)&targetVals->max_length;
      if ( !v6 )
        goto LABEL_13;
      if ( !(_DWORD)v6 )
        goto LABEL_15;
      v3 = targetVals->m_Items[1] > v;
      break;
    case 4:
      v7 = this->fields.targetVals;
      if ( v7 && (v8 = *(_QWORD *)&v7->max_length) != 0 )
      {
        if ( !(_DWORD)v8 )
LABEL_15:
          sub_1C2E390(this, *(_QWORD *)&v);
        v3 = v7->m_Items[1] < v;
      }
      else
      {
LABEL_13:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsRestrictionTarget(
        RestrictionEntity_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_4BFDDB9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&targetType);
    byte_4BFDDB9 = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_2FE9D88 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_40926128(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x9
  __int64 v6; // x10
  __int64 v7; // x8
  struct System_Int32_array *v8; // x9
  __int64 v9; // x10
  __int64 v10; // x8

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_40925804(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_40925804(this, vList, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v6 = *(_QWORD *)&targetVals->max_length;
      if ( !v6 )
        return v3;
      v7 = *(_QWORD *)&vList->max_length;
      if ( !v7 )
        goto LABEL_19;
      if ( !(_DWORD)v7 || !(_DWORD)v6 )
        goto LABEL_21;
      v3 = vList->m_Items[1] < targetVals->m_Items[1];
      break;
    case 4:
      v8 = this->fields.targetVals;
      if ( !v8 )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v9 = *(_QWORD *)&v8->max_length;
      if ( !v9 )
        return v3;
      v10 = *(_QWORD *)&vList->max_length;
      if ( v10 )
      {
        if ( !(_DWORD)v10 || !(_DWORD)v9 )
LABEL_21:
          sub_1C2E390(this, vList);
        v3 = vList->m_Items[1] > v8->m_Items[1];
      }
      else
      {
LABEL_19:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10
  int32_t v7; // w11

  targetVals = this->fields.targetVals;
  if ( targetVals && (max_length = targetVals->max_length, max_length >= 1) )
  {
    v5 = 0LL;
    v6 = &targetVals->m_Items[1];
    do
    {
      if ( (unsigned int)v5 >= max_length )
        sub_1C2E390(this, *(_QWORD *)&v);
      v7 = v6[v5++];
      this = (RestrictionEntity_o *)(v7 == v);
    }
    while ( (int)v5 < max_length && v7 != v );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool __fastcall RestrictionEntity__IsSearchVals_40925804(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  signed int max_length; // w13
  __int64 v9; // x15

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)*(_QWORD *)&targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        v6 = (unsigned int)*(_QWORD *)&targetVals->max_length;
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= v6 )
LABEL_16:
            sub_1C2E390(0LL, vList);
          max_length = vList->max_length;
          if ( max_length >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)v6 )
            return result;
        }
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            goto LABEL_16;
          if ( targetVals->m_Items[v7 + 1] == vList->m_Items[v9 + 1] )
            return 1;
          if ( (int)++v9 >= max_length )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}


System_Boolean_array *__fastcall RestrictionEntity__getDeckPositionList(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v8; // x19
  int max_length; // w22
  unsigned __int64 v10; // x23
  int v11; // w26
  il2cpp_array_size_t v12; // w25
  unsigned __int64 v13; // x23
  signed __int64 v14; // x22
  signed __int64 v15; // x20
  signed __int64 v16; // x22
  signed __int64 v17; // x20
  unsigned __int64 v18; // x23
  struct System_Int32_array *v19; // x8
  int v20; // w25
  il2cpp_array_size_t v21; // w24

  if ( (byte_4BFDDBB & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&bool___TypeInfo, v3);
    byte_4BFDDBB = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1C2E1D4(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v8 = (System_Boolean_array *)v5;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v8;
      if ( !targetVals )
        goto LABEL_67;
      v10 = 0LL;
      while ( v10 < targetVals->max_length )
      {
        v11 = targetVals->m_Items[v10 + 1];
        v12 = v11 - 1;
        if ( v11 >= 1 )
        {
          v5 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v5 = BalanceConfig_TypeInfo;
          }
          if ( v11 <= v5->static_fields->DeckMemberMax )
          {
            if ( !v8 )
              goto LABEL_67;
            if ( v12 >= v8->max_length )
              goto LABEL_68;
            v8->m_Items[v12 + 4] = 1;
          }
        }
        if ( max_length == ++v10 )
          return v8;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v5 = BalanceConfig_TypeInfo;
      v13 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v13 < v5->static_fields->DeckMemberMax )
        {
          if ( v8 )
          {
            if ( v13 < v8->max_length )
            {
              v8->m_Items[v13++ + 4] = 1;
              continue;
            }
LABEL_68:
            sub_1C2E390(v5, v6);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = this->fields.targetVals;
          if ( !v19 )
            break;
          if ( v18 >= v19->max_length )
            goto LABEL_68;
          v20 = v19->m_Items[v18 + 1];
          v21 = v20 - 1;
          if ( v20 >= 1 )
          {
            if ( !v5->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v5);
              v5 = BalanceConfig_TypeInfo;
            }
            if ( v20 <= v5->static_fields->DeckMemberMax )
            {
              if ( !v8 )
                break;
              if ( v21 >= v8->max_length )
                goto LABEL_68;
              v8->m_Items[v21 + 4] = 0;
            }
          }
          if ( max_length == ++v18 )
            return v8;
        }
LABEL_67:
        sub_1C2E388(v5, v6);
      }
      return v8;
    case 3:
      if ( max_length < 1 )
        return v8;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v14 = targetVals->m_Items[1];
      v5 = BalanceConfig_TypeInfo;
      v15 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( v15 >= v5->static_fields->DeckMemberMax )
          return v8;
        if ( v15 < v14 )
          goto LABEL_41;
        if ( !v8 )
          goto LABEL_67;
        if ( v15 < (unsigned __int64)v8->max_length )
        {
          v8->m_Items[v15 + 4] = 1;
LABEL_41:
          ++v15;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return v8;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v16 = targetVals->m_Items[1];
      v5 = BalanceConfig_TypeInfo;
      v17 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( v17 >= v5->static_fields->DeckMemberMax )
          return v8;
        if ( v17 >= v16 )
          goto LABEL_53;
        if ( !v8 )
          goto LABEL_67;
        if ( v17 < (unsigned __int64)v8->max_length )
        {
          v8->m_Items[v17 + 4] = 1;
LABEL_53:
          ++v17;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return v8;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 *v13; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v15; // x9
  int v16; // w21
  System_String_o *v17; // x0
  System_String_o *v19; // x0
  System_String_o *name; // x19
  System_String_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4BFDDBA & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_6577/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v4);
    sub_1C2E12C(&StringLiteral_6578/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, v5);
    sub_1C2E12C(&StringLiteral_6579/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/, v6);
    sub_1C2E12C(&StringLiteral_6581/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v7);
    sub_1C2E12C(&StringLiteral_6575/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/, v8);
    sub_1C2E12C(&StringLiteral_6574/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/, v9);
    sub_1C2E12C(&StringLiteral_6582/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v10);
    sub_1C2E12C(&StringLiteral_6580/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v11);
    this = (RestrictionEntity_o *)sub_1C2E12C(&StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/, v12);
    byte_4BFDDBA = 1;
  }
  switch ( v2->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6579/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6581/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6576/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6574/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6575/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v2->fields.targetVals;
      if ( targetVals && (v15 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v15 )
          sub_1C2E390(this, method);
        v16 = targetVals->m_Items[1];
      }
      else
      {
        v16 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6578/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v2->fields.name;
      v21 = v19;
      v27 = v16;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
      v26 = (Il2CppObject *)System_String__Format(name, v25, 0LL);
      return System_String__Format(v21, v26, 0LL);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6577/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6582/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_6580/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v17 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
      return System_String__Format(v17, (Il2CppObject *)v2->fields.name, 0LL);
  }
}


int32_t __fastcall RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  __int64 v3; // x9

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  v3 = *(_QWORD *)&targetVals->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C2E390(this, method);
  return targetVals->m_Items[1];
}


void __fastcall RestrictionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDDBE & 1) == 0 )
  {
    sub_1C2E12C(&RestrictionEntity___c_TypeInfo, v1);
    byte_4BFDDBE = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)RestrictionEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall RestrictionEntity___c___ctor(RestrictionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__16_0(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  return t;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__16_1(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4BFDDBF & 1) == 0 )
  {
    sub_1C2E12C(&Restriction_TargetType_TypeInfo, *(_QWORD *)&t);
    byte_4BFDDBF = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0LL);
}