void __fastcall SpotAddEntity___ctor(SpotAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBDE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BBDE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SpotAddEntity__CreatePK(
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  if ( (byte_4A5BBDD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5BBDD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           spotId,
           priority,
           overrideType,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SpotAddEntity__CreatePrimaryKey(SpotAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SpotAddEntity__CreatePK(this->fields.spotId, this->fields.priority, this->fields.overrideType, v2);
}


int32_t __fastcall SpotAddEntity__GetCondType(SpotAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}