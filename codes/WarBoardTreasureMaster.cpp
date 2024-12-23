void __fastcall WarBoardTreasureMaster___ctor(WarBoardTreasureMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C76 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__, method);
    byte_4B67C76 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    337,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
}