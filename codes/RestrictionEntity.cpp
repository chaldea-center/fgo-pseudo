void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1680D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1680D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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
  RestrictionEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  RestrictionEntity___c_c *v41; // x0
  System_Func_int__int__o *_9__16_0; // x22
  Il2CppObject *v43; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  RestrictionEntity___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_T__TResult__o *_9__16_1; // x22
  Il2CppObject *v58; // x23
  struct RestrictionEntity___c_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_IEnumerable_string__o *v66; // x0
  System_String_o *v67; // x0
  __int64 v68; // x1
  System_String_o *v69; // x21
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  System_String_o *v72; // x19
  __int64 v73; // x1
  System_String_o *v74; // x19
  Il2CppObject *v75; // x20
  Il2CppObject *v76; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4B1680C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_int__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__string___, v4, v5);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_int__string__TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Restriction_RangeType_TypeInfo, v14, v15);
    sub_1BCA7E0(&string_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__, v18, v19);
    sub_1BCA7E0(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__, v20, v21);
    sub_1BCA7E0(&RestrictionEntity___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_10432/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_10433/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v28, v29);
    this = (RestrictionEntity_o *)sub_1BCA7E0(&StringLiteral_11697/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v30, v31);
    byte_4B1680C = 1;
  }
  targetVals = v3->fields.targetVals;
  if ( !targetVals )
    sub_1BCAA3C(this, method);
  if ( targetVals->max_length != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v3->fields.targetVals2;
  if ( !targetVals2 || !*(_QWORD *)&targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v79 = targetVals->m_Items[1];
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  v36 = System_String__Format((System_String_o *)StringLiteral_11697/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v34, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
  if ( !LocalizationManager__ContainsKey(v36, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.targetVals2;
  v41 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo, v37);
    v41 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_0 = v41->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v37);
      v41 = RestrictionEntity___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__16_0 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v37, v38, v39);
    System_Func_int__int____ctor(
      _9__16_0,
      v43,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__,
      0LL);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = System_Linq_Enumerable__OrderBy_int__int_(
          v40,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (const MethodInfo_2F3B178 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v55 = RestrictionEntity___c_TypeInfo;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v51;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo, v52);
    v55 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v55->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55, v52);
      v55 = RestrictionEntity___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__string__TypeInfo, v52, v53, v54);
    System_Func_int__object____ctor(
      _9__16_1,
      v58,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__,
      0LL);
    v59 = RestrictionEntity___c_TypeInfo->static_fields;
    v59->__9__16_1 = (struct System_Func_int__string__o *)_9__16_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v59->__9__16_1, (int64_t)_9__16_1, v60, v61, v62, v63, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v56,
                                                              (System_Func_TSource__TResult__o *)_9__16_1,
                                                              (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__string___);
  v67 = System_String__Join_62416876((System_String_o *)StringLiteral_16290/*"_"*/, v66, 0LL);
  v69 = System_String__Concat_62401220((System_String_o *)StringLiteral_10432/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v67, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
  if ( !LocalizationManager__ContainsKey(v69, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v3->fields.rangeType;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType);
  v72 = System_String__Format((System_String_o *)StringLiteral_10433/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v70, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
  if ( !LocalizationManager__ContainsKey(v72, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
  v74 = LocalizationManager__Get(v72, 0LL);
  v75 = (Il2CppObject *)LocalizationManager__Get(v36, 0LL);
  v76 = (Il2CppObject *)LocalizationManager__Get(v69, 0LL);
  return System_String__Format_62415592(v74, v75, v76, 0LL);
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
    sub_1BCAA44(this, method);
  return targetVals2->m_Items[1];
}


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
          sub_1BCAA44(this, v);
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

  if ( (byte_4B16809 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&targetType, method);
    byte_4B16809 = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_40304868(
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
      return !RestrictionEntity__IsSearchVals_40304544(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_40304544(this, vList, method);
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
          sub_1BCAA44(this, vList);
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
        sub_1BCAA44(this, v);
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


bool __fastcall RestrictionEntity__IsSearchVals_40304544(
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
            sub_1BCAA44(0LL, vList);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v10; // x19
  int max_length; // w22
  unsigned __int64 v12; // x23
  int v13; // w26
  il2cpp_array_size_t v14; // w25
  unsigned __int64 v15; // x23
  signed __int64 v16; // x22
  signed __int64 v17; // x20
  signed __int64 v18; // x22
  signed __int64 v19; // x20
  unsigned __int64 v20; // x23
  struct System_Int32_array *v21; // x8
  int v22; // w25
  il2cpp_array_size_t v23; // w24

  if ( (byte_4B1680B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&bool___TypeInfo, v4, v5);
    byte_4B1680B = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_1BCA888(bool___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v10 = (System_Boolean_array *)v7;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_67;
      v12 = 0LL;
      while ( v12 < targetVals->max_length )
      {
        v13 = targetVals->m_Items[v12 + 1];
        v14 = v13 - 1;
        if ( v13 >= 1 )
        {
          v7 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
            v7 = BalanceConfig_TypeInfo;
          }
          if ( v13 <= v7->static_fields->DeckMemberMax )
          {
            if ( !v10 )
              goto LABEL_67;
            if ( v14 >= v10->max_length )
              goto LABEL_68;
            v10->m_Items[v14 + 4] = 1;
          }
        }
        if ( max_length == ++v12 )
          return v10;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v7 = BalanceConfig_TypeInfo;
      v15 = 0LL;
      while ( 2 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7, v8);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v15 < v7->static_fields->DeckMemberMax )
        {
          if ( v10 )
          {
            if ( v15 < v10->max_length )
            {
              v10->m_Items[v15++ + 4] = 1;
              continue;
            }
LABEL_68:
            sub_1BCAA44(v7, v8);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          v21 = this->fields.targetVals;
          if ( !v21 )
            break;
          if ( v20 >= v21->max_length )
            goto LABEL_68;
          v22 = v21->m_Items[v20 + 1];
          v23 = v22 - 1;
          if ( v22 >= 1 )
          {
            if ( !v7->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v7, v8);
              v7 = BalanceConfig_TypeInfo;
            }
            if ( v22 <= v7->static_fields->DeckMemberMax )
            {
              if ( !v10 )
                break;
              if ( v23 >= v10->max_length )
                goto LABEL_68;
              v10->m_Items[v23 + 4] = 0;
            }
          }
          if ( max_length == ++v20 )
            return v10;
        }
LABEL_67:
        sub_1BCAA3C(v7, v8);
      }
      return v10;
    case 3:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v16 = targetVals->m_Items[1];
      v7 = BalanceConfig_TypeInfo;
      v17 = 0LL;
      while ( 2 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7, v8);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( v17 >= v7->static_fields->DeckMemberMax )
          return v10;
        if ( v17 < v16 )
          goto LABEL_41;
        if ( !v10 )
          goto LABEL_67;
        if ( v17 < (unsigned __int64)v10->max_length )
        {
          v10->m_Items[v17 + 4] = 1;
LABEL_41:
          ++v17;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v18 = targetVals->m_Items[1];
      v7 = BalanceConfig_TypeInfo;
      v19 = 0LL;
      while ( 2 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7, v8);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( v19 >= v7->static_fields->DeckMemberMax )
          return v10;
        if ( v19 >= v18 )
          goto LABEL_53;
        if ( !v10 )
          goto LABEL_67;
        if ( v19 < (unsigned __int64)v10->max_length )
        {
          v10->m_Items[v19 + 4] = 1;
LABEL_53:
          ++v19;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return v10;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RestrictionEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 *v24; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v26; // x9
  int v27; // w21
  System_String_o *v28; // x0
  System_String_o *v30; // x0
  System_String_o *name; // x19
  System_String_o *v32; // x20
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B1680A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6538/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6539/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6540/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6542/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6536/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6535/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6543/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v20, v21);
    this = (RestrictionEntity_o *)sub_1BCA7E0(&StringLiteral_6537/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/, v22, v23);
    byte_4B1680A = 1;
  }
  switch ( v3->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6540/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6542/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6537/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6535/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6536/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v3->fields.targetVals;
      if ( targetVals && (v26 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v26 )
          sub_1BCAA44(this, method);
        v27 = targetVals->m_Items[1];
      }
      else
      {
        v27 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6539/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v3->fields.name;
      v32 = v30;
      v35 = v27;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v34 = (Il2CppObject *)System_String__Format(name, v33, 0LL);
      return System_String__Format(v32, v34, 0LL);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6538/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6543/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v24 = &StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v28 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
      return System_String__Format(v28, (Il2CppObject *)v3->fields.name, 0LL);
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
    sub_1BCAA44(this, method);
  return targetVals->m_Items[1];
}


void __fastcall RestrictionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1680E & 1) == 0 )
  {
    sub_1BCA7E0(&RestrictionEntity___c_TypeInfo, v1, v2);
    byte_4B1680E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RestrictionEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RestrictionEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B1680F & 1) == 0 )
  {
    sub_1BCA7E0(&Restriction_TargetType_TypeInfo, *(_QWORD *)&t, method);
    byte_4B1680F = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0LL);
}