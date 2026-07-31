void RestrictionWholeEntity___ctor(RestrictionWholeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EF6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionWholeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938EF5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938EF5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RestrictionWholeEntity__CreatePrimaryKey(RestrictionWholeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionWholeEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Boolean_array *RestrictionWholeEntity__GetSetPossiblePosition(
        RestrictionWholeEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 i; // x23
  BalanceConfig_c *v7; // x0
  unsigned __int64 v8; // x24
  _BOOL8 v9; // x0
  char v10; // w8

  if ( (byte_5938EF4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5938EF4 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_21FFD10(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  for ( i = 32; ; ++i )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = i - 32;
    if ( i - 32 >= v7->static_fields->DeckMemberMax )
      break;
    v9 = System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2,
           i - 31,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( v9 )
    {
      if ( !v5 )
        goto LABEL_18;
      if ( v8 >= *(unsigned int *)(v5 + 24) )
        goto LABEL_19;
      v10 = 1;
    }
    else
    {
      if ( !v5 )
LABEL_18:
        sub_21FFECC(v9, v4);
      if ( v8 >= *(unsigned int *)(v5 + 24) )
LABEL_19:
        sub_21FFED4(v9);
      v10 = 0;
    }
    *(_BYTE *)(v5 + i) = v10;
  }
  return (System_Boolean_array *)v5;
}


bool RestrictionWholeEntity__IsIndividuality(
        RestrictionWholeEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  int32_t rangeType; // w8

  rangeType = this->fields.rangeType;
  if ( rangeType == 2 )
  {
    return !RestrictionWholeEntity__IsSearchVals(this, individualities, method);
  }
  else
  {
    if ( rangeType == 1 )
      return RestrictionWholeEntity__IsSearchVals(this, individualities, method);
    return 0;
  }
}


bool RestrictionWholeEntity__IsSearchVals(
        RestrictionWholeEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  bool result; // w0
  __int64 v5; // x9
  int max_length; // w14
  int32_t *m_Items; // x15
  int v8; // t1

  targetVals = this->fields.targetVals;
  result = 0;
  if ( targetVals && vList )
  {
    if ( (int)targetVals->max_length < 1 )
    {
      return 0;
    }
    else
    {
      v5 = 0;
      while ( SLODWORD(vList->max_length) < 1 )
      {
LABEL_9:
        ++v5;
        result = 0;
        if ( v5 == (unsigned int)targetVals->max_length )
          return result;
      }
      max_length = vList->max_length;
      m_Items = vList->m_Items;
      while ( 1 )
      {
        v8 = *m_Items++;
        if ( targetVals->m_Items[v5] == v8 )
          return 1;
        if ( !--max_length )
          goto LABEL_9;
      }
    }
  }
  return result;
}