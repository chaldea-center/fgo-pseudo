void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4476B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4B4476B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    447,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}