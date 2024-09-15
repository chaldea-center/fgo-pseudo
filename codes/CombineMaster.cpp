void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DD0E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_4A2DD0E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}