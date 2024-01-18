void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFEF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_418AFEF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    159,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}