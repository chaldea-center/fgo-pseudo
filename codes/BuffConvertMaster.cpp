void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F7F5 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4A1F7F5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    441,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}