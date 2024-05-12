void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C0A2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C0A2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_26852020(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  struct System_Int32_array *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v24; // x0
  struct System_String_array *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_string__string__o *v33; // x21

  if ( (byte_438C0A3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor___69339064);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&string___TypeInfo);
    byte_438C0A3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_B7769C(v5, v6);
  this->fields.skillId = srcEntity->fields.skillId;
  this->fields.lv = srcEntity->fields.lv;
  this->fields.chargeTurn = srcEntity->fields.chargeTurn;
  this->fields.priority = srcEntity->fields.priority;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_B77684(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.funcId = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.funcId,
    (System_Int32_array **)v16,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v24 = System_Array__Clone(svals, 0LL);
  if ( !v24 )
    goto LABEL_13;
  v15 = v24;
  v25 = (struct System_String_array *)sub_B77684(v24, string___TypeInfo);
  if ( v25 )
    goto LABEL_14;
LABEL_12:
  sub_B77990(v15);
LABEL_13:
  v25 = 0LL;
LABEL_14:
  this->fields.svals = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)v25,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v33 = (System_Collections_Generic_Dictionary_string__string__o *)sub_B77694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_string__string____ctor_49794012(
      v33,
      script,
      (const MethodInfo_2F7CBDC *)Method_System_Collections_Generic_Dictionary_string__object___ctor___69339064);
  }
  else
  {
    v33 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v33;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)v33,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438C0A1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C0A1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1888/*"ActNpcServantId"*/);
    byte_438C0C8 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_1888/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438C0BF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16549/*"actRarity"*/);
    byte_438C0BF = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16549/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v7; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v8; // x20
  System_Collections_Generic_List_int__o *v10; // x19
  int monitor; // w8
  unsigned int v12; // w21
  int32_t *v13; // x0
  SkillLvEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_438C0BB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&StringLiteral_1921/*"AddIndiv"*/);
    byte_438C0BB = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_1921/*"AddIndiv"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v5 = this->fields.script;
  if ( !v5 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5,
           (System_Type_o *)StringLiteral_1921/*"AddIndiv"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    v8 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v7 - 1] == System_Collections_Generic_List_object__TypeInfo
       ? Item
       : 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !v8 )
    goto LABEL_24;
  monitor = (int)v8[1].monitor;
  if ( monitor < 1 )
  {
LABEL_22:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_B7769C(v5, v4);
  }
  v12 = 0;
  while ( 1 )
  {
    if ( monitor <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v10 )
      goto LABEL_24;
    v5 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v8[1].klass->_1.byval_arg.data
                                                                           + (int)v12);
    if ( !v5 )
      goto LABEL_24;
    if ( v5->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v13 = (int32_t *)j_il2cpp_object_unbox_0(v5);
    System_Collections_Generic_List_int___Add(
      v10,
      *v13,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v8[1].monitor;
    if ( (int)++v12 >= monitor )
      goto LABEL_22;
  }
  v14 = (SkillLvEntity_o *)sub_B77990(v5);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v14, v15);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16582/*"additionalSkillActorType"*/);
    byte_438C0C6 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16582/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16583/*"additionalSkillId"*/);
    byte_438C0C4 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16583/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16585/*"additionalSkillLv"*/);
    byte_438C0C5 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16585/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16984/*"battleStartRemainingTurn"*/);
    byte_438C0C7 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16984/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Values; // x0
  const MethodInfo *v10; // x1
  struct System_Int32_array *v11; // x8
  System_Xml_XmlQualifiedName_o **v12; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x24
  unsigned __int64 v14; // x23
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_string__int__o *v18; // x25
  EventUpValInfo_o *v19; // x8
  System_Xml_XmlQualifiedName_o **v20; // x9
  System_Xml_XmlQualifiedName_o *v21; // x1
  EventUpValInfo_o **v22; // x27
  System_Xml_XmlQualifiedName_o **v23; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v25; // x8
  int32_t v26; // w27
  FunctionEntity_o *v27; // x28
  __int64 v29; // x0
  int32_t dispLimitCount; // [xsp+4h] [xbp-7Ch]
  int32_t limitCount; // [xsp+8h] [xbp-78h]
  EventUpValInfo_o **v32; // [xsp+10h] [xbp-70h]
  ServantEntity_o *v33; // [xsp+18h] [xbp-68h]
  char v34; // [xsp+20h] [xbp-60h]
  EventDropUpValInfo_o *v35; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_438C0AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&EventDropUpValInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    sub_B775C4(&StringLiteral_13819/*"Target"*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438C0AC = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v33 = 0LL;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_51;
        v33 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getValues(this, v10);
      v11 = this->fields.funcId;
      if ( v11 )
      {
        v34 = 0;
        v12 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1131/*"2"*/;
        v13 = Values;
        v14 = 0LL;
        p_list = &Values->fields.list;
        do
        {
          max_length = v11->max_length;
          if ( (__int64)v14 >= (int)max_length )
          {
            LOBYTE(funcId) = v34;
            return (char)funcId;
          }
          if ( v14 >= max_length )
            goto LABEL_55;
          if ( !Master_WarQuestSelectionMaster )
            break;
          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v11->m_Items[v14 + 1],
                                                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
              if ( !v13 )
                break;
              MasterName_k__BackingField_low = LODWORD(v13->fields._MasterName_k__BackingField);
              if ( (__int64)v14 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v14 >= MasterName_k__BackingField_low )
              {
LABEL_55:
                v29 = sub_B776C8(Values);
                sub_B77668(v29, 0LL);
              }
              v18 = (System_Collections_Generic_Dictionary_string__int__o *)p_list[v14];
              if ( v18 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity->fields.age) == 111 )
                {
                  Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)p_list[v14],
                                                                            *v12,
                                                                            (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                              v18,
                                                                              (System_String_o *)*v12,
                                                                              (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( (int)Values < 1 )
                      goto LABEL_36;
                    if ( v33 )
                    {
                      v19 = *eventUpVallInfo;
                      if ( !*eventUpVallInfo )
                        break;
                      v20 = v12;
                      v21 = *v12;
                      dispLimitCount = v19->fields.dispLimitCount;
                      limitCount = v19->fields.limitCount;
                      v22 = eventUpVallInfo;
                      v23 = v20;
                      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                               v18,
                               (System_String_o *)v21,
                               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      Values = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                v33,
                                                                                limitCount,
                                                                                dispLimitCount,
                                                                                Item,
                                                                                0LL);
                      v25 = v22;
                      v12 = v23;
                      eventUpVallInfo = v25;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_36:
                        v32 = eventUpVallInfo;
                        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                               (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v18,
                               (System_Xml_XmlQualifiedName_o *)StringLiteral_13819/*"Target"*/,
                               (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v26 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                  v18,
                                  (System_String_o *)StringLiteral_13819/*"Target"*/,
                                  (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        }
                        else
                        {
                          v26 = 0;
                        }
                        v27 = (FunctionEntity_o *)entity;
                        v35 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
                        EventDropUpValInfo___ctor_30359012(v35, 0, v27, v26, 0LL);
                        if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                               v18,
                               (System_String_o *)StringLiteral_980/*"0"*/,
                               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v18,
                                                                                    (System_String_o *)StringLiteral_1033/*"1"*/,
                                                                                    (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          eventUpVallInfo = v32;
                          v12 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1131/*"2"*/;
                          if ( !*v32 )
                            break;
                          v10 = (const MethodInfo *)(unsigned int)Values;
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v35;
                          if ( !v35 )
                            break;
                          EventDropUpValInfo__SetAddCount(v35, (int32_t)v10, (*v32)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v18,
                                                                                    (System_String_o *)StringLiteral_980/*"0"*/,
                                                                                    (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          eventUpVallInfo = v32;
                          v12 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1131/*"2"*/;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                      v18,
                                                                                      (System_String_o *)StringLiteral_1033/*"1"*/,
                                                                                      (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            if ( !*v32 )
                              break;
                            v10 = (const MethodInfo *)(unsigned int)Values;
                            Values = (DataMasterBase_WarMaster__WarEntity__int__o *)v35;
                            if ( !v35 )
                              break;
                            EventDropUpValInfo__SetRateCount(v35, (int32_t)v10, (*v32)->fields.equipSvtId > 0, 0, 0LL);
                          }
                        }
                        if ( !*eventUpVallInfo )
                          break;
                        Values = (DataMasterBase_WarMaster__WarEntity__int__o *)(*eventUpVallInfo)->fields.dropList;
                        if ( !Values )
                          break;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Values,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
                          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                        v34 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v11 = this->fields.funcId;
          ++v14;
        }
        while ( v11 );
      }
    }
LABEL_51:
    sub_B7769C(Values, v10);
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
  struct System_Int32_array *funcId; // x27
  __int64 v16; // x8
  unsigned __int64 v17; // x28
  struct System_Int32_array *v18; // x8
  int32_t v19; // w26
  SkillLvEntity_o *v21; // x21
  SkillLvEntity___c_c *v22; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__61_0; // x22
  Il2CppObject *v25; // x23
  struct SkillLvEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x0
  int32_t v35; // [xsp+Ch] [xbp-64h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *v37; // [xsp+18h] [xbp-58h] BYREF

  v14 = this;
  if ( (byte_438C0CB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_B775C4(&Method_System_Func_QuestGroupEntity__int___ctor__);
    sub_B775C4(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_B775C4(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__);
    this = (SkillLvEntity_o *)sub_B775C4(&SkillLvEntity___c_TypeInfo);
    byte_438C0CB = 1;
  }
  entity = 0LL;
  v37 = 0LL;
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_43;
  v16 = *(_QWORD *)&funcId->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v35 = questId;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_44;
      v18 = v14->fields.funcId;
      if ( !v18 )
        goto LABEL_43;
      if ( v18->max_length <= index )
        goto LABEL_44;
      v19 = funcId->m_Items[v17 + 1];
      if ( v19 != v18->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_43;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v19, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_43;
          this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)funcMaster,
                                      &v37,
                                      v19,
                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v16) = funcId->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_20;
    }
    if ( !v37 )
      goto LABEL_43;
    questTvals = *(System_Int32_array **)&v37->fields.startType;
LABEL_20:
    questId = v35;
  }
  if ( !questTvals )
    goto LABEL_43;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_43;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_43;
  if ( questId < 1 )
    return questTvals;
  v21 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v22 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v22 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__61_0,
      v25,
      Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_QuestGroupEntity__int___ctor__);
    v26 = SkillLvEntity___c_TypeInfo->static_fields;
    v26->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v26->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v33,
         questId,
         (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_B775DC(int___TypeInfo, 1LL);
  if ( !this )
LABEL_43:
    sub_B7769C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
  {
LABEL_44:
    v34 = sub_B776C8(this);
    sub_B77668(v34, 0LL);
  }
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *StringArray; // x0
  System_String_array *v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  int v9; // w9
  __int64 v10; // x20
  int v11; // w8
  __int64 v13; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C0CA & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B775C4(&StringLiteral_19170/*"followerVals"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438C0CA = 1;
  }
  *(_QWORD *)result = 0LL;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19170/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v4 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B77694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v5,
    (const MethodInfo_2FDCA14 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v4->max_length )
    goto LABEL_22;
  v6 = (__int64)v4->m_Items[0];
  if ( !v6 )
    goto LABEL_23;
  v6 = (__int64)System_String__Replace_44909172(
                  (System_String_o *)v6,
                  (System_String_o *)StringLiteral_15925/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  if ( !v6 )
    goto LABEL_23;
  v8 = System_String__Replace_44909172(
         (System_String_o *)v6,
         (System_String_o *)StringLiteral_16162/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v6 = sub_B775DC(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_23;
  v7 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_22;
  *(_WORD *)(v6 + 32) = 44;
  if ( !v8 || (v6 = (__int64)System_String__Split(v8, (System_Char_array *)v6, 0LL), result[1] = 0, !v6) )
LABEL_23:
    sub_B7769C(v6, v7);
  v9 = *(_DWORD *)(v6 + 24);
  v10 = v6;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)v9 )
    {
      v6 = System_Int32__TryParse(*(System_String_o **)(v10 + 8LL * v11 + 32), result, 0LL);
      if ( (v6 & 1) != 0 )
      {
        v6 = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
        if ( !v5 )
          goto LABEL_23;
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v5,
          (UIPanel_o *)v6,
          result[0],
          (const MethodInfo_2FDD5C8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v11 = result[1] + 1;
      result[1] = v11;
      v9 = *(_DWORD *)(v10 + 24);
      if ( v11 >= v9 )
        return (System_Collections_Generic_Dictionary_string__int__o *)v5;
    }
LABEL_22:
    v13 = sub_B776C8(v6);
    sub_B77668(v13, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v5;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  SkillLvEntity___c_c *v4; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x22
  struct SkillLvEntity___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Nullable_int__o v18; // 0:x3.8

  if ( (byte_438C0BC & 1) == 0 )
  {
    sub_B775C4(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_B775C4(&Method_System_Func_long__Nullable_int____ctor__);
    sub_B775C4(&System_Func_long__Nullable_int___TypeInfo);
    sub_B775C4(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__);
    sub_B775C4(&SkillLvEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_19306/*"funcPositionForSplitFuncSequence"*/);
    byte_438C0BC = 1;
  }
  script = this->fields.script;
  v4 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v4 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__44_0 = static_fields->__9__44_0;
  v7 = (System_String_o *)StringLiteral_19306/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__44_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_B77694(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v8,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      (const MethodInfo_29E6738 *)Method_System_Func_long__Nullable_int____ctor__);
    v9 = SkillLvEntity___c_TypeInfo->static_fields;
    v9->__9__44_0 = _9__44_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__44_0,
      (System_Int32_array **)_9__44_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v18 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v7,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v18,
           (const MethodInfo_1D1A830 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_o *Value_string; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-78h] BYREF
  int v15; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438C0C0 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_List_object____);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_object___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    byte_438C0C0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v15 = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   script,
                   key,
                   (System_String_o *)v7,
                   (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v16 = v14;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v10 )
      break;
    if ( !v5 )
      sub_B7769C(v10, v11);
    if ( !v16.fields.current )
      sub_B7769C(0LL, v11);
    if ( v16.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Value_string = (System_String_o *)sub_B77990(v16.fields.current);
      goto LABEL_15;
    }
    v12 = (int32_t *)j_il2cpp_object_unbox_0(v16.fields.current);
    System_Collections_Generic_List_int___Add(
      v5,
      *v12,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v5 )
LABEL_15:
    sub_B7769C(Value_string, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v3; // x20

  if ( (byte_438C0BD & 1) == 0 )
  {
    sub_B775C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_B775C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_B775C4(&Method_System_Func_List_object___List_int____ctor__);
    sub_B775C4(&System_Func_List_object___List_int___TypeInfo);
    sub_B775C4(&StringLiteral_16972/*"battleEffectId"*/);
    byte_438C0BD = 1;
  }
  v3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v3,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_29EAA10 *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16972/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0LL,
                                                     (const MethodInfo_1D1A9A4 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_438C0C2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_438C0C2 = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                                                                                 (System_Type_o *)key,
                                                                                                 (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B7769C(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v9 = (SkillLvEntity_o *)sub_B77990(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v9, v10);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x0
  __int64 v8; // x1

  if ( (byte_438C0A6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438C0A6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_B7769C(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v9; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x20
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438C0C1 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_List_object____);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_object___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_B775C4(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_B775C4(&StringLiteral_22934/*"svtBgmChange"*/);
    byte_438C0C1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22934/*"svtBgmChange"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
  v6 = this->fields.script;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BasicHelper__GetValue_string_(
                                                                                           v6,
                                                                                           (System_String_o *)StringLiteral_22934/*"svtBgmChange"*/,
                                                                                           (System_String_o *)v7,
                                                                                           (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_17:
    sub_B7769C(script, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)script,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v16.fields.current;
    v9 = (SkillLvEntity_SvtChangeBgm_o *)sub_B77694(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)v9;
    if ( current )
    {
      v11 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v12 = sub_B77990(current);
LABEL_16:
        sub_B7769C(v12, v13);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v9, (System_Collections_Generic_Dictionary_string__object__o *)current, 0LL);
    if ( !v3 )
      goto LABEL_16;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      v10,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  struct System_Int32_array *v9; // x8
  SkillLvMaster_o *v10; // x23
  unsigned __int64 v11; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v13; // x24
  int32_t v14; // w1
  int32_t Param; // w25
  int32_t v16; // w1
  __int64 v17; // x0
  SkillLvEntity_o *v19; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_438C0CD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_438C0CD = 1;
  }
  v19 = 0LL;
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
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v9 = this->fields.funcId;
    if ( !v9 )
LABEL_33:
      sub_B7769C(isAddState, funcId);
    v10 = (SkillLvMaster_o *)isAddState;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = v9->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_35;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_33;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  v9->m_Items[v11 + 1],
                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_33;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_33;
          if ( v11 >= DataValsList->max_length )
          {
LABEL_35:
            v17 = sub_B776C8(isAddState);
            sub_B77668(v17, 0LL);
          }
          if ( !entity )
            goto LABEL_33;
          v13 = DataValsList->m_Items[v11];
          if ( !v13 )
            goto LABEL_33;
          DataVals__SetTempType(
            DataValsList->m_Items[v11],
            (FunctionMaster_o *)Master_WarQuestSelectionMaster,
            (int32_t)entity->fields.age,
            0LL);
          v14 = DataVals__isParam(v13, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v13, v14, 0, 0LL);
          v16 = DataVals__isParam(v13, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v13, v16, 0, 0LL);
          if ( !v10 )
            goto LABEL_33;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v10,
                                                                      &v19,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      0LL);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_33;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v19->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_33;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v9 = this->fields.funcId;
      ++v11;
      if ( !v9 )
        goto LABEL_33;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15700/*"WarBoardBreakPointDamage"*/);
    byte_438C0C9 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15700/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0CC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16584/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_438C0CC = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16584/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&StringLiteral_16773/*"aress"*/);
    byte_438C0B9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_16773/*"aress"*/,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
    sub_B7769C(SetTypeDataValArray, v3);
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
      v11 = sub_B776C8(SetTypeDataValArray);
      sub_B77668(v11, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_438C0BA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_6067/*"EnableTarget"*/);
    byte_438C0BA = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_6067/*"EnableTarget"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_6067/*"EnableTarget"*/,
                                                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(Item, v6);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) == 1;
  v9 = (SkillLvEntity_o *)sub_B77990(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v9, v10);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C0BE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19800/*"ignoreWhiteFade"*/);
    byte_438C0BE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19800/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438C0C3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21540/*"noTargetSkipSkill"*/);
    byte_438C0C3 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21540/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&StringLiteral_22281/*"revivalUnder"*/);
    byte_438C0B8 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_22281/*"revivalUnder"*/,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&StringLiteral_22282/*"revivalUp"*/);
    byte_438C0B7 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_22282/*"revivalUp"*/,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_438C0B4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_B775C4(&StringLiteral_2083/*"ApplySupportSvt"*/);
    byte_438C0B4 = 1;
  }
  if ( !vals )
    sub_B7769C(this, vals);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2083/*"ApplySupportSvt"*/,
           (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_string__int___get_Item(
            vals,
            (System_String_o *)StringLiteral_2083/*"ApplySupportSvt"*/,
            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&StringLiteral_15481/*"VoiceVolume"*/);
    byte_438C0B2 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15481/*"VoiceVolume"*/,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  DataVals_array *v7; // x19
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  DataVals_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_438C0A5 & 1) == 0 )
  {
    sub_B775C4(&DataVals___TypeInfo);
    sub_B775C4(&DataVals_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C0A5 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (DataVals_array *)sub_B775DC(DataVals___TypeInfo, 1LL);
    v20 = (DataVals_o *)sub_B77694(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      if ( v20 )
      {
        v4 = sub_B77684(v20, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_21:
          v29 = sub_B776BC(v4);
          sub_B77668(v29, 0LL);
        }
      }
      if ( !v7->max_length )
      {
LABEL_20:
        v28 = sub_B776C8(v4);
        sub_B77668(v28, 0LL);
      }
      v7->m_Items[0] = v20;
      sub_B77560((BattleServantConfConponent_o *)v7->m_Items, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
      return v7;
    }
LABEL_13:
    sub_B7769C(v4, v5);
  }
  v4 = sub_B775DC(DataVals___TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = (DataVals_array *)v4;
  v8 = 4LL;
  v9 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      return v7;
    if ( v11 >= max_length )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_B77694(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0LL);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_B77684(v13, v7->obj.klass->_1.element_class);
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= v7->max_length )
        goto LABEL_20;
      *((_QWORD *)&v7->obj.klass + v8) = v13;
      sub_B77560(
        (BattleServantConfConponent_o *)((char *)v7 + v9),
        (System_Int32_array **)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8LL;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  System_String_o *Detail; // x20

  if ( (byte_438C0A7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_438C0A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v7);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  return SkillDetailParamFormatResolver__Apply(Detail, this, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_26832724(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  System_String_o *Detail; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C0A8 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8530/*"LEVEL_DETAIL_INFO"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C0A8 = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8530/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v13 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8);
    v10 = (Il2CppObject *)System_String__Format(v7, v9, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v10, 0LL);
}


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
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x27
  const MethodInfo *v17; // x1
  FunctionGroupMaster_o *v18; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v23; // x20
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v25; // x8
  unsigned __int64 v26; // x8
  System_Collections_Generic_Dictionary_string__int__o *v27; // x19
  WarEntity_o *v28; // x8
  int age; // w21
  struct System_String_o *name; // x3
  const MethodInfo *v31; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v34; // x8
  __int64 v36; // x0
  bool v37; // [xsp+Ch] [xbp-A4h]
  ItemMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-A0h]
  int32_t v39; // [xsp+20h] [xbp-90h]
  unsigned int v40; // [xsp+24h] [xbp-8Ch]
  ServantEntity_o *v41; // [xsp+28h] [xbp-88h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+30h] [xbp-80h]
  EventUpValSetupInfo_o *v43; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-70h]
  FunctionGroupEntity_o *v46; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_438C0AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&StringLiteral_1180/*"3"*/);
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    sub_B775C4(&StringLiteral_13819/*"Target"*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    sub_B775C4(&StringLiteral_6313/*"EventId"*/);
    byte_438C0AD = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    v43 = setupInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
    v18 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v39 = wearesDispLimitCount;
    v40 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v41 = 0LL;
    }
    else
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_89;
      v41 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v17);
    QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                                v43,
                                                                                eventId,
                                                                                0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_89;
    v37 = !isOwner;
    m_Items = Values->m_Items;
    v23 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v23 >= (int)max_length )
        break;
      if ( v23 >= max_length )
        goto LABEL_97;
      if ( !v16 )
        goto LABEL_89;
      QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v16,
                                                                                  &entity,
                                                                                  funcId->m_Items[v23 + 1],
                                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_88;
      if ( isFuncGroup )
      {
        v25 = this->fields.funcId;
        if ( !v25 )
          goto LABEL_89;
        if ( v23 >= v25->max_length )
        {
LABEL_97:
          v36 = sub_B776C8(QuestPhaseIndividualList);
          sub_B77668(v36, 0LL);
        }
        if ( !v18 )
          goto LABEL_89;
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)FunctionGroupMaster__TryGetEntity(
                                                                                    v18,
                                                                                    &v46,
                                                                                    v25->m_Items[v23 + 1],
                                                                                    eventId,
                                                                                    0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_88;
      }
      if ( !Values )
        goto LABEL_89;
      v26 = Values->max_length;
      if ( (__int64)v23 >= (int)v26 )
        goto LABEL_88;
      if ( v23 >= v26 )
        goto LABEL_97;
      v27 = m_Items[v23];
      if ( !v27 )
        goto LABEL_88;
      v28 = entity;
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
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1180/*"3"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1033/*"1"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v27,
                                                                                          (System_String_o *)StringLiteral_1131/*"2"*/,
                                                                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v43,
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
            if ( (v40 & 0x80000000) != 0 || !name[1].klass )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v41 )
            {
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality_31708796(
                                                                                          v41,
                                                                                          wearesLimitCount,
                                                                                          v39,
                                                                                          (System_Int32_array *)name,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v27,
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_6313/*"EventId"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_6313/*"EventId"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v41 )
                goto LABEL_88;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       v27,
                       (System_String_o *)StringLiteral_1131/*"2"*/,
                       (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__IsIndividuality(
                                                                                          v41,
                                                                                          wearesLimitCount,
                                                                                          v39,
                                                                                          Item,
                                                                                          0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_88;
            }
            if ( !entity )
              goto LABEL_89;
            EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                   this,
                                   v23,
                                   eventId,
                                   v43->fields.questId,
                                   *(System_Int32_array **)&entity->fields.startType,
                                   (FunctionMaster_o *)v16,
                                   v18,
                                   v31);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v43,
                                                                                        questPhaseIndividualityList,
                                                                                        EventIndividuality,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v27,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_13819/*"Target"*/,
                      (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_92;
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                          v27,
                                                                                          (System_String_o *)StringLiteral_13819/*"Target"*/,
                                                                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v37 )
                goto LABEL_92;
            }
            goto LABEL_88;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_88;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1033/*"1"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_88;
            if ( !entity )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                        v43,
                                                                                        questPhaseIndividualityList,
                                                                                        *(System_Int32_array **)&entity->fields.startType,
                                                                                        0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            if ( !v41 )
              goto LABEL_96;
            Individuality = ServantEntity__getIndividuality(v41, wearesLimitCount, v39, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_89;
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)ItemMaster__GetIndividualityList_24098880(
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
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            goto LABEL_86;
          case 117:
          case 118:
            goto LABEL_87;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v34 = &StringLiteral_1131/*"2"*/;
            goto LABEL_82;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                                                                        (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_88;
            v34 = &StringLiteral_1180/*"3"*/;
LABEL_82:
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)*v34,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1033/*"1"*/,
                                                                                      (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                        v27,
                                                                                        (System_String_o *)StringLiteral_1033/*"1"*/,
                                                                                        (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_86:
              v28 = entity;
              if ( !entity )
                goto LABEL_89;
LABEL_87:
              QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                          v43,
                                                                                          questPhaseIndividualityList,
                                                                                          *(System_Int32_array **)&v28->fields.startType,
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
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v23],
                                                                                  (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                                                                  (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                    v27,
                                                                                    (System_String_o *)StringLiteral_1180/*"3"*/,
                                                                                    (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_89;
          QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)EventUpValSetupInfo__IsUpVal(
                                                                                      v43,
                                                                                      questPhaseIndividualityList,
                                                                                      *(System_Int32_array **)&entity->fields.startType,
                                                                                      0LL);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_WarMaster__WarEntity__int__o *)v41;
            if ( !v41 )
            {
LABEL_96:
              LODWORD(QuestPhaseIndividualList) = v40 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_31708796(
                                                   v41,
                                                   wearesLimitCount,
                                                   v39,
                                                   (System_Int32_array *)entity->fields.longName,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_89:
            sub_B7769C(QuestPhaseIndividualList, Individuality);
          }
        }
      }
LABEL_88:
      funcId = this->fields.funcId;
      ++v23;
      if ( !funcId )
        goto LABEL_89;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_26858980(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        int64_t nowTime,
        const MethodInfo *method)
{
  SkillLvEntity_o *v10; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  FunctionGroupMaster_o *v12; // x26
  WarEntity_o *v13; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v16; // x8
  struct System_Int32_array *v17; // x10
  SkillLvEntity_o *v18; // x21
  unsigned __int64 v19; // x20
  EventUpValInfo_o *v20; // x8
  ServantLimitEntity_o *v21; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v23; // x20
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v25; // x8
  struct EventUpValSetupInfo_o *v26; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v28; // x27
  int age; // w19
  const MethodInfo *v30; // x2
  struct System_String_o *name; // x3
  FunctionEntity_o *v32; // x23
  int32_t Item; // w19
  EventUpValInfo_o *v34; // x8
  const MethodInfo *v35; // x2
  struct System_Int32_array *v36; // x8
  EventPointBuffEntity_o *EnableEntity; // x19
  struct System_String_o *v38; // x26
  System_String_c *klass; // x8
  SkillLvEntity_o *v40; // x23
  unsigned __int64 v41; // x22
  int32_t lv; // w19
  char v43; // w8
  FunctionEntity_o *v44; // x22
  EventDropUpValInfo_o *v45; // x19
  int32_t v46; // w1
  EventDropUpValInfo_o *v47; // x0
  bool v48; // w2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x7
  EventUpValInfo_o *v51; // x8
  int32_t limitCount; // w19
  int32_t dispLimitCount; // w22
  int32_t v54; // w0
  struct EventUpValSetupInfo_o *v55; // x8
  SkillLvEntity_o *v56; // x2
  SkillEntity_o *v57; // x19
  SkillLvEntity_o *v58; // x22
  System_Int32_array *ActIndividuality; // x0
  int32_t v60; // w19
  const MethodInfo *v61; // x2
  int32_t v62; // w8
  int32_t v63; // w9
  int32_t v64; // w22
  FunctionEntity_o *v65; // x19
  EventDropUpValInfo_o *v66; // x23
  const MethodInfo *v67; // x2
  FunctionEntity_o *v68; // x22
  int32_t v69; // w23
  int32_t v70; // w1
  EventDropUpValInfo_o *v71; // x0
  bool v72; // w2
  FunctionEntity_o *v73; // x22
  FunctionEntity_o *v74; // x22
  EventUpValInfo_o *v75; // x8
  System_String_o *v76; // x1
  EventUpValInfo_o *v77; // x8
  FunctionEntity_o *v78; // x22
  FunctionEntity_o *v79; // x22
  EventDropUpValInfo_o *v80; // x23
  UserServantMaster_o *v81; // x19
  __int64 v82; // x22
  UserServantEntity_o *HeroineData; // x0
  __int64 v85; // x0
  bool v86; // [xsp+4h] [xbp-ECh]
  FunctionGroupMaster_o *v87; // [xsp+8h] [xbp-E8h]
  bool v88; // [xsp+14h] [xbp-DCh]
  ServantEntity_o *v89; // [xsp+18h] [xbp-D8h]
  EventPointBuffEntity_o *value; // [xsp+20h] [xbp-D0h]
  SkillLvEntity_o *valuea; // [xsp+20h] [xbp-D0h]
  __int64 valueb; // [xsp+20h] [xbp-D0h]
  char v93; // [xsp+28h] [xbp-C8h]
  EventDropUpValInfo_o *v94; // [xsp+28h] [xbp-C8h]
  EventDropUpValInfo_o *v95; // [xsp+28h] [xbp-C8h]
  struct System_Int32_array *v97; // [xsp+38h] [xbp-B8h]
  char v98; // [xsp+44h] [xbp-ACh]
  System_Int32_array *questPhaseIndividualityList; // [xsp+48h] [xbp-A8h]
  SkillLvEntity_o *v100; // [xsp+50h] [xbp-A0h]
  unsigned __int64 v101; // [xsp+58h] [xbp-98h]
  int32_t eventId; // [xsp+70h] [xbp-80h]
  FunctionGroupEntity_o *v106; // [xsp+78h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  int32_t actMaxRarity; // [xsp+8Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+90h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  v10 = this;
  if ( (byte_438C0AE & 1) == 0 )
  {
    sub_B775C4(&BuffList_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B775C4(&EventDropUpValInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&StringLiteral_1180/*"3"*/);
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    sub_B775C4(&StringLiteral_13819/*"Target"*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    sub_B775C4(&StringLiteral_6313/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438C0AE = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  entity = 0LL;
  v106 = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_272;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_270;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  v12 = (FunctionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_272;
  v100 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v13 = 0LL;
    goto LABEL_18;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_272:
    sub_B7769C(this, eventUpVallInfo);
  v13 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_18:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_272;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_272;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_272;
  v97 = eventIdList;
  v16 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v16 >= 1 )
  {
    v89 = (ServantEntity_o *)v13;
    v86 = isOwner;
    v93 = 0;
    v88 = v13 == 0LL || isEquipOnly;
    v17 = v97;
    v18 = this;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v16 )
      {
LABEL_273:
        v85 = sub_B776C8(this);
        sub_B77668(v85, 0LL);
      }
      v20 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_272;
      eventId = v17->m_Items[v19 + 1];
      if ( v20->fields.equipSvtId < 1 )
      {
        v98 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_272;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo || !this )
          goto LABEL_272;
        v21 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (SkillLvEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_272;
        if ( !v21 )
          goto LABEL_272;
        if ( !this )
          goto LABEL_272;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v21->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    eventId,
                                    0LL);
        v98 = (char)this;
        v20 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_272;
      }
      this = (SkillLvEntity_o *)v20->fields.setupInfo;
      v101 = v19;
      if ( !this )
        goto LABEL_272;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  eventId,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_272;
      v23 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v23 >= (int)max_length )
          break;
        if ( v23 >= max_length )
          goto LABEL_273;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_272;
        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    funcId->m_Items[v23 + 1],
                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_256;
        if ( isFuncGroup )
        {
          v25 = v10->fields.funcId;
          if ( !v25 )
            goto LABEL_272;
          if ( v23 >= v25->max_length )
            goto LABEL_273;
          if ( !v12 )
            goto LABEL_272;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(v12, &v106, v25->m_Items[v23 + 1], eventId, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_256;
          this = (SkillLvEntity_o *)v106;
          if ( !v106 )
            goto LABEL_272;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v106, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_272;
            v26 = (*eventUpVallInfo)->fields.setupInfo;
            this = v100;
            if ( !v26 || !v100 )
              goto LABEL_272;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v100,
                                        eventId,
                                        v26->fields.questId,
                                        v26->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_256;
          }
        }
        if ( !v18 )
          goto LABEL_272;
        chargeTurn = (unsigned int)v18->fields.chargeTurn;
        if ( (__int64)v23 >= (int)chargeTurn )
          goto LABEL_256;
        if ( v23 >= chargeTurn )
          goto LABEL_273;
        v28 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)*((_QWORD *)&v18->fields.funcId + v23);
        if ( !v28 )
          goto LABEL_256;
        if ( !entity )
          goto LABEL_272;
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
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1180/*"3"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1033/*"1"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_1131/*"2"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_256;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            v30);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_256;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              if ( age != 105 )
                goto LABEL_80;
              if ( !entity )
                goto LABEL_272;
              name = entity->fields.name;
              if ( !name || !name[1].klass )
                goto LABEL_80;
              if ( !v89 )
                goto LABEL_256;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_31708796(
                                          v89,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)name,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
LABEL_80:
              v32 = (FunctionEntity_o *)entity;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v28,
                       (System_String_o *)StringLiteral_980/*"0"*/,
                       (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v94 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_30359012(v94, eventId, v32, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v28,
                     (System_String_o *)StringLiteral_1033/*"1"*/,
                     (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_1131/*"2"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v34 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_272;
LABEL_129:
                v45 = v94;
                if ( !v94 )
                  goto LABEL_272;
                v46 = (int)this;
                v47 = v94;
                v48 = v34->fields.equipSvtId > 0;
LABEL_131:
                EventDropUpValInfo__SetAddCount(v47, v46, v48, v98 & 1, 0LL);
                goto LABEL_238;
              }
LABEL_226:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1033/*"1"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v45 = v94;
              if ( (_DWORD)this != 2 )
                goto LABEL_238;
              v76 = (System_String_o *)StringLiteral_1131/*"2"*/;
LABEL_228:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          v76,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v77 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              break;
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
              goto LABEL_256;
            case 111:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_6313/*"EventId"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_6313/*"EventId"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_256;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            v49);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_256;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_141;
              if ( !v89 )
                goto LABEL_256;
              v51 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              limitCount = v51->fields.limitCount;
              dispLimitCount = v51->fields.dispLimitCount;
              v54 = System_Collections_Generic_Dictionary_string__int___get_Item(
                      (System_Collections_Generic_Dictionary_string__int__o *)v28,
                      (System_String_o *)StringLiteral_1131/*"2"*/,
                      (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v89, limitCount, dispLimitCount, v54, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
LABEL_141:
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              v55 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v55 )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v23,
                                          eventId,
                                          v55->fields.questId,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          (FunctionMaster_o *)Master_WarQuestSelectionMaster,
                                          v12,
                                          v50);
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              v56 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v56,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_160;
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              v57 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v89;
              if ( !v89 )
                goto LABEL_272;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v89,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v57 )
                goto LABEL_272;
              v58 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v57, (const MethodInfo *)eventUpVallInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v58,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v89, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_160;
              if ( !entity )
                goto LABEL_272;
              if ( HIDWORD(entity->fields.age) )
                goto LABEL_160;
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              v81 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
              v82 = *(_QWORD *)&v89->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v110.fields.fakeValue = *(_QWORD *)&v89->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = *(_QWORD *)&v89->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v110.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v110.fields.currentCryptoKey = v82;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v110, 0LL);
              if ( !v81 )
                goto LABEL_272;
              HeroineData = UserServantMaster__getHeroineData(v81, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_256;
              }
LABEL_160:
              if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                     v28,
                     (System_Xml_XmlQualifiedName_o *)StringLiteral_13819/*"Target"*/,
                     (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_13819/*"Target"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v60 = (int)this;
                if ( (_DWORD)this == 1 && !v86 )
                  goto LABEL_256;
              }
              else
              {
                v60 = 0;
              }
              v79 = (FunctionEntity_o *)entity;
              v80 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_30359012(v80, eventId, v79, v60, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v28,
                     (System_String_o *)StringLiteral_980/*"0"*/,
                     (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_1033/*"1"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v80 )
                  goto LABEL_272;
                EventDropUpValInfo__SetAddCount(
                  v80,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v98 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_980/*"0"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                              (System_String_o *)StringLiteral_1033/*"1"*/,
                                              (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v80 )
                    goto LABEL_272;
                  EventDropUpValInfo__SetRateCount(
                    v80,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v98 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_272;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
              v93 = 1;
              goto LABEL_256;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_980/*"0"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_1033/*"1"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_256;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            v61);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_256;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              v93 |= (unsigned __int8)this;
              if ( !v89 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v89,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_272;
              v62 = this->fields.chargeTurn;
              if ( v62 < 1 )
                goto LABEL_241;
              v63 = 0;
              valuea = this;
              while ( v63 < (unsigned int)v62 )
              {
                v64 = *((_DWORD *)&this->fields.funcId + v63);
                v65 = (FunctionEntity_o *)entity;
                v66 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_30359012(v66, eventId, v65, v64, 0LL);
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v28,
                       (System_String_o *)StringLiteral_980/*"0"*/,
                       (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                              (System_String_o *)StringLiteral_1033/*"1"*/,
                                              (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v66 )
                    goto LABEL_272;
                  EventDropUpValInfo__SetAddCount(
                    v66,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v98 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                              (System_String_o *)StringLiteral_980/*"0"*/,
                                              (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                                (System_String_o *)StringLiteral_1033/*"1"*/,
                                                (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v66 )
                      goto LABEL_272;
                    EventDropUpValInfo__SetRateCount(
                      v66,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v98 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_272;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_272;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                this = valuea;
                v93 = 1;
                v63 = actMaxRarity + 1;
                actMaxRarity = v63;
                v62 = valuea->fields.chargeTurn;
                if ( v63 >= v62 )
                  goto LABEL_256;
              }
              goto LABEL_273;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            v67);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_256;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              v68 = (FunctionEntity_o *)entity;
              v69 = System_Collections_Generic_Dictionary_string__int___get_Item(
                      (System_Collections_Generic_Dictionary_string__int__o *)v28,
                      (System_String_o *)StringLiteral_980/*"0"*/,
                      (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v45 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_30359012(v45, eventId, v68, v69, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1033/*"1"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v45 )
                goto LABEL_272;
              v70 = (int)this;
              v71 = v45;
              v72 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_222;
            case 129:
              if ( isSupport )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_256;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              v73 = (FunctionEntity_o *)entity;
              v95 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v95, eventId, v73, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v28,
                     (System_String_o *)StringLiteral_980/*"0"*/,
                     (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                            (System_String_o *)StringLiteral_1033/*"1"*/,
                                            (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_272;
                v45 = v95;
                if ( !v95 )
                  goto LABEL_272;
                v46 = (int)this;
                v47 = v95;
                v48 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_131;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_980/*"0"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v45 = v95;
              if ( (_DWORD)this != 2 )
                goto LABEL_238;
              v76 = (System_String_o *)StringLiteral_1033/*"1"*/;
              goto LABEL_228;
            default:
              if ( age != 132 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v28,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                          (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1180/*"3"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_256;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              if ( !entity )
                goto LABEL_272;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_272;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_256;
              v44 = (FunctionEntity_o *)entity;
              v94 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v94, eventId, v44, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v28,
                     (System_String_o *)StringLiteral_1033/*"1"*/,
                     (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_226;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1131/*"2"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v34 = *eventUpVallInfo;
              if ( *eventUpVallInfo )
                goto LABEL_129;
              goto LABEL_272;
          }
          goto LABEL_236;
        }
        if ( age == 1 )
          goto LABEL_86;
        if ( age != 7 )
        {
          if ( age != 16 )
            goto LABEL_256;
LABEL_86:
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                      v28,
                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                                      (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                              v35),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              this = (SkillLvEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v36 = v10->fields.funcId;
              if ( !v36 )
                goto LABEL_272;
              if ( v23 >= v36->max_length )
                goto LABEL_273;
              if ( !this )
                goto LABEL_272;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               eventId,
                               v36->m_Items[v23 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1180/*"3"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              value = EnableEntity;
              if ( EnableEntity || (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_272;
                if ( !entity )
                  goto LABEL_272;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_272;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            *(System_Int32_array **)&entity->fields.startType,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v88 )
                    goto LABEL_105;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_272;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_31708796(
                                              v89,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity->fields.longName,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_105:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_272;
                    v87 = v12;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_272;
                    v38 = entity->fields.name;
                    if ( !v38 )
                      goto LABEL_272;
                    klass = v38[1].klass;
                    if ( (int)klass < 1 )
                    {
                      v43 = 0;
                    }
                    else
                    {
                      v40 = this;
                      v41 = 0LL;
                      while ( 1 )
                      {
                        if ( v41 >= (unsigned int)klass )
                          goto LABEL_273;
                        if ( !v40 )
                          goto LABEL_272;
                        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v40,
                                                    *((_DWORD *)&v38[1].monitor + v41),
                                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_272;
                        lv = this->fields.lv;
                        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BuffList_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        }
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(klass) = v38[1].klass;
                        if ( (__int64)++v41 >= (int)klass )
                        {
                          v43 = 0;
                          goto LABEL_231;
                        }
                      }
                      v43 = 1;
LABEL_231:
                      EnableEntity = value;
                    }
                    v12 = v87;
                    if ( ((unsigned __int8)v43 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                  (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                                  (System_String_o *)StringLiteral_1180/*"3"*/,
                                                  (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_272;
                      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
                        v28,
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v78 = (FunctionEntity_o *)entity;
                    v45 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v45, eventId, v78, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                                (System_String_o *)StringLiteral_1180/*"3"*/,
                                                (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v77 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_272;
LABEL_236:
                    if ( !v45 )
                      goto LABEL_272;
                    EventDropUpValInfo__SetRateCount(v45, (int32_t)this, v77->fields.equipSvtId > 0, v98 & 1, 0LL);
LABEL_238:
                    v75 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_272;
LABEL_239:
                    this = (SkillLvEntity_o *)v75->fields.dropList;
                    if ( !this )
                      goto LABEL_272;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
LABEL_241:
                    v93 = 1;
                    goto LABEL_256;
                  }
                }
              }
            }
          }
          goto LABEL_256;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                    v28,
                                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1033/*"1"*/,
                                    (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                      (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                      (System_String_o *)StringLiteral_1033/*"1"*/,
                                      (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)this )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_272;
            if ( !entity )
              goto LABEL_272;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              goto LABEL_272;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        *(System_Int32_array **)&entity->fields.startType,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v74 = (FunctionEntity_o *)entity;
              v45 = (EventDropUpValInfo_o *)sub_B77694(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v45, eventId, v74, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v28,
                                          (System_String_o *)StringLiteral_1033/*"1"*/,
                                          (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v45 )
                goto LABEL_272;
              v70 = (int)this;
              v71 = v45;
              v72 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_222:
              EventDropUpValInfo__SetRateCount(v71, v70, v72, v98 & 1, 0LL);
              v75 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_272;
              goto LABEL_239;
            }
          }
        }
LABEL_256:
        funcId = v10->fields.funcId;
        ++v23;
        if ( !funcId )
          goto LABEL_272;
      }
      v17 = v97;
      LODWORD(v16) = v97->max_length;
      v19 = v101 + 1;
      if ( (__int64)(v101 + 1) >= (int)v16 )
        return v93 & 1;
    }
  }
LABEL_270:
  v93 = 0;
  return v93 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  unsigned __int64 v7; // x21
  unsigned __int64 max_length; // x9
  __int64 v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C0AB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C0AB = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_B7769C(Instance, v4);
    }
    v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v7 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v7 >= (int)max_length )
        break;
      if ( v7 >= max_length )
      {
        v9 = sub_B776C8(Instance);
        sub_B77668(v9, 0LL);
      }
      if ( !v6 )
        goto LABEL_15;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v6,
                                    &entity,
                                    funcId->m_Items[v7 + 1],
                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (DataManager_o *)LODWORD(entity->fields.age);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v7;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v6; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  int age; // w8
  int datalist; // w8
  System_Collections_Generic_Dictionary_string__int__o *v13; // x19
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C0AA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438C0AA = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = (DataManager_o *)SkillLvEntity__getValues(this, v6);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v8 = Instance;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return 0;
    if ( v9 >= max_length )
      goto LABEL_23;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  funcId->m_Items[v9 + 1],
                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      age = (int)entity->fields.age;
      if ( age == 123 || age == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v9;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v8 )
LABEL_15:
    sub_B7769C(Instance, v4);
  datalist = (int)v8->fields.datalist;
  if ( (int)v9 >= datalist )
    return 0;
  if ( (unsigned int)v9 >= datalist )
  {
LABEL_23:
    v15 = sub_B776C8(Instance);
    sub_B77668(v15, 0LL);
  }
  v13 = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&v8->fields.lookup + v9);
  if ( v13
    && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v13,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_980/*"0"*/,
         (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_string__int___get_Item(
             v13,
             (System_String_o *)StringLiteral_980/*"0"*/,
             (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *v6; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  unsigned __int64 v8; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v10; // x0
  System_String_o **p_saveDataMapList; // x8
  __int64 v13; // x0

  if ( (byte_438C0A9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C0A9 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v6 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_B7769C(Instance, v5);
    }
    v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v8 = 0LL;
    while ( 1 )
    {
      max_length = v6->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
      {
        v13 = sub_B776C8(Instance);
        sub_B77668(v13, 0LL);
      }
      if ( !v7 )
        goto LABEL_13;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v7,
                                    v6->m_Items[v8 + 1],
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_saveDataMapList = (System_String_o **)&Instance->fields.saveDataMapList;
        return *p_saveDataMapList;
      }
      v6 = this->fields.funcId;
      ++v8;
      if ( !v6 )
        goto LABEL_13;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4388DC6 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4388DC6 = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  p_saveDataMapList = &v10->static_fields->unknownNameText;
  return *p_saveDataMapList;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_438C0B6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_18410/*"down"*/);
    byte_438C0B6 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18410/*"down"*/,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_18410/*"down"*/,
                                                                                       (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7769C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v6 = (SkillLvEntity_o *)sub_B77990(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v6, v7);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_438C0B5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_23412/*"up"*/);
    byte_438C0B5 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_23412/*"up"*/,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_23412/*"up"*/,
                                                                                       (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7769C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v6 = (SkillLvEntity_o *)sub_B77990(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v6, v7);
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
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_10902/*"PlayVoiceNo"*/);
    byte_438C0B0 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10902/*"PlayVoiceNo"*/,
            (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B7769C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10902/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B77990(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  int max_length; // w19
  __int64 klass; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__int__array *v6; // x20
  il2cpp_array_size_t v7; // w25
  struct System_String_array *v8; // x8
  System_String_o *v9; // x22
  int v10; // w27
  __int64 v11; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  Il2CppClass **v19; // x23
  BattleServantConfConponent_o *v20; // x23
  int32_t v21; // w8
  System_String_o *v22; // x24
  BattleServantConfConponent_c *v23; // x24
  int32_t v24; // w2
  const MethodInfo_2FDD5A0 *v25; // x3
  System_Xml_XmlQualifiedName_o *v26; // x1
  __int64 v27; // x24
  __int64 v29; // x0
  __int64 v30; // x0
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_438C0A4 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438C0A4 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_B775DC(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_B775DC(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v6 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = this->fields.svals;
      if ( !v8 )
        goto LABEL_41;
      if ( v7 >= v8->max_length )
        goto LABEL_42;
      klass = (__int64)v8->m_Items[v7];
      if ( !klass )
        goto LABEL_41;
      klass = (__int64)System_String__Replace_44909172(
                         (System_String_o *)klass,
                         (System_String_o *)StringLiteral_15925/*"["*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
      if ( !klass )
        goto LABEL_41;
      v9 = System_String__Replace_44909172(
             (System_String_o *)klass,
             (System_String_o *)StringLiteral_16162/*"]"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      klass = sub_B775DC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v5 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 44;
      if ( !v9
        || (klass = (__int64)System_String__Split(v9, (System_Char_array *)klass, 0LL)) == 0
        || (v10 = *(_DWORD *)(klass + 24),
            v11 = klass,
            v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B77694(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
              v12,
              (const MethodInfo_2FDCA14 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v6) )
      {
LABEL_41:
        sub_B7769C(klass, v5);
      }
      if ( v12 )
      {
        klass = sub_B77684(v12, v6->obj.klass->_1.element_class);
        if ( !klass )
        {
          v30 = sub_B776BC(0LL);
          sub_B77668(v30, 0LL);
        }
      }
      if ( v7 >= v6->max_length )
      {
LABEL_42:
        v29 = sub_B776C8(klass);
        sub_B77668(v29, 0LL);
      }
      v19 = &v6->obj.klass + (int)v7;
      v19[4] = (Il2CppClass *)v12;
      v20 = (BattleServantConfConponent_o *)(v19 + 4);
      sub_B77560(v20, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
      result[1] = 0;
      if ( v10 >= 1 )
        break;
LABEL_37:
      if ( (int)++v7 >= max_length )
        return v6;
    }
    v21 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_42;
      v22 = *(System_String_o **)(v11 + 8LL * v21 + 32);
      klass = System_Int32__TryParse(v22, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      klass = sub_B775DC(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v5 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 58;
      if ( !v22 )
        goto LABEL_41;
      klass = (__int64)System_String__Split(v22, (System_Char_array *)klass, 0LL);
      if ( !klass )
        goto LABEL_41;
      v27 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v7 >= v6->max_length || !*(_DWORD *)(v27 + 24) )
            goto LABEL_42;
          klass = (__int64)v20->klass;
          if ( !v20->klass )
            goto LABEL_41;
          v24 = result[0];
          v26 = *(System_Xml_XmlQualifiedName_o **)(v27 + 32);
          v25 = (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_25:
          System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)klass,
            v26,
            v24,
            v25);
        }
      }
      v21 = ++result[1];
      if ( result[1] >= v10 )
        goto LABEL_37;
    }
    if ( v7 >= v6->max_length )
      goto LABEL_42;
    v23 = v20->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v23 )
      goto LABEL_41;
    v24 = result[0];
    v25 = (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v26 = (System_Xml_XmlQualifiedName_o *)klass;
    klass = (__int64)v23;
    goto LABEL_25;
  }
  return v6;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0AF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_15479/*"VoiceAssetName"*/);
    byte_438C0AF = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15479/*"VoiceAssetName"*/,
            (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B7769C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15479/*"VoiceAssetName"*/,
                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B77990(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  float result; // s0
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_438C0B3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_15481/*"VoiceVolume"*/);
    byte_438C0B3 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15481/*"VoiceVolume"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15481/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v8 = (SkillLvEntity_o *)sub_B77990(Item);
  SkillLvEntity__getMovePositionUp(v8, v9);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438C0B1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&StringLiteral_10903/*"PlayVoiceWait"*/);
    byte_438C0B1 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10903/*"PlayVoiceWait"*/,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4388E9A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_16608/*"afterClearBgmId"*/);
    sub_B775C4(&StringLiteral_20203/*"indv"*/);
    sub_B775C4(&StringLiteral_17021/*"beforeClearBgmId"*/);
    sub_B775C4(&StringLiteral_22071/*"questPhase"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    byte_4388E9A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_20203/*"indv"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_22069/*"questId"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_22071/*"questPhase"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_17021/*"beforeClearBgmId"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16608/*"afterClearBgmId"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_B7769C(Item, v6);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return;
  }
LABEL_16:
  v7 = (const MethodInfo *)sub_B77990(Item);
  SkillMaster___c___cctor(v7);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E98 & 1) == 0 )
  {
    sub_B775C4(&SkillLvEntity___c_TypeInfo);
    byte_4388E98 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillLvEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
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
  if ( (byte_4388E99 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    byte_4388E99 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  return v5;
}