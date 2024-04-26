void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351A35 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_4351A35 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    179,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}