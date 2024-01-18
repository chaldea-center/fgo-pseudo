void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188813 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_4188813 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    143,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}