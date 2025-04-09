void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_49BBC93 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    135,
    (const MethodInfo_319DBD4 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}