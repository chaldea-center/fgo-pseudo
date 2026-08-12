void AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59703C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_59703C2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}