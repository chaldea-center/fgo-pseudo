void __fastcall BattleVoicePlayCondArgs___ctor(
        BattleVoicePlayCondArgs_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BattleData_k__BackingField = btlData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)btlData, v9, v10, v11, v12, v13, v14);
  this->fields._ServantData_k__BackingField = svtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantData_k__BackingField,
    (int64_t)svtData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._ActionData_k__BackingField = actData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ActionData_k__BackingField,
    (int64_t)actData,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__CheckMainTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  int32_t targetId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int max_length; // w8
  int v14; // w9

  if ( (byte_4B18A91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, *(_QWORD *)&targetIndividuality, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6);
    byte_4B18A91 = 1;
  }
  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField )
    return 0;
  targetId = ActionData_k__BackingField->fields.targetId;
  v9 = System_Linq_Enumerable__Distinct_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
         (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v10 )
    sub_1BCAA3C(0LL, v11);
  max_length = v10->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( max_length == v14 )
      sub_1BCAA44(v10, v11);
    if ( targetId == v10->m_Items[v14 + 1] )
      break;
    if ( max_length == ++v14 )
      return 0;
  }
  return BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(this, targetId, targetIndividuality, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  BattleVoicePlayCondArgs_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  const MethodInfo *v9; // x3
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  BattleVoicePlayCondArgs_o *v11; // x21
  bool v12; // w22
  unsigned __int64 v13; // x23

  v4 = this;
  if ( (byte_4B18A90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, *(_QWORD *)&targetIndividuality, method);
    this = (BattleVoicePlayCondArgs_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6);
    byte_4B18A90 = 1;
  }
  ActionData_k__BackingField = v4->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField
    || (v8 = System_Linq_Enumerable__Distinct_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
               (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___),
        (this = (BattleVoicePlayCondArgs_o *)System_Linq_Enumerable__ToArray_int_(
                                               v8,
                                               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&targetIndividuality);
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  v11 = this;
  v12 = (int)ServantData_k__BackingField > 0;
  if ( (int)ServantData_k__BackingField >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)ServantData_k__BackingField )
        sub_1BCAA44(this, *(_QWORD *)&targetIndividuality);
      this = (BattleVoicePlayCondArgs_o *)BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
                                            v4,
                                            *((_DWORD *)&v11->fields._ActionData_k__BackingField + v13),
                                            targetIndividuality,
                                            v9);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(ServantData_k__BackingField) = v11->fields._ServantData_k__BackingField;
      v12 = (__int64)++v13 < (int)ServantData_k__BackingField;
    }
    while ( (__int64)v13 < (int)ServantData_k__BackingField );
  }
  return v12;
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

  if ( (byte_4B18A8F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetQuestId, *(_QWORD *)&targetQuestPhase);
    byte_4B18A8F = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetQuestId);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0LL, 0LL) )
    return 0;
  QuestId = this->fields._BattleData_k__BackingField;
  if ( !QuestId
    || (QuestId = (BattleData_o *)BattleData__getQuestId(QuestId, 0LL),
        (v13 = this->fields._BattleData_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(QuestId, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *BattleData_k__BackingField; // x22
  __int64 v12; // x1
  struct BattleData_o *v13; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x21
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x20
  System_Int32_array *v17; // x21

  if ( (byte_4B18A92 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, *(_QWORD *)&targetUniqueId, *(_QWORD *)&targetIndividuality);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18A92 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetUniqueId);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0LL, 0LL) )
    return 0;
  v13 = this->fields._BattleData_k__BackingField;
  if ( !v13 )
    goto LABEL_15;
  ServantData = BattleData__getServantData(v13, targetUniqueId, 0LL);
  if ( !ServantData )
    return 0;
  v15 = ServantData;
  ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                           ServantData,
                                           0LL,
                                           0,
                                           0,
                                           0,
                                           0LL);
  if ( !BattleServantData__isAlive(v15, 0, 0LL) )
    return 0;
  v13 = (struct BattleData_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v13 )
LABEL_15:
    sub_1BCAA3C(v13, v12);
  v17 = (System_Int32_array *)v13;
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    sub_1BCAA44(v13, v12);
  LODWORD(v13->fields.rootfsm) = targetIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v12);
  return Individuality__CheckIndividualities(ConcatServantAndBuffIndividualityies, v17, 0LL);
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