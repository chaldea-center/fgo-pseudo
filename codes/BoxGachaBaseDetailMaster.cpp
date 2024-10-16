void __fastcall BoxGachaBaseDetailMaster___ctor(BoxGachaBaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5A4B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__, method);
    byte_4AB5A4B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    144,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
}