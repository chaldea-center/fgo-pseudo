void QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D2F262 & 1) == 0 )
  {
    sub_1C94098(&QuestKnockdownInfo_TypeInfo);
    byte_4D2F262 = 1;
  }
  v7 = (Il2CppObject *)sub_1C942E4(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v7, 0);
  v7[1].klass = 0;
  v7[1].monitor = 0;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (Il2CppObject *)sub_1C942E4(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v14, 0);
  v14[1].klass = 0;
  v14[1].monitor = 0;
  this->fields.record = (struct QuestKnockdownInfo_o *)v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.record, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_1C942F0(v21, v22);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.current,
    (int32_t)currenctKnockdown,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0);
  this->fields.record = QuestKnockdownRecord;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.record,
    (int32_t)QuestKnockdownRecord,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}