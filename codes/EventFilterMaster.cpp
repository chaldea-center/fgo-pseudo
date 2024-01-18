void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A3D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__, method);
    byte_418A3D9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    181,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
}