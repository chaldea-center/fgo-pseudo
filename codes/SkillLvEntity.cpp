void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E97FC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_26830032(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  struct System_Int32_array *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v37; // x0
  struct System_String_array *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_string__string__o *v46; // x21

  if ( (byte_42E97FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)srcEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor___68682216, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&string___TypeInfo, v15, v16, v17);
    byte_42E97FD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_B5D69C(v18, v19);
  this->fields.skillId = srcEntity->fields.skillId;
  this->fields.lv = srcEntity->fields.lv;
  this->fields.chargeTurn = srcEntity->fields.chargeTurn;
  this->fields.priority = srcEntity->fields.priority;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v27 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v28 = v27;
    v29 = (struct System_Int32_array *)sub_B5D684(v27, int___TypeInfo);
    if ( !v29 )
      goto LABEL_12;
  }
  else
  {
    v29 = 0LL;
  }
  this->fields.funcId = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcId,
    (System_Int32_array **)v29,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v37 = System_Array__Clone(svals, 0LL);
  if ( !v37 )
    goto LABEL_13;
  v28 = v37;
  v38 = (struct System_String_array *)sub_B5D684(v37, string___TypeInfo);
  if ( v38 )
    goto LABEL_14;
LABEL_12:
  sub_B5D990(v28);
LABEL_13:
  v38 = 0LL;
