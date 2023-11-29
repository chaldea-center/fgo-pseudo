void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC9E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_40FC9E5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    78,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}