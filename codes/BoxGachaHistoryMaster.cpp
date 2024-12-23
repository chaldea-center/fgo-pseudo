void __fastcall BoxGachaHistoryMaster___ctor(BoxGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B668B6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__, method);
    byte_4B668B6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
}