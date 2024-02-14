void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216766 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_4216766 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    238,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}