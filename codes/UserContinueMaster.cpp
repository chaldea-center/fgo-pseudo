void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CAFB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
    byte_438CAFB = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    99,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}