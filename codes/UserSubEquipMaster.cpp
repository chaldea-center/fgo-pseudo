void UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59397AB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
    byte_59397AB = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}