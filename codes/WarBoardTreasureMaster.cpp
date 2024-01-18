void __fastcall WarBoardTreasureMaster___ctor(WarBoardTreasureMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41888DF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__, method);
    byte_41888DF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    331,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
}