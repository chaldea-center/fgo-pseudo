void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD4EA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_4BFD4EA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    149,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}