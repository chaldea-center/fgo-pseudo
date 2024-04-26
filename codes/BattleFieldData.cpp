void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  BattleFieldData_SaveData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Double_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_435061E & 1) == 0 )
  {
    sub_B70694(&double___TypeInfo);
    sub_B70694(&BattleFieldData_SaveData_TypeInfo);
    byte_435061E = 1;
  }
  v3 = (BattleFieldData_SaveData_o *)sub_B70764(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v3, 0LL);
  this->fields.tmpsave = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.tmpsave, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_Double_array *)sub_B706AC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldData___ctor_22745196(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  BattleFieldData_SaveData_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Double_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleFieldData_AiField_o *v21; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v30; // x1
  __int64 v31; // x9
  struct BattleFieldData_AiField_o *v32; // x23
  struct BattleFieldData_AiField_o *v33; // x21
  AiState_o *v34; // x20
  BattleServantConfConponent_o *p_aiState; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  _DWORD *monitor; // x8
  BattleFieldData_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_435061F & 1) == 0 )
  {
    sub_B70694(&BattleFieldData_AiField_TypeInfo);
    sub_B70694(&AiState_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&double___TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&BattleFieldData_SaveData_TypeInfo);
    sub_B70694(&StringLiteral_22034/*"raid"*/);
    sub_B70694(&StringLiteral_19684/*"id"*/);
    byte_435061F = 1;
  }
  v7 = (BattleFieldData_SaveData_o *)sub_B70764(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v7, 0LL);
  this->fields.tmpsave = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct System_Double_array *)sub_B706AC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v21 = (BattleFieldData_AiField_o *)sub_B70764(BattleFieldData_AiField_TypeInfo);
  BattleFieldData_AiField___ctor(v21, 0LL);
  p_aiField = &this->fields.aiField;
  this->fields.aiField = v21;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.aiField,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !obj )
    goto LABEL_19;
  v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v31
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B70A60(obj);
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22034/*"raid"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v32 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
             (System_Type_o *)StringLiteral_22034/*"raid"*/,
             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v32 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v32->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19684/*"id"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v34 = (AiState_o *)sub_B70764(AiState_TypeInfo);
    AiState___ctor(v34, 0LL);
    this->fields.aiState = v34;
    p_aiState = (BattleServantConfConponent_o *)&this->fields.aiState;
    sub_B70630(p_aiState, (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
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
    sub_B7076C(Item, v30);
  }
  v33 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19684/*"id"*/,
           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v33 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v33->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    goto LABEL_16;
  }
LABEL_21:
  v43 = (BattleFieldData_o *)sub_B70A60(Item);
  BattleFieldData__getUniqueID(v43, v44);
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
  if ( (byte_4350620 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_B70694(&double___TypeInfo);
    byte_4350620 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_B706AC(double___TypeInfo, 1LL);
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
      sub_B7076C(this, bData);
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
      this = (BattleFieldData_o *)sub_B706AC(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        v19 = sub_B70798(this);
        sub_B70738(v19, 0LL);
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
  this = (BattleFieldData_o *)sub_B706AC(double___TypeInfo, 1LL);
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
    sub_B7076C(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_B70630((BattleServantConfConponent_o *)&tmpsave->fields, (System_Int32_array **)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_B7076C(this, save);
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