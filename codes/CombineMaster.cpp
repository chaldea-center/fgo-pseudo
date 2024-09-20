void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF2C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_4A5AF2C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}