LABEL_14:
  this->fields.svals = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)v38,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v46 = (System_Collections_Generic_Dictionary_string__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_string__string____ctor_49439136(
      v46,
      script,
      (const MethodInfo_2F261A0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___68682216);
  }
  else
  {
    v46 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)v46,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E97FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, lv, (_DWORD)method, v3);
    byte_42E97FB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E9822 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1837/*"ActNpcServantId"*/, (_DWORD)method, v2, v3);
    byte_42E9822 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_1837/*"ActNpcServantId"*/, -1, v3);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E9819 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16427/*"actRarity"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9819 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16427/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v36; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v37; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v39; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v40; // x20
  System_Collections_Generic_List_int__o *v42; // x19
  int monitor; // w8
  unsigned int v44; // w21
  int32_t *v45; // x0
  SkillLvEntity_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_42E9815 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1870/*"AddIndiv"*/, v32, v33, v34);
    byte_42E9815 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_1870/*"AddIndiv"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v37 = this->fields.script;
  if ( !v37 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v37,
           (System_Type_o *)StringLiteral_1870/*"AddIndiv"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (v39 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v39) )
  {
    v40 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v39 - 1] == System_Collections_Generic_List_object__TypeInfo
        ? Item
        : 0LL;
  }
  else
  {
    v40 = 0LL;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v40 )
    goto LABEL_24;
  monitor = (int)v40[1].monitor;
  if ( monitor < 1 )
  {
LABEL_22:
    if ( v42 )
      return System_Collections_Generic_List_int___ToArray(
               v42,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_B5D69C(v37, v36);
  }
  v44 = 0;
  while ( 1 )
  {
    if ( monitor <= v44 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v42 )
      goto LABEL_24;
    v37 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v40[1].klass->_1.byval_arg.data
                                                                            + (int)v44);
    if ( !v37 )
      goto LABEL_24;
    if ( v37->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v45 = (int32_t *)j_il2cpp_object_unbox_0(v37);
    System_Collections_Generic_List_int___Add(
      v42,
      *v45,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v40[1].monitor;
    if ( (int)++v44 >= monitor )
      goto LABEL_22;
  }
  v46 = (SkillLvEntity_o *)sub_B5D990(v37);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v46, v47);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E9820 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16460/*"additionalSkillActorType"*/, (_DWORD)method, v2, v3);
    byte_42E9820 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16460/*"additionalSkillActorType"*/, -1, v3);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E981E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16461/*"additionalSkillId"*/, (_DWORD)method, v2, v3);
    byte_42E981E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16461/*"additionalSkillId"*/, -1, v3);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E981F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16463/*"additionalSkillLv"*/, (_DWORD)method, v2, v3);
    byte_42E981F = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16463/*"additionalSkillLv"*/, 1, v3);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E9821 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16858/*"battleStartRemainingTurn"*/, (_DWORD)method, v2, v3);
    byte_42E9821 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16858/*"battleStartRemainingTurn"*/, 0, v3);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  EventUpValInfo_o **v5; // x28
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Values; // x0
  const MethodInfo *v49; // x1
  struct System_Int32_array *v50; // x8
  System_Xml_XmlQualifiedName_o **v51; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x24
  unsigned __int64 v53; // x23
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_string__int__o *v57; // x25
  EventUpValInfo_o *v58; // x8
  System_Xml_XmlQualifiedName_o **v59; // x9
  System_Xml_XmlQualifiedName_o *v60; // x1
  EventUpValInfo_o **v61; // x27
  System_Xml_XmlQualifiedName_o **v62; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v64; // x8
  int32_t v65; // w27
  FunctionEntity_o *v66; // x28
  __int64 v68; // x0
  int32_t dispLimitCount; // [xsp+4h] [xbp-7Ch]
  int32_t limitCount; // [xsp+8h] [xbp-78h]
  EventUpValInfo_o **v71; // [xsp+10h] [xbp-70h]
  ServantEntity_o *v72; // [xsp+18h] [xbp-68h]
  char v73; // [xsp+20h] [xbp-60h]
  EventDropUpValInfo_o *v74; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_42E9806 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_FunctionGroupMaster___,
      (_DWORD)eventUpVallInfo,
      (_DWORD)questPhaseEntity,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v25, v26, v27);
    sub_B5D5C4(&EventDropUpValInfo_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_13725/*"Target"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v43, v44, v45);
    byte_42E9806 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v72 = 0LL;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_51;
        v72 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getValues(this, v49);
      v50 = this->fields.funcId;
      if ( v50 )
      {
        v73 = 0;
        v51 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1124/*"2"*/;
        v52 = Values;
        v53 = 0LL;
        p_list = &Values->fields.list;
        do
        {
          max_length = v50->max_length;
          if ( (__int64)v53 >= (int)max_length )
          {
            LOBYTE(funcId) = v73;
            return (char)funcId;
          }
          if ( v53 >= max_length )
            goto LABEL_55;
          if ( !Master_WarQuestSelectionMaster )
            break;
          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v50->m_Items[v53 + 1],
                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity || !questPhaseEntity )
              break;
            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)QuestPhaseEntity__IsMatchIndividuality(
                                                                      questPhaseEntity,
                                                                      *(System_Int32_array **)&entity->fields.startType,
                                                                      0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
              if ( !v52 )
                break;
              MasterName_k__BackingField_low = LODWORD(v52->fields._MasterName_k__BackingField);
              if ( (__int64)v53 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v53 >= MasterName_k__BackingField_low )
              {
LABEL_55:
                v68 = sub_B5D6C8(Values);
                sub_B5D668(v68, 0LL);
              }
              v57 = (System_Collections_Generic_Dictionary_string__int__o *)p_list[v53];
              if ( v57 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity->fields.age) == 111 )
                {
                  Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)p_list[v53],
                                                                            *v51,
                                                                            (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                              v57,
                                                                              (System_String_o *)*v51,
                                                                              (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( (int)Values < 1 )
                      goto LABEL_36;
                    if ( v72 )
                    {
                      v58 = *v5;
                      if ( !*v5 )
                        break;
                      v59 = v51;
                      v60 = *v51;
                      dispLimitCount = v58->fields.dispLimitCount;
                      limitCount = v58->fields.limitCount;
                      v61 = v5;
                      v62 = v59;
                      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                               v57,
                               (System_String_o *)v60,
                               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                v72,
                                                                                limitCount,
                                                                                dispLimitCount,
                                                                                Item,
                                                                                0LL);
                      v64 = v61;
                      v51 = v62;
                      v5 = v64;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_36:
                        v71 = v5;
                        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                               (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v57,
                               (System_Xml_XmlQualifiedName_o *)StringLiteral_13725/*"Target"*/,
                               (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v65 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                  v57,
                                  (System_String_o *)StringLiteral_13725/*"Target"*/,
                                  (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        }
                        else
                        {
                          v65 = 0;
                        }
                        v66 = (FunctionEntity_o *)entity;
                        v74 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
                        EventDropUpValInfo___ctor_29835800(v74, 0, v66, v65, 0LL);
                        if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                               v57,
                               (System_String_o *)StringLiteral_973/*"0"*/,
                               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v57,
                                                                                    (System_String_o *)StringLiteral_1026/*"1"*/,
                                                                                    (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          v5 = v71;
                          v51 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1124/*"2"*/;
                          if ( !*v71 )
                            break;
                          v49 = (const MethodInfo *)(unsigned int)Values;
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v74;
                          if ( !v74 )
                            break;
                          EventDropUpValInfo__SetAddCount(v74, (int32_t)v49, (*v71)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v57,
                                                                                    (System_String_o *)StringLiteral_973/*"0"*/,
                                                                                    (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          v5 = v71;
                          v51 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1124/*"2"*/;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                      v57,
                                                                                      (System_String_o *)StringLiteral_1026/*"1"*/,
                                                                                      (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            if ( !*v71 )
                              break;
                            v49 = (const MethodInfo *)(unsigned int)Values;
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v74;
                            if ( !v74 )
                              break;
                            EventDropUpValInfo__SetRateCount(v74, (int32_t)v49, (*v71)->fields.equipSvtId > 0, 0, 0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Values,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                        v73 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v50 = this->fields.funcId;
          ++v53;
        }
        while ( v50 );
      }
    }
LABEL_51:
    sub_B5D69C(Values, v49);
  }
  return (char)funcId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillLvEntity__GetEventIndividuality(
        SkillLvEntity_o *this,
        int32_t index,
        int32_t eventId,
        int32_t questId,
        System_Int32_array *questTvals,
        FunctionMaster_o *funcMaster,
        FunctionGroupMaster_o *funcGroupMaster,
        const MethodInfo *method)
{
  int v11; // w26
  SkillLvEntity_o *v14; // x25
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  struct System_Int32_array *funcId; // x27
  __int64 v46; // x8
  unsigned __int64 v47; // x28
  struct System_Int32_array *v48; // x8
  int32_t v49; // w26
  SkillLvEntity_o *v51; // x21
  SkillLvEntity___c_c *v52; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__61_0; // x22
  Il2CppObject *v55; // x23
  struct SkillLvEntity___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  __int64 v64; // x0
  int v65; // [xsp+Ch] [xbp-64h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *v67; // [xsp+18h] [xbp-58h] BYREF

  v11 = questId;
  v14 = this;
  if ( (byte_42E9825 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, index, eventId, *(_QWORD *)&questId);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_QuestGroupEntity__int___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_QuestGroupEntity__int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&int___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v39, v40, v41);
    this = (SkillLvEntity_o *)sub_B5D5C4(&SkillLvEntity___c_TypeInfo, v42, v43, v44);
    byte_42E9825 = 1;
  }
  entity = 0LL;
  v67 = 0LL;
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_43;
  v46 = *(_QWORD *)&funcId->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0LL;
    v65 = v11;
    while ( 1 )
    {
      if ( v47 >= (unsigned int)v46 )
        goto LABEL_44;
      v48 = v14->fields.funcId;
      if ( !v48 )
        goto LABEL_43;
      if ( v48->max_length <= index )
        goto LABEL_44;
      v49 = funcId->m_Items[v47 + 1];
      if ( v49 != v48->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_43;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v49, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_43;
          this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)funcMaster,
                                      &v67,
                                      v49,
                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v46) = funcId->max_length;
      if ( (__int64)++v47 >= (int)v46 )
        goto LABEL_20;
    }
    if ( !v67 )
      goto LABEL_43;
    questTvals = *(System_Int32_array **)&v67->fields.startType;
LABEL_20:
    v11 = v65;
  }
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_43;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_43;
  if ( v11 < 1 )
    return questTvals;
  v51 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v52 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v52 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v52->static_fields;
  _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__61_0,
      v55,
      Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_QuestGroupEntity__int___ctor__);
    v56 = SkillLvEntity___c_TypeInfo->static_fields;
    v56->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v63,
         v11,
         (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !this )
LABEL_43:
    sub_B5D69C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
  {
LABEL_44:
    v64 = sub_B5D6C8(this);
    sub_B5D668(v64, 0LL);
  }
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_array *StringArray; // x0
  System_String_array *v27; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v28; // x19
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x20
  int v32; // w9
  __int64 v33; // x20
  int v34; // w8
  __int64 v36; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9824 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19030/*"followerVals"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v23, v24, v25);
    byte_42E9824 = 1;
  }
  *(_QWORD *)result = 0LL;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19030/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v27 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v28 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v28,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v27->max_length )
    goto LABEL_22;
  v29 = (__int64)v27->m_Items[0];
  if ( !v29 )
    goto LABEL_23;
  v29 = (__int64)System_String__Replace_44585024(
                   (System_String_o *)v29,
                   (System_String_o *)StringLiteral_15824/*"["*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0LL);
  if ( !v29 )
    goto LABEL_23;
  v31 = System_String__Replace_44585024(
          (System_String_o *)v29,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v29 = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v29 )
    goto LABEL_23;
  v30 = v29;
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_22;
  *(_WORD *)(v29 + 32) = 44;
  if ( !v31 || (v29 = (__int64)System_String__Split(v31, (System_Char_array *)v29, 0LL), result[1] = 0, !v29) )
LABEL_23:
    sub_B5D69C(v29, v30);
  v32 = *(_DWORD *)(v29 + 24);
  v33 = v29;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( v34 < (unsigned int)v32 )
    {
      v29 = System_Int32__TryParse(*(System_String_o **)(v33 + 8LL * v34 + 32), result, 0LL);
      if ( (v29 & 1) != 0 )
      {
        v29 = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
        if ( !v28 )
          goto LABEL_23;
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v28,
          (UIPanel_o *)v29,
          result[0],
          (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v34 = result[1] + 1;
      result[1] = v34;
      v32 = *(_DWORD *)(v33 + 24);
      if ( v34 >= v32 )
        return (System_Collections_Generic_Dictionary_string__int__o *)v28;
    }
LABEL_22:
    v36 = sub_B5D6C8(v29);
    sub_B5D668(v36, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v28;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  SkillLvEntity___c_c *v21; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  System_String_o *v24; // x20
  Il2CppObject *v25; // x22
  struct SkillLvEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Nullable_int__o v35; // 0:x3.8

  if ( (byte_42E9816 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_long__Nullable_int____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_long__Nullable_int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v11, v12, v13);
    sub_B5D5C4(&SkillLvEntity___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19162/*"funcPositionForSplitFuncSequence"*/, v17, v18, v19);
    byte_42E9816 = 1;
  }
  script = this->fields.script;
  v21 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v21 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__44_0 = static_fields->__9__44_0;
  v24 = (System_String_o *)StringLiteral_19162/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__44_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_B5D694(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v25,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      (const MethodInfo_2C2C144 *)Method_System_Func_long__Nullable_int____ctor__);
    v26 = SkillLvEntity___c_TypeInfo->static_fields;
    v26->__9__44_0 = _9__44_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v26->__9__44_0,
      (System_Int32_array **)_9__44_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v35 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v24,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v35,
           (const MethodInfo_1AE668C *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_int__o *v39; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  System_String_o *Value_string; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int32_t *v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-78h] BYREF
  int v49; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E981A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v12, v13, v14);
    sub_B5D5C4(&long_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v36, v37, v38);
    byte_42E981A = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v39 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  script = this->fields.script;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   script,
                   key,
                   (System_String_o *)v41,
                   (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v50 = v48;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v44 )
      break;
    if ( !v39 )
      sub_B5D69C(v44, v45);
    if ( !v50.fields.current )
      sub_B5D69C(0LL, v45);
    if ( v50.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Value_string = (System_String_o *)sub_B5D990(v50.fields.current);
      goto LABEL_15;
    }
    v46 = (int32_t *)j_il2cpp_object_unbox_0(v50.fields.current);
    System_Collections_Generic_List_int___Add(
      v39,
      *v46,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v39 )
