void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43538F8 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
    byte_43538F8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    115,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}