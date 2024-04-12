void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2867 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
    byte_42B2867 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    182,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
}