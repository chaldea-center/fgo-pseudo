void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleFieldData_SaveData_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Double_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186924 & 1) == 0 )
  {
    sub_B2C35C(&double___TypeInfo, method);
    sub_B2C35C(&BattleFieldData_SaveData_TypeInfo, v3);
    byte_4186924 = 1;
  }
  v4 = (BattleFieldData_SaveData_o *)sub_B2C42C(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v4, 0LL);
  this->fields.tmpsave = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tmpsave, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Double_array *)sub_B2C374(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_23075832(
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
  BattleFieldData_AiField_o *v30; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v39; // x1
  __int64 v40; // x9
  struct BattleFieldData_AiField_o *v41; // x23
  struct BattleFieldData_AiField_o *v42; // x21
  AiState_o *v43; // x20
  BattleServantConfConponent_o *p_aiState; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  _DWORD *monitor; // x8
  BattleFieldData_o *v52; // x0
  const MethodInfo *v53; // x1

  if ( (byte_4186925 & 1) == 0 )
  {
    sub_B2C35C(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_B2C35C(&AiState_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B2C35C(&double___TypeInfo, v11);
    sub_B2C35C(&long_TypeInfo, v12);
    sub_B2C35C(&BattleFieldData_SaveData_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_21674/*"raid"*/, v14);
    sub_B2C35C(&StringLiteral_19381/*"id"*/, v15);
    byte_4186925 = 1;
  }
  v16 = (BattleFieldData_SaveData_o *)sub_B2C42C(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v16, 0LL);
  this->fields.tmpsave = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct System_Double_array *)sub_B2C374(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v23;
  sub_B2C2F8(
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
  v30 = (BattleFieldData_AiField_o *)sub_B2C42C(BattleFieldData_AiField_TypeInfo);
  BattleFieldData_AiField___ctor(v30, 0LL);
  p_aiField = &this->fields.aiField;
  this->fields.aiField = v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiField,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !obj )
    goto LABEL_19;
  v40 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v40
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v40 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B2C728(obj);
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21674/*"raid"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v41 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
             (System_Type_o *)StringLiteral_21674/*"raid"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v41 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v41->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19381/*"id"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v43 = (AiState_o *)sub_B2C42C(AiState_TypeInfo);
    AiState___ctor(v43, 0LL);
    this->fields.aiState = v43;
    p_aiState = (BattleServantConfConponent_o *)&this->fields.aiState;
    sub_B2C2F8(p_aiState, (System_Int32_array **)v43, v45, v46, v47, v48, v49, v50);
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
    sub_B2C434(Item, v39);
  }
  v42 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19381/*"id"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v42 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v42->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    goto LABEL_16;
  }
LABEL_21:
  v52 = (BattleFieldData_o *)sub_B2C728(Item);
  BattleFieldData__getUniqueID(v52, v53);
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
  if ( (byte_4186926 & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_B2C35C(&double___TypeInfo, bData);
    byte_4186926 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_B2C374(double___TypeInfo, 1LL);
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
      sub_B2C434(this, bData);
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
      this = (BattleFieldData_o *)sub_B2C374(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        v19 = sub_B2C460(this);
        sub_B2C400(v19, 0LL);
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
  this = (BattleFieldData_o *)sub_B2C374(double___TypeInfo, 1LL);
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
    sub_B2C434(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_B2C2F8((BattleServantConfConponent_o *)&tmpsave->fields, (System_Int32_array **)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_B2C434(this, save);
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