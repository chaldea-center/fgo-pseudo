void __fastcall ServantRarityMaster___ctor(ServantRarityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAA4C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    115,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int___ctor__);
}