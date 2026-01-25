void UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6F5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
    byte_4CEF6F5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_342E534 *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}