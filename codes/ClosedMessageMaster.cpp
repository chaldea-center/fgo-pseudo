void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F99F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_40F99F6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    143,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}