void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B28A9 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B28A9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42B28A8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B28A8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Int32_array *IntArray; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42B28A7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21539/*"overwriteLimitCountSvtIds"*/);
    sub_B52984(&StringLiteral_21540/*"overwriteLimitCounts"*/);
    sub_B52984(&StringLiteral_21538/*"overwriteLimitCountIconIds"*/);
    byte_42B28A7 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21539/*"overwriteLimitCountSvtIds"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_B52920(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)IntArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21540/*"overwriteLimitCounts"*/, 0LL, 0LL);
    *overwriteLimitCounts = v22;
    sub_B52920(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21538/*"overwriteLimitCountIconIds"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v29;
    sub_B52920(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B52920((BattleServantConfConponent_o *)overwriteLimitCounts, 0LL, v16, v17, v18, v19, v20, v21);
    *overwriteLimitCountIconIds = 0LL;
    sub_B52920((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v37, v38, v39, v40, v41, v42);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B28A6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23170/*"useEventDeckNo"*/);
    byte_42B28A6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23170/*"useEventDeckNo"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}