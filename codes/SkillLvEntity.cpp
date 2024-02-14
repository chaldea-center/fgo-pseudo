void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215537 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215537 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_26137368(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  struct System_Int32_array *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v27; // x0
  struct System_String_array *v28; // x1
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_string__string__o *v37; // x21

  if ( (byte_4215538 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor___67827896, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&string___TypeInfo, v8);
    byte_4215538 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_B0D97C(v9);
  this->fields.skillId = srcEntity->fields.skillId;
  this->fields.lv = srcEntity->fields.lv;
  this->fields.chargeTurn = srcEntity->fields.chargeTurn;
  this->fields.priority = srcEntity->fields.priority;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v17 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v18 = v17;
    v19 = (struct System_Int32_array *)sub_B0D964(v17, int___TypeInfo);
    if ( !v19 )
      goto LABEL_12;
  }
  else
  {
    v19 = 0LL;
  }
  this->fields.funcId = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcId,
    (System_Int32_array **)v19,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v27 = System_Array__Clone(svals, 0LL);
  if ( !v27 )
    goto LABEL_13;
  v18 = v27;
  v28 = (struct System_String_array *)sub_B0D964(v27, string___TypeInfo);
  if ( v28 )
    goto LABEL_14;
LABEL_12:
  sub_B0DC70(v18);
LABEL_13:
  v28 = 0LL;
LABEL_14:
  this->fields.svals = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)v28,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v37 = (System_Collections_Generic_Dictionary_string__string__o *)sub_B0D974(
                                                                       System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                       v29,
                                                                       v30);
    System_Collections_Generic_Dictionary_string__string____ctor_48538188(
      v37,
      script,
      (const MethodInfo_2E4A24C *)Method_System_Collections_Generic_Dictionary_string__object___ctor___67827896);
  }
  else
  {
    v37 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)v37,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4215536 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4215536 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421555D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1819/*"ActNpcServantId"*/, method);
    byte_421555D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_1819/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4215554 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16281/*"actRarity"*/, method);
    byte_4215554 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16281/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v19; // x20
  System_Collections_Generic_List_int__o *v21; // x19
  int monitor; // w8
  unsigned int v23; // w21
  int32_t *v24; // x0
  SkillLvEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4215550 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1851/*"AddIndiv"*/, v12);
    byte_4215550 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_1851/*"AddIndiv"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v14 = this->fields.script;
  if ( !v14 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
           (System_Type_o *)StringLiteral_1851/*"AddIndiv"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
  {
    v19 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_List_object__TypeInfo
        ? Item
        : 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
    goto LABEL_24;
  monitor = (int)v19[1].monitor;
  if ( monitor < 1 )
  {
LABEL_22:
    if ( v21 )
      return System_Collections_Generic_List_int___ToArray(
               v21,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_B0D97C(v14);
  }
  v23 = 0;
  while ( 1 )
  {
    if ( monitor <= v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v21 )
      goto LABEL_24;
    v14 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v19[1].klass->_1.byval_arg.data
                                                                            + (int)v23);
    if ( !v14 )
      goto LABEL_24;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v24 = (int32_t *)j_il2cpp_object_unbox_0(v14);
    System_Collections_Generic_List_int___Add(
      v21,
      *v24,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v19[1].monitor;
    if ( (int)++v23 >= monitor )
      goto LABEL_22;
  }
  v25 = (SkillLvEntity_o *)sub_B0DC70(v14);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v25, v26);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421555B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16311/*"additionalSkillActorType"*/, method);
    byte_421555B = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16311/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215559 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16312/*"additionalSkillId"*/, method);
    byte_4215559 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16312/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421555A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16314/*"additionalSkillLv"*/, method);
    byte_421555A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16314/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421555C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16702/*"battleStartRemainingTurn"*/, method);
    byte_421555C = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16702/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  EventUpValInfo_o **v5; // x28
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Values; // x0
  const MethodInfo *v23; // x1
  struct System_Int32_array *v24; // x8
  System_Xml_XmlQualifiedName_o **v25; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x24
  unsigned __int64 v27; // x23
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_string__int__o *v31; // x25
  EventUpValInfo_o *v32; // x8
  System_Xml_XmlQualifiedName_o **v33; // x9
  System_Xml_XmlQualifiedName_o *v34; // x1
  EventUpValInfo_o **v35; // x27
  System_Xml_XmlQualifiedName_o **v36; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w27
  FunctionEntity_o *v42; // x28
  int32_t v43; // w1
  int32_t v44; // w1
  __int64 v46; // x0
  int32_t dispLimitCount; // [xsp+4h] [xbp-7Ch]
  int32_t limitCount; // [xsp+8h] [xbp-78h]
  EventUpValInfo_o **v49; // [xsp+10h] [xbp-70h]
  ServantEntity_o *v50; // [xsp+18h] [xbp-68h]
  char v51; // [xsp+20h] [xbp-60h]
  EventDropUpValInfo_o *v52; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_4215541 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v13);
    sub_B0D8A4(&EventDropUpValInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v15);
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, v16);
    sub_B0D8A4(&StringLiteral_13613/*"Target"*/, v17);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v18);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v19);
    byte_4215541 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v50 = 0LL;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_51;
        v50 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getValues(this, v23);
      v24 = this->fields.funcId;
      if ( v24 )
      {
        v51 = 0;
        v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1111/*"2"*/;
        v26 = Values;
        v27 = 0LL;
        p_list = &Values->fields.list;
        do
        {
          max_length = v24->max_length;
          if ( (__int64)v27 >= (int)max_length )
          {
            LOBYTE(funcId) = v51;
            return (char)funcId;
          }
          if ( v27 >= max_length )
            goto LABEL_55;
          if ( !Master_WarQuestSelectionMaster )
            break;
          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v24->m_Items[v27 + 1],
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
              if ( !v26 )
                break;
              MasterName_k__BackingField_low = LODWORD(v26->fields._MasterName_k__BackingField);
              if ( (__int64)v27 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v27 >= MasterName_k__BackingField_low )
              {
LABEL_55:
                v46 = sub_B0D9A8(Values);
                sub_B0D948(v46, 0LL);
              }
              v31 = (System_Collections_Generic_Dictionary_string__int__o *)p_list[v27];
              if ( v31 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity->fields.age) == 111 )
                {
                  Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)p_list[v27],
                                                                            *v25,
                                                                            (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                              v31,
                                                                              (System_String_o *)*v25,
                                                                              (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( (int)Values < 1 )
                      goto LABEL_36;
                    if ( v50 )
                    {
                      v32 = *v5;
                      if ( !*v5 )
                        break;
                      v33 = v25;
                      v34 = *v25;
                      dispLimitCount = v32->fields.dispLimitCount;
                      limitCount = v32->fields.limitCount;
                      v35 = v5;
                      v36 = v33;
                      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                               v31,
                               (System_String_o *)v34,
                               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                v50,
                                                                                limitCount,
                                                                                dispLimitCount,
                                                                                Item,
                                                                                0LL);
                      v38 = v35;
                      v25 = v36;
                      v5 = v38;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_36:
                        v49 = v5;
                        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                               (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v31,
                               (System_Xml_XmlQualifiedName_o *)StringLiteral_13613/*"Target"*/,
                               (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v41 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                  v31,
                                  (System_String_o *)StringLiteral_13613/*"Target"*/,
                                  (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        }
                        else
                        {
                          v41 = 0;
                        }
                        v42 = (FunctionEntity_o *)entity;
                        v52 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v39, v40);
                        EventDropUpValInfo___ctor_28902740(v52, 0, v42, v41, 0LL);
                        if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                               v31,
                               (System_String_o *)StringLiteral_960/*"0"*/,
                               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v31,
                                                                                    (System_String_o *)StringLiteral_1013/*"1"*/,
                                                                                    (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          v5 = v49;
                          v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1111/*"2"*/;
                          if ( !*v49 )
                            break;
                          v43 = (int)Values;
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v52;
                          if ( !v52 )
                            break;
                          EventDropUpValInfo__SetAddCount(v52, v43, (*v49)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v31,
                                                                                    (System_String_o *)StringLiteral_960/*"0"*/,
                                                                                    (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          v5 = v49;
                          v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1111/*"2"*/;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                      v31,
                                                                                      (System_String_o *)StringLiteral_1013/*"1"*/,
                                                                                      (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            if ( !*v49 )
                              break;
                            v44 = (int)Values;
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v52;
                            if ( !v52 )
                              break;
                            EventDropUpValInfo__SetRateCount(v52, v44, (*v49)->fields.equipSvtId > 0, 0, 0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Values,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                        v51 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v24 = this->fields.funcId;
          ++v27;
        }
        while ( v24 );
      }
    }
LABEL_51:
    sub_B0D97C(Values);
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
  SkillLvEntity_o *v14; // x25
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Int32_array *funcId; // x27
  __int64 v26; // x8
  unsigned __int64 v27; // x28
  struct System_Int32_array *v28; // x8
  int32_t v29; // w26
  __int64 v31; // x1
  __int64 v32; // x2
  SkillLvEntity_o *v33; // x21
  SkillLvEntity___c_c *v34; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__61_0; // x22
  Il2CppObject *v37; // x23
  struct SkillLvEntity___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+Ch] [xbp-64h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *v49; // [xsp+18h] [xbp-58h] BYREF

  v14 = this;
  if ( (byte_4215560 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v18);
    sub_B0D8A4(&Method_System_Func_QuestGroupEntity__int___ctor__, v19);
    sub_B0D8A4(&System_Func_QuestGroupEntity__int__TypeInfo, v20);
    sub_B0D8A4(&int___TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v22);
    sub_B0D8A4(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v23);
    this = (SkillLvEntity_o *)sub_B0D8A4(&SkillLvEntity___c_TypeInfo, v24);
    byte_4215560 = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_43;
  v26 = *(_QWORD *)&funcId->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v47 = questId;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_44;
      v28 = v14->fields.funcId;
      if ( !v28 )
        goto LABEL_43;
      if ( v28->max_length <= index )
        goto LABEL_44;
      v29 = funcId->m_Items[v27 + 1];
      if ( v29 != v28->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_43;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v29, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_43;
          this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)funcMaster,
                                      &v49,
                                      v29,
                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v26) = funcId->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_20;
    }
    if ( !v49 )
      goto LABEL_43;
    questTvals = *(System_Int32_array **)&v49->fields.startType;
LABEL_20:
    questId = v47;
  }
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_43;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_43;
  if ( questId < 1 )
    return questTvals;
  v33 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v34 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v34 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_QuestGroupEntity__int__TypeInfo,
                                                                                 v31,
                                                                                 v32);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__61_0,
      v37,
      Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__,
      (const MethodInfo_2619564 *)Method_System_Func_QuestGroupEntity__int___ctor__);
    v38 = SkillLvEntity___c_TypeInfo->static_fields;
    v38->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v45,
         questId,
         (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !this )
LABEL_43:
    sub_B0D97C(this);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
  {
LABEL_44:
    v46 = sub_B0D9A8(this);
    sub_B0D948(v46, 0LL);
  }
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array *StringArray; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_array *v13; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v14; // x19
  __int64 v15; // x0
  System_String_o *v16; // x20
  int v17; // w9
  __int64 v18; // x20
  int v19; // w8
  __int64 v21; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421555F & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18852/*"followerVals"*/, v6);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v9);
    byte_421555F = 1;
  }
  *(_QWORD *)result = 0LL;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_18852/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v13 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v11,
                                                                            v12);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v14,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v13->max_length )
    goto LABEL_22;
  v15 = (__int64)v13->m_Items[0];
  if ( !v15 )
    goto LABEL_23;
  v15 = (__int64)System_String__Replace_43857140(
                   (System_String_o *)v15,
                   (System_String_o *)StringLiteral_15681/*"["*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0LL);
  if ( !v15 )
    goto LABEL_23;
  v16 = System_String__Replace_43857140(
          (System_String_o *)v15,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_22;
  *(_WORD *)(v15 + 32) = 44;
  if ( !v16 || (v15 = (__int64)System_String__Split(v16, (System_Char_array *)v15, 0LL), result[1] = 0, !v15) )
LABEL_23:
    sub_B0D97C(v15);
  v17 = *(_DWORD *)(v15 + 24);
  v18 = v15;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < (unsigned int)v17 )
    {
      v15 = System_Int32__TryParse(*(System_String_o **)(v18 + 8LL * v19 + 32), result, 0LL);
      if ( (v15 & 1) != 0 )
      {
        v15 = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
        if ( !v14 )
          goto LABEL_23;
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
          (UIPanel_o *)v15,
          result[0],
          (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v19 = result[1] + 1;
      result[1] = v19;
      v17 = *(_DWORD *)(v18 + 24);
      if ( v19 >= v17 )
        return (System_Collections_Generic_Dictionary_string__int__o *)v14;
    }
LABEL_22:
    v21 = sub_B0D9A8(v15);
    sub_B0D948(v21, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v14;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  SkillLvEntity___c_c *v10; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  System_String_o *v13; // x20
  Il2CppObject *v14; // x22
  struct SkillLvEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Nullable_int__o v24; // 0:x3.8

  if ( (byte_4215551 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_B0D8A4(&Method_System_Func_long__Nullable_int____ctor__, v4);
    sub_B0D8A4(&System_Func_long__Nullable_int___TypeInfo, v5);
    sub_B0D8A4(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v6);
    sub_B0D8A4(&SkillLvEntity___c_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_18981/*"funcPositionForSplitFuncSequence"*/, v8);
    byte_4215551 = 1;
  }
  script = this->fields.script;
  v10 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v10 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__44_0 = static_fields->__9__44_0;
  v13 = (System_String_o *)StringLiteral_18981/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__44_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_B0D974(System_Func_long__Nullable_int___TypeInfo, method, v2);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v14,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      (const MethodInfo_2615E2C *)Method_System_Func_long__Nullable_int____ctor__);
    v15 = SkillLvEntity___c_TypeInfo->static_fields;
    v15->__9__44_0 = _9__44_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v15->__9__44_0,
      (System_Int32_array **)_9__44_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v24 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v13,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v24,
           (const MethodInfo_17169E8 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *v16; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  System_String_o *Value_string; // x0
  _BOOL8 v22; // x0
  int32_t *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  int v26; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4215555 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_List_object____, key);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_4215555 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, key, method);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_object__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   script,
                   key,
                   (System_String_o *)v20,
                   (const MethodInfo_1708E74 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v27 = v25;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v22 )
      break;
    if ( !v16 )
      sub_B0D97C(v22);
    if ( !v27.fields.current )
      sub_B0D97C(0LL);
    if ( v27.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Value_string = (System_String_o *)sub_B0DC70(v27.fields.current);
      goto LABEL_15;
    }
    v23 = (int32_t *)j_il2cpp_object_unbox_0(v27.fields.current);
    System_Collections_Generic_List_int___Add(
      v16,
      *v23,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v16 )
