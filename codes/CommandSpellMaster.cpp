void CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970625 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_5970625 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    109,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}