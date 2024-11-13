void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16C4F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_40676768(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x21
  struct System_Int32_array *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v32; // x0
  struct System_String_array *v33; // x1
  __int64 v34; // x1
  int64_t v35; // x2
  __int64 v36; // x3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v42; // x21

  if ( (byte_4B16C50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, srcEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor___76744968, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    byte_4B16C50 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1BCAA3C(v13, v14);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v22 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v23 = v22;
    v24 = (struct System_Int32_array *)sub_1BCA91C(v22, int___TypeInfo);
    if ( !v24 )
      goto LABEL_12;
  }
  else
  {
    v24 = 0LL;
  }
  this->fields.funcId = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.funcId, (int64_t)v24, v15, v16, v17, v18, v19, v20);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v32 = System_Array__Clone(svals, 0LL);
  if ( !v32 )
    goto LABEL_13;
  v23 = v32;
  v33 = (struct System_String_array *)sub_1BCA91C(v32, string___TypeInfo);
  if ( v33 )
    goto LABEL_14;
LABEL_12:
  sub_1BCACFC(v23);
LABEL_13:
  v33 = 0LL;
LABEL_14:
  this->fields.svals = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svals, (int64_t)v33, v25, v26, v27, v28, v29, v30);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v42 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                       v34,
                                                                       v35,
                                                                       v36);
    System_Collections_Generic_Dictionary_object__object____ctor_52840848(
      v42,
      script,
      (const MethodInfo_3264990 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___76744968);
  }
  else
  {
    v42 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.script, (int64_t)v42, v35, v36, v37, v38, v39, v40);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4B16C4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv, method);
    byte_4B16C4E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C75 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2231/*"ActNpcServantId"*/, method, v2);
    byte_4B16C75 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2231/*"ActNpcServantId"*/, -1, v3);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16C6C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16813/*"actRarity"*/, method, v2);
    byte_4B16C6C = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16813/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v26; // x0
  Il2CppObject *Item; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v32; // x19
  System_Collections_Generic_List_int__o *v34; // x20
  int32_t v35; // w21
  __int64 v36; // x2
  __int64 v37; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  SkillLvEntity_o *v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_4B16C68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_2268/*"AddIndiv"*/, v22, v23);
    byte_4B16C68 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2268/*"AddIndiv"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v26 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v26,
           (Il2CppObject *)StringLiteral_2268/*"AddIndiv"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v32 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
  }
  else
  {
    v32 = 0LL;
  }
  v34 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v32 )
    goto LABEL_26;
  if ( v32->fields._size < 1 )
  {
LABEL_24:
    if ( v34 )
      return System_Collections_Generic_List_int___ToArray(
               v34,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1BCAA3C(v26, klass_low);
  }
  v35 = 0;
  while ( 1 )
  {
    v26 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v32,
                                                                       v35,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v34 || !v26 )
      goto LABEL_26;
    if ( v26->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v26 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v26,
                                                                       long_TypeInfo,
                                                                       v36,
                                                                       v37);
    klass_low = LODWORD(v26->klass);
    items = v34->fields._items;
    v39 = Method_System_Collections_Generic_List_int__Add__;
    ++v34->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v34->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v34,
        klass_low,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v34->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v35 >= v32->fields._size )
      goto LABEL_24;
  }
  sub_1BCACFC(v26);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v41, v42);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C73 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16847/*"additionalSkillActorType"*/, method, v2);
    byte_4B16C73 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16847/*"additionalSkillActorType"*/, -1, v3);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16848/*"additionalSkillId"*/, method, v2);
    byte_4B16C71 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16848/*"additionalSkillId"*/, -1, v3);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C72 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16850/*"additionalSkillLv"*/, method, v2);
    byte_4B16C72 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16850/*"additionalSkillLv"*/, 1, v3);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C74 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17290/*"battleStartRemainingTurn"*/, method, v2);
    byte_4B16C74 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17290/*"battleStartRemainingTurn"*/, 0, v3);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  EventUpValInfo_o **v5; // x28
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Values; // x0
  const MethodInfo *v36; // x1
  struct System_Int32_array *v37; // x8
  const MethodInfo_325C498 **v38; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x24
  unsigned __int64 v40; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v43; // x25
  EventUpValInfo_o *v44; // x8
  const MethodInfo_325C498 **v45; // x10
  const MethodInfo_325C498 *v46; // x2
  EventUpValInfo_o **v47; // x27
  const MethodInfo_325C498 **v48; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  int32_t v54; // w26
  Il2CppObject *v55; // x28
  EventDropUpValInfo_o *v56; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppArrayBounds *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppArrayBounds *v66; // x8
  int32_t dispLimitCount; // [xsp+0h] [xbp-90h]
  int32_t limitCount; // [xsp+4h] [xbp-8Ch]
  EventUpValInfo_o **v70; // [xsp+8h] [xbp-88h]
  ServantEntity_o *v71; // [xsp+10h] [xbp-80h]
  char v72; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_string__int__o **p_list; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_4B16C59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo, questPhaseEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v19, v20);
    sub_1BCA7E0(&EventDropUpValInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v23, v24);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_13716/*"Target"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v31, v32);
    byte_4B16C59 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v71 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_53;
        v71 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getValues(this, v36);
      v37 = this->fields.funcId;
      if ( v37 )
      {
        v72 = 0;
        v38 = (const MethodInfo_325C498 **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
        v39 = Values;
        v40 = 0LL;
        p_list = (System_Collections_Generic_Dictionary_string__int__o **)&Values->fields.list;
        do
        {
          max_length = v37->max_length;
          if ( (__int64)v40 >= (int)max_length )
          {
            LOBYTE(funcId) = v72;
            return (char)funcId;
          }
          if ( v40 >= max_length )
            goto LABEL_57;
          if ( !Master_object )
            break;
          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v37->m_Items[v40 + 1],
                                                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity || !questPhaseEntity )
              break;
            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestPhaseEntity__IsMatchIndividuality(
                                                                     questPhaseEntity,
                                                                     (System_Int32_array *)entity[5].klass,
                                                                     0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
              if ( !v39 )
                break;
              MasterName_k__BackingField_low = LODWORD(v39->fields._MasterName_k__BackingField);
              if ( (__int64)v40 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v40 >= MasterName_k__BackingField_low )
LABEL_57:
                sub_1BCAA44(Values, v36);
              v43 = (System_Collections_Generic_Dictionary_object__int__o *)p_list[v40];
              if ( v43 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity[1].monitor) == 111 )
                {
                  Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_object__int__o *)p_list[v40],
                                                                           (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                           (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v43,
                                                                             (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                             *v38);
                    if ( (int)Values < 1 )
                      goto LABEL_34;
                    if ( v71 )
                    {
                      v44 = *v5;
                      if ( !*v5 )
                        break;
                      v45 = v38;
                      v46 = *v38;
                      v47 = v5;
                      dispLimitCount = v44->fields.dispLimitCount;
                      limitCount = v44->fields.limitCount;
                      v48 = v45;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v43,
                               (Il2CppObject *)StringLiteral_1409/*"2"*/,
                               v46);
                      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                               v71,
                                                                               limitCount,
                                                                               dispLimitCount,
                                                                               Item,
                                                                               0LL);
                      v50 = v47;
                      v38 = v48;
                      v5 = v50;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_34:
                        v70 = v5;
                        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                               v43,
                               (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                               (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v54 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                  v43,
                                  (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                                  *v38);
                        }
                        else
                        {
                          v54 = 0;
                        }
                        v55 = entity;
                        v56 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, v51, v52, v53);
                        EventDropUpValInfo___ctor_39609048(v56, 0, (FunctionEntity_o *)v55, v54, 0LL);
                        if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                               v43,
                               (Il2CppObject *)StringLiteral_1209/*"0"*/,
                               *v38) == 1 )
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v43,
                                                                                   (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                   *v38);
                          v5 = v70;
                          if ( !*v70 || !v56 )
                            break;
                          EventDropUpValInfo__SetAddCount(v56, (int32_t)Values, (*v70)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v43,
                                                                                   (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                                                                   *v38);
                          v5 = v70;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v43,
                                                                                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                     *v38);
                            if ( !*v70 || !v56 )
                              break;
                            EventDropUpValInfo__SetRateCount(
                              v56,
                              (int32_t)Values,
                              (*v70)->fields.equipSvtId > 0,
                              0,
                              0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        v63 = *(Il2CppArrayBounds **)&Values->fields._MasterKind_k__BackingField;
                        v64 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                        ++HIDWORD(Values->fields._MasterName_k__BackingField);
                        if ( !v63 )
                          break;
                        v65 = SLODWORD(Values->fields._MasterName_k__BackingField);
                        if ( (unsigned int)v65 >= v63[3].length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)Values,
                            (Il2CppObject *)v56,
                            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v66 = &v63[v65];
                          LODWORD(Values->fields._MasterName_k__BackingField) = v65 + 1;
                          v66[4] = (Il2CppArrayBounds)v56;
                          sub_1BCA784((PartyOrganizationUtility_o *)&v66[4], (int64_t)v56, v57, v58, v59, v60, v61, v62);
                        }
                        v72 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v37 = this->fields.funcId;
          ++v40;
        }
        while ( v37 );
      }
    }
