void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC6A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__, method);
    byte_40FC6A2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    181,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
}