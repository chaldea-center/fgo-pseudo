void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4355343 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
    byte_4355343 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    239,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}