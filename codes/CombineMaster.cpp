void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C43 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_42B2C43 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    179,
    (const MethodInfo_23E223C *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}