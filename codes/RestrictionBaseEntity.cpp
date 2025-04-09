void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB4F4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB4F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_49BB4F3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_49BB4F3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall RestrictionBaseEntity__CreatePrimaryKey(
        RestrictionBaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionBaseEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


bool __fastcall RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
        RestrictionBaseEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *IntArray; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_49BB4F2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22113/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1B4CF90(&StringLiteral_22114/*"overwriteLimitCounts"*/, v9);
    sub_1B4CF90(&StringLiteral_22112/*"overwriteLimitCountIconIds"*/, v10);
    byte_49BB4F2 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22113/*"overwriteLimitCountSvtIds"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)IntArray, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22114/*"overwriteLimitCounts"*/, 0LL, 0LL);
    *overwriteLimitCounts = v16;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v19 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22112/*"overwriteLimitCountIconIds"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v19;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v19, v20, v21);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v14, v15);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v23, v24);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB4F1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24065/*"useEventDeckNo"*/, method);
    byte_49BB4F1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24065/*"useEventDeckNo"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}