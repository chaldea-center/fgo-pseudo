void AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37560 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_4C37560 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_3394514 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}