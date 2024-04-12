void __fastcall WarBoardFutureActionTrendMaster___ctor(
        WarBoardFutureActionTrendMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC82C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
    byte_42AC82C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    470,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
}