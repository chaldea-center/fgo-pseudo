void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B4625 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
    byte_42B4625 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    109,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}