LABEL_15:
    sub_B5D69C(Value_string, v43);
  return System_Collections_Generic_List_int___ToArray(
           v39,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v17; // x20

  if ( (byte_42E9817 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_List_object___List_int____ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_List_object___List_int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16846/*"battleEffectId"*/, v14, v15, v16);
    byte_42E9817 = 1;
  }
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v17,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2C3041C *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16846/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v17,
                                                     0LL,
                                                     (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  SkillLvEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  v4 = defaultValue;
  if ( (byte_42E981C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      defaultValue,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E981C = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return v4;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                                                                                 (System_Type_o *)key,
                                                                                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v15 = (SkillLvEntity_o *)sub_B5D990(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v15, v16);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v10; // x21
  const MethodInfo *v11; // x1
  DataVals_array *DataValsList; // x0
  __int64 v13; // x1

  if ( (byte_42E9800 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9800 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v10 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = SkillLvEntity__getDataValsList(this, v11);
  if ( !v10 )
    sub_B5D69C(DataValsList, v13);
  return FunctionMaster__GetSetTypeDataValArray(v10, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x19
  __int64 v45; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v47; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v50; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x20
  __int64 v52; // x9
  __int64 v53; // x0
  __int64 v54; // x1
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E981B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&SkillLvEntity_SvtChangeBgm_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_22762/*"svtBgmChange"*/, v41, v42, v43);
    byte_42E981B = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22762/*"svtBgmChange"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v44;
  v47 = this->fields.script;
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BasicHelper__GetValue_string_(
                                                                                           v47,
                                                                                           (System_String_o *)StringLiteral_22762/*"svtBgmChange"*/,
                                                                                           (System_String_o *)v48,
                                                                                           (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_17:
    sub_B5D69C(script, v45);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)script,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v57.fields.current;
    v50 = (SkillLvEntity_SvtChangeBgm_o *)sub_B5D694(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)v50;
    if ( current )
    {
      v52 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v52
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v52 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v53 = sub_B5D990(current);
LABEL_16:
        sub_B5D69C(v53, v54);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v50, (System_Collections_Generic_Dictionary_string__object__o *)current, 0LL);
    if ( !v44 )
      goto LABEL_16;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      v51,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v44;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v19; // x1
  DataVals_array *DataValsList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  struct System_Int32_array *v22; // x8
  SkillLvMaster_o *v23; // x23
  unsigned __int64 v24; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v26; // x24
  int32_t v27; // w1
  int32_t Param; // w25
  int32_t v29; // w1
  __int64 v30; // x0
  SkillLvEntity_o *v32; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E9827 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)ret, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14, v15, v16);
    byte_42E9827 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_33;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v19);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
    v22 = this->fields.funcId;
    if ( !v22 )
LABEL_33:
      sub_B5D69C(isAddState, funcId);
    v23 = (SkillLvMaster_o *)isAddState;
    v24 = 0LL;
    while ( 1 )
    {
      max_length = v22->max_length;
      if ( (__int64)v24 >= (int)max_length )
        break;
      if ( v24 >= max_length )
        goto LABEL_35;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_33;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  v22->m_Items[v24 + 1],
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_33;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_33;
          if ( v24 >= DataValsList->max_length )
          {
LABEL_35:
            v30 = sub_B5D6C8(isAddState);
            sub_B5D668(v30, 0LL);
          }
          if ( !entity )
            goto LABEL_33;
          v26 = DataValsList->m_Items[v24];
          if ( !v26 )
            goto LABEL_33;
          DataVals__SetTempType(
            DataValsList->m_Items[v24],
            (FunctionMaster_o *)Master_WarQuestSelectionMaster,
            (int32_t)entity->fields.age,
            0LL);
          v27 = DataVals__isParam(v26, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v26, v27, 0, 0LL);
          v29 = DataVals__isParam(v26, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v26, v29, 0, 0LL);
          if ( !v23 )
            goto LABEL_33;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v23,
                                                                      &v32,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      0LL);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_33;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v32->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_33;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v22 = this->fields.funcId;
      ++v24;
      if ( !v22 )
        goto LABEL_33;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E9823 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15599/*"WarBoardBreakPointDamage"*/, (_DWORD)method, v2, v3);
    byte_42E9823 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15599/*"WarBoardBreakPointDamage"*/, 0, v3);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E9826 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16462/*"additionalSkillInsertCurrentSkillAfter"*/, (_DWORD)method, v2, v3);
    byte_42E9826 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16462/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v3) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E9813 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16650/*"aress"*/, v5, v6, v7);
    byte_42E9813 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_16650/*"aress"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  int max_length; // w8
  DataVals_array *v5; // x19
  unsigned int v6; // w22
  bool v7; // w21
  DataVals_o *v8; // x20
  int32_t funcType; // w8
  __int64 v11; // x0

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_15:
    sub_B5D69C(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v11 = sub_B5D6C8(SetTypeDataValArray);
      sub_B5D668(v11, 0LL);
    }
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_15;
    funcType = v8->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v8, 1, 0, 0LL) > 0 )
        return v7;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v8, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  __int64 v3; // x3
  bool v4; // w19
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = isCheckHate;
  if ( (byte_42E9814 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      isCheckHate,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&long_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5998/*"EnableTarget"*/, v12, v13, v14);
    byte_42E9814 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_5998/*"EnableTarget"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_5998/*"EnableTarget"*/,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v16);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) == 1;
  v19 = (SkillLvEntity_o *)sub_B5D990(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v19, v20);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9818 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19651/*"ignoreWhiteFade"*/, (_DWORD)method, v2, v3);
    byte_42E9818 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19651/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E981D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21381/*"noTargetSkipSkill"*/, (_DWORD)method, v2, v3);
    byte_42E981D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21381/*"noTargetSkipSkill"*/, -1, v3) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E9812 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22112/*"revivalUnder"*/, v5, v6, v7);
    byte_42E9812 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_22112/*"revivalUnder"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E9811 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22113/*"revivalUp"*/, v5, v6, v7);
    byte_42E9811 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_22113/*"revivalUp"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42E980E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      (_DWORD)vals,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5, v6, v7);
    this = (SkillLvEntity_o *)sub_B5D5C4(&StringLiteral_2032/*"ApplySupportSvt"*/, v8, v9, v10);
    byte_42E980E = 1;
  }
  if ( !vals )
    sub_B5D69C(this, vals);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2032/*"ApplySupportSvt"*/,
           (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_string__int___get_Item(
            vals,
            (System_String_o *)StringLiteral_2032/*"ApplySupportSvt"*/,
            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E980C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15380/*"VoiceVolume"*/, v5, v6, v7);
    byte_42E980C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15380/*"VoiceVolume"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvEntity__getCondition(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}


DataVals_array *__fastcall SkillLvEntity__getDataValsList(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_array *svals; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_String_array *v14; // x8
  DataVals_array *v15; // x19
  __int64 v16; // x23
  __int64 v17; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x26
  System_String_o *v20; // x22
  DataVals_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataVals_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_42E97FF & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataVals_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E97FF = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = (DataVals_array *)sub_B5D5DC(DataVals___TypeInfo, 1LL);
    v28 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v15 )
    {
      if ( v28 )
      {
        v12 = sub_B5D684(v28, v15->obj.klass->_1.element_class);
        if ( !v12 )
        {
LABEL_21:
          v37 = sub_B5D6BC(v12);
          sub_B5D668(v37, 0LL);
        }
      }
      if ( !v15->max_length )
      {
LABEL_20:
        v36 = sub_B5D6C8(v12);
        sub_B5D668(v36, 0LL);
      }
      v15->m_Items[0] = v28;
      sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
      return v15;
    }
LABEL_13:
    sub_B5D69C(v12, v13);
  }
  v12 = sub_B5D5DC(DataVals___TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_13;
  v15 = (DataVals_array *)v12;
  v16 = 4LL;
  v17 = 32LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    v19 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      return v15;
    if ( v19 >= max_length )
      goto LABEL_20;
    v20 = (System_String_o *)*((_QWORD *)&v14->obj.klass + v16);
    v21 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v21, v20, 0LL);
    if ( v15 )
    {
      if ( v21 )
      {
        v12 = sub_B5D684(v21, v15->obj.klass->_1.element_class);
        if ( !v12 )
          goto LABEL_21;
      }
      if ( v19 >= v15->max_length )
        goto LABEL_20;
      *((_QWORD *)&v15->obj.klass + v16) = v21;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v15 + v17),
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v14 = this->fields.svals;
      ++v16;
      v17 += 8LL;
      if ( v14 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  System_String_o *Detail; // x20

  if ( (byte_42E9801 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v9, v10, v11);
    byte_42E9801 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v14);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  return SkillDetailParamFormatResolver__Apply(Detail, this, v15);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_26810736(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
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
  System_String_o *v16; // x22
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  System_String_o *Detail; // x0
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9802 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, lv, isShort, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_8459/*"LEVEL_DETAIL_INFO"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E9802 = 1;
  }
  if ( lv <= 0 )
  {
    v18 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8459/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v21 = lv;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v18 = (Il2CppObject *)System_String__Format(v16, v17, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__getEventUpVal(
        SkillLvEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        bool isFuncGroup,
        bool isOwner,
        const MethodInfo *method)
{
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x27
  const MethodInfo *v56; // x1
  FunctionGroupMaster_o *v57; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v62; // x20
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v64; // x8
  unsigned __int64 v65; // x8
  System_Collections_Generic_Dictionary_string__int__o *v66; // x19
  WarEntity_o *v67; // x8
  int age; // w21
  struct System_String_o *name; // x3
  const MethodInfo *v70; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v73; // x8
  __int64 v75; // x0
  bool v76; // [xsp+Ch] [xbp-A4h]
  ItemMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-A0h]
  int32_t v78; // [xsp+20h] [xbp-90h]
  unsigned int v79; // [xsp+24h] [xbp-8Ch]
  ServantEntity_o *v80; // [xsp+28h] [xbp-88h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+30h] [xbp-80h]
  EventUpValSetupInfo_o *v82; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-70h]
  FunctionGroupEntity_o *v85; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42E9807 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_FunctionGroupMaster___,
      wearersSvtId,
      wearesLimitCount,
      *(_QWORD *)&wearesDispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1174/*"3"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_13725/*"Target"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_6244/*"EventId"*/, v52, v53, v54);
    byte_42E9807 = 1;
  }
  v85 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    v82 = setupInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
    v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
    v57 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v78 = wearesDispLimitCount;
    v79 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v80 = 0LL;
    }
    else
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_89;
      v80 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v56);
    QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                                v82,
                                                                                eventId,
                                                                                0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_89;
    v76 = !isOwner;
    m_Items = Values->m_Items;
    v62 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v62 >= (int)max_length )
        break;
      if ( v62 >= max_length )
        goto LABEL_97;
      if ( !v55 )
        goto LABEL_89;
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v55,
                                                                                  &entity,
                                                                                  funcId->m_Items[v62 + 1],
                                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_88;
      if ( isFuncGroup )
      {
        v64 = this->fields.funcId;
        if ( !v64 )
          goto LABEL_89;
        if ( v62 >= v64->max_length )
        {
LABEL_97:
          v75 = sub_B5D6C8(QuestPhaseIndividualList);
          sub_B5D668(v75, 0LL);
        }
        if ( !v57 )
          goto LABEL_89;
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)FunctionGroupMaster__TryGetEntity(
                                                                                    v57,
                                                                                    &v85,
                                                                                    v64->m_Items[v62 + 1],
                                                                                    eventId,
                                                                                    0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_88;
      }
      if ( !Values )
        goto LABEL_89;
      v65 = Values->max_length;
      if ( (__int64)v62 >= (int)v65 )
        goto LABEL_88;
      if ( v62 >= v65 )
        goto LABEL_97;
      v66 = m_Items[v62];
      if ( !v66 )
        goto LABEL_88;
      v67 = entity;
      if ( !entity )
        goto LABEL_89;
      age = (int)entity->fields.age;
      if ( age > 104 )
      {
        switch ( age )
        {
          case 105:
          case 106:
          case 107:
          case 108:
          case 114:
          case 115:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1174/*"3"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1026/*"1"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v66,
                                                                                          (System_String_o *)StringLiteral_1124/*"2"*/,
                                                                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v82,
                                                                                        questPhaseIndividualityList,
                                                                                        *(System_Int32_array **)&entity->fields.startType,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            if ( age != 105 )
              goto LABEL_92;
            if ( !entity )
              goto LABEL_89;
            name = entity->fields.name;
            if ( !name )
              goto LABEL_92;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)(&dword_0 + 1);
            if ( (v79 & 0x80000000) != 0 || !name[1].klass )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v80 )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality_30799964(
                                                                                          v80,
                                                                                          wearesLimitCount,
                                                                                          v78,
                                                                                          (System_Int32_array *)name,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v66,
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_6244/*"EventId"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_6244/*"EventId"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v80 )
                goto LABEL_88;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       v66,
                       (System_String_o *)StringLiteral_1124/*"2"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                          v80,
                                                                                          wearesLimitCount,
                                                                                          v78,
                                                                                          Item,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                   this,
                                   v62,
                                   eventId,
                                   v82->fields.questId,
                                   *(System_Int32_array **)&entity->fields.startType,
                                   (FunctionMaster_o *)v55,
                                   v57,
                                   v70);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v82,
                                                                                        questPhaseIndividualityList,
                                                                                        EventIndividuality,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v66,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_13725/*"Target"*/,
                      (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_92;
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v66,
                                                                                          (System_String_o *)StringLiteral_13725/*"Target"*/,
                                                                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v76 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1026/*"1"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_88;
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v82,
                                                                                        questPhaseIndividualityList,
                                                                                        *(System_Int32_array **)&entity->fields.startType,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            if ( !v80 )
              goto LABEL_96;
            Individuality = ServantEntity__getIndividuality(v80, wearesLimitCount, v78, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ItemMaster__GetIndividualityList_23834128(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        Individuality,
                                                                                        0LL);
            if ( !QuestPhaseIndividualList )
              goto LABEL_89;
            if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
              goto LABEL_92;
            goto LABEL_88;
          case 116:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            goto LABEL_86;
          case 117:
          case 118:
            goto LABEL_87;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v73 = &StringLiteral_1124/*"2"*/;
            goto LABEL_82;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                                                                        (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v73 = &StringLiteral_1174/*"3"*/;
LABEL_82:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)*v73,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            goto LABEL_86;
          default:
            goto LABEL_88;
        }
      }
      if ( age != 1 )
      {
        if ( age == 7 )
        {
          QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1026/*"1"*/,
                                                                                      (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v66,
                                                                                        (System_String_o *)StringLiteral_1026/*"1"*/,
                                                                                        (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_86:
              v67 = entity;
              if ( !entity )
                goto LABEL_89;
LABEL_87:
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                          v82,
                                                                                          questPhaseIndividualityList,
                                                                                          *(System_Int32_array **)&v67->fields.startType,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
              {
LABEL_92:
                LOBYTE(QuestPhaseIndividualList) = 1;
                return (unsigned __int8)QuestPhaseIndividualList & 1;
              }
            }
          }
          goto LABEL_88;
        }
        if ( age != 16 )
          goto LABEL_88;
      }
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v62],
                                                                                  (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                                                                  (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v66,
                                                                                    (System_String_o *)StringLiteral_1174/*"3"*/,
                                                                                    (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_89;
          QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                      v82,
                                                                                      questPhaseIndividualityList,
                                                                                      *(System_Int32_array **)&entity->fields.startType,
                                                                                      0LL);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)v80;
            if ( !v80 )
            {
LABEL_96:
              LODWORD(QuestPhaseIndividualList) = v79 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_30799964(
                                                   v80,
                                                   wearesLimitCount,
                                                   v78,
                                                   (System_Int32_array *)entity->fields.longName,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_89:
            sub_B5D69C(QuestPhaseIndividualList, Individuality);
          }
        }
      }
