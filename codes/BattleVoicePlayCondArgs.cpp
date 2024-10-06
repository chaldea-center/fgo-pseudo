void __fastcall BattleVoicePlayCondArgs___ctor(
        BattleVoicePlayCondArgs_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BattleData_k__BackingField = btlData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)btlData, v9, v10);
  this->fields._ServantData_k__BackingField = svtData;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantData_k__BackingField,
    (int32_t)svtData,
    v11,
    v12);
  this->fields._ActionData_k__BackingField = actData;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._ActionData_k__BackingField,
    (int32_t)actData,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__CheckMainTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  int32_t targetId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Int32_array *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int max_length; // w8
  int v13; // w9

  if ( (byte_4A726A8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Distinct_int___, *(_QWORD *)&targetIndividuality);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_4A726A8 = 1;
  }
  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField )
    return 0;
  targetId = ActionData_k__BackingField->fields.targetId;
  v8 = System_Linq_Enumerable__Distinct_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
         (const MethodInfo_2EAD420 *)Method_System_Linq_Enumerable_Distinct_int___);
  v9 = System_Linq_Enumerable__ToArray_int_(
         v8,
         (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v9 )
    sub_1B9026C(0LL, v10);
  max_length = v9->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( max_length == v13 )
      sub_1B90274(v9, v10);
    if ( targetId == v9->m_Items[v13 + 1] )
      break;
    if ( max_length == ++v13 )
      return 0;
  }
  return BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(this, targetId, targetIndividuality, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  BattleVoicePlayCondArgs_o *v4; // x20
  __int64 v5; // x1
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  const MethodInfo *v8; // x3
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  BattleVoicePlayCondArgs_o *v10; // x21
  bool v11; // w22
  unsigned __int64 v12; // x23

  v4 = this;
  if ( (byte_4A726A7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Distinct_int___, *(_QWORD *)&targetIndividuality);
    this = (BattleVoicePlayCondArgs_o *)sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_4A726A7 = 1;
  }
  ActionData_k__BackingField = v4->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField
    || (v7 = System_Linq_Enumerable__Distinct_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
               (const MethodInfo_2EAD420 *)Method_System_Linq_Enumerable_Distinct_int___),
        (this = (BattleVoicePlayCondArgs_o *)System_Linq_Enumerable__ToArray_int_(
                                               v7,
                                               (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
  {
    sub_1B9026C(this, *(_QWORD *)&targetIndividuality);
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  v10 = this;
  v11 = (int)ServantData_k__BackingField > 0;
  if ( (int)ServantData_k__BackingField >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)ServantData_k__BackingField )
        sub_1B90274(this, *(_QWORD *)&targetIndividuality);
      this = (BattleVoicePlayCondArgs_o *)BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
                                            v4,
                                            *((_DWORD *)&v10->fields._ActionData_k__BackingField + v12),
                                            targetIndividuality,
                                            v8);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(ServantData_k__BackingField) = v10->fields._ServantData_k__BackingField;
      v11 = (__int64)++v12 < (int)ServantData_k__BackingField;
    }
    while ( (__int64)v12 < (int)ServantData_k__BackingField );
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__IsPlayQuestPhase(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetQuestId,
        int32_t targetQuestPhase,
        bool isNot,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x23
  __int64 v10; // x1
  BattleData_o *QuestId; // x0
  BattleData_o *v13; // x8
  bool v14; // w8

  if ( (byte_4A726A6 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetQuestId);
    byte_4A726A6 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0LL, 0LL) )
    return 0;
  QuestId = this->fields._BattleData_k__BackingField;
  if ( !QuestId
    || (QuestId = (BattleData_o *)BattleData__getQuestId(QuestId, 0LL),
        (v13 = this->fields._BattleData_k__BackingField) == 0LL) )
  {
    sub_1B9026C(QuestId, v10);
  }
  v14 = ((_DWORD)QuestId == targetQuestId) & (BattleData__getPhase(v13, 0LL) == targetQuestPhase);
  if ( isNot )
    return !v14;
  else
    return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetUniqueId,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *BattleData_k__BackingField; // x22
  __int64 v9; // x1
  struct BattleData_o *v10; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v12; // x21
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x20

  if ( (byte_4A726A9 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, *(_QWORD *)&targetUniqueId);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A726A9 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0LL, 0LL) )
    return 0;
  v10 = this->fields._BattleData_k__BackingField;
  if ( !v10 )
    goto LABEL_13;
  ServantData = BattleData__getServantData(v10, targetUniqueId, 0LL);
  if ( !ServantData )
    return 0;
  v12 = ServantData;
  ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                           ServantData,
                                           0LL,
                                           0,
                                           0,
                                           0,
                                           0LL);
  if ( !BattleServantData__isAlive(v12, 0, 0LL) )
    return 0;
  v10 = (struct BattleData_o *)sub_1B900B8(int___TypeInfo, 1LL);
  if ( !v10 )
LABEL_13:
    sub_1B9026C(v10, v9);
  if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
    sub_1B90274(v10, v10);
  LODWORD(v10->fields.rootfsm) = targetIndividuality;
  return Individuality__CheckIndividualities(ConcatServantAndBuffIndividualityies, (System_Int32_array *)v10, 0LL);
}


BattleActionData_o *__fastcall BattleVoicePlayCondArgs__get_ActionData(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ActionData_k__BackingField;
}


BattleData_o *__fastcall BattleVoicePlayCondArgs__get_BattleData(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BattleData_k__BackingField;
}


BattleServantData_o *__fastcall BattleVoicePlayCondArgs__get_ServantData(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantData_k__BackingField;
}