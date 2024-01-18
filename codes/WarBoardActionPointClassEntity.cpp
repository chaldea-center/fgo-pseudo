void __fastcall WarBoardActionPointClassEntity___ctor(WarBoardActionPointClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41867A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41867A0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePK(
        int32_t id,
        int32_t classid,
        const MethodInfo *method)
{
  if ( (byte_418679F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&classid);
    byte_418679F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           classid,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePrimaryKey(
        WarBoardActionPointClassEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardActionPointClassEntity__CreatePK(this->fields.id, this->fields.classId, v2);
}