LABEL_88:
      funcId = this->fields.funcId;
      ++v62;
      if ( !funcId )
        goto LABEL_89;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__getEventUpVal_26836992(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        const MethodInfo *method)
{
  SkillLvEntity_o *v9; // x23
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  int v67; // w1
  char v68; // w2
  __int64 v69; // x3
  int v70; // w1
  char v71; // w2
  __int64 v72; // x3
  int v73; // w1
  char v74; // w2
  __int64 v75; // x3
  int v76; // w1
  char v77; // w2
  __int64 v78; // x3
  int v79; // w1
  char v80; // w2
  __int64 v81; // x3
  int v82; // w1
  char v83; // w2
  __int64 v84; // x3
  int v85; // w1
  char v86; // w2
  __int64 v87; // x3
  int v88; // w1
  char v89; // w2
  __int64 v90; // x3
  int v91; // w1
  char v92; // w2
  __int64 v93; // x3
  int v94; // w1
  char v95; // w2
  __int64 v96; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x24
  FunctionGroupMaster_o *v98; // x25
  WarEntity_o *v99; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x26
  __int64 v102; // x8
  SkillLvEntity_o *v103; // x28
  char v104; // w22
  unsigned __int64 v105; // x27
  EventUpValInfo_o *v106; // x8
  ServantLimitEntity_o *v107; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v109; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v111; // x8
  struct EventUpValSetupInfo_o *v112; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v114; // x26
  int age; // w19
  const MethodInfo *v116; // x2
  struct System_String_o *name; // x3
  FunctionEntity_o *v118; // x22
  int32_t Item; // w19
  EventUpValInfo_o *v120; // x8
  EventDropUpValInfo_o *v121; // x19
  const MethodInfo *v122; // x2
  struct System_Int32_array *v123; // x8
  EventPointBuffEntity_o *EnableEntity; // x19
  struct System_String_o *v125; // x25
  System_String_c *klass; // x8
  SkillLvEntity_o *v127; // x22
  unsigned __int64 v128; // x21
  int32_t lv; // w19
  char v130; // w8
  FunctionEntity_o *v131; // x21
  __int64 *v132; // x8
  const MethodInfo *v133; // x2
  const MethodInfo *v134; // x7
  EventUpValInfo_o *v135; // x8
  int32_t limitCount; // w19
  int32_t dispLimitCount; // w21
  int32_t v138; // w0
  struct EventUpValSetupInfo_o *v139; // x8
  SkillLvEntity_o *v140; // x2
  SkillEntity_o *v141; // x19
  SkillLvEntity_o *v142; // x21
  System_Int32_array *ActIndividuality; // x0
  int32_t v144; // w19
  const MethodInfo *v145; // x2
  int32_t v146; // w8
  int32_t v147; // w9
  int32_t v148; // w21
  FunctionEntity_o *v149; // x19
  EventDropUpValInfo_o *v150; // x22
  const MethodInfo *v151; // x2
  FunctionEntity_o *v152; // x21
  int32_t v153; // w22
  FunctionEntity_o *v154; // x21
  FunctionEntity_o *v155; // x21
  EventUpValInfo_o *v156; // x8
  __int64 *v157; // x8
  FunctionEntity_o *v158; // x21
  EventUpValInfo_o *v159; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v160; // x1
  FunctionEntity_o *v161; // x21
  EventDropUpValInfo_o *v162; // x22
  UserServantMaster_o *v163; // x19
  __int64 v164; // x21
  UserServantEntity_o *HeroineData; // x0
  __int64 v167; // x0
  bool v168; // [xsp+4h] [xbp-DCh]
  FunctionGroupMaster_o *v169; // [xsp+8h] [xbp-D8h]
  bool v170; // [xsp+14h] [xbp-CCh]
  EventPointBuffEntity_o *v171; // [xsp+20h] [xbp-C0h]
  EventDropUpValInfo_o *value; // [xsp+28h] [xbp-B8h]
  SkillLvEntity_o *valuea; // [xsp+28h] [xbp-B8h]
  struct System_String_o *valueb; // [xsp+28h] [xbp-B8h]
  struct System_Int32_array *v176; // [xsp+38h] [xbp-A8h]
  char v177; // [xsp+44h] [xbp-9Ch]
  System_Int32_array *questPhaseIndividualityList; // [xsp+48h] [xbp-98h]
  SkillLvEntity_o *v179; // [xsp+50h] [xbp-90h]
  unsigned __int64 v180; // [xsp+58h] [xbp-88h]
  int32_t eventId; // [xsp+68h] [xbp-78h]
  FunctionGroupEntity_o *v184; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16

  v9 = this;
  if ( (byte_42E9808 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)eventUpVallInfo, isFuncGroup, isOwner);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventPointBuffMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventQuestMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionGroupMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v34, v35, v36);
    sub_B5D5C4(&DataManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v40, v41, v42);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v43, v44, v45);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v46, v47, v48);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v58, v59, v60);
    sub_B5D5C4(&EventDropUpValInfo_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v64, v65, v66);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v70, v71, v72);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v73, v74, v75);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_1174/*"3"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_13725/*"Target"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_6244/*"EventId"*/, v91, v92, v93);
    this = (SkillLvEntity_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v94, v95, v96);
    byte_42E9808 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  entity = 0LL;
  v184 = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v9->fields.funcId )
    goto LABEL_266;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  v98 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  v179 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v99 = 0LL;
    goto LABEL_18;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_268:
    sub_B5D69C(this, eventUpVallInfo);
  v99 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_18:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v9, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_268;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_268;
  v102 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v102 >= 1 )
  {
    v168 = isOwner;
    v170 = v99 == 0LL || isEquipOnly;
    v103 = this;
    v104 = 0;
    v105 = 0LL;
    v176 = eventIdList;
    while ( 1 )
    {
      if ( v105 >= (unsigned int)v102 )
      {
LABEL_269:
        v167 = sub_B5D6C8(this);
        sub_B5D668(v167, 0LL);
      }
      v106 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_268;
      eventId = eventIdList->m_Items[v105 + 1];
      if ( v106->fields.equipSvtId < 1 )
      {
        v177 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_268;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo || !this )
          goto LABEL_268;
        v107 = ServantLimitMaster__GetEntity(
                 (ServantLimitMaster_o *)this,
                 (*eventUpVallInfo)->fields.svtId,
                 (*eventUpVallInfo)->fields.limitCount,
                 0LL);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (SkillLvEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_268;
        if ( !v107 )
          goto LABEL_268;
        if ( !this )
          goto LABEL_268;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v107->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    eventId,
                                    0LL);
        v177 = (char)this;
        v106 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_268;
      }
      this = (SkillLvEntity_o *)v106->fields.setupInfo;
      v180 = v105;
      if ( !this )
        goto LABEL_268;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  eventId,
                                  0LL);
      funcId = v9->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_268;
      v109 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v109 >= (int)max_length )
          break;
        if ( v109 >= max_length )
          goto LABEL_269;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_268;
        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    funcId->m_Items[v109 + 1],
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_160;
        if ( isFuncGroup )
        {
          v111 = v9->fields.funcId;
          if ( !v111 )
            goto LABEL_268;
          if ( v109 >= v111->max_length )
            goto LABEL_269;
          if ( !v98 )
            goto LABEL_268;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(v98, &v184, v111->m_Items[v109 + 1], eventId, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_160;
          this = (SkillLvEntity_o *)v184;
          if ( !v184 )
            goto LABEL_268;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v184, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_268;
            v112 = (*eventUpVallInfo)->fields.setupInfo;
            this = v179;
            if ( !v112 || !v179 )
              goto LABEL_268;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v179,
                                        eventId,
                                        v112->fields.questId,
                                        v112->fields.questPhase,
                                        12,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_160;
          }
        }
        if ( !v103 )
          goto LABEL_268;
        chargeTurn = (unsigned int)v103->fields.chargeTurn;
        if ( (__int64)v109 >= (int)chargeTurn )
          goto LABEL_160;
        if ( v109 >= chargeTurn )
          goto LABEL_269;
        v114 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)*((_QWORD *)&v103->fields.funcId + v109);
        if ( !v114 )
          goto LABEL_160;
        if ( !entity )
          goto LABEL_268;
        age = (int)entity->fields.age;
        if ( age > 104 )
        {
          switch ( age )
          {
            case 105:
            case 106:
            case 107:
            case 108:
            case 114:
            case 115:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1174/*"3"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1026/*"1"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_1124/*"2"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_160;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            v116);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_160;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( age != 105 )
                goto LABEL_80;
              if ( !entity )
                goto LABEL_268;
              name = entity->fields.name;
              if ( !name || !name[1].klass )
                goto LABEL_80;
              if ( !v99 )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_30799964(
                                          (ServantEntity_o *)v99,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)name,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
LABEL_80:
              v118 = (FunctionEntity_o *)entity;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v114,
                       (System_String_o *)StringLiteral_973/*"0"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              value = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29835800(value, eventId, v118, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v114,
                     (System_String_o *)StringLiteral_1026/*"1"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_1026/*"1"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v157 = &StringLiteral_1124/*"2"*/;
                v121 = value;
                goto LABEL_233;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v120 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v121 = value;
              if ( !value )
                goto LABEL_268;
              goto LABEL_209;
            case 109:
            case 110:
            case 112:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 127:
            case 128:
              goto LABEL_160;
            case 111:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_6244/*"EventId"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_6244/*"EventId"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            v133);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_160;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_138;
              if ( !v99 )
                goto LABEL_160;
              v135 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              limitCount = v135->fields.limitCount;
              dispLimitCount = v135->fields.dispLimitCount;
              v138 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v114,
                       (System_String_o *)StringLiteral_1124/*"2"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(
                                          (ServantEntity_o *)v99,
                                          limitCount,
                                          dispLimitCount,
                                          v138,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
LABEL_138:
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v139 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v139 )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v9,
                                          v109,
                                          eventId,
                                          v139->fields.questId,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          (FunctionMaster_o *)Master_WarQuestSelectionMaster,
                                          v98,
                                          v134);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v140 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v140,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_157;
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v9->fields.skillId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v141 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v99;
              if ( !v99 )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          (ServantEntity_o *)v99,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v141 )
                goto LABEL_268;
              v142 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v141, (const MethodInfo *)eventUpVallInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v142,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)v99, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_157;
              if ( !entity )
                goto LABEL_268;
              if ( HIDWORD(entity->fields.age) )
                goto LABEL_157;
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              v163 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
              v164 = *(_QWORD *)&v99->fields.id;
              *(_QWORD *)&v188.fields.fakeValue = v99->fields.age;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = v99->fields.age;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v188.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v188.fields.currentCryptoKey = v164;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v188, 0LL);
              if ( !v163 )
                goto LABEL_268;
              HeroineData = UserServantMaster__getHeroineData(v163, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_160;
              }
LABEL_157:
              if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                     v114,
                     (System_Xml_XmlQualifiedName_o *)StringLiteral_13725/*"Target"*/,
                     (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_13725/*"Target"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v144 = (int)this;
                if ( (_DWORD)this == 1 && !v168 )
                  goto LABEL_160;
              }
              else
              {
                v144 = 0;
              }
              v161 = (FunctionEntity_o *)entity;
              v162 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29835800(v162, eventId, v161, v144, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v114,
                     (System_String_o *)StringLiteral_973/*"0"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_1026/*"1"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v162 )
                  goto LABEL_268;
                EventDropUpValInfo__SetAddCount(
                  v162,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v177 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_973/*"0"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                              (System_String_o *)StringLiteral_1026/*"1"*/,
                                              (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v162 )
                    goto LABEL_268;
                  EventDropUpValInfo__SetRateCount(
                    v162,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v177 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_268;
              v160 = (EventMissionProgressRequest_Argument_ProgressData_o *)v162;
              goto LABEL_240;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_973/*"0"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_1026/*"1"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_160;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            v145);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_160;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              v104 |= (unsigned __int8)this;
              if ( !v99 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          (ServantEntity_o *)v99,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_268;
              v146 = this->fields.chargeTurn;
              if ( v146 < 1 )
                goto LABEL_241;
              v147 = 0;
              valuea = this;
              while ( v147 < (unsigned int)v146 )
              {
                v148 = *((_DWORD *)&this->fields.funcId + v147);
                v149 = (FunctionEntity_o *)entity;
                v150 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_29835800(v150, eventId, v149, v148, 0LL);
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v114,
                       (System_String_o *)StringLiteral_973/*"0"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                              (System_String_o *)StringLiteral_1026/*"1"*/,
                                              (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v150 )
                    goto LABEL_268;
                  EventDropUpValInfo__SetAddCount(
                    v150,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v177 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                              (System_String_o *)StringLiteral_973/*"0"*/,
                                              (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                                (System_String_o *)StringLiteral_1026/*"1"*/,
                                                (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v150 )
                      goto LABEL_268;
                    EventDropUpValInfo__SetRateCount(
                      v150,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v177 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_268;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_268;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v150,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                this = valuea;
                v104 = 1;
                v147 = actMaxRarity + 1;
                actMaxRarity = v147;
                v146 = valuea->fields.chargeTurn;
                if ( v147 >= v146 )
                  goto LABEL_160;
              }
              goto LABEL_269;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            v151);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_160;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              v152 = (FunctionEntity_o *)entity;
              v153 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v114,
                       (System_String_o *)StringLiteral_973/*"0"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v121 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29835800(v121, eventId, v152, v153, 0LL);
              goto LABEL_217;
            case 129:
              if ( isSupport )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1124/*"2"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              v154 = (FunctionEntity_o *)entity;
              v121 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v121, eventId, v154, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v114,
                     (System_String_o *)StringLiteral_973/*"0"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v132 = &StringLiteral_1026/*"1"*/;
                goto LABEL_207;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_973/*"0"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v157 = &StringLiteral_1026/*"1"*/;
              goto LABEL_233;
            default:
              if ( age != 132 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v114,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1174/*"3"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              v131 = (FunctionEntity_o *)entity;
              v121 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v121, eventId, v131, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v114,
                     (System_String_o *)StringLiteral_1026/*"1"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v132 = &StringLiteral_1124/*"2"*/;
LABEL_207:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)*v132,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v120 = *eventUpVallInfo;
                if ( !*eventUpVallInfo || !v121 )
                  goto LABEL_268;
LABEL_209:
                EventDropUpValInfo__SetAddCount(v121, (int32_t)this, v120->fields.equipSvtId > 0, v177 & 1, 0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                            (System_String_o *)StringLiteral_1026/*"1"*/,
                                            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v157 = &StringLiteral_1124/*"2"*/;
LABEL_233:
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                              (System_String_o *)*v157,
                                              (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v159 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo || !v121 )
                    goto LABEL_268;
                  goto LABEL_236;
                }
              }
              break;
          }
          goto LABEL_237;
        }
        if ( age == 1 )
          goto LABEL_87;
        if ( age != 7 )
        {
          if ( age != 16 )
            goto LABEL_160;
LABEL_87:
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                      v114,
                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                                      (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                              v122),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v123 = v9->fields.funcId;
              if ( !v123 )
                goto LABEL_268;
              if ( v109 >= v123->max_length )
                goto LABEL_269;
              if ( !this )
                goto LABEL_268;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               eventId,
                               v123->m_Items[v109 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1174/*"3"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v171 = EnableEntity;
              if ( EnableEntity || (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_268;
                if ( !entity )
                  goto LABEL_268;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_268;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            *(System_Int32_array **)&entity->fields.startType,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v170 )
                    goto LABEL_106;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_268;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_30799964(
                                              (ServantEntity_o *)v99,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity->fields.longName,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_106:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_268;
                    v169 = v98;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_268;
                    v125 = entity->fields.name;
                    if ( !v125 )
                      goto LABEL_268;
                    klass = v125[1].klass;
                    if ( (int)klass < 1 )
                    {
                      v130 = 0;
                    }
                    else
                    {
                      v127 = this;
                      v128 = 0LL;
                      while ( 1 )
                      {
                        if ( v128 >= (unsigned int)klass )
                          goto LABEL_269;
                        if ( !v127 )
                          goto LABEL_268;
                        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v127,
                                                    *((_DWORD *)&v125[1].monitor + v128),
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_268;
                        lv = this->fields.lv;
                        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BuffList_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        }
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(klass) = v125[1].klass;
                        if ( (__int64)++v128 >= (int)klass )
                        {
                          v130 = 0;
                          goto LABEL_225;
                        }
                      }
                      v130 = 1;
LABEL_225:
                      EnableEntity = v171;
                    }
                    v98 = v169;
                    if ( ((unsigned __int8)v130 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                  (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                                  (System_String_o *)StringLiteral_1174/*"3"*/,
                                                  (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_268;
                      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
                        v114,
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v158 = (FunctionEntity_o *)entity;
                    v121 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v121, eventId, v158, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                                (System_String_o *)StringLiteral_1174/*"3"*/,
                                                (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v159 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo || !v121 )
                      goto LABEL_268;
LABEL_236:
                    EventDropUpValInfo__SetRateCount(v121, (int32_t)this, v159->fields.equipSvtId > 0, v177 & 1, 0LL);
LABEL_237:
                    v156 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_268;
LABEL_238:
                    this = (SkillLvEntity_o *)v156->fields.dropList;
                    if ( !this )
                      goto LABEL_268;
                    v160 = (EventMissionProgressRequest_Argument_ProgressData_o *)v121;
LABEL_240:
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                      v160,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
LABEL_241:
                    v104 = 1;
                    goto LABEL_160;
                  }
                }
              }
            }
          }
          goto LABEL_160;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                    v114,
                                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1026/*"1"*/,
                                    (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                      (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                      (System_String_o *)StringLiteral_1026/*"1"*/,
                                      (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)this )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_268;
            if ( !entity )
              goto LABEL_268;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              goto LABEL_268;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        *(System_Int32_array **)&entity->fields.startType,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v155 = (FunctionEntity_o *)entity;
              v121 = (EventDropUpValInfo_o *)sub_B5D694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v121, eventId, v155, 0LL);
