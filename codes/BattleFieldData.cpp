void BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_Double_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59734C0 & 1) == 0 )
  {
    sub_2213A60(&double___TypeInfo);
    sub_2213A60(&BattleFieldData_SaveData_TypeInfo);
    byte_59734C0 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tmpsave, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_Double_array *)sub_2213B20(double___TypeInfo, 1);
  this->fields.wkZeroParam = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wkZeroParam, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldData___ctor_53207972(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Double_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleFieldData_AiField_c *v21; // x0
  Il2CppObject *v22; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Item; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_string__object__c *v33; // x1
  __int64 naturalAligment; // x9
  struct BattleFieldData_AiField_o *v35; // x23
  struct BattleFieldData_AiField_o *v36; // x21
  AiState_o *v37; // x20
  MissionNaviTransitionBoardItem_o *p_aiState; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_59734C1 & 1) == 0 )
  {
    sub_2213A60(&BattleFieldData_AiField_TypeInfo);
    sub_2213A60(&AiState_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&double___TypeInfo);
    sub_2213A60(&BattleFieldData_SaveData_TypeInfo);
    sub_2213A60(&StringLiteral_24125/*"raid"*/);
    sub_2213A60(&StringLiteral_21233/*"id"*/);
    byte_59734C1 = 1;
  }
  v7 = (Il2CppObject *)sub_2213CCC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v7, 0);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tmpsave, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (struct System_Double_array *)sub_2213B20(double___TypeInfo, 1);
  this->fields.wkZeroParam = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wkZeroParam, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0);
  v21 = BattleFieldData_AiField_TypeInfo;
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v22 = (Il2CppObject *)sub_2213CCC(v21);
  System_Object___ctor(v22, 0);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v22;
  p_aiField = &this->fields.aiField;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aiField, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  if ( !obj )
    goto LABEL_19;
  v33 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = obj;
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)obj,
         (Il2CppObject *)StringLiteral_24125/*"raid"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v35 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_24125/*"raid"*/,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v35 || !Item )
      goto LABEL_19;
    v33 = (System_Collections_Generic_Dictionary_string__object__c *)qword_5984368;
    if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
      goto LABEL_21;
    v35->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v32);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_21233/*"id"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v37 = (AiState_o *)sub_2213CCC(AiState_TypeInfo);
    AiState___ctor(v37, 0);
    this->fields.aiState = v37;
    p_aiState = (MissionNaviTransitionBoardItem_o *)&this->fields.aiState;
    sub_2213A04(p_aiState, (int32_t)v37, v39, v40, v41, v42, v43, v44);
    monitor = p_aiState->monitor;
    if ( monitor )
    {
      Item = (Il2CppObject *)p_aiState->klass;
      if ( p_aiState->klass )
      {
        AiState__Initialize((AiState_o *)Item, monitor[5], 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(Item, v31);
  }
  v36 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_21233/*"id"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v36 || !Item )
    goto LABEL_19;
  v33 = (System_Collections_Generic_Dictionary_string__object__c *)qword_5984368;
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    v36->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v32);
    goto LABEL_16;
  }
LABEL_21:
  sub_221405C(Item, v33, v32);
  BattleFieldData_AiField___ctor(v46, v47);
}


System_Double_array *BattleFieldData__getAiParam(
        BattleFieldData_o *this,
        BattleData_o *bData,
        int32_t param,
        int32_t turn,
        int32_t actCnt,
        System_Int64_array *checkparams,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  BattleFieldData_o *v11; // x19
  struct BattleFieldData_AiField_o *v12; // x8
  BattleRaidInfo_o *v13; // x0
  BattleRaidInfo_o *v14; // x20
  double totalDamage; // d0
  struct BattleFieldData_AiField_o *aiField; // x8
  BattleRaidInfo_o *RaidInfo; // x0
  BattleRaidInfo_o *v18; // x20

  v11 = this;
  if ( (byte_59734C2 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_2213A60(&double___TypeInfo);
    byte_59734C2 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_2213B20(double___TypeInfo, 1);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)turn;
          goto LABEL_25;
        }
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    if ( param != 16 )
      return v11->fields.wkZeroParam;
LABEL_15:
    aiField = v11->fields.aiField;
    if ( !aiField || !bData )
      goto LABEL_26;
    RaidInfo = BattleData__getRaidInfo(bData, aiField->fields.day, 0);
    if ( RaidInfo )
    {
      v18 = RaidInfo;
      this = (BattleFieldData_o *)sub_2213B20(double___TypeInfo, 1);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    return v11->fields.wkZeroParam;
  }
  if ( param == 17 )
    goto LABEL_15;
  if ( param == 18 )
  {
    v12 = v11->fields.aiField;
    if ( !v12 || !bData )
      goto LABEL_26;
    v13 = BattleData__getRaidInfo(bData, v12->fields.day, 0);
    if ( v13 )
    {
      v14 = v13;
      this = (BattleFieldData_o *)sub_2213B20(double___TypeInfo, 1);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)v14->fields.totalDamage;
LABEL_25:
          *(double *)&this->fields.aiField = totalDamage;
          return (System_Double_array *)this;
        }
LABEL_27:
        sub_2213CE4(this);
      }
LABEL_26:
      sub_2213CDC(this, bData);
    }
  }
  return v11->fields.wkZeroParam;
}


AiState_o *BattleFieldData__getAiState(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.aiState;
}


int32_t BattleFieldData__getIndex(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


BattleFieldData_SaveData_o *BattleFieldData__getSaveData(BattleFieldData_o *this, const MethodInfo *method)
{
  AiState_o *aiState; // x0
  struct BattleFieldData_SaveData_o *tmpsave; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0), !tmpsave) )
    sub_2213CDC(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&tmpsave->fields, (int32_t)aiState, v5, v6, v7, v8, v9, v10);
  return this->fields.tmpsave;
}


int32_t BattleFieldData__getUniqueID(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


bool BattleFieldData__isAiTarget(
        BattleFieldData_o *this,
        ConditionsInformation_CheckInfo_o *info,
        System_Int64_array *indiv,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  return 1;
}


void BattleFieldData__setSaveData(BattleFieldData_o *this, BattleFieldData_SaveData_o *save, const MethodInfo *method)
{
  if ( !save || (this = (BattleFieldData_o *)this->fields.aiState) == 0 )
    sub_2213CDC(this, save);
  AiState__setSaveData((AiState_o *)this, save->fields.aistateSave, 0);
}


void BattleFieldData_AiField___ctor(BattleFieldData_AiField_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldData_SaveData___ctor(BattleFieldData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}