LABEL_15:
    sub_B0D97C(Value_string);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v8; // x20

  if ( (byte_4215552 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v4);
    sub_B0D8A4(&Method_System_Func_List_object___List_int____ctor__, v5);
    sub_B0D8A4(&System_Func_List_object___List_int___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16692/*"battleEffectId"*/, v7);
    byte_4215552 = 1;
  }
  v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                         System_Func_List_object___List_int___TypeInfo,
                                                                                         method,
                                                                                         v2);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v8,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_261A104 *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16692/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v8,
                                                     0LL,
                                                     (const MethodInfo_1716B5C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4215557 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_4215557 = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                                                                                 (System_Type_o *)key,
                                                                                                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (SkillLvEntity_o *)sub_B0DC70(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0

  if ( (byte_421553B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_421553B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B0D97C(DataValsList);
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_string__object__o *v21; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x20
  __int64 v28; // x9
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215556 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_List_object____, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v14);
    sub_B0D8A4(&SkillLvEntity_SvtChangeBgm_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_22534/*"svtBgmChange"*/, v16);
    byte_4215556 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22534/*"svtBgmChange"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v17;
  v21 = this->fields.script;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_object__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BasicHelper__GetValue_string_(
                                                                                           v21,
                                                                                           (System_String_o *)StringLiteral_22534/*"svtBgmChange"*/,
                                                                                           (System_String_o *)v22,
                                                                                           (const MethodInfo_1708E74 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_17:
    sub_B0D97C(script);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)script,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v32.fields.current;
    v26 = (SkillLvEntity_SvtChangeBgm_o *)sub_B0D974(SkillLvEntity_SvtChangeBgm_TypeInfo, v23, v24);
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26;
    if ( current )
    {
      v28 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v29 = sub_B0DC70(current);
LABEL_16:
        sub_B0D97C(v29);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v26, (System_Collections_Generic_Dictionary_string__object__o *)current, 0LL);
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      v27,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v17;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v10; // x1
  DataVals_array *DataValsList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  struct System_Int32_array *v13; // x8
  SkillLvMaster_o *v14; // x23
  unsigned __int64 v15; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v17; // x24
  int32_t v18; // w1
  int32_t Param; // w25
  int32_t v20; // w1
  const MethodInfo *v21; // x4
  System_Collections_Generic_IEnumerable_T__o *v22; // x1
  __int64 v23; // x0
  SkillLvEntity_o *v25; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4215562 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, ret);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_4215562 = 1;
  }
  v25 = 0LL;
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
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v10);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v13 = this->fields.funcId;
    if ( !v13 )
