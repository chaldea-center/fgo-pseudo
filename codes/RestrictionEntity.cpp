void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B75C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B75C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  RestrictionEntity___c_c *v11; // x0
  System_Func_int__int__o *_9__16_0; // x22
  Il2CppObject *v13; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  RestrictionEntity___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_T__TResult__o *_9__16_1; // x22
  Il2CppObject *v21; // x23
  struct RestrictionEntity___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_string__o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x19
  System_String_o *v33; // x19
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4A5B75B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_int__string__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Restriction_RangeType_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__);
    sub_1B885B0(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__);
    sub_1B885B0(&RestrictionEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_10299/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/);
    sub_1B885B0(&StringLiteral_10300/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/);
    this = (RestrictionEntity_o *)sub_1B885B0(&StringLiteral_11559/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/);
    byte_4A5B75B = 1;
  }
  targetVals = v5->fields.targetVals;
  if ( !targetVals )
    sub_1B8880C(this, method);
  if ( targetVals->max_length != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v5->fields.targetVals2;
  if ( !targetVals2 || !*(_QWORD *)&targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v38 = targetVals->m_Items[1];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_11559/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v9, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.targetVals2;
  v11 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v11 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_0 = v11->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RestrictionEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__16_0 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__16_0,
      v13,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_0__,
      0LL);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderBy_int__int_(
          v10,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (const MethodInfo_2EA9C10 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v18 = RestrictionEntity___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v18 = RestrictionEntity___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v18->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RestrictionEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__16_1,
      v21,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__16_1__,
      0LL);
    v22 = RestrictionEntity___c_TypeInfo->static_fields;
    v22->__9__16_1 = (struct System_Func_int__string__o *)_9__16_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__16_1, (int32_t)_9__16_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v19,
                                                              (System_Func_TSource__TResult__o *)_9__16_1,
                                                              (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__string___);
  v26 = System_String__Join_61722688((System_String_o *)StringLiteral_16123/*"_"*/, v25, 0LL);
  v27 = System_String__Concat_61707032((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v26, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v27, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v5->fields.rangeType;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType, v28, v29, v30);
  v32 = System_String__Format((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v31, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v32, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get(v32, 0LL);
  v34 = (Il2CppObject *)LocalizationManager__Get(v9, 0LL);
  v35 = (Il2CppObject *)LocalizationManager__Get(v27, 0LL);
  return System_String__Format_61721404(v33, v34, v35, 0LL);
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
    sub_1B88814(this, method);
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
          sub_1B88814(this, v);
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


bool __fastcall RestrictionEntity__IsRestrictionTarget(
        RestrictionEntity_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_4A5B758 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5B758 = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_39577408(
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
      return !RestrictionEntity__IsSearchVals_39577084(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_39577084(this, vList, method);
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
          sub_1B88814(this, vList);
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
        sub_1B88814(this, v);
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


bool __fastcall RestrictionEntity__IsSearchVals_39577084(
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
            sub_1B88814(0LL, vList);
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
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v7; // x19
  int max_length; // w22
  unsigned __int64 v9; // x23
  int v10; // w26
  il2cpp_array_size_t v11; // w25
  unsigned __int64 v12; // x23
  signed __int64 v13; // x22
  signed __int64 v14; // x20
  signed __int64 v15; // x22
  signed __int64 v16; // x20
  unsigned __int64 v17; // x23
  struct System_Int32_array *v18; // x8
  int v19; // w25
  il2cpp_array_size_t v20; // w24

  if ( (byte_4A5B75A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    byte_4A5B75A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v7 = (System_Boolean_array *)v4;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_67;
      v9 = 0LL;
      while ( v9 < targetVals->max_length )
      {
        v10 = targetVals->m_Items[v9 + 1];
        v11 = v10 - 1;
        if ( v10 >= 1 )
        {
          v4 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v10 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v7 )
              goto LABEL_67;
            if ( v11 >= v7->max_length )
              goto LABEL_68;
            v7->m_Items[v11 + 4] = 1;
          }
        }
        if ( max_length == ++v9 )
          return v7;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v4 = BalanceConfig_TypeInfo;
      v12 = 0LL;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v12 < v4->static_fields->DeckMemberMax )
        {
          if ( v7 )
          {
            if ( v12 < v7->max_length )
            {
              v7->m_Items[v12++ + 4] = 1;
              continue;
            }
LABEL_68:
            sub_1B88814(v4, v5);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v18 = this->fields.targetVals;
          if ( !v18 )
            break;
          if ( v17 >= v18->max_length )
            goto LABEL_68;
          v19 = v18->m_Items[v17 + 1];
          v20 = v19 - 1;
          if ( v19 >= 1 )
          {
            if ( !v4->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v4);
              v4 = BalanceConfig_TypeInfo;
            }
            if ( v19 <= v4->static_fields->DeckMemberMax )
            {
              if ( !v7 )
                break;
              if ( v20 >= v7->max_length )
                goto LABEL_68;
              v7->m_Items[v20 + 4] = 0;
            }
          }
          if ( max_length == ++v17 )
            return v7;
        }
LABEL_67:
        sub_1B8880C(v4, v5);
      }
      return v7;
    case 3:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v13 = targetVals->m_Items[1];
      v4 = BalanceConfig_TypeInfo;
      v14 = 0LL;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v14 >= v4->static_fields->DeckMemberMax )
          return v7;
        if ( v14 < v13 )
          goto LABEL_41;
        if ( !v7 )
          goto LABEL_67;
        if ( v14 < (unsigned __int64)v7->max_length )
        {
          v7->m_Items[v14 + 4] = 1;
LABEL_41:
          ++v14;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v15 = targetVals->m_Items[1];
      v4 = BalanceConfig_TypeInfo;
      v16 = 0LL;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v16 >= v4->static_fields->DeckMemberMax )
          return v7;
        if ( v16 >= v15 )
          goto LABEL_53;
        if ( !v7 )
          goto LABEL_67;
        if ( v16 < (unsigned __int64)v7->max_length )
        {
          v7->m_Items[v16 + 4] = 1;
LABEL_53:
          ++v16;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return v7;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *v2; // x19
  __int64 *v3; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v5; // x9
  int v6; // w21
  System_String_o *v7; // x0
  System_String_o *v9; // x0
  System_String_o *name; // x19
  System_String_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4A5B759 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6419/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1B885B0(&StringLiteral_6420/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1B885B0(&StringLiteral_6421/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/);
    sub_1B885B0(&StringLiteral_6423/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/);
    sub_1B885B0(&StringLiteral_6417/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/);
    sub_1B885B0(&StringLiteral_6416/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/);
    sub_1B885B0(&StringLiteral_6424/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1B885B0(&StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    this = (RestrictionEntity_o *)sub_1B885B0(&StringLiteral_6418/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/);
    byte_4A5B759 = 1;
  }
  switch ( v2->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6421/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6423/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6418/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6416/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6417/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v2->fields.targetVals;
      if ( targetVals && (v5 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v5 )
          sub_1B88814(this, method);
        v6 = targetVals->m_Items[1];
      }
      else
      {
        v6 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6420/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v2->fields.name;
      v11 = v9;
      v17 = v6;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v12, v13, v14);
      v16 = (Il2CppObject *)System_String__Format(name, v15, 0LL);
      return System_String__Format(v11, v16, 0LL);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6419/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6424/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v7 = LocalizationManager__Get((System_String_o *)*v3, 0LL);
      return System_String__Format(v7, (Il2CppObject *)v2->fields.name, 0LL);
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
    sub_1B88814(this, method);
  return targetVals->m_Items[1];
}


void __fastcall RestrictionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B75D & 1) == 0 )
  {
    sub_1B885B0(&RestrictionEntity___c_TypeInfo);
    byte_4A5B75D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)RestrictionEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


System_String_o *__fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__16_1(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4A5B75E & 1) == 0 )
  {
    sub_1B885B0(&Restriction_TargetType_TypeInfo);
    byte_4A5B75E = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0LL);
}