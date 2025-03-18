void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21DD6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4C21DD6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}