void __fastcall WarBoardFutureActionTrendMaster___ctor(
        WarBoardFutureActionTrendMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184063 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__,
      method);
    byte_4184063 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    469,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
}