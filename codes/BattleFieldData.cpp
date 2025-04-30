void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Double_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A50CD7 & 1) == 0 )
  {
    sub_1B863B8(&double___TypeInfo, method);
    sub_1B863B8(&BattleFieldData_SaveData_TypeInfo, v3);
    byte_4A50CD7 = 1;
  }
  v4 = (Il2CppObject *)sub_1B86604(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tmpsave, (int32_t)v4, v5, v6);
  v7 = (struct System_Double_array *)sub_1B86460(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.wkZeroParam, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_43931036(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Double_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x9
  struct BattleFieldData_AiField_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  struct BattleFieldData_AiField_o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  AiState_o *v35; // x20
  CGThumbnailListItem_o *p_aiState; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_4A50CD8 & 1) == 0 )
  {
    sub_1B863B8(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_1B863B8(&AiState_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B863B8(&double___TypeInfo, v11);
    sub_1B863B8(&long_TypeInfo, v12);
    sub_1B863B8(&BattleFieldData_SaveData_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_22608/*"raid"*/, v14);
    sub_1B863B8(&StringLiteral_19989/*"id"*/, v15);
    byte_4A50CD8 = 1;
  }
  v16 = (Il2CppObject *)sub_1B86604(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tmpsave, (int32_t)v16, v17, v18);
  v19 = (struct System_Double_array *)sub_1B86460(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v19;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.wkZeroParam, (int32_t)v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v22 = (Il2CppObject *)sub_1B86604(BattleFieldData_AiField_TypeInfo);
  System_Object___ctor(v22, 0LL);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v22;
  p_aiField = &this->fields.aiField;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiField, (int32_t)v22, v24, v25);
  if ( !obj )
    goto LABEL_19;
  methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = obj;
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)obj,
         (Il2CppObject *)StringLiteral_22608/*"raid"*/,
         (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v29 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_22608/*"raid"*/,
             (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v29 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v29->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v30, v31);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_19989/*"id"*/,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v35 = (AiState_o *)sub_1B86604(AiState_TypeInfo);
    AiState___ctor(v35, 0LL);
    this->fields.aiState = v35;
    p_aiState = (CGThumbnailListItem_o *)&this->fields.aiState;
    sub_1B8635C(p_aiState, (int32_t)v35, v37, v38);
    monitor = p_aiState->monitor;
    if ( monitor )
    {
      Item = (Il2CppObject *)p_aiState->klass;
      if ( p_aiState->klass )
      {
        AiState__Initialize((AiState_o *)Item, monitor[5], 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B86614(Item, v27);
  }
  v32 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_19989/*"id"*/,
           (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v32 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v32->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v33, v34);
    goto LABEL_16;
  }
LABEL_21:
  sub_1B868D4(Item);
  BattleFieldData_AiField___ctor(v40, v41);
}


System_Double_array *__fastcall BattleFieldData__getAiParam(
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
  if ( (byte_4A50CD9 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1B863B8(&double___TypeInfo, bData);
    byte_4A50CD9 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1B86460(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)turn;
          goto LABEL_25;
        }
        goto LABEL_27;
      }
LABEL_26:
      sub_1B86614(this, bData);
    }
    if ( param != 16 )
      return v11->fields.wkZeroParam;
    goto LABEL_15;
  }
  if ( param == 17 )
  {
LABEL_15:
    aiField = v11->fields.aiField;
    if ( !aiField || !bData )
      goto LABEL_26;
    RaidInfo = BattleData__getRaidInfo(bData, aiField->fields.day, 0LL);
    if ( RaidInfo )
    {
      v18 = RaidInfo;
      this = (BattleFieldData_o *)sub_1B86460(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_1B8661C(this, bData);
      }
      goto LABEL_26;
    }
    return v11->fields.wkZeroParam;
  }
  if ( param != 18 )
    return v11->fields.wkZeroParam;
  v12 = v11->fields.aiField;
  if ( !v12 || !bData )
    goto LABEL_26;
  v13 = BattleData__getRaidInfo(bData, v12->fields.day, 0LL);
  if ( !v13 )
    return v11->fields.wkZeroParam;
  v14 = v13;
  this = (BattleFieldData_o *)sub_1B86460(double___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  if ( !LODWORD(this->fields.aiState) )
    goto LABEL_27;
  totalDamage = (double)v14->fields.totalDamage;
LABEL_25:
  *(double *)&this->fields.aiField = totalDamage;
  return (System_Double_array *)this;
}


AiState_o *__fastcall BattleFieldData__getAiState(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.aiState;
}


int32_t __fastcall BattleFieldData__getIndex(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


BattleFieldData_SaveData_o *__fastcall BattleFieldData__getSaveData(BattleFieldData_o *this, const MethodInfo *method)
{
  AiState_o *aiState; // x0
  struct BattleFieldData_SaveData_o *tmpsave; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0LL), !tmpsave) )
    sub_1B86614(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1B8635C((CGThumbnailListItem_o *)&tmpsave->fields, (int32_t)aiState, v5, v6);
  return this->fields.tmpsave;
}


int32_t __fastcall BattleFieldData__getUniqueID(BattleFieldData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


bool __fastcall BattleFieldData__isAiTarget(
        BattleFieldData_o *this,
        ConditionsInformation_CheckInfo_o *info,
        System_Int64_array *indiv,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleFieldData__setSaveData(
        BattleFieldData_o *this,
        BattleFieldData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save || (this = (BattleFieldData_o *)this->fields.aiState) == 0LL )
    sub_1B86614(this, save);
  AiState__setSaveData((AiState_o *)this, save->fields.aistateSave, 0LL);
}


void __fastcall BattleFieldData_AiField___ctor(BattleFieldData_AiField_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldData_SaveData___ctor(BattleFieldData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}