void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BD46 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__, method);
    byte_418BD46 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    108,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}