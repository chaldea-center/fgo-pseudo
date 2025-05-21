void __fastcall QuestExtensionMaster___ctor(QuestExtensionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45CD1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__, method);
    byte_4B45CD1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    547,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
}