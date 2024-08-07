void __fastcall WarBoardActionPointClassEntity___ctor(WarBoardActionPointClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA4D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFA4D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePK(
        int32_t id,
        int32_t classid,
        const MethodInfo *method)
{
  if ( (byte_49FFA4C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&classid);
    byte_49FFA4C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           classid,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePrimaryKey(
        WarBoardActionPointClassEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardActionPointClassEntity__CreatePK(this->fields.id, this->fields.classId, v2);
}