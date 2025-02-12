void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC78B6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_4BC78B6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_3246354 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}