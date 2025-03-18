void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21B8A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_4C21B8A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}