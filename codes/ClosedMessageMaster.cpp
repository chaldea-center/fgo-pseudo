void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B02 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_4AB5B02 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    145,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}