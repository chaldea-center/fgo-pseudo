// local variable allocation has failed, the output may be wrong!
void __fastcall QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BB6C5D & 1) == 0 )
  {
    sub_1C13D24(&QuestKnockdownInfo_TypeInfo, isRecord);
    byte_4BB6C5D = 1;
  }
  v7 = (Il2CppObject *)sub_1C13F70(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = 0LL;
  v7[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (Il2CppObject *)sub_1C13F70(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v14, 0LL);
  v14[1].klass = 0LL;
  v14[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.record, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_1C13F80(v21, v22);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.current,
    (int64_t)currenctKnockdown,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.record,
    (int64_t)QuestKnockdownRecord,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}