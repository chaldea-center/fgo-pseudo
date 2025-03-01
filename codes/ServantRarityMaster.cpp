void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE09A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_4BFE09A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}