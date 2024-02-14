void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4218B69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__, method);
    byte_4218B69 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    108,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}