void AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593826C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
    byte_593826C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    248,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}