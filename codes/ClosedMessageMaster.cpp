void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66963 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_4B66963 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    149,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}