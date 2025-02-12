void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8AE4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_4BC8AE4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_3246354 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}