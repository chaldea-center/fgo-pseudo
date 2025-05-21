void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45187 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_4B45187 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    166,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}