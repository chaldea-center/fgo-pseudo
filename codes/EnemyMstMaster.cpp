void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B467D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_42B467D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    243,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}