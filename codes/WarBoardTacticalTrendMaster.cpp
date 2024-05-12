void __fastcall WarBoardTacticalTrendMaster___ctor(WarBoardTacticalTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D2ED & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__);
    byte_438D2ED = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    324,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__);
}