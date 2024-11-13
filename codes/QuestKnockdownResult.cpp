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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B186D7 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestKnockdownInfo_TypeInfo, isRecord, data);
    byte_4B186D7 = 1;
  }
  v7 = (Il2CppObject *)sub_1BCAA2C(QuestKnockdownInfo_TypeInfo, isRecord, data, method);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = 0LL;
  v7[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (Il2CppObject *)sub_1BCAA2C(QuestKnockdownInfo_TypeInfo, v14, v15, v16);
  System_Object___ctor(v17, 0LL);
  v17[1].klass = 0LL;
  v17[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.record, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_1BCAA3C(v24, v25);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.current,
    (int64_t)currenctKnockdown,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.record,
    (int64_t)QuestKnockdownRecord,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}