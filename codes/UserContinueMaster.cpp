void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
    byte_4A5BD48 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}