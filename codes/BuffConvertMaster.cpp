void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FB8A & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4A6FB8A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    441,
    (const MethodInfo_312C568 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}