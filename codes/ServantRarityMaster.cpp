void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B20ED & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
    byte_42B20ED = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    115,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}