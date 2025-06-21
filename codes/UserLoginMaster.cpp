void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D3BA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_4B1D3BA = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    135,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}