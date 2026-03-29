void RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D311DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D311DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionBaseEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4D311DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D311DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D311DB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22839/*"overwriteLimitCountSvtIds"*/);
    sub_1C93AD4(&StringLiteral_22840/*"overwriteLimitCounts"*/);
    sub_1C93AD4(&StringLiteral_22837/*"overwriteLimitCountIconIds"*/);
    byte_4D311DB = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22839/*"overwriteLimitCountSvtIds"*/, 0, 0);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)overwriteLimitCountSvtIds, (int32_t)IntArray, v10, v11, v12, v13, v14, v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22840/*"overwriteLimitCounts"*/, 0, 0);
    *overwriteLimitCounts = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22837/*"overwriteLimitCountIconIds"*/, 0, 0);
    *overwriteLimitCountIconIds = v29;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, (int32_t)v29, v30, v31, v32, v33, v34, v35);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, 0, v16, v17, v18, v19, v20, v21);
    *overwriteLimitCountIconIds = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, 0, v37, v38, v39, v40, v41, v42);
    return 0;
  }
}


int32_t RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D311DA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24792/*"useEventDeckNo"*/);
    byte_4D311DA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24792/*"useEventDeckNo"*/, 1, 0);
}


bool RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}