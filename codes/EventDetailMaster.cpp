void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC62D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_40FC62D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    120,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}