void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E25C2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__, method);
    byte_48E25C2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    144,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}