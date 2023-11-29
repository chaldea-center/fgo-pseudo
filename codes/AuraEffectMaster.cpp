void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF3A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__, method);
    byte_40FBF3A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    238,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}