void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB96 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_40FBB96 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    114,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}