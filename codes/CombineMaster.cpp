void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4210FF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_4210FF3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    178,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}