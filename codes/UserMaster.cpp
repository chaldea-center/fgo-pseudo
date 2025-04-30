void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F303 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_4A4F303 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_32144B8 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}