void __fastcall ClosedMessageMaster___ctor(ClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
    byte_4A5AF10 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    145,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int___ctor__);
}