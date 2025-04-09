void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAA9D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_49BAA9D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_319B678 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}