void __fastcall EffectMaster___ctor(EffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43563CD & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
    byte_43563CD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    109,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int___ctor__);
}