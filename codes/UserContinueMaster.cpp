void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB03 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_40FAB03 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    98,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}