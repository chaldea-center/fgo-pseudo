void __fastcall RestrictionWholeEntity___ctor(RestrictionWholeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418BB7B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418BB7B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionWholeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_418BB7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418BB7A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall RestrictionWholeEntity__CreatePrimaryKey(
        RestrictionWholeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionWholeEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Boolean_array *__fastcall RestrictionWholeEntity__GetSetPossiblePosition(
        RestrictionWholeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  System_Boolean_array *v6; // x20
  unsigned __int64 i; // x23
  _BOOL8 v8; // x0
  __int64 v9; // x1
  unsigned __int64 max_length; // x9
  char v11; // w9
  BalanceConfig_c *v12; // x0
  __int64 v14; // x0

  if ( (byte_418BB79 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&bool___TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v4);
    byte_418BB79 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax);
  for ( i = 0LL; ; ++i )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v12->static_fields->DeckMemberMax )
      break;
    v8 = System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2,
           i + 1,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( !v6 )
      sub_B2C434(v8, v9);
    max_length = v6->max_length;
    if ( v8 )
    {
      if ( i >= max_length )
        goto LABEL_20;
      v11 = 1;
    }
    else
    {
      if ( i >= max_length )
      {
LABEL_20:
        v14 = sub_B2C460(v8);
        sub_B2C400(v14, 0LL);
      }
      v11 = 0;
    }
    v6->m_Items[i + 4] = v11;
  }
  return v6;
}


bool __fastcall RestrictionWholeEntity__IsIndividuality(
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


bool __fastcall RestrictionWholeEntity__IsSearchVals(
        RestrictionWholeEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  signed int max_length; // w13
  __int64 v9; // x15
  __int64 v10; // x0

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
          {
LABEL_16:
            v10 = sub_B2C460(0LL);
            sub_B2C400(v10, 0LL);
          }
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