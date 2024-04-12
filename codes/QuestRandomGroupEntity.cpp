void __fastcall QuestRandomGroupEntity___ctor(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B48DA & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B48DA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRandomGroupEntity__CreatePK(
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  if ( (byte_42B48D8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B48D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           randomGroupId,
           probability,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestRandomGroupEntity__CreatePrimaryKey(
        QuestRandomGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRandomGroupEntity__CreatePK(
           this->fields.questId,
           this->fields.randomGroupId,
           this->fields.probability,
           v2);
}


QuestEntity_o *__fastcall QuestRandomGroupEntity__GetQuestEntity(
        QuestRandomGroupEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B48D9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B48D9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            this->fields.questId,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}