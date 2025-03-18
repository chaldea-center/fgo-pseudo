void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D66 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_4C22D66 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_329B080 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}