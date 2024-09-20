void __fastcall BoxGachaHistoryMaster___ctor(BoxGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE6B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
    byte_4A5AE6B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
}