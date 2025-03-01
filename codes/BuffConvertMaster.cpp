void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD44F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4BFD44F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    445,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}