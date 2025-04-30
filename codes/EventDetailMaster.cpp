void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E3F7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_4A4E3F7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}