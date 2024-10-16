void __fastcall CompleteMissionEntity___ctor(CompleteMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B8E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5B8E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CompleteMissionEntity__CreatePrimaryKey(CompleteMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.masterMissionId;
}