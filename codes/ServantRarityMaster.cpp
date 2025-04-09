void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB7D9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_49BB7D9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_319B678 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}