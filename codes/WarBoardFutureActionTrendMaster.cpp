void __fastcall WarBoardFutureActionTrendMaster___ctor(
        WarBoardFutureActionTrendMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFAB9 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__,
      method);
    byte_49FFAB9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    472,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int___ctor__);
}