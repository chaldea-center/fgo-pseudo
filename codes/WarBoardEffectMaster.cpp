void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184002 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__, method);
    byte_4184002 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    355,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}