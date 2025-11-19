void AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5EAA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
    byte_4CB5EAA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}