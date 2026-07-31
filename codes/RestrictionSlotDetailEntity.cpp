void RestrictionSlotDetailEntity___ctor(RestrictionSlotDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionSlotDetailEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938EE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938EE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RestrictionSlotDetailEntity__CreatePrimaryKey(
        RestrictionSlotDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionSlotDetailEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


bool RestrictionSlotDetailEntity__IsIndividuality(
        RestrictionSlotDetailEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  int32_t rangeType; // w8

  rangeType = this->fields.rangeType;
  if ( rangeType == 2 )
  {
    return !RestrictionSlotDetailEntity__IsSearchVals(this, individualities, method);
  }
  else
  {
    if ( rangeType == 1 )
      return RestrictionSlotDetailEntity__IsSearchVals(this, individualities, method);
    return 0;
  }
}


bool RestrictionSlotDetailEntity__IsSearchVals(
        RestrictionSlotDetailEntity_o *this,
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