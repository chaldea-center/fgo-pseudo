void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E34C6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_48E34C6 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_2FE6BB8 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}