void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBB24 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_49BBB24 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    104,
    (const MethodInfo_319DBD4 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}