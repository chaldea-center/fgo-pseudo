void CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E774A7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_4E774A7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_3533604 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}