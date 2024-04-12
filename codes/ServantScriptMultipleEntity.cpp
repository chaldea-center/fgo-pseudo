void __fastcall ServantScriptMultipleEntity___ctor(ServantScriptMultipleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2122 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2122 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantScriptMultipleEntity__CreatePK(
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_42B2121 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B2121 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           form,
           position,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantScriptMultipleEntity__CreatePrimaryKey(
        ServantScriptMultipleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantScriptMultipleEntity__CreatePK(this->fields.id, this->fields.form, this->fields.position, v2);
}