LABEL_217:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v114,
                                          (System_String_o *)StringLiteral_1026/*"1"*/,
                                          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !v121 )
                goto LABEL_268;
              EventDropUpValInfo__SetRateCount(
                v121,
                (int32_t)this,
                (*eventUpVallInfo)->fields.equipSvtId > 0,
                v177 & 1,
                0LL);
              v156 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              goto LABEL_238;
            }
          }
        }
LABEL_160:
        funcId = v9->fields.funcId;
        ++v109;
        if ( !funcId )
          goto LABEL_268;
      }
      eventIdList = v176;
      LODWORD(v102) = v176->max_length;
      v105 = v180 + 1;
      if ( (__int64)(v180 + 1) >= (int)v102 )
        return v104 & 1;
    }
  }
LABEL_266:
  v104 = 0;
  return v104 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  unsigned __int64 v15; // x21
  unsigned __int64 max_length; // x9
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9805 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E9805 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(Instance, v12);
    }
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
      {
        v17 = sub_B5D6C8(Instance);
        sub_B5D668(v17, 0LL);
      }
      if ( !v14 )
        goto LABEL_15;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v14,
                                    &entity,
                                    funcId->m_Items[v15 + 1],
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (DataManager_o *)LODWORD(entity->fields.age);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v15;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v23; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v25; // x20
  unsigned __int64 v26; // x22
  unsigned __int64 max_length; // x9
  int age; // w8
  int datalist; // w8
  System_Collections_Generic_Dictionary_string__int__o *v30; // x19
  __int64 v32; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9804 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v17, v18, v19);
    byte_42E9804 = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = (DataManager_o *)SkillLvEntity__getValues(this, v23);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v25 = Instance;
  v26 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v26 >= (int)max_length )
      return 0;
    if ( v26 >= max_length )
      goto LABEL_23;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  funcId->m_Items[v26 + 1],
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      age = (int)entity->fields.age;
      if ( age == 123 || age == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v26;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v25 )
