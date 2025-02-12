void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC86FD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_4BC86FD = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    104,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}