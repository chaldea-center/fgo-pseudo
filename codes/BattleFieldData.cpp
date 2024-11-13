void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Double_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1880E & 1) == 0 )
  {
    sub_1BCA7E0(&double___TypeInfo, method, v2);
    sub_1BCA7E0(&BattleFieldData_SaveData_TypeInfo, v5, v6);
    byte_4B1880E = 1;
  }
  v7 = (Il2CppObject *)sub_1BCAA2C(BattleFieldData_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor(v7, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmpsave, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (struct System_Double_array *)sub_1BCA888(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wkZeroParam, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_43512412(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Double_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *Item; // x0
  __int64 v51; // x1
  __int64 methodPtr_low; // x9
  struct BattleFieldData_AiField_o *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  struct BattleFieldData_AiField_o *v59; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  AiState_o *v62; // x20
  PartyOrganizationUtility_o *p_aiState; // x19
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v71; // x0
  const MethodInfo *v72; // x1

  if ( (byte_4B1880F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex, obj);
    sub_1BCA7E0(&AiState_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&double___TypeInfo, v15, v16);
    sub_1BCA7E0(&long_TypeInfo, v17, v18);
    sub_1BCA7E0(&BattleFieldData_SaveData_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_23000/*"raid"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20414/*"id"*/, v23, v24);
    byte_4B1880F = 1;
  }
  v25 = (Il2CppObject *)sub_1BCAA2C(BattleFieldData_SaveData_TypeInfo, *(_QWORD *)&inIndex, obj, method);
  System_Object___ctor(v25, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmpsave, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (struct System_Double_array *)sub_1BCA888(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wkZeroParam, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v42 = (Il2CppObject *)sub_1BCAA2C(BattleFieldData_AiField_TypeInfo, v39, v40, v41);
  System_Object___ctor(v42, 0LL);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v42;
  p_aiField = &this->fields.aiField;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aiField, (int64_t)v42, v44, v45, v46, v47, v48, v49);
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
         (Il2CppObject *)StringLiteral_23000/*"raid"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v53 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_23000/*"raid"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v53 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v53->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v54, v55);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_20414/*"id"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v62 = (AiState_o *)sub_1BCAA2C(AiState_TypeInfo, v56, v57, v58);
    AiState___ctor(v62, 0LL);
    this->fields.aiState = v62;
    p_aiState = (PartyOrganizationUtility_o *)&this->fields.aiState;
    sub_1BCA784(p_aiState, (int64_t)v62, v64, v65, v66, v67, v68, v69);
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
    sub_1BCAA3C(Item, v51);
  }
  v59 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20414/*"id"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v59 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v59->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v60, v61);
    goto LABEL_16;
  }
LABEL_21:
  sub_1BCACFC(Item);
  BattleFieldData_AiField___ctor(v71, v72);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B18810 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1BCA7E0(&double___TypeInfo, bData, *(_QWORD *)&param);
    byte_4B18810 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1BCA888(double___TypeInfo, 1LL);
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
      sub_1BCAA3C(this, bData);
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
      this = (BattleFieldData_o *)sub_1BCA888(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_1BCAA44(this, bData);
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
  this = (BattleFieldData_o *)sub_1BCA888(double___TypeInfo, 1LL);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0LL), !tmpsave) )
    sub_1BCAA3C(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1BCA784((PartyOrganizationUtility_o *)&tmpsave->fields, (int64_t)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, save);
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