void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8DA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_49FE8DA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    145,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}