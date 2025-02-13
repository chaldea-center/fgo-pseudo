void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC34D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_4BDC34D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}