void WarBoardItemMaster___ctor(WarBoardItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398AA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
    byte_59398AA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    340,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
}