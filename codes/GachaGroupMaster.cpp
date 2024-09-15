void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E1CC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_4A2E1CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}