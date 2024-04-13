void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleFieldData_SaveData_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Double_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E78A8 & 1) == 0 )
  {
    sub_B5D5C4(&double___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleFieldData_SaveData_TypeInfo, v5, v6, v7);
    byte_42E78A8 = 1;
  }
  v8 = (BattleFieldData_SaveData_o *)sub_B5D694(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v8, 0LL);
  this->fields.tmpsave = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct System_Double_array *)sub_B5D5DC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldData___ctor_23350192(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  BattleFieldData_SaveData_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_Double_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleFieldData_AiField_o *v48; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v57; // x1
  __int64 v58; // x9
  struct BattleFieldData_AiField_o *v59; // x23
  struct BattleFieldData_AiField_o *v60; // x21
  AiState_o *v61; // x20
  BattleServantConfConponent_o *p_aiState; // x19
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  _DWORD *monitor; // x8
  BattleFieldData_o *v70; // x0
  const MethodInfo *v71; // x1

  if ( (byte_42E78A9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleFieldData_AiField_TypeInfo, inIndex, (_DWORD)obj, method);
    sub_B5D5C4(&AiState_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&double___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&long_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&BattleFieldData_SaveData_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_21967/*"raid"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19625/*"id"*/, v31, v32, v33);
    byte_42E78A9 = 1;
  }
  v34 = (BattleFieldData_SaveData_o *)sub_B5D694(BattleFieldData_SaveData_TypeInfo);
  BattleFieldData_SaveData___ctor(v34, 0LL);
  this->fields.tmpsave = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (struct System_Double_array *)sub_B5D5DC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v48 = (BattleFieldData_AiField_o *)sub_B5D694(BattleFieldData_AiField_TypeInfo);
  BattleFieldData_AiField___ctor(v48, 0LL);
  p_aiField = &this->fields.aiField;
  this->fields.aiField = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiField,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !obj )
    goto LABEL_19;
  v58 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v58
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v58 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B5D990(obj);
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21967/*"raid"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v59 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
             (System_Type_o *)StringLiteral_21967/*"raid"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v59 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v59->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19625/*"id"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v61 = (AiState_o *)sub_B5D694(AiState_TypeInfo);
    AiState___ctor(v61, 0LL);
    this->fields.aiState = v61;
    p_aiState = (BattleServantConfConponent_o *)&this->fields.aiState;
    sub_B5D560(p_aiState, (System_Int32_array **)v61, v63, v64, v65, v66, v67, v68);
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
    sub_B5D69C(Item, v57);
  }
  v60 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19625/*"id"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v60 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v60->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    goto LABEL_16;
  }
LABEL_21:
  v70 = (BattleFieldData_o *)sub_B5D990(Item);
  BattleFieldData__getUniqueID(v70, v71);
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
  __int64 v19; // x0

  v11 = this;
  if ( (byte_42E78AA & 1) == 0 )
  {
    this = (BattleFieldData_o *)sub_B5D5C4(&double___TypeInfo, (_DWORD)bData, param, *(_QWORD *)&turn);
    byte_42E78AA = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      this = (BattleFieldData_o *)sub_B5D5DC(double___TypeInfo, 1LL);
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
      sub_B5D69C(this, bData);
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
      this = (BattleFieldData_o *)sub_B5D5DC(double___TypeInfo, 1LL);
      if ( this )
      {
        if ( LODWORD(this->fields.aiState) )
        {
          totalDamage = (double)(v18->fields.maxHp - v18->fields.totalDamage) * 1000.0 / (double)v18->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
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
  this = (BattleFieldData_o *)sub_B5D5DC(double___TypeInfo, 1LL);
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
    sub_B5D69C(aiState, method);
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)aiState;
  sub_B5D560((BattleServantConfConponent_o *)&tmpsave->fields, (System_Int32_array **)aiState, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(this, save);
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