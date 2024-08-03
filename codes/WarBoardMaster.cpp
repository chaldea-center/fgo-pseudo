void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD3AA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_49FD3AA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}