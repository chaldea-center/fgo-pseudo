void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37DBA & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_4B37DBA = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_31D205C *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}