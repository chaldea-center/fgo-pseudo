void BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Double_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C29D59 & 1) == 0 )
  {
    sub_1C2D490(&double___TypeInfo);
    sub_1C2D490(&BattleFieldData_SaveData_TypeInfo);
    byte_4C29D59 = 1;
  }
  v3 = (Il2CppObject *)sub_1C2D6DC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tmpsave, (int32_t)v3, v4, v5);
  v6 = (struct System_Double_array *)sub_1C2D538(double___TypeInfo, 1);
  this->fields.wkZeroParam = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.wkZeroParam, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldData___ctor_45822392(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Double_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  __int64 naturalAligment; // x9
  struct BattleFieldData_AiField_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  struct BattleFieldData_AiField_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  AiState_o *v26; // x20
  CGThumbnailListItem_o *p_aiState; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_4C29D5A & 1) == 0 )
  {
    sub_1C2D490(&BattleFieldData_AiField_TypeInfo);
    sub_1C2D490(&AiState_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&double___TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&BattleFieldData_SaveData_TypeInfo);
    sub_1C2D490(&StringLiteral_22912/*"raid"*/);
    sub_1C2D490(&StringLiteral_20239/*"id"*/);
    byte_4C29D5A = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v7, 0);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tmpsave, (int32_t)v7, v8, v9);
  v10 = (struct System_Double_array *)sub_1C2D538(double___TypeInfo, 1);
  this->fields.wkZeroParam = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.wkZeroParam, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v13 = (Il2CppObject *)sub_1C2D6DC(BattleFieldData_AiField_TypeInfo);
  System_Object___ctor(v13, 0);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v13;
  p_aiField = &this->fields.aiField;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiField, (int32_t)v13, v15, v16);
  if ( !obj )
    goto LABEL_19;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = obj;
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)obj,
         (Il2CppObject *)StringLiteral_22912/*"raid"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v20 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_22912/*"raid"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v20 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v20->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_20239/*"id"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v26 = (AiState_o *)sub_1C2D6DC(AiState_TypeInfo);
    AiState___ctor(v26, 0);
    this->fields.aiState = v26;
    p_aiState = (CGThumbnailListItem_o *)&this->fields.aiState;
    sub_1C2D434(p_aiState, (int32_t)v26, v28, v29);
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
    sub_1C2D6EC(Item, v18);
  }
  v23 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20239/*"id"*/,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v23 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v23->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v24, v25);
    goto LABEL_16;
  }
LABEL_21:
  sub_1C2D9AC(Item);
  BattleFieldData_AiField___ctor(v31, v32);
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
  __int64 v15; // x2
  double totalDamage; // d0
  struct BattleFieldData_AiField_o *aiField; // x8
  BattleRaidInfo_o *RaidInfo; // x0
  BattleRaidInfo_o *v19; // x20

  v11 = this;
  if ( (byte_4C29D5B & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1C2D490(&double___TypeInfo);
    byte_4C29D5B = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1C2D538(double___TypeInfo, 1);
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
      v19 = RaidInfo;
      this = (BattleFieldData_o *)sub_1C2D538(double___TypeInfo, 1);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v19->fields.maxHp - v19->fields.totalDamage) * 1000.0 / (double)v19->fields.maxHp;
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
      this = (BattleFieldData_o *)sub_1C2D538(double___TypeInfo, 1);
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
        sub_1C2D6F4(this, bData, v15);
      }
LABEL_26:
      sub_1C2D6EC(this, bData);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0), !tmpsave) )
    sub_1C2D6EC(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1C2D434((CGThumbnailListItem_o *)&tmpsave->fields, (int32_t)aiState, v5, v6);
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
    sub_1C2D6EC(this, save);
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