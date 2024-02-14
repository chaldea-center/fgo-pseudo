void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216A2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, method);
    byte_4216A2C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    114,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}