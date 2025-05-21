void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B448EE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4B448EE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}