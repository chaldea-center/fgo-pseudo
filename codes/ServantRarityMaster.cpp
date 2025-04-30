void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EE2F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_4A4EE2F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}