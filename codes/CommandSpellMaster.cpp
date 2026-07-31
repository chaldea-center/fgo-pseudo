void CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938475 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_5938475 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    109,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}