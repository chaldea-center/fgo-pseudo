void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC3B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
    byte_4BDC3B0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}