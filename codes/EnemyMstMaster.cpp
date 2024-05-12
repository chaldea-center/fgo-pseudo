void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FAA3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_438FAA3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    243,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}