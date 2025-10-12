void RestrictionWholeEntity___ctor(RestrictionWholeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C381BF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C381BF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionWholeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C381BE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C381BE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v4; // x20
  unsigned __int64 i; // x24
  BalanceConfig_c *v6; // x0
  _BOOL8 v7; // x0
  unsigned __int64 v8; // x9
  char v9; // w9

  if ( (byte_4C381BD & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C381BD = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = sub_1C32CC8(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v6->static_fields->DeckMemberMax )
      break;
    v7 = System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2,
           i + 1,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( !v4 )
      sub_1C32E7C(v7);
    v8 = *(unsigned int *)(v4 + 24);
    if ( v7 )
    {
      if ( i >= v8 )
        goto LABEL_18;
      v9 = 1;
    }
    else
    {
      if ( i >= v8 )
LABEL_18:
        sub_1C32E84(v7);
      v9 = 0;
    }
    *(_BYTE *)(v4 + 32 + i) = v9;
  }
  return (System_Boolean_array *)v4;
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
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 v7; // x9
  int v8; // w13
  __int64 v9; // x15

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        max_length = (unsigned int)targetVals->max_length;
        v7 = 0;
        while ( 1 )
        {
          if ( v7 >= max_length )
LABEL_16:
            sub_1C32E84(0);
          v8 = vList->max_length;
          if ( v8 >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)max_length )
            return result;
        }
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_16;
          if ( targetVals->m_Items[v7] == vList->m_Items[v9] )
            return 1;
          if ( (int)++v9 >= v8 )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}