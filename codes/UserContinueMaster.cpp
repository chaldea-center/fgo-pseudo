void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD19B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
    byte_4BDD19B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    104,
    (const MethodInfo_325C000 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}