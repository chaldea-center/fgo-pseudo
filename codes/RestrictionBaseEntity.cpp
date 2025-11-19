void RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6ABC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6ABC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionBaseEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4CB6ABB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB6ABB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RestrictionBaseEntity__CreatePrimaryKey(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionBaseEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


bool RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
        RestrictionBaseEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4CB6ABA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22650/*"overwriteLimitCountSvtIds"*/);
    sub_1C6BA08(&StringLiteral_22651/*"overwriteLimitCounts"*/);
    sub_1C6BA08(&StringLiteral_22648/*"overwriteLimitCountIconIds"*/);
    byte_4CB6ABA = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22650/*"overwriteLimitCountSvtIds"*/, 0, 0);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)IntArray, v10, v11);
  if ( *overwriteLimitCountSvtIds )
  {
    v14 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22651/*"overwriteLimitCounts"*/, 0, 0);
    *overwriteLimitCounts = v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v14, v15, v16);
    v17 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22648/*"overwriteLimitCountIconIds"*/, 0, 0);
    *overwriteLimitCountIconIds = v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v17, v18, v19);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v12, v13);
    *overwriteLimitCountIconIds = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v21, v22);
    return 0;
  }
}


int32_t RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6AB9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24582/*"useEventDeckNo"*/);
    byte_4CB6AB9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24582/*"useEventDeckNo"*/, 1, 0);
}


bool RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}