void __fastcall EventTowerEntity___ctor(EventTowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9BB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F9BB0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTowerEntity__CreatePK(int32_t eventId, int32_t towerId, const MethodInfo *method)
{
  if ( (byte_40F9BAF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&towerId);
    byte_40F9BAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           towerId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventTowerEntity__CreatePrimaryKey(EventTowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTowerEntity__CreatePK(this->fields.eventId, this->fields.towerId, v2);
}


bool __fastcall EventTowerEntity__HasFlag(EventTowerEntity_o *this, int32_t towerFlag, const MethodInfo *method)
{
  return (this->fields.flag & towerFlag) != 0;
}