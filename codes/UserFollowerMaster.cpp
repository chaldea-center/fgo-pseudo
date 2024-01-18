void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_4186FAA = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    92,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}