void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B1E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_4AB5B1E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}