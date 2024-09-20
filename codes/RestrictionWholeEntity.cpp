void __fastcall RestrictionWholeEntity___ctor(RestrictionWholeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B76E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B76E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall RestrictionWholeEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5B76D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B76D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  BalanceConfig_c *v3; // x0
  System_Boolean_array *v4; // x20
  unsigned __int64 i; // x24
  BalanceConfig_c *v6; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  unsigned __int64 max_length; // x9
  char v10; // w9

  if ( (byte_4A5B76C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5B76C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  for ( i = 0LL; ; ++i )
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
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( !v4 )
      sub_1B8880C(v7, v8);
    max_length = v4->max_length;
    if ( v7 )
    {
      if ( i >= max_length )
        goto LABEL_18;
      v10 = 1;
    }
    else
    {
      if ( i >= max_length )
LABEL_18:
        sub_1B88814(v7, v8);
      v10 = 0;
    }
    v4->m_Items[i + 4] = v10;
  }
  return v4;
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