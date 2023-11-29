void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F994C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_40F994C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    178,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}