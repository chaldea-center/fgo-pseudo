void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B36FB6 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_4B36FB6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    104,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}