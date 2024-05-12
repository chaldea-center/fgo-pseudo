void __fastcall EventFilterMaster___ctor(EventFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE78 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
    byte_438DE78 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    182,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int___ctor__);
}