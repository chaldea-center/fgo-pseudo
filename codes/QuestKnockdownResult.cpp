// local variable allocation has failed, the output may be wrong!
void __fastcall QuestKnockdownResult___ctor(
        QuestKnockdownResult_o *this,
        bool isRecord,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x23
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestKnockdownInfo_o *currenctKnockdown; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct QuestKnockdownInfo_o *QuestKnockdownRecord; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F95D9 & 1) == 0 )
  {
    sub_B16FFC(&QuestKnockdownInfo_TypeInfo, isRecord);
    byte_40F95D9 = 1;
  }
  v8 = (Il2CppObject *)sub_B170CC(QuestKnockdownInfo_TypeInfo, isRecord, data, method, v4);
  System_Object___ctor(v8, 0LL);
  v8[1].klass = 0LL;
  v8[1].monitor = 0LL;
  this->fields.current = (struct QuestKnockdownInfo_o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (Il2CppObject *)sub_B170CC(QuestKnockdownInfo_TypeInfo, v15, v16, v17, v18);
  System_Object___ctor(v19, 0LL);
  v19[1].klass = 0LL;
  v19[1].monitor = 0LL;
  this->fields.record = (struct QuestKnockdownInfo_o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isNewRecord = isRecord;
  if ( !data )
    sub_B170D4();
  this->fields.isTrialOpen = BattleData__isKnockdownTrialQuest(data, 0LL);
  currenctKnockdown = data->fields.currenctKnockdown;
  this->fields.current = currenctKnockdown;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)currenctKnockdown,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  QuestKnockdownRecord = BattleData__getQuestKnockdownRecord(data, 0LL);
  this->fields.record = QuestKnockdownRecord;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.record,
    (System_Int32_array **)QuestKnockdownRecord,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}