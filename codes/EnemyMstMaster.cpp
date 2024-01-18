void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BD9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_418BD9E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    242,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}