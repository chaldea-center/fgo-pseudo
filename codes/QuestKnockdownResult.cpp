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
  Il2CppObject *v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4186ECB & 1) == 0 )
  {
    sub_B2C35C(&QuestKnockdownInfo_TypeInfo, isRecord);
    byte_4186ECB = 1;
  }
  v7 = (Il2CppObject *)sub_B2C42C(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = 0LL;
  v7[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (Il2CppObject *)sub_B2C42C(QuestKnockdownInfo_TypeInfo);
  System_Object___ctor(v14, 0LL);
  v14[1].klass = 0LL;
  v14[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_B2C434(v21, v22);
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)currenctKnockdown,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)QuestKnockdownRecord,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}