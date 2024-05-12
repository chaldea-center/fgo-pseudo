void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438B6B8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
    byte_438B6B8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    144,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}