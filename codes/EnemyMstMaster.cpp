void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FE2BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_40FE2BC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    242,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}