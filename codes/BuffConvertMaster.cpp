void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB43E2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4BB43E2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    445,
    (const MethodInfo_3236300 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}