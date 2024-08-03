void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_49FD0DD = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_30D4010 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}