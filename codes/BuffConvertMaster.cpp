void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAB71 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_49BAB71 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    447,
    (const MethodInfo_319B678 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}