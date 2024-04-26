void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43545BA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
    byte_43545BA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    182,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
}