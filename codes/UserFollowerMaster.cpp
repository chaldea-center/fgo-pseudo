void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_42136EB = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    92,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}