LABEL_53:
    sub_1BCAA3C(Values, v36);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Int32_array *funcId; // x27
  __int64 v34; // x8
  unsigned __int64 v35; // x28
  struct System_Int32_array *v36; // x8
  int32_t v37; // w26
  __int64 v39; // x2
  __int64 v40; // x3
  SkillLvEntity_o *v41; // x21
  SkillLvEntity___c_c *v42; // x0
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v44; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  int32_t v53; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v55; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4B16C78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index, *(_QWORD *)&eventId);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v21, v22);
    sub_1BCA7E0(&System_Func_QuestGroupEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v29, v30);
    this = (SkillLvEntity_o *)sub_1BCA7E0(&SkillLvEntity___c_TypeInfo, v31, v32);
    byte_4B16C78 = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_40;
  v34 = *(_QWORD *)&funcId->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    v53 = questId;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_41;
      v36 = v14->fields.funcId;
      if ( !v36 )
        goto LABEL_40;
      if ( v36->max_length <= index )
        goto LABEL_41;
      v37 = funcId->m_Items[v35 + 1];
      if ( v37 != v36->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_40;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v37, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_40;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)funcMaster,
                                      &v55,
                                      v37,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v34) = funcId->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_20;
    }
    if ( !v55 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v55[5].klass;
LABEL_20:
    questId = v53;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v41 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v42 = SkillLvEntity___c_TypeInfo;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo, *(_QWORD *)&index);
    v42 = SkillLvEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__int__o *)v42->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, *(_QWORD *)&index);
      v42 = SkillLvEntity___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_QuestGroupEntity__int__TypeInfo,
                                               *(_QWORD *)&index,
                                               v39,
                                               v40);
    System_Func_object__int____ctor(_9__61_0, v44, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__61_0,
      (int64_t)_9__61_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v52,
         questId,
         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1BCAA44(this, *(_QWORD *)&index);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_array *StringArray; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_String_array *v20; // x20
  System_Collections_Generic_Dictionary_object__int__o *v21; // x19
  System_String_o *v22; // x0
  __int64 v23; // x1
  int klass; // w9
  System_String_o *v25; // x20
  int v26; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_19713/*"followerVals"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v14, v15);
    byte_4B16C77 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19713/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v20 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v21 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v17,
                                                                  v18,
                                                                  v19);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v21,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v20->max_length )
    goto LABEL_20;
  v22 = v20->m_Items[0];
  if ( !v22
    || (v22 = System_String__Replace_62420848(
                v22,
                (System_String_o *)StringLiteral_15978/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v22 = System_String__Replace_62420848(
                v22,
                (System_String_o *)StringLiteral_16236/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v22 = (System_String_o *)System_String__Split(v22, 0x2Cu, 0, 0LL), v29 = 0, !v22) )
  {
LABEL_21:
    sub_1BCAA3C(v22, v23);
  }
  klass = (int)v22[1].klass;
  v25 = v22;
  if ( klass >= 1 )
  {
    v26 = 0;
    while ( v26 < (unsigned int)klass )
    {
      v22 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v25[1].monitor + v26), &result, 0LL);
      if ( ((unsigned __int8)v22 & 1) != 0 )
      {
        v22 = System_Int32__ToString((int32_t)&v29, 0LL);
        if ( !v21 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v21,
          (Il2CppObject *)v22,
          result,
          (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v26 = v29 + 1;
      v29 = v26;
      klass = (int)v25[1].klass;
      if ( v26 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v21;
    }
LABEL_20:
    sub_1BCAA44(v22, v23);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v21;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  SkillLvEntity___c_c *v13; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v15; // x20
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v17; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Nullable_int__o v27; // 0:x3.8

  if ( (byte_4B16C69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method, v2);
    sub_1BCA7E0(&System_Func_long__Nullable_int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v7, v8);
    sub_1BCA7E0(&SkillLvEntity___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_19870/*"funcPositionForSplitFuncSequence"*/, v11, v12);
    byte_4B16C69 = 1;
  }
  v13 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo, method);
    v13 = SkillLvEntity___c_TypeInfo;
  }
  v15 = (System_String_o *)StringLiteral_19870/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v13->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = SkillLvEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v13->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1BCAA2C(
                                                       System_Func_long__Nullable_int___TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v17,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_0,
      (int64_t)_9__44_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v27 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v15,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v27,
           (const MethodInfo_2F199D4 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_int__o *v28; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x22
  Il2CppObject *Value_object; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  unsigned int *v40; // x0
  __int64 v41; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  void *v46; // x0
  void *v47; // x21
  int v48; // w1
  int v49; // w20
  __int64 v50; // x20
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B16C6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v10, v11);
    sub_1BCA7E0(&long_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v26, v27);
    byte_4B16C6D = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    key,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_object__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v33,
                   (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v36 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v52,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v28 )
      sub_1BCAA3C(v36, v37);
    if ( !v52.fields._current )
      sub_1BCAA3C(0LL, v37);
    if ( v52.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v40 = (unsigned int *)j_il2cpp_object_unbox_0(v52.fields._current, long_TypeInfo, v38, v39);
    v41 = *v40;
    items = v28->fields._items;
    v43 = Method_System_Collections_Generic_List_int__Add__;
    ++v28->fields._version;
    if ( !items )
      sub_1BCAA3C(v40, v41);
    size = v28->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v28,
        v41,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v28->fields._size = size + 1;
      items->m_Items[size + 1] = v41;
    }
  }
  sub_1BCACFC(v52.fields._current);
  v47 = v46;
  v49 = v48;
  __cxa_end_catch();
  if ( v49 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1CB5270();
  }
  v50 = *(_QWORD *)__cxa_begin_catch(v47);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v50 )
    sub_1BCAA34(v50);
