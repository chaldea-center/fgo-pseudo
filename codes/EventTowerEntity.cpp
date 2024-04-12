void __fastcall EventTowerEntity___ctor(EventTowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF859 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AF859 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTowerEntity__CreatePK(int32_t eventId, int32_t towerId, const MethodInfo *method)
{
  if ( (byte_42AF858 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42AF858 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           towerId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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