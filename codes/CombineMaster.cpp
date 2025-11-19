void CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6070 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_4CB6070 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}