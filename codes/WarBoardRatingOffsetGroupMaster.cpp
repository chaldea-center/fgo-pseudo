void __fastcall WarBoardRatingOffsetGroupMaster___ctor(
        WarBoardRatingOffsetGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189244 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__,
      method);
    byte_4189244 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    468,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
}