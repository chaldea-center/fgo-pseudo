void __fastcall WarBoardTreasureMaster___ctor(WarBoardTreasureMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BDDE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
    byte_438BDDE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    332,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
}