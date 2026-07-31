void WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398AB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
    byte_59398AB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    327,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}