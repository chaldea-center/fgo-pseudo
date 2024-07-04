void __fastcall WarBoardActionPointEntity___ctor(WarBoardActionPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E36B0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E36B0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardActionPointEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_48E36AF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&forceId);
    byte_48E36AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_2D612C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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