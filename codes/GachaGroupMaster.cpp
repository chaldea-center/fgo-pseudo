void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB380 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_40FB380 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    159,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}