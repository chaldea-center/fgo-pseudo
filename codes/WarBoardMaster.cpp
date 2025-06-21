void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D65D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_4B1D65D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    325,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}