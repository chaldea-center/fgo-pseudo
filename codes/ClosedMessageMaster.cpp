void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B07CD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
    byte_42B07CD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    144,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}