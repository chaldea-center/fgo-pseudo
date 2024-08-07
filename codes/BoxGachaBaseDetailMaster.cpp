void __fastcall BoxGachaBaseDetailMaster___ctor(BoxGachaBaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE828 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__, method);
    byte_49FE828 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    144,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
}