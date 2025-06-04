void __fastcall WarBoardItemMaster___ctor(WarBoardItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B03153 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__, method);
    byte_4B03153 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    338,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
}