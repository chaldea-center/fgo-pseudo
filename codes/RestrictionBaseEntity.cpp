void RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597109A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597109A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionBaseEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_5971099 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5971099 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Int32_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Int32_array *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5971098 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23705/*"overwriteLimitCountSvtIds"*/);
    sub_2213A60(&StringLiteral_23706/*"overwriteLimitCounts"*/);
    sub_2213A60(&StringLiteral_23703/*"overwriteLimitCountIconIds"*/);
    byte_5971098 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23705/*"overwriteLimitCountSvtIds"*/, 0, 0);
  *overwriteLimitCountSvtIds = IntArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)overwriteLimitCountSvtIds,
    (int32_t)IntArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23706/*"overwriteLimitCounts"*/, 0, 0);
    *overwriteLimitCounts = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCounts, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23703/*"overwriteLimitCountIconIds"*/, 0, 0);
    *overwriteLimitCountIconIds = v29;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCounts, 0, v16, v17, v18, v19, v20, v21);
    *overwriteLimitCountIconIds = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds, 0, v37, v38, v39, v40, v41, v42);
    return 0;
  }
}


int32_t RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971097 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25827/*"useEventDeckNo"*/);
    byte_5971097 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25827/*"useEventDeckNo"*/, 1, 0);
}


bool RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}