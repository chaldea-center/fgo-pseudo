void UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939600 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_5939600 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}