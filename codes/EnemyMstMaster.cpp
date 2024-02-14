void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4218BC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4218BC1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    242,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}