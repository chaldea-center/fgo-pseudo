void __fastcall ServantScriptMultipleEntity___ctor(ServantScriptMultipleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189C0C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189C0C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantScriptMultipleEntity__CreatePK(
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_4189C0B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&form);
    byte_4189C0B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           form,
           position,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantScriptMultipleEntity__CreatePrimaryKey(
        ServantScriptMultipleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantScriptMultipleEntity__CreatePK(this->fields.id, this->fields.form, this->fields.position, v2);
}