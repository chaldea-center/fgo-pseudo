void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DB78 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_4A2DB78 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}