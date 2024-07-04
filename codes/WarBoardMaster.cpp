void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3722 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_48E3722 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}