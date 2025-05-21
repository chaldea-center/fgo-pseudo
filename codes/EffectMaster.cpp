void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B448E1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__, method);
    byte_4B448E1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}