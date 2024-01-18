void __fastcall QuestRandomGroupEntity___ctor(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AEDE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AEDE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRandomGroupEntity__CreatePK(
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  if ( (byte_418AEDC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&randomGroupId);
    byte_418AEDC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           randomGroupId,
           probability,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AEDD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AEDD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            this->fields.questId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}