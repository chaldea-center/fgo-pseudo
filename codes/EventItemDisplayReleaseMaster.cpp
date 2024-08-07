void __fastcall EventItemDisplayReleaseMaster___ctor(EventItemDisplayReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB00 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__,
      method);
    byte_49FEB00 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    166,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
}