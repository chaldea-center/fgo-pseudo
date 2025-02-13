void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC158 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_4BDC158 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}