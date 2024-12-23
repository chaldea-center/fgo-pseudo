void __fastcall WarBoardTacticalTrendMaster___ctor(WarBoardTacticalTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C74 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__, method);
    byte_4B67C74 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    329,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int___ctor__);
}