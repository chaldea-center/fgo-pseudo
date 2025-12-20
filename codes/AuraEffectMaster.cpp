void AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C43F & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
    byte_4D2C43F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_345919C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}