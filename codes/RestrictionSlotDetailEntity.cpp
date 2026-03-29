void RestrictionSlotDetailEntity___ctor(RestrictionSlotDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D311EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D311EA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionSlotDetailEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D311E9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D311E9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
            sub_1C93D34(0);
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