LABEL_18:
  if ( !v28 )
LABEL_20:
    sub_1BCAA3C(Value_object, v35);
  return System_Collections_Generic_List_int___ToArray(
           v28,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_object__object__o *v11; // x20

  if ( (byte_4B16C6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method, v2);
    sub_1BCA7E0(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v5, v6);
    sub_1BCA7E0(&System_Func_List_object___List_int___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_17278/*"battleEffectId"*/, v9, v10);
    byte_4B16C6A = 1;
  }
  v11 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_List_object___List_int___TypeInfo, method, v2, v3);
  System_Func_object__object____ctor(v11, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17278/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v11,
                                                     0LL,
                                                     (const MethodInfo_2F19B3C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  SkillLvEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  v4 = defaultValue;
  if ( (byte_4B16C6F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      key,
      *(_QWORD *)&defaultValue);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B16C6F = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v12, v13);
  sub_1BCACFC(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v15, v16);
}


SelectTreasureDeviceInfo_o *__fastcall SkillLvEntity__GetSelectTreasureDeviceInfo(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v12; // x0

  if ( (byte_4B16C7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string__object___, method, v2);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___, v4, v5);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_23333/*"selectTreasureDeviceInfo"*/, v8, v9);
    byte_4B16C7B = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23333/*"selectTreasureDeviceInfo"*/,
                           0LL,
                           (const MethodInfo_2F013D8 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
    v12 = JsonManager__Deserialize_object_(
            Value_object__object,
            (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    Value_object__object = v12;
    if ( v12 )
      SelectTreasureDeviceInfo__AssignTdIndexAutomatically((SelectTreasureDeviceInfo_o *)v12, 0LL);
  }
  return (SelectTreasureDeviceInfo_o *)Value_object__object;
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v8; // x21
  const MethodInfo *v9; // x1
  DataVals_array *DataValsList; // x0
  __int64 v11; // x1

  if ( (byte_4B16C53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16C53 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v8 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v9);
  if ( !v8 )
    sub_1BCAA3C(DataValsList, v11);
  return FunctionMaster__GetSetTypeDataValArray(v8, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_Dictionary_string__object__o *v37; // x20
  System_Collections_Generic_List_object__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v43; // x0
  const MethodInfo *v44; // x2
  Il2CppObject *v45; // x20
  __int64 methodPtr_low; // x9
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B16C6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v25, v26);
    sub_1BCA7E0(&SkillLvEntity_SvtChangeBgm_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_23945/*"svtBgmChange"*/, v29, v30);
    byte_4B16C6E = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23945/*"svtBgmChange"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v31;
  v37 = this->fields.script;
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_object__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v37,
                                                                        (System_String_o *)StringLiteral_23945/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v38,
                                                                        (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1BCAA3C(script, v32);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v61.fields._current;
    v43 = (SkillLvEntity_SvtChangeBgm_o *)sub_1BCAA2C(SkillLvEntity_SvtChangeBgm_TypeInfo, v39, v40, v41);
    v45 = (Il2CppObject *)v43;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1BCACFC(current);
LABEL_19:
        sub_1BCAA3C(v47, v48);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v43, (System_Collections_Generic_Dictionary_string__object__o *)current, v44);
    if ( !v31 )
      goto LABEL_19;
    items = v31->fields._items;
    v56 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1BCAA3C(v47, v48);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v45,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v58[4] = (Il2CppClass *)v45;
      sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v45, v49, v50, v51, v52, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v31;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v18; // x8
  SkillLvMaster_o *v19; // x23
  unsigned __int64 v20; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v22; // x24
  int32_t v23; // w1
  int32_t Param; // w25
  int32_t v25; // w1
  const MethodInfo *v26; // x4
  SkillLvEntity_o *v28; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B16C7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, ret, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v10, v11);
    byte_4B16C7A = 1;
  }
  v28 = 0LL;
  entity = 0LL;
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_32;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v14);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
    v18 = this->fields.funcId;
    if ( !v18 )
LABEL_32:
      sub_1BCAA3C(isAddState, funcId);
    v19 = (SkillLvMaster_o *)isAddState;
    v20 = 0LL;
    while ( 1 )
    {
      max_length = v18->max_length;
      if ( (__int64)v20 >= (int)max_length )
        break;
      if ( v20 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v18->m_Items[v20 + 1],
                                                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v20 >= DataValsList->max_length )
LABEL_34:
            sub_1BCAA44(isAddState, funcId);
          if ( !entity )
            goto LABEL_32;
          v22 = DataValsList->m_Items[v20];
          if ( !v22 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v20],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v23 = DataVals__isParam(v22, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v22, v23, 0, 0LL);
          v25 = DataVals__isParam(v22, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v22, v25, 0, 0LL);
          if ( !v19 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v19,
                                                                      &v28,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v26);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v28->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v18 = this->fields.funcId;
      ++v20;
      if ( !v18 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C76 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15745/*"WarBoardBreakPointDamage"*/, method, v2);
    byte_4B16C76 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15745/*"WarBoardBreakPointDamage"*/, 0, v3);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C79 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16849/*"additionalSkillInsertCurrentSkillAfter"*/, method, v2);
    byte_4B16C79 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16849/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v3) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_17060/*"aress"*/, v4, v5);
    byte_4B16C66 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_17060/*"aress"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_16:
    sub_1BCAA3C(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1BCAA44(SetTypeDataValArray, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_16;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  bool v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v3 = isCheckHate;
  if ( (byte_4B16C67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_6043/*"EnableTarget"*/, v9, v10);
    byte_4B16C67 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_6043/*"EnableTarget"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_6043/*"EnableTarget"*/,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15) == 1;
  sub_1BCACFC(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v17, v18);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C6B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20441/*"ignoreWhiteFade"*/, method, v2);
    byte_4B16C6B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20441/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C70 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22335/*"noTargetSkipSkill"*/, method, v2);
    byte_4B16C70 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22335/*"noTargetSkipSkill"*/, -1, v3) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_23171/*"revivalUnder"*/, v4, v5);
    byte_4B16C65 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23171/*"revivalUnder"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_23172/*"revivalUp"*/, v4, v5);
    byte_4B16C64 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23172/*"revivalUp"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B16C61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4, v5);
    this = (SkillLvEntity_o *)sub_1BCA7E0(&StringLiteral_2427/*"ApplySupportSvt"*/, v6, v7);
    byte_4B16C61 = 1;
  }
  if ( !vals )
    sub_1BCAA3C(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2427/*"ApplySupportSvt"*/,
           (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2427/*"ApplySupportSvt"*/,
            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_15543/*"VoiceVolume"*/, v4, v5);
    byte_4B16C5F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_array *svals; // x8
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_String_array *v13; // x8
  DataVals_array *v14; // x19
  __int64 v15; // x24
  __int64 v16; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x26
  System_String_o *v19; // x22
  DataVals_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  DataVals_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v38; // x0

  if ( (byte_4B16C52 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals___TypeInfo, method, v2);
    sub_1BCA7E0(&DataVals_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16C52 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v14 = (DataVals_array *)sub_1BCA888(DataVals___TypeInfo, 1LL);
    v30 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v27, v28, v29);
    DataVals___ctor(v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v14 )
    {
      if ( v30 )
      {
        v9 = sub_1BCA91C(v30, v14->obj.klass->_1.element_class);
        if ( !v9 )
        {
LABEL_21:
          v38 = sub_1BCAA60(v9);
          sub_1BCA908(v38, 0LL);
        }
      }
      if ( !v14->max_length )
LABEL_20:
        sub_1BCAA44(v9, v10);
      v14->m_Items[0] = v30;
      sub_1BCA784((PartyOrganizationUtility_o *)v14->m_Items, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      return v14;
    }
LABEL_13:
    sub_1BCAA3C(v9, v10);
  }
  v9 = sub_1BCA888(DataVals___TypeInfo, svals->max_length);
  v13 = this->fields.svals;
  if ( !v13 )
    goto LABEL_13;
  v14 = (DataVals_array *)v9;
  v15 = 4LL;
  v16 = 32LL;
  while ( 1 )
  {
    max_length = v13->max_length;
    v18 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      return v14;
    if ( v18 >= max_length )
      goto LABEL_20;
    v19 = (System_String_o *)*((_QWORD *)&v13->obj.klass + v15);
    v20 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v10, v11, v12);
    DataVals___ctor(v20, v19, 0LL);
    if ( v14 )
    {
      if ( v20 )
      {
        v9 = sub_1BCA91C(v20, v14->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_21;
      }
      if ( v18 >= v14->max_length )
        goto LABEL_20;
      *((_QWORD *)&v14->obj.klass + v15) = v20;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v14 + v16), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      v13 = this->fields.svals;
      ++v15;
      v16 += 8LL;
      if ( v13 )
        continue;
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  System_String_o *Detail; // x20

  if ( (byte_4B16C54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v7, v8);
    byte_4B16C54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v11);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v12);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_40665920(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x22
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  System_String_o *Detail; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16C55 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&lv, isShort);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_8360/*"LEVEL_DETAIL_INFO"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B16C55 = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8360/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v18 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v15 = (Il2CppObject *)System_String__Format(v13, v14, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v15, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x27
  const MethodInfo *v44; // x1
  Il2CppObject *v45; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v50; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v52; // x8
  unsigned __int64 v53; // x8
  System_Collections_Generic_Dictionary_object__int__o *v54; // x20
  Il2CppObject *v55; // x8
  int monitor; // w24
  Il2CppClass *klass; // x3
  const MethodInfo *v58; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v61; // x8
  bool v63; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v65; // [xsp+14h] [xbp-9Ch]
  unsigned int v66; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v67; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v70; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B16C5A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_FunctionGroupMaster___,
      *(_QWORD *)&wearersSvtId,
      *(_QWORD *)&wearesLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v31, v32);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13716/*"Target"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_6301/*"EventId"*/, v41, v42);
    byte_4B16C5A = 1;
  }
  v70 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&wearersSvtId);
    Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    v43 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
    v45 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v65 = wearesLimitCount;
    v66 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v67 = 0LL;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_87;
      v67 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v44);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                               setupInfo,
                                                                               eventId,
                                                                               0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_87;
    v63 = !isOwner;
    m_Items = Values->m_Items;
    v50 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v50 >= (int)max_length )
        break;
      if ( v50 >= max_length )
        goto LABEL_95;
      if ( !v43 )
        goto LABEL_87;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                                                                                 &entity,
                                                                                 funcId->m_Items[v50 + 1],
                                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v52 = this->fields.funcId;
        if ( !v52 )
          goto LABEL_87;
        if ( v50 >= v52->max_length )
