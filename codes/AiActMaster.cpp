void AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6F7D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_4CC6F7D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}