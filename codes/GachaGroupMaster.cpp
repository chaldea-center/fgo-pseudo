void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B23 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
    byte_42B3B23 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    160,
    (const MethodInfo_23E223C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}