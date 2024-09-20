void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_Double_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D728 & 1) == 0 )
  {
    sub_1B885B0(&double___TypeInfo);
    sub_1B885B0(&BattleFieldData_SaveData_TypeInfo);
    byte_4A5D728 = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tmpsave, (int32_t)v3, v4, v5);
  v6 = (struct System_Double_array *)sub_1B88658(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wkZeroParam, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldData___ctor_42749852(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Double_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  struct BattleFieldData_AiField_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  struct BattleFieldData_AiField_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  AiState_o *v26; // x20
  ServantStatusBattleListViewItem_o *p_aiState; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_4A5D729 & 1) == 0 )
  {
    sub_1B885B0(&BattleFieldData_AiField_TypeInfo);
    sub_1B885B0(&AiState_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&double___TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&BattleFieldData_SaveData_TypeInfo);
    sub_1B885B0(&StringLiteral_22756/*"raid"*/);
    sub_1B885B0(&StringLiteral_20200/*"id"*/);
    byte_4A5D729 = 1;
  }
  v7 = (Il2CppObject *)sub_1B887FC(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tmpsave, (int32_t)v7, v8, v9);
  v10 = (struct System_Double_array *)sub_1B88658(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wkZeroParam, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v13 = (Il2CppObject *)sub_1B887FC(BattleFieldData_AiField_TypeInfo);
  System_Object___ctor(v13, 0LL);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v13;
  p_aiField = &this->fields.aiField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiField, (int32_t)v13, v15, v16);
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
         (Il2CppObject *)StringLiteral_22756/*"raid"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v20 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_22756/*"raid"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v20 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v20->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_20200/*"id"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v26 = (AiState_o *)sub_1B887FC(AiState_TypeInfo);
    AiState___ctor(v26, 0LL);
    this->fields.aiState = v26;
    p_aiState = (ServantStatusBattleListViewItem_o *)&this->fields.aiState;
    sub_1B88554(p_aiState, (int32_t)v26, v28, v29);
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
    sub_1B8880C(Item, v18);
  }
  v23 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20200/*"id"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v23 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v23->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v24, v25);
    goto LABEL_16;
  }
LABEL_21:
  sub_1B88ACC(Item);
  BattleFieldData_AiField___ctor(v31, v32);
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
  if ( (byte_4A5D72A & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1B885B0(&double___TypeInfo);
    byte_4A5D72A = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1B88658(double___TypeInfo, 1LL);
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
      sub_1B8880C(this, bData);
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
      this = (BattleFieldData_o *)sub_1B88658(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_1B88814(this, bData);
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
  this = (BattleFieldData_o *)sub_1B88658(double___TypeInfo, 1LL);
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
  int32_t v6; // w3

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0LL), !tmpsave) )
    sub_1B8880C(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&tmpsave->fields, (int32_t)aiState, v5, v6);
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
    sub_1B8880C(this, save);
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