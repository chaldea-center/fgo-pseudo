void __fastcall UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C031 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
    byte_4A5C031 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}