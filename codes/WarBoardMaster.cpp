void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method, v2);
    byte_4B171DC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}