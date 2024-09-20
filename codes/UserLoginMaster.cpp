void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
    byte_4A5BEB0 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    131,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}