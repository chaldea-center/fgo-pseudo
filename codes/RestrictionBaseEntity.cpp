void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B757 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B757 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4A5B756 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B756 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B755 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22393/*"overwriteLimitCountSvtIds"*/);
    sub_1B885B0(&StringLiteral_22394/*"overwriteLimitCounts"*/);
    sub_1B885B0(&StringLiteral_22392/*"overwriteLimitCountIconIds"*/);
    byte_4A5B755 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22393/*"overwriteLimitCountSvtIds"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)IntArray, v10, v11);
  if ( *overwriteLimitCountSvtIds )
  {
    v14 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22394/*"overwriteLimitCounts"*/, 0LL, 0LL);
    *overwriteLimitCounts = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v14, v15, v16);
    v17 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22392/*"overwriteLimitCountIconIds"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v17, v18, v19);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v12, v13);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v21, v22);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B754 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24356/*"useEventDeckNo"*/);
    byte_4A5B754 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24356/*"useEventDeckNo"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}