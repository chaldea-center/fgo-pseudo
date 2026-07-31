void QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x0
  __int64 v22; // x1
  bool isKnockdownTrialQuest; // w0
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_593B147 & 1) == 0 )
  {
    sub_21FFC50(&QuestKnockdownInfo_TypeInfo);
    byte_593B147 = 1;
  }
  v7 = (Il2CppObject *)sub_21FFEBC(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v7, 0);
  v7[1].klass = 0;
  v7[1].monitor = 0;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (Il2CppObject *)sub_21FFEBC(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v14, 0);
  v14[1].klass = 0;
  v14[1].monitor = 0;
  this->fields.record = (struct QuestKnockdownInfo_o *)v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.record, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_21FFECC(v21, v22);
  isKnockdownTrialQuest = BattleData__isKnockdownTrialQuest(data, 0);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.isTrialOpen = isKnockdownTrialQuest;
  this->fields.current = currenctKnockdown;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.current,
    (int32_t)currenctKnockdown,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0);
  this->fields.record = QuestKnockdownRecord;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.record,
    (int32_t)QuestKnockdownRecord,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}