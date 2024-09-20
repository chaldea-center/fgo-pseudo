void __fastcall WarBoardTreasureMaster___ctor(WarBoardTreasureMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
    byte_4A5C1BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    333,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int___ctor__);
}