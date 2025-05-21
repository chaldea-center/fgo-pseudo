void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B458A3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_4B458A3 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    55,
    (const MethodInfo_32E2074 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}