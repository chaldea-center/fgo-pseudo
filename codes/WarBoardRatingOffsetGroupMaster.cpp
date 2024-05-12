void __fastcall WarBoardRatingOffsetGroupMaster___ctor(
        WarBoardRatingOffsetGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D206 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
    byte_438D206 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    470,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
}