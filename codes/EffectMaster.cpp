void EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E1B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
    byte_4C42E1B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}