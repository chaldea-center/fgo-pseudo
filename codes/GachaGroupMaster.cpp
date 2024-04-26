void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4355A5E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
    byte_4355A5E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    160,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}