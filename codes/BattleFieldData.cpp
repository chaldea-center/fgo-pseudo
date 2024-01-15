void __fastcall BattleFieldData___ctor(BattleFieldData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattleFieldData_SaveData_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  struct System_Double_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D52 & 1) == 0 )
  {
    sub_B16FFC(&double___TypeInfo, method);
    sub_B16FFC(&BattleFieldData_SaveData_TypeInfo, v6);
    byte_40F8D52 = 1;
  }
  v7 = (BattleFieldData_SaveData_o *)sub_B170CC(BattleFieldData_SaveData_TypeInfo, method, v2, v3, v4);
  BattleFieldData_SaveData___ctor(v7, 0LL);
  this->fields.tmpsave = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = (struct System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v14);
  this->fields.wkZeroParam = v15;
  sub_B16F98(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldData___ctor_23083972(
        BattleFieldData_o *this,
        int32_t inIndex,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  BattleFieldData_SaveData_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct System_Double_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  BattleFieldData_AiField_o *v36; // x22
  struct BattleFieldData_AiField_o **p_aiField; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x9
  struct BattleFieldData_AiField_o *v45; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct BattleFieldData_AiField_o *v51; // x21
  AiState_o *v52; // x20
  BattleServantConfConponent_o *p_aiState; // x19
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  _DWORD *monitor; // x8
  BattleFieldData_o *v61; // x0
  const MethodInfo *v62; // x1

  if ( (byte_40F8D53 & 1) == 0 )
  {
    sub_B16FFC(&BattleFieldData_AiField_TypeInfo, *(_QWORD *)&inIndex);
    sub_B16FFC(&AiState_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&double___TypeInfo, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&BattleFieldData_SaveData_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21582/*"raid"*/, v15);
    sub_B16FFC(&StringLiteral_19307/*"id"*/, v16);
    byte_40F8D53 = 1;
  }
  v17 = (BattleFieldData_SaveData_o *)sub_B170CC(
                                        BattleFieldData_SaveData_TypeInfo,
                                        *(_QWORD *)&inIndex,
                                        obj,
                                        method,
                                        v4);
  BattleFieldData_SaveData___ctor(v17, 0LL);
  this->fields.tmpsave = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmpsave,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (struct System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v24);
  this->fields.wkZeroParam = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wkZeroParam,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = inIndex;
  this->fields.uniqueId = -1;
  v36 = (BattleFieldData_AiField_o *)sub_B170CC(BattleFieldData_AiField_TypeInfo, v32, v33, v34, v35);
  BattleFieldData_AiField___ctor(v36, 0LL);
  p_aiField = &this->fields.aiField;
  this->fields.aiField = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiField,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !obj )
    goto LABEL_19;
  v44 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v44
    || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v44 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B173C8(obj);
    goto LABEL_21;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21582/*"raid"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v45 = *p_aiField;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
             (System_Type_o *)StringLiteral_21582/*"raid"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v45 || !Item )
      goto LABEL_19;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_21;
    v45->fields.day = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)obj,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19307/*"id"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    v52 = (AiState_o *)sub_B170CC(AiState_TypeInfo, v47, v48, v49, v50);
    AiState___ctor(v52, 0LL);
    this->fields.aiState = v52;
    p_aiState = (BattleServantConfConponent_o *)&this->fields.aiState;
    sub_B16F98(p_aiState, (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
    monitor = p_aiState->monitor;
    if ( monitor && p_aiState->klass )
    {
      AiState__Initialize((AiState_o *)p_aiState->klass, monitor[5], 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
  v51 = *p_aiField;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19307/*"id"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v51 || !Item )
    goto LABEL_19;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v51->fields.id = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    goto LABEL_16;
  }
LABEL_21:
  v61 = (BattleFieldData_o *)sub_B173C8(Item);
  BattleFieldData__getUniqueID(v61, v62);
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
  struct BattleFieldData_AiField_o *v12; // x8
  BattleRaidInfo_o *v13; // x0
  __int64 v14; // x2
  BattleRaidInfo_o *v15; // x20
  System_Double_array *result; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  double totalDamage; // d0
  struct BattleFieldData_AiField_o *aiField; // x8
  BattleRaidInfo_o *RaidInfo; // x0
  __int64 v22; // x2
  BattleRaidInfo_o *v23; // x20

  if ( (byte_40F8D54 & 1) == 0 )
  {
    sub_B16FFC(&double___TypeInfo, bData);
    byte_40F8D54 = 1;
  }
  if ( param <= 16 )
  {
    if ( param == 1 )
    {
      result = (System_Double_array *)sub_B17014(double___TypeInfo, 1LL, *(_QWORD *)&param);
      if ( result )
      {
        if ( result->max_length )
        {
          totalDamage = (double)turn;
          goto LABEL_25;
        }
        goto LABEL_27;
      }
LABEL_26:
      sub_B170D4();
    }
    if ( param != 16 )
      return this->fields.wkZeroParam;
    goto LABEL_15;
  }
  if ( param == 17 )
  {
LABEL_15:
    aiField = this->fields.aiField;
    if ( !aiField || !bData )
      goto LABEL_26;
    RaidInfo = BattleData__getRaidInfo(bData, aiField->fields.day, 0LL);
    if ( RaidInfo )
    {
      v23 = RaidInfo;
      result = (System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v22);
      if ( result )
      {
        if ( result->max_length )
        {
          totalDamage = (double)(v23->fields.maxHp - v23->fields.totalDamage) * 1000.0 / (double)v23->fields.maxHp;
          goto LABEL_25;
        }
LABEL_27:
        sub_B17100(result, v17, v18);
        sub_B170A0();
      }
      goto LABEL_26;
    }
    return this->fields.wkZeroParam;
  }
  if ( param != 18 )
    return this->fields.wkZeroParam;
  v12 = this->fields.aiField;
  if ( !v12 || !bData )
    goto LABEL_26;
  v13 = BattleData__getRaidInfo(bData, v12->fields.day, 0LL);
  if ( !v13 )
    return this->fields.wkZeroParam;
  v15 = v13;
  result = (System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v14);
  if ( !result )
    goto LABEL_26;
  if ( !result->max_length )
    goto LABEL_27;
  totalDamage = (double)v15->fields.totalDamage;
LABEL_25:
  result->m_Items[0] = totalDamage;
  return result;
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
  System_Int32_array **SaveData; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  aiState = this->fields.aiState;
  if ( !aiState
    || (tmpsave = this->fields.tmpsave, SaveData = (System_Int32_array **)AiState__getSaveData(aiState, 0LL), !tmpsave) )
  {
    sub_B170D4();
  }
  tmpsave->fields.aistateSave = (struct AiState_SaveData_o *)SaveData;
  sub_B16F98((BattleServantConfConponent_o *)&tmpsave->fields, SaveData, v6, v7, v8, v9, v10, v11);
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
  AiState_o *aiState; // x0

  if ( !save || (aiState = this->fields.aiState) == 0LL )
    sub_B170D4();
  AiState__setSaveData(aiState, save->fields.aistateSave, 0LL);
}


void __fastcall BattleFieldData_AiField___ctor(BattleFieldData_AiField_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldData_SaveData___ctor(BattleFieldData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}