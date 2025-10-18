void QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C4590A & 1) == 0 )
  {
    sub_1C37058(&QuestKnockdownInfo_TypeInfo);
    byte_4C4590A = 1;
  }
  v7 = (Il2CppObject *)sub_1C372A4(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v7, 0);
  v7[1].klass = 0;
  v7[1].monitor = 0;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.current, (int32_t)v7, v8, v9);
  v10 = (Il2CppObject *)sub_1C372A4(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v10, 0);
  v10[1].klass = 0;
  v10[1].monitor = 0;
  this->fields.record = (struct QuestKnockdownInfo_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.record, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_1C372B4(v13);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.current, (int32_t)currenctKnockdown, v15, v16);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0);
  this->fields.record = QuestKnockdownRecord;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.record, (int32_t)QuestKnockdownRecord, v18, v19);
}