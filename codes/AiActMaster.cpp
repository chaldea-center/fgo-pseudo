void AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE239 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_4CEE239 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}