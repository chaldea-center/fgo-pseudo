// local variable allocation has failed, the output may be wrong!
void __fastcall QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x23
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x24
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4213CF5 & 1) == 0 )
  {
    sub_B0D8A4(&QuestKnockdownInfo_TypeInfo, isRecord);
    byte_4213CF5 = 1;
  }
  v7 = (Il2CppObject *)sub_B0D974(QuestKnockdownInfo_TypeInfo, isRecord, data);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = 0LL;
  v7[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (Il2CppObject *)sub_B0D974(QuestKnockdownInfo_TypeInfo, v14, v15);
  System_Object___ctor(v16, 0LL);
  v16[1].klass = 0LL;
  v16[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_B0D97C(v23);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)currenctKnockdown,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)QuestKnockdownRecord,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}