void __fastcall WarBoardMessageScriptEntity___ctor(WarBoardMessageScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA5C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEA5C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePK(
        System_String_o *imageId,
        int32_t form,
        const MethodInfo *method)
{
  if ( (byte_42AEA5B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_string__int___);
    byte_42AEA5B = 1;
  }
  return DataEntityBase__CreateMultiplePK_string__int_(
           imageId,
           form,
           (const MethodInfo_1A4E1B0 *)Method_DataEntityBase_CreateMultiplePK_string__int___);
}


System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePrimaryKey(
        WarBoardMessageScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardMessageScriptEntity__CreatePK(this->fields.imageId, this->fields.form, v2);
}