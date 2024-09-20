void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_4A5BEB1 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}