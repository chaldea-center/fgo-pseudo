void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleFieldData_SaveData_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Double_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421354D & 1) == 0 )
  {
    sub_B0D8A4(&double___TypeInfo, method);
    sub_B0D8A4(&BattleFieldData_SaveData_TypeInfo, v4);
    byte_421354D = 1;
  }
  v5 = (BattleFieldData_SaveData_o *)sub_B0D974(BattleFieldData_SaveData_TypeInfo, method, v2);
  BattleFieldData_SaveData___ctor(v5, 0LL);
  this->fields.tmpsave = v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tmpsave, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_Double_array *)sub_B0D8BC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_22240152(
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
  BattleFieldData_SaveData_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Double_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  BattleFieldData_AiField_o *v32; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v41; // x9
  struct BattleFieldData_AiField_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  struct BattleFieldData_AiField_o *v45; // x21
  AiState_o *v46; // x20
  BattleServantConfConponent_o *p_aiState; // x19
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _DWORD *monitor; // x8
  BattleFieldData_o *v55; // x0
  const MethodInfo *v56; // x1

  if ( (byte_421354E & 1) == 0 )
  {
    sub_B0D8A4(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_B0D8A4(&AiState_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B0D8A4(&double___TypeInfo, v11);
    sub_B0D8A4(&long_TypeInfo, v12);
    sub_B0D8A4(&BattleFieldData_SaveData_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_21744/*"raid"*/, v14);
    sub_B0D8A4(&StringLiteral_19442/*"id"*/, v15);
    byte_421354E = 1;
  }
  v16 = (BattleFieldData_SaveData_o *)sub_B0D974(BattleFieldData_SaveData_TypeInfo, *(_QWORD *)&inIndex, obj);
  BattleFieldData_SaveData___ctor(v16, 0LL);
  this->fields.tmpsave = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct System_Double_array *)sub_B0D8BC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v32 = (BattleFieldData_AiField_o *)sub_B0D974(BattleFieldData_AiField_TypeInfo, v30, v31);
  BattleFieldData_AiField___ctor(v32, 0LL);
  p_aiField = &this->fields.aiField;
  this->fields.aiField = v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiField,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !obj )
    goto LABEL_19;
  v41 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v41
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v41 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B0DC70(obj);
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21744/*"raid"*/,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v42 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
             (System_Type_o *)StringLiteral_21744/*"raid"*/,
             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v42 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v42->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19442/*"id"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v46 = (AiState_o *)sub_B0D974(AiState_TypeInfo, v43, v44);
    AiState___ctor(v46, 0LL);
    this->fields.aiState = v46;
    p_aiState = (BattleServantConfConponent_o *)&this->fields.aiState;
    sub_B0D840(p_aiState, (System_Int32_array **)v46, v48, v49, v50, v51, v52, v53);
    monitor = p_aiState->monitor;
    if ( monitor )
    {
      Item = (UnityEngine_Purchasing_IStoreExtension_o *)p_aiState->klass;
      if ( p_aiState->klass )
      {
        AiState__Initialize((AiState_o *)Item, monitor[5], 0LL);
        return;
      }
    }
LABEL_19:
    sub_B0D97C(Item);
  }
  v45 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19442/*"id"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v45 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v45->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    goto LABEL_16;
  }
LABEL_21:
  v55 = (BattleFieldData_o *)sub_B0DC70(Item);
  BattleFieldData__getUniqueID(v55, v56);
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
  __int64 v19; // x0

  v11 = this;
  if ( (byte_421354F & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_B0D8A4(&double___TypeInfo, bData);
    byte_421354F = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_B0D8BC(double___TypeInfo, 1LL);
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
      sub_B0D97C(this);
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
      this = (BattleFieldData_o *)sub_B0D8BC(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        v19 = sub_B0D9A8(this);
        sub_B0D948(v19, 0LL);
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
  this = (BattleFieldData_o *)sub_B0D8BC(double___TypeInfo, 1LL);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  aiState = this->fields.aiState;
  if ( !aiState || (tmpsave = this->fields.tmpsave, aiState = (AiState_o *)AiState__getSaveData(aiState, 0LL), !tmpsave) )
    sub_B0D97C(aiState);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_B0D840((BattleServantConfConponent_o *)&tmpsave->fields, (System_Int32_array **)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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