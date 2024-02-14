void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42173D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_42173D4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    78,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}