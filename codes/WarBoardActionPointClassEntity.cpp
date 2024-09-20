void __fastcall WarBoardActionPointClassEntity___ctor(WarBoardActionPointClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0AC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C0AC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePK(
        int32_t id,
        int32_t classid,
        const MethodInfo *method)
{
  if ( (byte_4A5C0AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C0AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           classid,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePrimaryKey(
        WarBoardActionPointClassEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardActionPointClassEntity__CreatePK(this->fields.id, this->fields.classId, v2);
}