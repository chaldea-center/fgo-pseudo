void __fastcall WarBoardActionPointEntity___ctor(WarBoardActionPointEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1716A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1716A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardActionPointEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4B17169 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    byte_4B17169 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardActionPointEntity__CreatePrimaryKey(
        WarBoardActionPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardActionPointEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


bool __fastcall WarBoardActionPointEntity__get_HasCost(WarBoardActionPointEntity_o *this, const MethodInfo *method)
{
  return this->fields.attackCost > 0 || this->fields.moveCost > 0;
}