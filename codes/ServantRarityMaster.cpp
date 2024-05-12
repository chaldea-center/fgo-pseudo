void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D12E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
    byte_438D12E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    115,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}