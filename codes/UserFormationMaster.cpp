void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02E50 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_4B02E50 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    55,
    (const MethodInfo_32AF2A8 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}