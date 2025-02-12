void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB454B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__, method);
    byte_4BB454B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_3236300 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}