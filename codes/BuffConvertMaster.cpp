void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC247 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
    byte_4BDC247 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    445,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}