LABEL_33:
      sub_B0D97C(isAddState);
    v14 = (SkillLvMaster_o *)isAddState;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v13->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_35;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_33;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  v13->m_Items[v15 + 1],
                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_33;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_33;
          if ( v15 >= DataValsList->max_length )
          {
LABEL_35:
            v23 = sub_B0D9A8(isAddState);
            sub_B0D948(v23, 0LL);
          }
          if ( !entity )
            goto LABEL_33;
          v17 = DataValsList->m_Items[v15];
          if ( !v17 )
            goto LABEL_33;
          DataVals__SetTempType(
            DataValsList->m_Items[v15],
            (FunctionMaster_o *)Master_WarQuestSelectionMaster,
            (int32_t)entity->fields.age,
            0LL);
          v18 = DataVals__isParam(v17, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v17, v18, 0, 0LL);
          v20 = DataVals__isParam(v17, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v17, v20, 0, 0LL);
          if ( !v14 )
            goto LABEL_33;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v14,
                                                                      &v25,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v21);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_33;
            v22 = (System_Collections_Generic_IEnumerable_T__o *)v25->fields.funcId;
            if ( v22 )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_33;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                v22,
                (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v13 = this->fields.funcId;
      ++v15;
      if ( !v13 )
        goto LABEL_33;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421555E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15456/*"WarBoardBreakPointDamage"*/, method);
    byte_421555E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15456/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215561 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16313/*"additionalSkillInsertCurrentSkillAfter"*/, method);
    byte_4215561 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16313/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_421554E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_16501/*"aress"*/, v3);
    byte_421554E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_16501/*"aress"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  int max_length; // w8
  DataVals_array *v4; // x19
  unsigned int v5; // w22
  bool v6; // w21
  DataVals_o *v7; // x20
  int32_t funcType; // w8
  __int64 v10; // x0

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_15:
    sub_B0D97C(SetTypeDataValArray);
  max_length = SetTypeDataValArray->max_length;
  v4 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v10 = sub_B0D9A8(SetTypeDataValArray);
      sub_B0D948(v10, 0LL);
    }
    v7 = v4->m_Items[v5];
    if ( !v7 )
      goto LABEL_15;
    funcType = v7->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v7, 1, 0, 0LL) > 0 )
        return v6;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v7, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v4->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  bool v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = isCheckHate;
  if ( (byte_421554F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B0D8A4(&long_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5936/*"EnableTarget"*/, v7);
    byte_421554F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_5936/*"EnableTarget"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_5936/*"EnableTarget"*/,
                                                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) == 1;
  v11 = (SkillLvEntity_o *)sub_B0DC70(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v11, v12);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215553 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19468/*"ignoreWhiteFade"*/, method);
    byte_4215553 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19468/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215558 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21172/*"noTargetSkipSkill"*/, method);
    byte_4215558 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21172/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_421554D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_21887/*"revivalUnder"*/, v3);
    byte_421554D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21887/*"revivalUnder"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_421554C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_21888/*"revivalUp"*/, v3);
    byte_421554C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21888/*"revivalUp"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4215549 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_B0D8A4(&StringLiteral_2013/*"ApplySupportSvt"*/, v5);
    byte_4215549 = 1;
  }
  if ( !vals )
    sub_B0D97C(this);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2013/*"ApplySupportSvt"*/,
           (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_string__int___get_Item(
            vals,
            (System_String_o *)StringLiteral_2013/*"ApplySupportSvt"*/,
            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4215547 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_15268/*"VoiceVolume"*/, v3);
    byte_4215547 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15268/*"VoiceVolume"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *v9; // x8
  DataVals_array *v10; // x19
  __int64 v11; // x23
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  DataVals_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_421553A & 1) == 0 )
  {
    sub_B0D8A4(&DataVals___TypeInfo, method);
    sub_B0D8A4(&DataVals_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421553A = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_B0D8BC(DataVals___TypeInfo, 1LL);
    v25 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v23, v24);
    DataVals___ctor(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v25 )
      {
        v6 = sub_B0D964(v25, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v34 = sub_B0D99C(v6);
          sub_B0D948(v34, 0LL);
        }
      }
      if ( !v10->max_length )
      {
LABEL_20:
        v33 = sub_B0D9A8(v6);
        sub_B0D948(v33, 0LL);
      }
      v10->m_Items[0] = v25;
      sub_B0D840((BattleServantConfConponent_o *)v10->m_Items, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
      return v10;
    }
LABEL_13:
    sub_B0D97C(v6);
  }
  v6 = sub_B0D8BC(DataVals___TypeInfo, svals->max_length);
  v9 = this->fields.svals;
  if ( !v9 )
    goto LABEL_13;
  v10 = (DataVals_array *)v6;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      return v10;
    if ( v14 >= max_length )
      goto LABEL_20;
    v15 = (System_String_o *)*((_QWORD *)&v9->obj.klass + v11);
    v16 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v7, v8);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_B0D964(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v10 + v12),
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  System_String_o *Detail; // x20

  if ( (byte_421553C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_421553C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v8);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  return SkillDetailParamFormatResolver__Apply(Detail, this, v9);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_26117940(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  System_String_o *Detail; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421553D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8396/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_421553D = 1;
  }
  if ( lv <= 0 )
  {
    v12 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8396/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v15 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v12 = (Il2CppObject *)System_String__Format(v10, v11, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v12, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x27
  const MethodInfo *v30; // x1
  FunctionGroupMaster_o *v31; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *QuestPhaseIndividualList; // x0
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v35; // x20
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v37; // x8
  unsigned __int64 v38; // x8
  System_Collections_Generic_Dictionary_string__int__o *v39; // x19
  WarEntity_o *v40; // x8
  int age; // w21
  struct System_String_o *name; // x3
  const MethodInfo *v43; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  System_Int32_array *Individuality; // x1
  __int64 *v47; // x8
  __int64 v49; // x0
  bool v50; // [xsp+Ch] [xbp-A4h]
  ItemMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-A0h]
  int32_t v52; // [xsp+20h] [xbp-90h]
  unsigned int v53; // [xsp+24h] [xbp-8Ch]
  ServantEntity_o *v54; // [xsp+28h] [xbp-88h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+30h] [xbp-80h]
  EventUpValSetupInfo_o *v56; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-70h]
  FunctionGroupEntity_o *v59; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4215542 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v23);
    sub_B0D8A4(&StringLiteral_1160/*"3"*/, v24);
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, v25);
    sub_B0D8A4(&StringLiteral_13613/*"Target"*/, v26);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v27);
    sub_B0D8A4(&StringLiteral_6182/*"EventId"*/, v28);
    byte_4215542 = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    v56 = setupInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v52 = wearesDispLimitCount;
    v53 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v54 = 0LL;
    }
    else
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_89;
      v54 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v30);
    QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                                v56,
                                                                                eventId,
                                                                                0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_89;
    v50 = !isOwner;
    m_Items = Values->m_Items;
    v35 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v35 >= (int)max_length )
        break;
      if ( v35 >= max_length )
        goto LABEL_97;
      if ( !v29 )
        goto LABEL_89;
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v29,
                                                                                  &entity,
                                                                                  funcId->m_Items[v35 + 1],
                                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_88;
      if ( isFuncGroup )
      {
        v37 = this->fields.funcId;
        if ( !v37 )
          goto LABEL_89;
        if ( v35 >= v37->max_length )
        {
LABEL_97:
          v49 = sub_B0D9A8(QuestPhaseIndividualList);
          sub_B0D948(v49, 0LL);
        }
        if ( !v31 )
          goto LABEL_89;
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)FunctionGroupMaster__TryGetEntity(
                                                                                    v31,
                                                                                    &v59,
                                                                                    v37->m_Items[v35 + 1],
                                                                                    eventId,
                                                                                    0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_88;
      }
      if ( !Values )
        goto LABEL_89;
      v38 = Values->max_length;
      if ( (__int64)v35 >= (int)v38 )
        goto LABEL_88;
      if ( v35 >= v38 )
        goto LABEL_97;
      v39 = m_Items[v35];
      if ( !v39 )
        goto LABEL_88;
      v40 = entity;
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
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1160/*"3"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1013/*"1"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v39,
                                                                                          (System_String_o *)StringLiteral_1111/*"2"*/,
                                                                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v56,
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
            if ( (v53 & 0x80000000) != 0 || !name[1].klass )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v54 )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality_29577112(
                                                                                          v54,
                                                                                          wearesLimitCount,
                                                                                          v52,
                                                                                          (System_Int32_array *)name,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v39,
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_6182/*"EventId"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_6182/*"EventId"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v54 )
                goto LABEL_88;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       v39,
                       (System_String_o *)StringLiteral_1111/*"2"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                          v54,
                                                                                          wearesLimitCount,
                                                                                          v52,
                                                                                          Item,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                   this,
                                   v35,
                                   eventId,
                                   v56->fields.questId,
                                   *(System_Int32_array **)&entity->fields.startType,
                                   (FunctionMaster_o *)v29,
                                   v31,
                                   v43);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v56,
                                                                                        questPhaseIndividualityList,
                                                                                        EventIndividuality,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v39,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_13613/*"Target"*/,
                      (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_92;
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v39,
                                                                                          (System_String_o *)StringLiteral_13613/*"Target"*/,
                                                                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v50 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1013/*"1"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_88;
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v56,
                                                                                        questPhaseIndividualityList,
                                                                                        *(System_Int32_array **)&entity->fields.startType,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            if ( !v54 )
              goto LABEL_96;
            Individuality = ServantEntity__getIndividuality(v54, wearesLimitCount, v52, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ItemMaster__GetIndividualityList_26872928(
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
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            goto LABEL_86;
          case 117:
          case 118:
            goto LABEL_87;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v47 = &StringLiteral_1111/*"2"*/;
            goto LABEL_82;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                                                                        (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v47 = &StringLiteral_1160/*"3"*/;
LABEL_82:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)*v47,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1013/*"1"*/,
                                                                                      (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v39,
                                                                                        (System_String_o *)StringLiteral_1013/*"1"*/,
                                                                                        (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_86:
              v40 = entity;
              if ( !entity )
                goto LABEL_89;
LABEL_87:
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                          v56,
                                                                                          questPhaseIndividualityList,
                                                                                          *(System_Int32_array **)&v40->fields.startType,
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
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v35],
                                                                                  (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                                                                  (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v39,
                                                                                    (System_String_o *)StringLiteral_1160/*"3"*/,
                                                                                    (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_89;
          QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                      v56,
                                                                                      questPhaseIndividualityList,
                                                                                      *(System_Int32_array **)&entity->fields.startType,
                                                                                      0LL);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)v54;
            if ( !v54 )
            {
LABEL_96:
              LODWORD(QuestPhaseIndividualList) = v53 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_29577112(
                                                   v54,
                                                   wearesLimitCount,
                                                   v52,
                                                   (System_Int32_array *)entity->fields.longName,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_89:
            sub_B0D97C(QuestPhaseIndividualList);
          }
        }
      }
LABEL_88:
      funcId = this->fields.funcId;
      ++v35;
      if ( !funcId )
        goto LABEL_89;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_26144328(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        const MethodInfo *method)
{
  SkillLvEntity_o *v9; // x23
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x24
  FunctionGroupMaster_o *v40; // x25
  const MethodInfo *v41; // x1
  WarEntity_o *v42; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x26
  __int64 v45; // x8
  SkillLvEntity_o *v46; // x28
  char v47; // w22
  unsigned __int64 v48; // x27
  EventUpValInfo_o *v49; // x8
  ServantLimitEntity_o *v50; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v52; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v54; // x8
  struct EventUpValSetupInfo_o *v55; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v57; // x26
  int age; // w19
  const MethodInfo *v59; // x2
  struct System_String_o *name; // x3
  FunctionEntity_o *v61; // x22
  int32_t Item; // w19
  __int64 v63; // x1
  __int64 v64; // x2
  EventUpValInfo_o *v65; // x8
  EventDropUpValInfo_o *v66; // x19
  const MethodInfo *v67; // x2
  struct System_Int32_array *v68; // x8
  EventPointBuffEntity_o *EnableEntity; // x19
  __int64 v70; // x1
  __int64 v71; // x2
  struct System_String_o *v72; // x25
  System_String_c *klass; // x8
  SkillLvEntity_o *v74; // x22
  unsigned __int64 v75; // x21
  int32_t lv; // w19
  char v77; // w8
  __int64 v78; // x1
  __int64 v79; // x2
  FunctionEntity_o *v80; // x21
  __int64 *v81; // x8
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x7
  EventUpValInfo_o *v84; // x8
  int32_t limitCount; // w19
  int32_t dispLimitCount; // w21
  int32_t v87; // w0
  struct EventUpValSetupInfo_o *v88; // x8
  SkillLvEntity_o *v89; // x2
  SkillEntity_o *v90; // x19
  const MethodInfo *v91; // x1
  SkillLvEntity_o *v92; // x21
  System_Int32_array *ActIndividuality; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  int32_t v96; // w19
  const MethodInfo *v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  int32_t v100; // w8
  int32_t v101; // w9
  int32_t v102; // w21
  FunctionEntity_o *v103; // x19
  EventDropUpValInfo_o *v104; // x22
  const MethodInfo *v105; // x2
  FunctionEntity_o *v106; // x21
  int32_t v107; // w22
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  FunctionEntity_o *v112; // x21
  __int64 v113; // x1
  __int64 v114; // x2
  FunctionEntity_o *v115; // x21
  EventUpValInfo_o *v116; // x8
  __int64 *v117; // x8
  FunctionEntity_o *v118; // x21
  EventUpValInfo_o *v119; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v120; // x1
  FunctionEntity_o *v121; // x21
  EventDropUpValInfo_o *v122; // x22
  UserServantMaster_o *v123; // x19
  __int64 v124; // x21
  UserServantEntity_o *HeroineData; // x0
  __int64 v127; // x0
  bool v128; // [xsp+4h] [xbp-DCh]
  FunctionGroupMaster_o *v129; // [xsp+8h] [xbp-D8h]
  bool v130; // [xsp+14h] [xbp-CCh]
  EventPointBuffEntity_o *v131; // [xsp+20h] [xbp-C0h]
  EventDropUpValInfo_o *value; // [xsp+28h] [xbp-B8h]
  SkillLvEntity_o *valuea; // [xsp+28h] [xbp-B8h]
  struct System_String_o *valueb; // [xsp+28h] [xbp-B8h]
  struct System_Int32_array *v136; // [xsp+38h] [xbp-A8h]
  char v137; // [xsp+44h] [xbp-9Ch]
  System_Int32_array *questPhaseIndividualityList; // [xsp+48h] [xbp-98h]
  SkillLvEntity_o *v139; // [xsp+50h] [xbp-90h]
  unsigned __int64 v140; // [xsp+58h] [xbp-88h]
  int32_t eventId; // [xsp+68h] [xbp-78h]
  FunctionGroupEntity_o *v144; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  v9 = this;
  if ( (byte_4215543 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, eventUpVallInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventPointBuffMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionGroupMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v26);
    sub_B0D8A4(&EventDropUpValInfo_TypeInfo, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v28);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v32);
    sub_B0D8A4(&StringLiteral_1160/*"3"*/, v33);
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, v34);
    sub_B0D8A4(&StringLiteral_13613/*"Target"*/, v35);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v36);
    sub_B0D8A4(&StringLiteral_6182/*"EventId"*/, v37);
    this = (SkillLvEntity_o *)sub_B0D8A4(&StringLiteral_960/*"0"*/, v38);
    byte_4215543 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  entity = 0LL;
  v144 = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v9->fields.funcId )
    goto LABEL_266;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  v40 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  v139 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v42 = 0LL;
    goto LABEL_18;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_268:
    sub_B0D97C(this);
  v42 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_18:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v9, v41);
  if ( !*eventUpVallInfo )
    goto LABEL_268;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_268;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_268;
  v45 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v45 >= 1 )
  {
    v128 = isOwner;
    v130 = v42 == 0LL || isEquipOnly;
    v46 = this;
    v47 = 0;
    v48 = 0LL;
    v136 = eventIdList;
    while ( 1 )
    {
      if ( v48 >= (unsigned int)v45 )
      {
LABEL_269:
        v127 = sub_B0D9A8(this);
        sub_B0D948(v127, 0LL);
      }
      v49 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_268;
      eventId = eventIdList->m_Items[v48 + 1];
      if ( v49->fields.equipSvtId < 1 )
      {
        v137 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_268;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo || !this )
          goto LABEL_268;
        v50 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (SkillLvEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_268;
        if ( !v50 )
          goto LABEL_268;
        if ( !this )
          goto LABEL_268;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v50->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    eventId,
                                    0LL);
        v137 = (char)this;
        v49 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_268;
      }
      this = (SkillLvEntity_o *)v49->fields.setupInfo;
      v140 = v48;
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
      v52 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v52 >= (int)max_length )
          break;
        if ( v52 >= max_length )
          goto LABEL_269;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_268;
        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    funcId->m_Items[v52 + 1],
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_160;
        if ( isFuncGroup )
        {
          v54 = v9->fields.funcId;
          if ( !v54 )
            goto LABEL_268;
          if ( v52 >= v54->max_length )
            goto LABEL_269;
          if ( !v40 )
            goto LABEL_268;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(v40, &v144, v54->m_Items[v52 + 1], eventId, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_160;
          this = (SkillLvEntity_o *)v144;
          if ( !v144 )
            goto LABEL_268;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v144, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_268;
            v55 = (*eventUpVallInfo)->fields.setupInfo;
            this = v139;
            if ( !v55 || !v139 )
              goto LABEL_268;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v139,
                                        eventId,
                                        v55->fields.questId,
                                        v55->fields.questPhase,
                                        12,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_160;
          }
        }
        if ( !v46 )
          goto LABEL_268;
        chargeTurn = (unsigned int)v46->fields.chargeTurn;
        if ( (__int64)v52 >= (int)chargeTurn )
          goto LABEL_160;
        if ( v52 >= chargeTurn )
          goto LABEL_269;
        v57 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)*((_QWORD *)&v46->fields.funcId + v52);
        if ( !v57 )
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
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1160/*"3"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1013/*"1"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_1111/*"2"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_160;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v59);
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
              if ( !v42 )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_29577112(
                                          (ServantEntity_o *)v42,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)name,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
LABEL_80:
              v61 = (FunctionEntity_o *)entity;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v57,
                       (System_String_o *)StringLiteral_960/*"0"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              value = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v63, v64);
              EventDropUpValInfo___ctor_28902740(value, eventId, v61, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v57,
                     (System_String_o *)StringLiteral_1013/*"1"*/,
                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_1013/*"1"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v117 = &StringLiteral_1111/*"2"*/;
                v66 = value;
                goto LABEL_233;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v65 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v66 = value;
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
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_6182/*"EventId"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_6182/*"EventId"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v82);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_160;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_138;
              if ( !v42 )
                goto LABEL_160;
              v84 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              limitCount = v84->fields.limitCount;
              dispLimitCount = v84->fields.dispLimitCount;
              v87 = System_Collections_Generic_Dictionary_string__int___get_Item(
                      (System_Collections_Generic_Dictionary_string__int__o *)v57,
                      (System_String_o *)StringLiteral_1111/*"2"*/,
                      (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(
                                          (ServantEntity_o *)v42,
                                          limitCount,
                                          dispLimitCount,
                                          v87,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
LABEL_138:
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v88 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v88 )
                goto LABEL_268;
              if ( !entity )
                goto LABEL_268;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v9,
                                          v52,
                                          eventId,
                                          v88->fields.questId,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          (FunctionMaster_o *)Master_WarQuestSelectionMaster,
                                          v40,
                                          v83);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v89 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v89,
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
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_268;
              this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v9->fields.skillId,
                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              v90 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v42;
              if ( !v42 )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          (ServantEntity_o *)v42,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v90 )
                goto LABEL_268;
              v92 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v90, v91);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v92,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)v42, 0LL);
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
              v123 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
              v124 = *(_QWORD *)&v42->fields.id;
              *(_QWORD *)&v148.fields.fakeValue = v42->fields.age;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = v42->fields.age;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v148.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v148.fields.currentCryptoKey = v124;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v148, 0LL);
              if ( !v123 )
                goto LABEL_268;
              HeroineData = UserServantMaster__getHeroineData(v123, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_160;
              }
