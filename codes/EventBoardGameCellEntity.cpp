void EventBoardGameCellEntity___ctor(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6F3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C6F3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBoardGameCellEntity__CreatePK(int32_t eventId, int32_t cellId, const MethodInfo *method)
{
  if ( (byte_4D2C6F2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C6F2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           cellId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventBoardGameCellEntity__CreatePrimaryKey(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameCellEntity__CreatePK(this->fields.eventId, this->fields.cellId, v2);
}


int32_t EventBoardGameCellEntity__GetCellType(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  return this->fields.cellType;
}