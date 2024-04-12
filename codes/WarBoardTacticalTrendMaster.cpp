void __fastcall WarBoardTacticalTrendMaster___ctor(WarBoardTacticalTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B22AA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__);
    byte_42B22AA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    324,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__);
}