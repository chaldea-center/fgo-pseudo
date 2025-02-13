void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC7DB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
    byte_4BDC7DB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    165,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}