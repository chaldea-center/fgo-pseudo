void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A20A81 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_4A20A81 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}