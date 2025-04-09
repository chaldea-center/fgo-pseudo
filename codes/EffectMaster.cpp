void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACDA & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__, method);
    byte_49BACDA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}