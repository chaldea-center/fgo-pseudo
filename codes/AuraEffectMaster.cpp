void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59A1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_4AB59A1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    240,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}