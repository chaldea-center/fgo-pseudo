void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE7F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
    byte_4A5AE7F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    441,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}