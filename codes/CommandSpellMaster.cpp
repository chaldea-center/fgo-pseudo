void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C31D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_4B1C31D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}