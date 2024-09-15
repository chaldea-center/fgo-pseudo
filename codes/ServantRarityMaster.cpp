void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E71A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_4A2E71A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    116,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}