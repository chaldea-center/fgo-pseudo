void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE793 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_49FE793 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}