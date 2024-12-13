void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37F22 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_4B37F22 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    131,
    (const MethodInfo_31D205C *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}