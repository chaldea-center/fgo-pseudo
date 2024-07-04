void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3470 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_48E3470 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_2FE6BB8 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}