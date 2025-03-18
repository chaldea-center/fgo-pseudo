void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21CF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_4C21CF9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    149,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}