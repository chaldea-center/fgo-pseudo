void __fastcall ServantScriptMultipleEntity___ctor(ServantScriptMultipleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D163 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D163 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantScriptMultipleEntity__CreatePK(
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_438D162 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438D162 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           form,
           position,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantScriptMultipleEntity__CreatePrimaryKey(
        ServantScriptMultipleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantScriptMultipleEntity__CreatePK(this->fields.id, this->fields.form, this->fields.position, v2);
}