LABEL_15:
    sub_B5D69C(Instance, v21);
  datalist = (int)v25->fields.datalist;
  if ( (int)v26 >= datalist )
    return 0;
  if ( (unsigned int)v26 >= datalist )
  {
LABEL_23:
    v32 = sub_B5D6C8(Instance);
    sub_B5D668(v32, 0LL);
  }
  v30 = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&v25->fields.lookup + v26);
  if ( v30
    && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v30,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_973/*"0"*/,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_string__int___get_Item(
             v30,
             (System_String_o *)StringLiteral_973/*"0"*/,
             (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Int32_array *funcId; // x8
  DataManager_o *Instance; // x0
  struct System_Int32_array *v16; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  unsigned __int64 v18; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v20; // x0
  System_String_o **p_saveDataMapList; // x8
  __int64 v23; // x0

  if ( (byte_42E9803 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E9803 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v16 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_B5D69C(Instance, method);
    }
    v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v18 = 0LL;
    while ( 1 )
    {
      max_length = v16->max_length;
      if ( (__int64)v18 >= (int)max_length )
        break;
      if ( v18 >= max_length )
      {
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      if ( !v17 )
        goto LABEL_13;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v17,
                                    v16->m_Items[v18 + 1],
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_saveDataMapList = (System_String_o **)&Instance->fields.saveDataMapList;
        return *p_saveDataMapList;
      }
      v16 = this->fields.funcId;
      ++v18;
      if ( !v16 )
        goto LABEL_13;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6772 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  p_saveDataMapList = &v20->static_fields->unknownNameText;
  return *p_saveDataMapList;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42E9810 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18275/*"down"*/, v11, v12, v13);
    byte_42E9810 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18275/*"down"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_18275/*"down"*/,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v15);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v17 = (SkillLvEntity_o *)sub_B5D990(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v17, v18);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall SkillLvEntity__getMovePositionUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42E980F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23239/*"up"*/, v11, v12, v13);
    byte_42E980F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_23239/*"up"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_23239/*"up"*/,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v15);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v17 = (SkillLvEntity_o *)sub_B5D990(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v17, v18);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *__fastcall SkillLvEntity__getPlayVoiceNo(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *result; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E980A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10822/*"PlayVoiceNo"*/, v11, v12, v13);
    byte_42E980A = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10822/*"PlayVoiceNo"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B5D69C(0LL, v15);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10822/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  struct System_String_array *svals; // x8
  int max_length; // w19
  __int64 klass; // x0
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_string__int__array *v29; // x20
  il2cpp_array_size_t v30; // w25
  struct System_String_array *v31; // x8
  System_String_o *v32; // x22
  int v33; // w27
  __int64 v34; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v35; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppClass **v42; // x23
  BattleServantConfConponent_o *v43; // x23
  int32_t v44; // w8
  System_String_o *v45; // x24
  BattleServantConfConponent_c *v46; // x24
  int32_t v47; // w2
  const MethodInfo_2F1B41C *v48; // x3
  System_Xml_XmlQualifiedName_o *v49; // x1
  __int64 v50; // x24
  __int64 v52; // x0
  __int64 v53; // x0
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E97FE & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int____TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v22, v23, v24);
    byte_42E97FE = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_B5D5DC(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_B5D5DC(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v29 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = this->fields.svals;
      if ( !v31 )
        goto LABEL_41;
      if ( v30 >= v31->max_length )
        goto LABEL_42;
      klass = (__int64)v31->m_Items[v30];
      if ( !klass )
        goto LABEL_41;
      klass = (__int64)System_String__Replace_44585024(
                         (System_String_o *)klass,
                         (System_String_o *)StringLiteral_15824/*"["*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
      if ( !klass )
        goto LABEL_41;
      v32 = System_String__Replace_44585024(
              (System_String_o *)klass,
              (System_String_o *)StringLiteral_16061/*"]"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      klass = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v28 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 44;
      if ( !v32
        || (klass = (__int64)System_String__Split(v32, (System_Char_array *)klass, 0LL)) == 0
        || (v33 = *(_DWORD *)(klass + 24),
            v34 = klass,
            v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
              v35,
              (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v29) )
      {
LABEL_41:
        sub_B5D69C(klass, v28);
      }
      if ( v35 )
      {
        klass = sub_B5D684(v35, v29->obj.klass->_1.element_class);
        if ( !klass )
        {
          v53 = sub_B5D6BC(0LL);
          sub_B5D668(v53, 0LL);
        }
      }
      if ( v30 >= v29->max_length )
      {
LABEL_42:
        v52 = sub_B5D6C8(klass);
        sub_B5D668(v52, 0LL);
      }
      v42 = &v29->obj.klass + (int)v30;
      v42[4] = (Il2CppClass *)v35;
      v43 = (BattleServantConfConponent_o *)(v42 + 4);
      sub_B5D560(v43, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
      result[1] = 0;
      if ( v33 >= 1 )
        break;
LABEL_37:
      if ( (int)++v30 >= max_length )
        return v29;
    }
    v44 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v44 >= *(_DWORD *)(v34 + 24) )
        goto LABEL_42;
      v45 = *(System_String_o **)(v34 + 8LL * v44 + 32);
      klass = System_Int32__TryParse(v45, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      klass = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v28 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 58;
      if ( !v45 )
        goto LABEL_41;
      klass = (__int64)System_String__Split(v45, (System_Char_array *)klass, 0LL);
      if ( !klass )
        goto LABEL_41;
      v50 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v30 >= v29->max_length || !*(_DWORD *)(v50 + 24) )
            goto LABEL_42;
          klass = (__int64)v43->klass;
          if ( !v43->klass )
            goto LABEL_41;
          v47 = result[0];
          v49 = *(System_Xml_XmlQualifiedName_o **)(v50 + 32);
          v48 = (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_25:
          System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)klass,
            v49,
            v47,
            v48);
        }
      }
      v44 = ++result[1];
      if ( result[1] >= v33 )
        goto LABEL_37;
    }
    if ( v30 >= v29->max_length )
      goto LABEL_42;
    v46 = v43->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v46 )
      goto LABEL_41;
    v47 = result[0];
    v48 = (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v49 = (System_Xml_XmlQualifiedName_o *)klass;
    klass = (__int64)v46;
    goto LABEL_25;
  }
  return v29;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *result; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E9809 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15378/*"VoiceAssetName"*/, v11, v12, v13);
    byte_42E9809 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15378/*"VoiceAssetName"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B5D69C(0LL, v15);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15378/*"VoiceAssetName"*/,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v15; // s8
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  float result; // s0
  SkillLvEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42E980D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15380/*"VoiceVolume"*/, v11, v12, v13);
    byte_42E980D = 1;
  }
  script = this->fields.script;
  v15 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15380/*"VoiceVolume"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v15;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15380/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v16);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v19 = (SkillLvEntity_o *)sub_B5D990(Item);
  SkillLvEntity__getMovePositionUp(v19, v20);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E980B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10823/*"PlayVoiceWait"*/, v5, v6, v7);
    byte_42E980B = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10823/*"PlayVoiceWait"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x0

  if ( (byte_42E5DE7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16486/*"afterClearBgmId"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_20049/*"indv"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16895/*"beforeClearBgmId"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v21, v22, v23);
    byte_42E5DE7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_20049/*"indv"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21903/*"questId"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21905/*"questPhase"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16895/*"beforeClearBgmId"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16486/*"afterClearBgmId"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_B5D69C(Item, v25);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return;
  }
LABEL_16:
  v26 = (const MethodInfo *)sub_B5D990(Item);
  SkillMaster___c___cctor(v26);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SkillLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DE5 & 1) == 0 )
  {
    sub_B5D5C4(&SkillLvEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5DE5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SkillLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillLvEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillLvEntity___c___GetEventIndividuality_b__61_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w19
  System_Nullable_int__o v6; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v7; // 0:x0.8

  v4 = x;
  if ( (byte_42E5DE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_int___ctor__, x, (_DWORD)method, v3);
    byte_42E5DE6 = 1;
  }
  v7 = (System_Nullable_int__o)&v6;
  v6 = 0LL;
  System_Nullable_int____ctor(v7, v4 - 1, (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
  return v6;
}