// local variable allocation has failed, the output may be wrong!
void __fastcall QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FE850 & 1) == 0 )
  {
    sub_1B640C8(&QuestKnockdownInfo_TypeInfo, isRecord);
    byte_49FE850 = 1;
  }
  v7 = (Il2CppObject *)sub_1B64314(QuestKnockdownInfo_TypeInfo, isRecord, data);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = 0LL;
  v7[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.current, (int32_t)v7, v8, v9);
  v12 = (Il2CppObject *)sub_1B64314(QuestKnockdownInfo_TypeInfo, v10, v11);
  System_Object___ctor(v12, 0LL);
  v12[1].klass = 0LL;
  v12[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.record, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_1B64324(v15);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.current, (int32_t)currenctKnockdown, v17, v18);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.record, (int32_t)QuestKnockdownRecord, v20, v21);
}