LABEL_157:
              if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                     v57,
                     (System_Xml_XmlQualifiedName_o *)StringLiteral_13613/*"Target"*/,
                     (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_13613/*"Target"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v96 = (int)this;
                if ( (_DWORD)this == 1 && !v128 )
                  goto LABEL_160;
              }
              else
              {
                v96 = 0;
              }
              v121 = (FunctionEntity_o *)entity;
              v122 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v94, v95);
              EventDropUpValInfo___ctor_28902740(v122, eventId, v121, v96, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v57,
                     (System_String_o *)StringLiteral_960/*"0"*/,
                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_1013/*"1"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v122 )
                  goto LABEL_268;
                EventDropUpValInfo__SetAddCount(
                  v122,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v137 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_960/*"0"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              (System_String_o *)StringLiteral_1013/*"1"*/,
                                              (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v122 )
                    goto LABEL_268;
                  EventDropUpValInfo__SetRateCount(
                    v122,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v137 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_268;
              v120 = (EventMissionProgressRequest_Argument_ProgressData_o *)v122;
              goto LABEL_240;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_960/*"0"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_1013/*"1"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_160;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v97);
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
              v47 |= (unsigned __int8)this;
              if ( !v42 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          (ServantEntity_o *)v42,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_268;
              v100 = this->fields.chargeTurn;
              if ( v100 < 1 )
                goto LABEL_241;
              v101 = 0;
              valuea = this;
              while ( v101 < (unsigned int)v100 )
              {
                v102 = *((_DWORD *)&this->fields.funcId + v101);
                v103 = (FunctionEntity_o *)entity;
                v104 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v98, v99);
                EventDropUpValInfo___ctor_28902740(v104, eventId, v103, v102, 0LL);
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v57,
                       (System_String_o *)StringLiteral_960/*"0"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              (System_String_o *)StringLiteral_1013/*"1"*/,
                                              (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v104 )
                    goto LABEL_268;
                  EventDropUpValInfo__SetAddCount(
                    v104,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v137 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              (System_String_o *)StringLiteral_960/*"0"*/,
                                              (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                                (System_String_o *)StringLiteral_1013/*"1"*/,
                                                (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v104 )
                      goto LABEL_268;
                    EventDropUpValInfo__SetRateCount(
                      v104,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v137 & 1,
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
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                this = valuea;
                v47 = 1;
                v101 = actMaxRarity + 1;
                actMaxRarity = v101;
                v100 = valuea->fields.chargeTurn;
                if ( v101 >= v100 )
                  goto LABEL_160;
              }
              goto LABEL_269;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v105);
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
              v106 = (FunctionEntity_o *)entity;
              v107 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v57,
                       (System_String_o *)StringLiteral_960/*"0"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v66 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v108, v109);
              EventDropUpValInfo___ctor_28902740(v66, eventId, v106, v107, 0LL);
              goto LABEL_217;
            case 129:
              if ( isSupport )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1111/*"2"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v112 = (FunctionEntity_o *)entity;
              v66 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v110, v111);
              EventDropUpValInfo___ctor(v66, eventId, v112, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v57,
                     (System_String_o *)StringLiteral_960/*"0"*/,
                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v81 = &StringLiteral_1013/*"1"*/;
                goto LABEL_207;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_960/*"0"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v117 = &StringLiteral_1013/*"1"*/;
              goto LABEL_233;
            default:
              if ( age != 132 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v57,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                          (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1160/*"3"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v80 = (FunctionEntity_o *)entity;
              v66 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v78, v79);
              EventDropUpValInfo___ctor(v66, eventId, v80, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v57,
                     (System_String_o *)StringLiteral_1013/*"1"*/,
                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v81 = &StringLiteral_1111/*"2"*/;
LABEL_207:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)*v81,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v65 = *eventUpVallInfo;
                if ( !*eventUpVallInfo || !v66 )
                  goto LABEL_268;
LABEL_209:
                EventDropUpValInfo__SetAddCount(v66, (int32_t)this, v65->fields.equipSvtId > 0, v137 & 1, 0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            (System_String_o *)StringLiteral_1013/*"1"*/,
                                            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v117 = &StringLiteral_1111/*"2"*/;
LABEL_233:
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              (System_String_o *)*v117,
                                              (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v119 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo || !v66 )
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
                                      v57,
                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                                      (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              v67),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v68 = v9->fields.funcId;
              if ( !v68 )
                goto LABEL_268;
              if ( v52 >= v68->max_length )
                goto LABEL_269;
              if ( !this )
                goto LABEL_268;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               eventId,
                               v68->m_Items[v52 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1160/*"3"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v131 = EnableEntity;
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
                  if ( v130 )
                    goto LABEL_106;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_268;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_29577112(
                                              (ServantEntity_o *)v42,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity->fields.longName,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_106:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_268;
                    v129 = v40;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_268;
                    v72 = entity->fields.name;
                    if ( !v72 )
                      goto LABEL_268;
                    klass = v72[1].klass;
                    if ( (int)klass < 1 )
                    {
                      v77 = 0;
                    }
                    else
                    {
                      v74 = this;
                      v75 = 0LL;
                      while ( 1 )
                      {
                        if ( v75 >= (unsigned int)klass )
                          goto LABEL_269;
                        if ( !v74 )
                          goto LABEL_268;
                        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v74,
                                                    *((_DWORD *)&v72[1].monitor + v75),
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                        LODWORD(klass) = v72[1].klass;
                        if ( (__int64)++v75 >= (int)klass )
                        {
                          v77 = 0;
                          goto LABEL_225;
                        }
                      }
                      v77 = 1;
LABEL_225:
                      EnableEntity = v131;
                    }
                    v40 = v129;
                    if ( ((unsigned __int8)v77 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                  (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                                  (System_String_o *)StringLiteral_1160/*"3"*/,
                                                  (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_268;
                      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
                        v57,
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v118 = (FunctionEntity_o *)entity;
                    v66 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v70, v71);
                    EventDropUpValInfo___ctor(v66, eventId, v118, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                                (System_String_o *)StringLiteral_1160/*"3"*/,
                                                (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v119 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo || !v66 )
                      goto LABEL_268;
LABEL_236:
                    EventDropUpValInfo__SetRateCount(v66, (int32_t)this, v119->fields.equipSvtId > 0, v137 & 1, 0LL);
LABEL_237:
                    v116 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_268;
LABEL_238:
                    this = (SkillLvEntity_o *)v116->fields.dropList;
                    if ( !this )
                      goto LABEL_268;
                    v120 = (EventMissionProgressRequest_Argument_ProgressData_o *)v66;
LABEL_240:
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                      v120,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
LABEL_241:
                    v47 = 1;
                    goto LABEL_160;
                  }
                }
              }
            }
          }
          goto LABEL_160;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                    v57,
                                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1013/*"1"*/,
                                    (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                      (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                      (System_String_o *)StringLiteral_1013/*"1"*/,
                                      (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v115 = (FunctionEntity_o *)entity;
              v66 = (EventDropUpValInfo_o *)sub_B0D974(EventDropUpValInfo_TypeInfo, v113, v114);
              EventDropUpValInfo___ctor(v66, eventId, v115, 0LL);
LABEL_217:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                          (System_String_o *)StringLiteral_1013/*"1"*/,
                                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              if ( !v66 )
                goto LABEL_268;
              EventDropUpValInfo__SetRateCount(
                v66,
                (int32_t)this,
                (*eventUpVallInfo)->fields.equipSvtId > 0,
                v137 & 1,
                0LL);
              v116 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_268;
              goto LABEL_238;
            }
          }
        }
LABEL_160:
        funcId = v9->fields.funcId;
        ++v52;
        if ( !funcId )
          goto LABEL_268;
      }
      eventIdList = v136;
      LODWORD(v45) = v136->max_length;
      v48 = v140 + 1;
      if ( (__int64)(v140 + 1) >= (int)v45 )
        return v47 & 1;
    }
  }
