void EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56BC4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
    byte_4C56BC4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}