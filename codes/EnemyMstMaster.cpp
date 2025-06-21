void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C390 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4B1C390 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}