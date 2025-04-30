void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E318 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4A4E318 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}