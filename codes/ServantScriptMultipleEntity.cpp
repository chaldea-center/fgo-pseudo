void ServantScriptMultipleEntity___ctor(ServantScriptMultipleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27CF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27CF2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantScriptMultipleEntity__CreatePK(
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_4C27CF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27CF1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           form,
           position,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantScriptMultipleEntity__CreatePrimaryKey(
        ServantScriptMultipleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantScriptMultipleEntity__CreatePK(this->fields.id, this->fields.form, this->fields.position, v2);
}