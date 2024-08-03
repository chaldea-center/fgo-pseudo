void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Double_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FE980 & 1) == 0 )
  {
    sub_1B640C8(&double___TypeInfo, method);
    sub_1B640C8(&BattleFieldData_SaveData_TypeInfo, v4);
    byte_49FE980 = 1;
  }
  v5 = (Il2CppObject *)sub_1B64314(BattleFieldData_SaveData_TypeInfo, method, v2);
  System_Object___ctor(v5, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tmpsave, (int32_t)v5, v6, v7);
  v8 = (struct System_Double_array *)sub_1B64170(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wkZeroParam, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_42399008(
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
  int32_t v18; // w3
  struct System_Double_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  struct BattleFieldData_AiField_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x1
  __int64 v34; // x2
  struct BattleFieldData_AiField_o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  AiState_o *v38; // x20
  ServantStatusBattleListViewItem_o *p_aiState; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_49FE981 & 1) == 0 )
  {
    sub_1B640C8(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_1B640C8(&AiState_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B640C8(&double___TypeInfo, v11);
    sub_1B640C8(&long_TypeInfo, v12);
    sub_1B640C8(&BattleFieldData_SaveData_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_22663/*"raid"*/, v14);
    sub_1B640C8(&StringLiteral_20120/*"id"*/, v15);
    byte_49FE981 = 1;
  }
  v16 = (Il2CppObject *)sub_1B64314(BattleFieldData_SaveData_TypeInfo, *(_QWORD *)&inIndex, obj);
  System_Object___ctor(v16, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tmpsave, (int32_t)v16, v17, v18);
  v19 = (struct System_Double_array *)sub_1B64170(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wkZeroParam, (int32_t)v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v24 = (Il2CppObject *)sub_1B64314(BattleFieldData_AiField_TypeInfo, v22, v23);
  System_Object___ctor(v24, 0LL);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v24;
  p_aiField = &this->fields.aiField;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiField, (int32_t)v24, v26, v27);
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
         (Il2CppObject *)StringLiteral_22663/*"raid"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v30 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_22663/*"raid"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v30 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v30->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v31, v32);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_20120/*"id"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v38 = (AiState_o *)sub_1B64314(AiState_TypeInfo, v33, v34);
    AiState___ctor(v38, 0LL);
    this->fields.aiState = v38;
    p_aiState = (ServantStatusBattleListViewItem_o *)&this->fields.aiState;
    sub_1B6406C(p_aiState, (int32_t)v38, v40, v41);
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
    sub_1B64324(Item);
  }
  v35 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20120/*"id"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v35 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v35->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v36, v37);
    goto LABEL_16;
  }
LABEL_21:
  sub_1B645E4(Item);
  BattleFieldData_AiField___ctor(v43, v44);
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
  __int64 v15; // x1
  double totalDamage; // d0
  struct BattleFieldData_AiField_o *aiField; // x8
  BattleRaidInfo_o *RaidInfo; // x0
  BattleRaidInfo_o *v19; // x20

  v11 = this;
  if ( (byte_49FE982 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1B640C8(&double___TypeInfo, bData);
    byte_49FE982 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1B64170(double___TypeInfo, 1LL);
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
      sub_1B64324(this);
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
      v19 = RaidInfo;
      this = (BattleFieldData_o *)sub_1B64170(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v19->fields.maxHp - v19->fields.totalDamage) * 1000.0 / (double)v19->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_1B6432C(this, v15);
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
  this = (BattleFieldData_o *)sub_1B64170(double___TypeInfo, 1LL);
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
    sub_1B64324(aiState);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&tmpsave->fields, (int32_t)aiState, v5, v6);
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
    sub_1B64324(this);
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