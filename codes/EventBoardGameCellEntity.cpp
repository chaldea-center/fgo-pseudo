void __fastcall EventBoardGameCellEntity___ctor(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5BF9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5BF9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBoardGameCellEntity__CreatePK(
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  if ( (byte_4AB5BF8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cellId);
    byte_4AB5BF8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           cellId,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBoardGameCellEntity__CreatePrimaryKey(
        EventBoardGameCellEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameCellEntity__CreatePK(this->fields.eventId, this->fields.cellId, v2);
}


int32_t __fastcall EventBoardGameCellEntity__GetCellType(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  return this->fields.cellType;
}