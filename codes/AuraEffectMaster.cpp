void __fastcall AuraEffectMaster___ctor(AuraEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D56 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
    byte_42B1D56 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    239,
    (const MethodInfo_23E223C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int___ctor__);
}