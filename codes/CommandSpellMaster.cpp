void CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D307F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_4D307F1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}