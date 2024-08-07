void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF6E8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_49FF6E8 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}