LABEL_95:
          sub_1BCAA44(QuestPhaseIndividualList, Individuality);
        if ( !v45 )
          goto LABEL_87;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                   (FunctionGroupMaster_o *)v45,
                                                                                   &v70,
                                                                                   v52->m_Items[v50 + 1],
                                                                                   eventId,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_86;
      }
      if ( !Values )
        goto LABEL_87;
      v53 = Values->max_length;
      if ( (__int64)v50 >= (int)v53 )
        goto LABEL_86;
      if ( v50 >= v53 )
        goto LABEL_95;
      v54 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50];
      if ( !v54 )
        goto LABEL_86;
      v55 = entity;
      if ( !entity )
        goto LABEL_87;
      monitor = (int)entity[1].monitor;
      if ( monitor > 104 )
      {
        switch ( monitor )
        {
          case 105:
          case 106:
          case 107:
          case 108:
          case 114:
          case 115:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v54,
                                                                                         (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       (System_Int32_array *)entity[5].klass,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( monitor != 105 )
              goto LABEL_90;
            if ( !entity )
              goto LABEL_87;
            klass = entity[2].klass;
            if ( !klass )
              goto LABEL_90;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
            if ( (v66 & 0x80000000) != 0 || !klass->_1.namespaze )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v67 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_40378960(
                                                                                         v67,
                                                                                         v65,
                                                                                         wearesDispLimitCount,
                                                                                         (System_Int32_array *)klass,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_6301/*"EventId"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_6301/*"EventId"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v67 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v54,
                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                         v67,
                                                                                         v65,
                                                                                         wearesDispLimitCount,
                                                                                         Item,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                   this,
                                   v50,
                                   eventId,
                                   setupInfo->fields.questId,
                                   (System_Int32_array *)entity[5].klass,
                                   (FunctionMaster_o *)v43,
                                   (FunctionGroupMaster_o *)v45,
                                   v58);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       EventIndividuality,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                      v54,
                      (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                      (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v54,
                                                                                         (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                                                                                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v63 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_86;
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       (System_Int32_array *)entity[5].klass,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( !v67 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v67, v65, wearesDispLimitCount, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
            if ( !Master_object )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_40114148(
                                                                                       Master_object,
                                                                                       Individuality,
                                                                                       0LL);
            if ( !QuestPhaseIndividualList )
              goto LABEL_87;
            if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
              goto LABEL_90;
            goto LABEL_86;
          case 116:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            goto LABEL_84;
          case 117:
          case 118:
            goto LABEL_85;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v61 = &StringLiteral_1409/*"2"*/;
            goto LABEL_80;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                       (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v61 = &StringLiteral_1471/*"3"*/;
LABEL_80:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)*v61,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            goto LABEL_84;
          default:
            goto LABEL_86;
        }
      }
      if ( monitor != 1 )
      {
        if ( monitor == 7 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                     (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                     (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v54,
                                                                                       (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                                                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_84:
              v55 = entity;
              if ( !entity )
                goto LABEL_87;
LABEL_85:
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                         setupInfo,
                                                                                         questPhaseIndividualityList,
                                                                                         (System_Int32_array *)v55[5].klass,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
              {
LABEL_90:
                LOBYTE(QuestPhaseIndividualList) = 1;
                return (unsigned __int8)QuestPhaseIndividualList & 1;
              }
            }
          }
          goto LABEL_86;
        }
        if ( monitor != 16 )
          goto LABEL_86;
      }
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v50],
                                                                                 (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                 (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v54,
                                                                                   (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                   (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_87;
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                     setupInfo,
                                                                                     questPhaseIndividualityList,
                                                                                     (System_Int32_array *)entity[5].klass,
                                                                                     0LL);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v67;
            if ( !v67 )
            {
LABEL_94:
              LODWORD(QuestPhaseIndividualList) = v66 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_40378960(
                                                   v67,
                                                   v65,
                                                   wearesDispLimitCount,
                                                   (System_Int32_array *)entity[2].monitor,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_87:
            sub_1BCAA3C(QuestPhaseIndividualList, Individuality);
          }
        }
      }
LABEL_86:
      funcId = this->fields.funcId;
      ++v50;
      if ( !funcId )
        goto LABEL_87;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__getEventUpVal_40683416(
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *Master_object; // x25
  Il2CppObject *v70; // x26
  Il2CppObject *v71; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v74; // x8
  struct System_Int32_array *v75; // x10
  SkillLvEntity_o *v76; // x29
  unsigned __int64 v77; // x11
  EventUpValInfo_o *v78; // x8
  int32_t v79; // w21
  ServantLimitEntity_o *v80; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v82; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v84; // x8
  struct EventUpValSetupInfo_o *v85; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v87; // x28
  int monitor; // w20
  const MethodInfo *v89; // x2
  Il2CppClass *klass; // x3
  Il2CppObject *v91; // x27
  int32_t Item; // w23
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  EventUpValInfo_o *v96; // x8
  const MethodInfo *v97; // x2
  struct System_Int32_array *v98; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  __int64 v100; // x2
  __int64 v101; // x3
  Il2CppClass *v102; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v104; // x27
  unsigned __int64 v105; // x23
  int32_t lv; // w20
  char v107; // w8
  __int64 v108; // x2
  __int64 v109; // x3
  Il2CppObject *v110; // x23
  EventDropUpValInfo_o *v111; // x20
  int32_t v112; // w1
  EventDropUpValInfo_o *v113; // x0
  bool v114; // w2
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x7
  EventUpValInfo_o *v123; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v126; // w0
  struct EventUpValSetupInfo_o *v127; // x8
  SkillLvEntity_o *v128; // x2
  __int64 v129; // x1
  SkillEntity_o *v130; // x23
  SkillLvEntity_o *v131; // x20
  __int64 v132; // x1
  System_Int32_array *ActIndividuality; // x23
  __int64 v134; // x2
  __int64 v135; // x3
  int32_t v136; // w20
  const MethodInfo *v137; // x2
  __int64 v138; // x2
  __int64 v139; // x3
  int32_t v140; // w8
  int32_t v141; // w9
  int32_t v142; // w20
  Il2CppObject *v143; // x23
  EventDropUpValInfo_o *v144; // x27
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  __int64 v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  const MethodInfo *v155; // x2
  Il2CppObject *v156; // x23
  int32_t v157; // w27
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  int32_t v161; // w1
  EventDropUpValInfo_o *v162; // x0
  bool v163; // w2
  __int64 v164; // x2
  __int64 v165; // x3
  Il2CppObject *v166; // x23
  __int64 v167; // x2
  __int64 v168; // x3
  Il2CppObject *v169; // x23
  EventUpValInfo_o *v170; // x8
  Il2CppObject *v171; // x1
  EventUpValInfo_o *v172; // x8
  Il2CppObject *v173; // x23
  __int64 v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  __int64 v177; // x8
  Il2CppObject *v178; // x23
  EventDropUpValInfo_o *v179; // x27
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  __int64 v186; // x8
  _QWORD *v187; // x9
  __int64 v188; // x10
  __int64 v189; // x8
  Il2CppObject *v190; // x20
  __int64 v191; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v194; // [xsp+4h] [xbp-ECh]
  int32_t v195; // [xsp+8h] [xbp-E8h]
  bool v196; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v197; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  __int64 valueb; // [xsp+18h] [xbp-D8h]
  char v201; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v202; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v203; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v205; // [xsp+30h] [xbp-C0h]
  char v206; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v208; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v209; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v213; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16

  v10 = this;
  if ( (byte_4B16C5B & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, eventUpVallInfo, isFuncGroup);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventPointBuffMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionGroupMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v27, v28);
    sub_1BCA7E0(&DataManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v35, v36);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v43, v44);
    sub_1BCA7E0(&EventDropUpValInfo_TypeInfo, v45, v46);
    sub_1BCA7E0(&Individuality_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v49, v50);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v55, v56);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_13716/*"Target"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_6301/*"EventId"*/, v65, v66);
    this = (SkillLvEntity_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v67, v68);
    byte_4B16C5B = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v213 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_275;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_273;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  v70 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_275;
  v208 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v71 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_275:
    sub_1BCAA3C(this, eventUpVallInfo);
  v71 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_16:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_275;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_275;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_275;
  v205 = eventIdList;
  v74 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v74 >= 1 )
  {
    v197 = (ServantEntity_o *)v71;
    v194 = isOwner;
    v201 = 0;
    v196 = v71 == 0LL || isEquipOnly;
    v75 = v205;
    v76 = this;
    v77 = 0LL;
    while ( 1 )
    {
      if ( v77 >= (unsigned int)v74 )
LABEL_276:
        sub_1BCAA44(this, eventUpVallInfo);
      v78 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_275;
      v79 = v75->m_Items[v77 + 1];
      v209 = v77;
      if ( v78->fields.equipSvtId < 1 )
      {
        v206 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_275;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_275;
        if ( !this )
          goto LABEL_275;
        v80 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_275;
        if ( !v80 )
          goto LABEL_275;
        if ( !this )
          goto LABEL_275;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v80->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v79,
                                    0LL);
        v206 = (char)this;
        v78 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_275;
      }
      this = (SkillLvEntity_o *)v78->fields.setupInfo;
      if ( !this )
        goto LABEL_275;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v79,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_275;
      v82 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v82 >= (int)max_length )
          break;
        if ( v82 >= max_length )
          goto LABEL_276;
        if ( !Master_object )
          goto LABEL_275;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v82 + 1],
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_261;
        if ( isFuncGroup )
        {
          v84 = v10->fields.funcId;
          if ( !v84 )
            goto LABEL_275;
          if ( v82 >= v84->max_length )
            goto LABEL_276;
          if ( !v70 )
            goto LABEL_275;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v70,
                                      &v213,
                                      v84->m_Items[v82 + 1],
                                      v79,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_261;
          this = (SkillLvEntity_o *)v213;
          if ( !v213 )
            goto LABEL_275;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v213, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_275;
            v85 = (*eventUpVallInfo)->fields.setupInfo;
            this = v208;
            if ( !v85 || !v208 )
              goto LABEL_275;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v208,
                                        v79,
                                        v85->fields.questId,
                                        v85->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_261;
          }
        }
        if ( !v76 )
          goto LABEL_275;
        chargeTurn = (unsigned int)v76->fields.chargeTurn;
        if ( (__int64)v82 >= (int)chargeTurn )
          goto LABEL_261;
        if ( v82 >= chargeTurn )
          goto LABEL_276;
        v87 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v76->fields.funcId + v82);
        if ( !v87 )
          goto LABEL_261;
        if ( !entity )
          goto LABEL_275;
        monitor = (int)entity[1].monitor;
        if ( monitor > 104 )
        {
          switch ( monitor )
          {
            case 105:
            case 106:
            case 107:
            case 108:
            case 114:
            case 115:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v79 != (_DWORD)this )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_261;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v87,
                                            v89);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_261;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              if ( monitor != 105 )
                goto LABEL_75;
              if ( !entity )
                goto LABEL_275;
              klass = entity[2].klass;
              if ( !klass || !klass->_1.namespaze )
                goto LABEL_75;
              if ( !v197 )
                goto LABEL_261;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_40378960(
                                          v197,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
LABEL_75:
              v91 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v87,
                       (Il2CppObject *)StringLiteral_1209/*"0"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v202 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, v93, v94, v95);
              EventDropUpValInfo___ctor_39609048(v202, v79, (FunctionEntity_o *)v91, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v87,
                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v96 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_275;
LABEL_122:
                v111 = v202;
                if ( !v202 )
                  goto LABEL_275;
                v112 = (int)this;
                v113 = v202;
                v114 = v96->fields.equipSvtId > 0;
LABEL_124:
                EventDropUpValInfo__SetAddCount(v113, v112, v114, v206 & 1, 0LL);
                goto LABEL_236;
              }
LABEL_224:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v111 = v202;
              if ( (_DWORD)this != 2 )
                goto LABEL_236;
              v171 = (Il2CppObject *)StringLiteral_1409/*"2"*/;
LABEL_226:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          v171,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v172 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
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
              goto LABEL_261;
            case 111:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_6301/*"EventId"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_6301/*"EventId"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v79 != (_DWORD)this )
                goto LABEL_261;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v87,
                                            v121);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_261;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_134;
              if ( !v197 )
                goto LABEL_261;
              v123 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              limitCount = v123->fields.limitCount;
              dispLimitCount = v123->fields.dispLimitCount;
              v126 = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v87,
                       (Il2CppObject *)StringLiteral_1409/*"2"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v197, limitCount, dispLimitCount, v126, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
LABEL_134:
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              v127 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v127 )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v82,
                                          v79,
                                          v127->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v70,
                                          v122);
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              v128 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v128,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_154;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v129);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              v130 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v197;
              if ( !v197 )
                goto LABEL_275;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v197,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v130 )
                goto LABEL_275;
              v131 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v130, (const MethodInfo *)eventUpVallInfo);
              if ( !Individuality_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v132);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v131,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v197, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_154;
              if ( !entity )
                goto LABEL_275;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_154;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
              v190 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
              v191 = *(_QWORD *)&v197->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v217.fields.fakeValue = *(_QWORD *)&v197->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = *(_QWORD *)&v197->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                  *(_QWORD *)&v217.fields.fakeValue);
                *(_QWORD *)&v217.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v217.fields.currentCryptoKey = v191;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v217, 0LL);
              if ( !v190 )
                goto LABEL_275;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v190, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_261;
              }
LABEL_154:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v87,
                     (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                     (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_13716/*"Target"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v136 = (int)this;
                if ( (_DWORD)this == 1 && !v194 )
                  goto LABEL_261;
              }
              else
              {
                v136 = 0;
              }
              v178 = entity;
              v179 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v134, v135);
              EventDropUpValInfo___ctor_39609048(v179, v79, (FunctionEntity_o *)v178, v136, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v87,
                     (Il2CppObject *)StringLiteral_1209/*"0"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v179 )
                  goto LABEL_275;
                EventDropUpValInfo__SetAddCount(
                  v179,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v206 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v87,
                                              (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                              (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v179 )
                    goto LABEL_275;
                  EventDropUpValInfo__SetRateCount(
                    v179,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v206 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_275;
              v186 = *(_QWORD *)&this->fields.skillId;
              v187 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v186 )
                goto LABEL_275;
              v188 = this->fields.chargeTurn;
              if ( (unsigned int)v188 >= *(_DWORD *)(v186 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v179,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
              }
              else
              {
                v189 = v186 + 8 * v188;
                this->fields.chargeTurn = v188 + 1;
                *(_QWORD *)(v189 + 32) = v179;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v189 + 32),
                  (int64_t)v179,
                  v180,
                  v181,
                  v182,
                  v183,
                  v184,
                  v185);
              }
              v201 = 1;
              goto LABEL_261;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v79 != (_DWORD)this )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_261;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v87,
                                            v137);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_261;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              v201 |= (unsigned __int8)this;
              if ( !v197 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v197,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_275;
              v140 = this->fields.chargeTurn;
              if ( v140 < 1 )
                goto LABEL_242;
              v141 = 0;
              valuea = this;
              while ( v141 < (unsigned int)v140 )
              {
                v142 = *((_DWORD *)&this->fields.funcId + v141);
                v143 = entity;
                v144 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v138, v139);
                EventDropUpValInfo___ctor_39609048(v144, v79, (FunctionEntity_o *)v143, v142, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v87,
                       (Il2CppObject *)StringLiteral_1209/*"0"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v87,
                                              (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                              (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v144 )
                    goto LABEL_275;
                  EventDropUpValInfo__SetAddCount(
                    v144,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v206 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v87,
                                              (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                              (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v87,
                                                (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v144 )
                      goto LABEL_275;
                    EventDropUpValInfo__SetRateCount(
                      v144,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v206 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_275;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_275;
                v151 = *(_QWORD *)&this->fields.skillId;
                v152 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v151 )
                  goto LABEL_275;
                v153 = this->fields.chargeTurn;
                if ( (unsigned int)v153 >= *(_DWORD *)(v151 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v144,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                }
                else
                {
                  v154 = v151 + 8 * v153;
                  this->fields.chargeTurn = v153 + 1;
                  *(_QWORD *)(v154 + 32) = v144;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v154 + 32),
                    (int64_t)v144,
                    v145,
                    v146,
                    v147,
                    v148,
                    v149,
                    v150);
                }
                this = valuea;
                v201 = 1;
                v141 = actMaxRarity + 1;
                actMaxRarity = v141;
                v140 = valuea->fields.chargeTurn;
                if ( v141 >= v140 )
                  goto LABEL_261;
              }
              goto LABEL_276;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v87,
                                            v155);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_261;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              v156 = entity;
              v157 = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v87,
                       (Il2CppObject *)StringLiteral_1209/*"0"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v111 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, v158, v159, v160);
              EventDropUpValInfo___ctor_39609048(v111, v79, (FunctionEntity_o *)v156, v157, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v111 )
                goto LABEL_275;
              v161 = (int)this;
              v162 = v111;
              v163 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_220;
            case 129:
              if ( isSupport )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v79 != (_DWORD)this )
                goto LABEL_261;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              v166 = entity;
              v203 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v164, v165);
              EventDropUpValInfo___ctor(v203, v79, (FunctionEntity_o *)v166, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v87,
                     (Il2CppObject *)StringLiteral_1209/*"0"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v87,
                                            (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_275;
                v111 = v203;
                if ( !v203 )
                  goto LABEL_275;
                v112 = (int)this;
                v113 = v203;
                v114 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_124;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v111 = v203;
              if ( (_DWORD)this != 2 )
                goto LABEL_236;
              v171 = (Il2CppObject *)StringLiteral_1262/*"1"*/;
              goto LABEL_226;
            default:
              if ( monitor != 132 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                          (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v79 != (_DWORD)this )
                goto LABEL_261;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              if ( !entity )
                goto LABEL_275;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_275;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_261;
              v110 = entity;
              v202 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v108, v109);
              EventDropUpValInfo___ctor(v202, v79, (FunctionEntity_o *)v110, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v87,
                     (Il2CppObject *)StringLiteral_1262/*"1"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1409/*"2"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v96 = *eventUpVallInfo;
              if ( *eventUpVallInfo )
                goto LABEL_122;
              goto LABEL_275;
          }
          goto LABEL_234;
        }
        if ( monitor == 1 )
          goto LABEL_81;
        if ( monitor != 7 )
        {
          if ( monitor != 16 )
            goto LABEL_261;
LABEL_81:
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                      v87,
                                      (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                      (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v87,
                                              v97),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v98 = v10->fields.funcId;
              if ( !v98 )
                goto LABEL_275;
              if ( v82 >= v98->max_length )
                goto LABEL_276;
              if ( !this )
                goto LABEL_275;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v79,
                               v98->m_Items[v82 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              value = EnableEntity;
              if ( EnableEntity || (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_275;
                if ( !entity )
                  goto LABEL_275;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_275;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v196 )
                    goto LABEL_99;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_275;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_40378960(
                                              v197,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_99:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_275;
                    v195 = v79;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_275;
                    v102 = entity[2].klass;
                    if ( !v102 )
                      goto LABEL_275;
                    namespaze = v102->_1.namespaze;
                    if ( (int)namespaze < 1 )
                    {
                      v107 = 0;
                    }
                    else
                    {
                      v104 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v105 = 0LL;
                      while ( 1 )
                      {
                        if ( v105 >= (unsigned int)namespaze )
                          goto LABEL_276;
                        if ( !v104 )
                          goto LABEL_275;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v104,
                                                    *((_DWORD *)&v102->_1.byval_arg.data + v105),
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_275;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, eventUpVallInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v102->_1.namespaze;
                        if ( (__int64)++v105 >= (int)namespaze )
                        {
                          v107 = 0;
                          goto LABEL_229;
                        }
                      }
                      v107 = 1;
LABEL_229:
                      EnableEntity = value;
                    }
                    v79 = v195;
                    if ( ((unsigned __int8)v107 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v87,
                                                  (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                  (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_275;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v87,
                        (Il2CppObject *)StringLiteral_1471/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v173 = entity;
                    v111 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v100, v101);
                    EventDropUpValInfo___ctor(v111, v195, (FunctionEntity_o *)v173, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v87,
                                                (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v172 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_275;
LABEL_234:
                    if ( !v111 )
                      goto LABEL_275;
                    EventDropUpValInfo__SetRateCount(v111, (int32_t)this, v172->fields.equipSvtId > 0, v206 & 1, 0LL);
LABEL_236:
                    v170 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_275;
LABEL_237:
                    this = (SkillLvEntity_o *)v170->fields.dropList;
                    if ( !this )
                      goto LABEL_275;
                    v174 = *(_QWORD *)&this->fields.skillId;
                    v175 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v174 )
                      goto LABEL_275;
                    v176 = this->fields.chargeTurn;
                    if ( (unsigned int)v176 >= *(_DWORD *)(v174 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v111,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v177 = v174 + 8 * v176;
                      this->fields.chargeTurn = v176 + 1;
                      *(_QWORD *)(v177 + 32) = v111;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)(v177 + 32),
                        (int64_t)v111,
                        v115,
                        v116,
                        v117,
                        v118,
                        v119,
                        v120);
                    }
LABEL_242:
                    v201 = 1;
                    goto LABEL_261;
                  }
                }
              }
            }
          }
          goto LABEL_261;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v87,
                                    (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                    (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v87,
                                      (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                      (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)this )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_275;
            if ( !entity )
              goto LABEL_275;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              goto LABEL_275;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        (System_Int32_array *)entity[5].klass,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v169 = entity;
              v111 = (EventDropUpValInfo_o *)sub_1BCAA2C(EventDropUpValInfo_TypeInfo, eventUpVallInfo, v167, v168);
              EventDropUpValInfo___ctor(v111, v79, (FunctionEntity_o *)v169, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v87,
                                          (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v111 )
                goto LABEL_275;
              v161 = (int)this;
              v162 = v111;
              v163 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_220:
              EventDropUpValInfo__SetRateCount(v162, v161, v163, v206 & 1, 0LL);
              v170 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_275;
              goto LABEL_237;
            }
          }
        }
LABEL_261:
        funcId = v10->fields.funcId;
        ++v82;
        if ( !funcId )
          goto LABEL_275;
      }
      v75 = v205;
      LODWORD(v74) = v205->max_length;
      v77 = v209 + 1;
      if ( (__int64)(v209 + 1) >= (int)v74 )
        return v201 & 1;
    }
  }
LABEL_273:
  v201 = 0;
  return v201 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16C58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16C58 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_1BCAA3C(Instance, v9);
    }
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length )
        sub_1BCAA44(Instance, v9);
      if ( !v11 )
        goto LABEL_15;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   funcId->m_Items[v12 + 1],
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (Il2CppObject *)LODWORD(entity[1].monitor);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v12;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_string__int__array *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v17; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v19; // x20
  unsigned __int64 v20; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v23; // w8
  System_Collections_Generic_Dictionary_object__int__o *v24; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16C57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v12, v13);
    byte_4B16C57 = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (System_Collections_Generic_Dictionary_string__int__array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = SkillLvEntity__getValues(this, v17);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v19 = Instance;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v20 >= (int)max_length )
      return 0;
    if ( v20 >= max_length )
      goto LABEL_24;
    if ( !MasterData_object )
      goto LABEL_15;
    Instance = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                             &entity,
                                                                             funcId->m_Items[v20 + 1],
                                                                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v20;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(Instance, v15);
  v23 = v19->max_length;
  if ( (int)v20 >= v23 )
    return 0;
  if ( (unsigned int)v20 >= v23 )
LABEL_24:
    sub_1BCAA44(Instance, v15);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)v19->m_Items[v20];
  if ( v24
    && System_Collections_Generic_Dictionary_object__int___ContainsKey(
         v24,
         (Il2CppObject *)StringLiteral_1209/*"0"*/,
         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_object__int___get_Item(
             v24,
             (Il2CppObject *)StringLiteral_1209/*"0"*/,
             (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  struct System_Int32_array *v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  unsigned __int64 v14; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v16; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4B16C56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16C56 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v12 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1BCAA3C(Instance, method);
    }
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0LL;
    while ( 1 )
    {
      max_length = v12->max_length;
      if ( (__int64)v14 >= (int)max_length )
        break;
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, method);
      if ( !v13 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   v12->m_Items[v14 + 1],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v12 = this->fields.funcId;
      ++v14;
      if ( !v12 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B1194D = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v16 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v16->static_fields->unknownNameText;
  return *p_monitor;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  SkillLvEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B16C63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_18860/*"down"*/, v8, v9);
    byte_4B16C63 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18860/*"down"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18860/*"down"*/,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v11);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
      }
      else
      {
        sub_1BCACFC(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v15, v16);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  SkillLvEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B16C62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24555/*"up"*/, v8, v9);
    byte_4B16C62 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24555/*"up"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24555/*"up"*/,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v11);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
      }
      else
      {
        sub_1BCACFC(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v15, v16);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *result; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_10806/*"PlayVoiceNo"*/, v8, v9);
    byte_4B16C5D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10806/*"PlayVoiceNo"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCAA3C(0LL, v11);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10806/*"PlayVoiceNo"*/,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCACFC(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_String_array *svals; // x9
  int max_length; // w21
  __int64 klass; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_string__int__array *v20; // x20
  il2cpp_array_size_t v21; // w25
  struct System_String_array *v22; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  int v25; // w29
  __int64 v26; // x22
  System_Collections_Generic_Dictionary_object__int__o *v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppClass **v34; // x23
  PartyOrganizationUtility_o *v35; // x23
  int32_t v36; // w8
  System_String_o *v37; // x24
  PartyOrganizationUtility_c *v38; // x24
  int32_t v39; // w2
  const MethodInfo_325C504 *v40; // x3
  Il2CppObject *v41; // x1
  __int64 v42; // x24
  __int64 v44; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16C51 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v14, v15);
    byte_4B16C51 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1BCA888(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1BCA888(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v20 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = this->fields.svals;
      if ( !v22 )
        goto LABEL_37;
      if ( v21 >= v22->max_length )
        goto LABEL_38;
      klass = (__int64)v22->m_Items[v21];
      if ( !klass
        || (klass = (__int64)System_String__Replace_62420848(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15978/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_62420848(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16236/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v25 = *(_DWORD *)(klass + 24),
            v26 = klass,
            v27 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v19,
                                                                            v23,
                                                                            v24),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v27,
              (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v20) )
      {
LABEL_37:
        sub_1BCAA3C(klass, v19);
      }
      if ( v27 )
      {
        klass = sub_1BCA91C(v27, v20->obj.klass->_1.element_class);
        if ( !klass )
        {
          v44 = sub_1BCAA60(0LL);
          sub_1BCA908(v44, 0LL);
        }
      }
      if ( v21 >= v20->max_length )
LABEL_38:
        sub_1BCAA44(klass, v19);
      v34 = &v20->obj.klass + (int)v21;
      v34[4] = (Il2CppClass *)v27;
      v35 = (PartyOrganizationUtility_o *)(v34 + 4);
      sub_1BCA784(v35, (int64_t)v27, v28, v29, v30, v31, v32, v33);
      result[1] = 0;
      if ( v25 >= 1 )
        break;
LABEL_33:
      if ( ++v21 == max_length )
        return v20;
    }
    v36 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v36 >= *(_DWORD *)(v26 + 24) )
        goto LABEL_38;
      v37 = *(System_String_o **)(v26 + 8LL * v36 + 32);
      klass = System_Int32__TryParse(v37, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      if ( !v37 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v37, 0x3Au, 0, 0LL);
      if ( !klass )
        goto LABEL_37;
      v42 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v21 >= v20->max_length || !*(_DWORD *)(v42 + 24) )
            goto LABEL_38;
          klass = (__int64)v35->klass;
          if ( !v35->klass )
            goto LABEL_37;
          v39 = result[0];
          v41 = *(Il2CppObject **)(v42 + 32);
          v40 = (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v41,
            v39,
            v40);
        }
      }
      v36 = ++result[1];
      if ( result[1] >= v25 )
        goto LABEL_33;
    }
    if ( v21 >= v20->max_length )
      goto LABEL_38;
    v38 = v35->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v38 )
      goto LABEL_37;
    v39 = result[0];
    v40 = (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v41 = (Il2CppObject *)klass;
    klass = (__int64)v38;
    goto LABEL_23;
  }
  return v20;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *result; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15541/*"VoiceAssetName"*/, v8, v9);
    byte_4B16C5C = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15541/*"VoiceAssetName"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCAA3C(0LL, v11);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15541/*"VoiceAssetName"*/,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCACFC(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v11; // s8
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  float result; // s0
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4B16C60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15543/*"VoiceVolume"*/, v8, v9);
    byte_4B16C60 = 1;
  }
  script = this->fields.script;
  v11 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v11;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15) / 1000.0;
  sub_1BCACFC(Item);
  SkillLvEntity__getMovePositionUp(v17, v18);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_10807/*"PlayVoiceWait"*/, v4, v5);
    byte_4B16C5E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10807/*"PlayVoiceWait"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  SkillLvEntity_o *v29; // x0
  System_String_o *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B16C7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj, method);
    sub_1BCA7E0(&long_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_16879/*"afterClearBgmId"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20868/*"indv"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17329/*"beforeClearBgmId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v15, v16);
    byte_4B16C7C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20868/*"indv"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v19, v20);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22933/*"questId"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22935/*"questPhase"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v23, v24);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17329/*"beforeClearBgmId"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v25, v26);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16879/*"afterClearBgmId"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1BCAA3C(Item, v18);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v27, v28);
    return;
  }
LABEL_16:
  sub_1BCACFC(Item);
  SkillLvEntity__GetScriptIntParam(v29, v30, v31, v32);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16C7D & 1) == 0 )
  {
    sub_1BCA7E0(&SkillLvEntity___c_TypeInfo, v1, v2);
    byte_4B16C7D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SkillLvEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillLvEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_4B16C7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, x, method);
    byte_4B16C7E = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  return v5;
}