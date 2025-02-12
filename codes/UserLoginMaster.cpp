void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5488 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_4BB5488 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    135,
    (const MethodInfo_323885C *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}