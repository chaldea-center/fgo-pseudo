void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0CC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_4A4E0CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}