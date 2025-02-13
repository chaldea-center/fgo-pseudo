void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD0CE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_4BDD0CE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}