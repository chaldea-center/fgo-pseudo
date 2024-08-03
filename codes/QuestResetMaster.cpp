void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC97E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_49FC97E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}