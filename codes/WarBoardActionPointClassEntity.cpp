void __fastcall WarBoardActionPointClassEntity___ctor(WarBoardActionPointClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389017 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389017 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePK(
        int32_t id,
        int32_t classid,
        const MethodInfo *method)
{
  if ( (byte_4389016 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4389016 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           classid,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardActionPointClassEntity__CreatePrimaryKey(
        WarBoardActionPointClassEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardActionPointClassEntity__CreatePK(this->fields.id, this->fields.classId, v2);
}