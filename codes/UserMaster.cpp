void UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59717C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_59717C1 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_3F10D40 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}