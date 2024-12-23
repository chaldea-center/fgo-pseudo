void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6795E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_4B6795E = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_31FD930 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}