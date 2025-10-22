void UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57C6A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_4C57C6A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_33B3190 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}