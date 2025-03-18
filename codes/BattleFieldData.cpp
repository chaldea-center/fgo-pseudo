void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Double_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C246CE & 1) == 0 )
  {
    sub_1C3B764(&double___TypeInfo, method);
    sub_1C3B764(&BattleFieldData_SaveData_TypeInfo, v3);
    byte_4C246CE = 1;
  }
  v4 = (Il2CppObject *)sub_1C3B9B0(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tmpsave, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Double_array *)sub_1C3B80C(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v11;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.wkZeroParam, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_44323864(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Double_array *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *Item; // x0
  __int64 v39; // x1
  __int64 methodPtr_low; // x9
  struct BattleFieldData_AiField_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  struct BattleFieldData_AiField_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  AiState_o *v47; // x20
  PartyOrganizationUtility_o *p_aiState; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  _DWORD *monitor; // x8
  BattleFieldData_AiField_o *v56; // x0
  const MethodInfo *v57; // x1

  if ( (byte_4C246CF & 1) == 0 )
  {
    sub_1C3B764(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_1C3B764(&AiState_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1C3B764(&double___TypeInfo, v11);
    sub_1C3B764(&long_TypeInfo, v12);
    sub_1C3B764(&BattleFieldData_SaveData_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_23228/*"storeName"*/, v14);
    sub_1C3B764(&StringLiteral_20601/*"java/lang/Boolean"*/, v15);
    byte_4C246CF = 1;
  }
  v16 = (Il2CppObject *)sub_1C3B9B0(BattleFieldData_SaveData_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields.tmpsave = (struct BattleFieldData_SaveData_o *)v16;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tmpsave, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (struct System_Double_array *)sub_1C3B80C(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.wkZeroParam, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v30 = (Il2CppObject *)sub_1C3B9B0(BattleFieldData_AiField_TypeInfo);
  System_Object___ctor(v30, 0LL);
  this->fields.aiField = (struct BattleFieldData_AiField_o *)v30;
  p_aiField = &this->fields.aiField;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.aiField, (int64_t)v30, v32, v33, v34, v35, v36, v37);
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
         (Il2CppObject *)StringLiteral_23228/*"storeName"*/,
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v41 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)obj,
             (Il2CppObject *)StringLiteral_23228/*"storeName"*/,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v41 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v41->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v42, v43);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)obj,
          (Il2CppObject *)StringLiteral_20601/*"java/lang/Boolean"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v47 = (AiState_o *)sub_1C3B9B0(AiState_TypeInfo);
    AiState___ctor(v47, 0LL);
    this->fields.aiState = v47;
    p_aiState = (PartyOrganizationUtility_o *)&this->fields.aiState;
    sub_1C3B708(p_aiState, (int64_t)v47, v49, v50, v51, v52, v53, v54);
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
    sub_1C3B9C0(Item, v39);
  }
  v44 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20601/*"java/lang/Boolean"*/,
           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v44 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v44->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v45, v46);
    goto LABEL_16;
  }
LABEL_21:
  sub_1C3BC80(Item);
  BattleFieldData_AiField___ctor(v56, v57);
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
  if ( (byte_4C246D0 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_1C3B764(&double___TypeInfo, bData);
    byte_4C246D0 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_1C3B80C(double___TypeInfo, 1LL);
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
      sub_1C3B9C0(this, bData);
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
      this = (BattleFieldData_o *)sub_1C3B80C(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_1C3B9C8(this, bData);
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
  this = (BattleFieldData_o *)sub_1C3B80C(double___TypeInfo, 1LL);
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
    sub_1C3B9C0(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_1C3B708((PartyOrganizationUtility_o *)&tmpsave->fields, (int64_t)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_1C3B9C0(this, save);
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