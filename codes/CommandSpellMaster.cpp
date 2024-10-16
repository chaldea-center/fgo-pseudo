void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B6F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_4AB5B6F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    104,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}