LABEL_266:
  v47 = 0;
  return v47 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  unsigned __int64 v8; // x21
  unsigned __int64 max_length; // x9
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215540 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4215540 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_B0D97C(Instance);
    }
    v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v8 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
      {
        v10 = sub_B0D9A8(Instance);
        sub_B0D948(v10, 0LL);
      }
      if ( !v7 )
        goto LABEL_15;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v7,
                                    &entity,
                                    funcId->m_Items[v8 + 1],
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (DataManager_o *)LODWORD(entity->fields.age);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v8;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v10; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v12; // x20
  unsigned __int64 v13; // x22
  unsigned __int64 max_length; // x9
  int age; // w8
  int datalist; // w8
  System_Collections_Generic_Dictionary_string__int__o *v17; // x19
  __int64 v19; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421553F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v7);
    byte_421553F = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = (DataManager_o *)SkillLvEntity__getValues(this, v10);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v12 = Instance;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v13 >= (int)max_length )
      return 0;
    if ( v13 >= max_length )
      goto LABEL_23;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  funcId->m_Items[v13 + 1],
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      age = (int)entity->fields.age;
      if ( age == 123 || age == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v13;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v12 )
LABEL_15:
    sub_B0D97C(Instance);
  datalist = (int)v12->fields.datalist;
  if ( (int)v13 >= datalist )
    return 0;
  if ( (unsigned int)v13 >= datalist )
  {
LABEL_23:
    v19 = sub_B0D9A8(Instance);
    sub_B0D948(v19, 0LL);
  }
  v17 = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&v12->fields.lookup + v13);
  if ( v17
    && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v17,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_960/*"0"*/,
         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_string__int___get_Item(
             v17,
             (System_String_o *)StringLiteral_960/*"0"*/,
             (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *Instance; // x0
  struct System_Int32_array *v8; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  unsigned __int64 v10; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v12; // x0
  System_String_o **p_saveDataMapList; // x8
  __int64 v15; // x0

  if ( (byte_421553E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421553E = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v8 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_B0D97C(Instance);
    }
    v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
      {
        v15 = sub_B0D9A8(Instance);
        sub_B0D948(v15, 0LL);
      }
      if ( !v9 )
        goto LABEL_13;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v9,
                                    v8->m_Items[v10 + 1],
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_saveDataMapList = (System_String_o **)&Instance->fields.saveDataMapList;
        return *p_saveDataMapList;
      }
      v8 = this->fields.funcId;
      ++v10;
      if ( !v8 )
        goto LABEL_13;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_4212885 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  p_saveDataMapList = &v12->static_fields->unknownNameText;
  return *p_saveDataMapList;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_421554B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_18104/*"down"*/, v5);
    byte_421554B = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18104/*"down"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_18104/*"down"*/,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v8 = (SkillLvEntity_o *)sub_B0DC70(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_421554A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_23010/*"up"*/, v5);
    byte_421554A = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_23010/*"up"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_23010/*"up"*/,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v8 = (SkillLvEntity_o *)sub_B0DC70(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4215545 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_10721/*"PlayVoiceNo"*/, v5);
    byte_4215545 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10721/*"PlayVoiceNo"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B0D97C(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10721/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B0DC70(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_String_array *svals; // x8
  int max_length; // w19
  __int64 klass; // x0
  System_Collections_Generic_Dictionary_string__int__array *v12; // x20
  il2cpp_array_size_t v13; // w25
  struct System_String_array *v14; // x8
  System_String_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w27
  __int64 v19; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppClass **v27; // x23
  BattleServantConfConponent_o *v28; // x23
  int32_t v29; // w8
  System_String_o *v30; // x24
  BattleServantConfConponent_c *v31; // x24
  int32_t v32; // w2
  const MethodInfo_2E431E4 *v33; // x3
  System_Xml_XmlQualifiedName_o *v34; // x1
  __int64 v35; // x24
  __int64 v37; // x0
  __int64 v38; // x0
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4215539 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int____TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v8);
    byte_4215539 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_B0D8BC(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_B0D8BC(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v12 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = this->fields.svals;
      if ( !v14 )
        goto LABEL_41;
      if ( v13 >= v14->max_length )
        goto LABEL_42;
      klass = (__int64)v14->m_Items[v13];
      if ( !klass )
        goto LABEL_41;
      klass = (__int64)System_String__Replace_43857140(
                         (System_String_o *)klass,
                         (System_String_o *)StringLiteral_15681/*"["*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
      if ( !klass )
        goto LABEL_41;
      v15 = System_String__Replace_43857140(
              (System_String_o *)klass,
              (System_String_o *)StringLiteral_15917/*"]"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      klass = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 44;
      if ( !v15
        || (klass = (__int64)System_String__Split(v15, (System_Char_array *)klass, 0LL)) == 0
        || (v18 = *(_DWORD *)(klass + 24),
            v19 = klass,
            v20 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                                      System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                                      v16,
                                                                                      v17),
            System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
              v20,
              (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v12) )
      {
LABEL_41:
        sub_B0D97C(klass);
      }
      if ( v20 )
      {
        klass = sub_B0D964(v20, v12->obj.klass->_1.element_class);
        if ( !klass )
        {
          v38 = sub_B0D99C(0LL);
          sub_B0D948(v38, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
      {
LABEL_42:
        v37 = sub_B0D9A8(klass);
        sub_B0D948(v37, 0LL);
      }
      v27 = &v12->obj.klass + (int)v13;
      v27[4] = (Il2CppClass *)v20;
      v28 = (BattleServantConfConponent_o *)(v27 + 4);
      sub_B0D840(v28, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
      result[1] = 0;
      if ( v18 >= 1 )
        break;
LABEL_37:
      if ( (int)++v13 >= max_length )
        return v12;
    }
    v29 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v29 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_42;
      v30 = *(System_String_o **)(v19 + 8LL * v29 + 32);
      klass = System_Int32__TryParse(v30, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      klass = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 58;
      if ( !v30 )
        goto LABEL_41;
      klass = (__int64)System_String__Split(v30, (System_Char_array *)klass, 0LL);
      if ( !klass )
        goto LABEL_41;
      v35 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v13 >= v12->max_length || !*(_DWORD *)(v35 + 24) )
            goto LABEL_42;
          klass = (__int64)v28->klass;
          if ( !v28->klass )
            goto LABEL_41;
          v32 = result[0];
          v34 = *(System_Xml_XmlQualifiedName_o **)(v35 + 32);
          v33 = (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_25:
          System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)klass,
            v34,
            v32,
            v33);
        }
      }
      v29 = ++result[1];
      if ( result[1] >= v18 )
        goto LABEL_37;
    }
    if ( v13 >= v12->max_length )
      goto LABEL_42;
    v31 = v28->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v31 )
      goto LABEL_41;
    v32 = result[0];
    v33 = (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v34 = (System_Xml_XmlQualifiedName_o *)klass;
    klass = (__int64)v31;
    goto LABEL_25;
  }
  return v12;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4215544 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_15266/*"VoiceAssetName"*/, v5);
    byte_4215544 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15266/*"VoiceAssetName"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B0D97C(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15266/*"VoiceAssetName"*/,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B0DC70(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v7; // s8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  float result; // s0
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4215548 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_15268/*"VoiceVolume"*/, v5);
    byte_4215548 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15268/*"VoiceVolume"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15268/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v10 = (SkillLvEntity_o *)sub_B0DC70(Item);
  SkillLvEntity__getMovePositionUp(v10, v11);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4215546 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_10722/*"PlayVoiceWait"*/, v3);
    byte_4215546 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10722/*"PlayVoiceWait"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  const MethodInfo *v12; // x0

  if ( (byte_42122B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_16337/*"afterClearBgmId"*/, v6);
    sub_B0D8A4(&StringLiteral_19860/*"indv"*/, v7);
    sub_B0D8A4(&StringLiteral_16738/*"beforeClearBgmId"*/, v8);
    sub_B0D8A4(&StringLiteral_21684/*"questPhase"*/, v9);
    sub_B0D8A4(&StringLiteral_21682/*"questId"*/, v10);
    byte_42122B4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19860/*"indv"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21682/*"questId"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21684/*"questPhase"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16738/*"beforeClearBgmId"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16337/*"afterClearBgmId"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_B0D97C(Item);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return;
  }
LABEL_16:
  v12 = (const MethodInfo *)sub_B0DC70(Item);
  SkillMaster___c___cctor(v12);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SkillLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42122B2 & 1) == 0 )
  {
    sub_B0D8A4(&SkillLvEntity___c_TypeInfo, v1);
    byte_42122B2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SkillLvEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SkillLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillLvEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_42122B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_int___ctor__, x);
    byte_42122B3 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_297F978 *)Method_System_Nullable_int___ctor__);
  return v5;
}