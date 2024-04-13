void __fastcall EventTowerEntity___ctor(EventTowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8470 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8470 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTowerEntity__CreatePK(int32_t eventId, int32_t towerId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E846F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, towerId, (_DWORD)method, v3);
    byte_42E846F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           towerId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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