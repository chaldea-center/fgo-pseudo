void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438B253 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_438B253 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    179,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}