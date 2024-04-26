void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351FF5 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
    byte_4351FF5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    144,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}