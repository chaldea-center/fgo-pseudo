void __fastcall WarBoardFutureActionTrendMaster___ctor(
        WarBoardFutureActionTrendMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387BD2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
    byte_4387BD2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    471,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
}