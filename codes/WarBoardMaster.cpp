void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A09C0B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_4A09C0B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_30E4480 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}