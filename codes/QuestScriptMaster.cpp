void __fastcall QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__, method, v2);
    byte_4B167C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  QuestScriptEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B167BC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v18, v19);
    byte_4B167BC = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       *(_QWORD *)&parentWarId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33 )
      goto LABEL_36;
    v42 = QuestScriptEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_36:
      sub_1BCAA3C(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 32) == 4 && *(_DWORD *)(v33 + 40) == parentWarId )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, QuestScriptEntity_TypeInfo);
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_32;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_32:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntity(
        QuestScriptMaster_o *this,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B167C4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&folderType);
    byte_4B167C4 = 1;
  }
  PK = (Il2CppObject *)QuestScriptEntity__CreatePK(
                         id,
                         folderType,
                         materialFolderId,
                         parentWarId,
                         *(const MethodInfo **)&parentWarId);
  return (QuestScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *EntityListFromQuestId; // x0
  __int64 v8; // x1

  if ( (byte_4B167B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__, v5, v6);
    byte_4B167B9 = 1;
  }
  EntityListFromQuestId = (System_Collections_Generic_List_object__o *)QuestScriptMaster__GetEntityListFromQuestId(
                                                                         this,
                                                                         questId,
                                                                         method);
  if ( !EntityListFromQuestId )
    sub_1BCAA3C(0LL, v8);
  if ( EntityListFromQuestId->fields._size < 1 )
    return 0LL;
  else
    return (QuestScriptEntity_o *)System_Collections_Generic_List_object___get_Item(
                                    EntityListFromQuestId,
                                    0,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_array *__fastcall QuestScriptMaster__GetEntityListFromFolderType(
        QuestScriptMaster_o *this,
        int32_t folderType,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = folderType;
  if ( (byte_4B167BB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&folderType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v15, v16);
    byte_4B167BB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&folderType = list;
        methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptEntity_TypeInfo
          && LODWORD(list[1].monitor) == v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = *(Il2CppClass **)&folderType;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), *(int64_t *)&folderType, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&folderType);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v22,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
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
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x8
  QuestScriptEntity_c *v50; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v53; // x10
  __int64 size; // x11
  Il2CppClass **v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  QuestScriptMaster___c_c *v62; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v64; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B167BA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_Comparison_QuestScriptEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, v24, v25);
    sub_1BCA7E0(&QuestScriptMaster___c_TypeInfo, v26, v27);
    byte_4B167BA = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_16;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_16:
      v40 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v49 = v41;
    if ( !v41 )
      goto LABEL_42;
    v50 = QuestScriptEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v41);
LABEL_42:
      sub_1BCAA3C(v41, v42);
    }
    if ( *(_DWORD *)(v41 + 16) == questId )
    {
      if ( !v28 )
        sub_1BCAA3C(v41, QuestScriptEntity_TypeInfo);
      items = v28->fields._items;
      v53 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1BCAA3C(v41, v50);
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v41,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v49, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  v56 = Enumerator->klass;
  v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_31;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_31:
    v59 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                                             Enumerator,
                                                             *(_QWORD *)(v59 + 8));
  v62 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v29);
    v62 = QuestScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v62->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v29);
      v62 = QuestScriptMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestScriptEntity__TypeInfo, v29, v60, v61);
    System_Comparison_object____ctor(_9__1_0, v64, Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, 0LL);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v66, v67, v68, v69, v70, v71);
  }
  if ( !v28 )
LABEL_45:
    sub_1BCAA3C(list, v29);
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    _9__1_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
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
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *Entity; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  DataManager_o *v33; // x22
  Il2CppClass *klass; // x25
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  QuestScriptEntity_o *v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 HasScriptReleaseForceFalse; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0

  if ( (byte_4B167C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B167C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity
    || (v33 = Instance,
        klass = Entity[7].klass,
        v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                             v28,
                                                             v31,
                                                             v32),
        System_Collections_Generic_List_object____ctor(
          v35,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
LABEL_46:
    sub_1BCAA3C(Instance, v28);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v36);
  while ( 1 )
  {
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_14;
      }
      p_method = (__int64)&v38->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_21;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_21:
      v45 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                   Enumerator,
                                   *(_QWORD *)(v45 + 8));
    v48 = (Il2CppObject *)v46;
    if ( !v46 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v46->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v46);
LABEL_45:
      sub_1BCAA3C(v46, v47);
    }
    if ( v46->fields.folderType == 2 && v46->fields.materialFolderId == eventId )
    {
      if ( (__int64)v33 >= (__int64)klass )
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__HasScriptReleaseForceFalse(
                                       v46,
                                       (const MethodInfo *)QuestScriptEntity_TypeInfo);
        if ( !HasScriptReleaseForceFalse )
          goto LABEL_32;
      }
      else
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__CheckScriptRelease(
                                       v46,
                                       (const MethodInfo *)QuestScriptEntity_TypeInfo);
        if ( HasScriptReleaseForceFalse )
        {
LABEL_32:
          if ( !v35 )
            sub_1BCAA3C(HasScriptReleaseForceFalse, v51);
          items = v35->fields._items;
          v59 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v35->fields._version;
          if ( !items )
            sub_1BCAA3C(HasScriptReleaseForceFalse, v51);
          size = v35->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v35,
              v48,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + size;
            v35->fields._size = size + 1;
            v61[4] = (Il2CppClass *)v48;
            sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v48, v52, v53, v54, v55, v56, v57);
          }
        }
      }
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_41;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_41:
    v65 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v35;
}


System_Collections_Generic_List_int__o *__fastcall QuestScriptMaster__GetMovedEventScriptList_40284152(
        QuestScriptMaster_o *this,
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
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  QuestScriptEntity_o *v32; // x0
  __int64 v33; // x1
  QuestScriptEntity_o *v34; // x21
  __int64 methodPtr_low; // x9
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 v37; // x1
  __int64 id; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B167C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v17, v18);
    byte_4B167C2 = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                   Enumerator,
                                   *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v32);
LABEL_35:
      sub_1BCAA3C(v32, v33);
    }
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(
                              v32,
                              (const MethodInfo *)QuestScriptEntity_TypeInfo);
    if ( IsMaterialLatestClear )
    {
      if ( !v19 )
        sub_1BCAA3C(IsMaterialLatestClear, v37);
      id = (unsigned int)v34->fields.id;
      items = v19->fields._items;
      v40 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BCAA3C(IsMaterialLatestClear, id);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_31;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_31:
    v45 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  QuestScriptEntity_o *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B167BF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v18, v19);
    byte_4B167BF = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       *(_QWORD *)&parentWarId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                   Enumerator,
                                   *(_QWORD *)(v32 + 8));
    v35 = (Il2CppObject *)v33;
    if ( !v33 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_37:
      sub_1BCAA3C(v33, v34);
    }
    if ( !v33->fields.folderType && v33->fields.parentWarId == parentWarId )
    {
      v37 = QuestScriptEntity__CheckScriptRelease(v33, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v37 )
      {
        if ( !v20 )
          sub_1BCAA3C(v37, v38);
        items = v20->fields._items;
        v46 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BCAA3C(v37, v38);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v35,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v35, v39, v40, v41, v42, v43, v44);
        }
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_33;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_33:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  QuestScriptEntity_o *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B167BD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v18, v19);
    byte_4B167BD = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       *(_QWORD *)&parentWarId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                   Enumerator,
                                   *(_QWORD *)(v32 + 8));
    v35 = (Il2CppObject *)v33;
    if ( !v33 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_36:
      sub_1BCAA3C(v33, v34);
    }
    if ( v33->fields.parentWarId == parentWarId )
    {
      v37 = QuestScriptEntity__CheckScriptRelease(v33, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v37 )
      {
        if ( !v20 )
          sub_1BCAA3C(v37, v38);
        items = v20->fields._items;
        v46 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BCAA3C(v37, v38);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v35,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v35, v39, v40, v41, v42, v43, v44);
        }
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_32;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_32:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsDummyFolder(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B167BE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v11, v12);
    byte_4B167BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v20 & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v25);
LABEL_33:
      sub_1BCAA3C(v25, v26);
    }
    if ( v25[8] == 4 && v25[9] == parentWarId )
      goto LABEL_25;
  }
  v20 = 0;
LABEL_25:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v20 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  QuestScriptEntity_o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  QuestScriptMaster___c_c *v68; // x0
  System_Func_object__bool__o *_9__7_0; // x20
  Il2CppObject *v70; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  QuestScriptMaster___c_c *v82; // x0
  System_Func_object__bool__o *_9__7_1; // x20
  Il2CppObject *v84; // x21
  struct QuestScriptMaster___c_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7

  if ( (byte_4B167C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_QuestScriptEntity___, *(_QWORD *)&scriptId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_QuestScriptEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&QuestScriptEntity_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, v26, v27);
    sub_1BCA7E0(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, v28, v29);
    sub_1BCA7E0(&QuestScriptMaster___c_TypeInfo, v30, v31);
    byte_4B167C0 = 1;
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptEntity__TypeInfo,
                                                       *(_QWORD *)&scriptId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v33);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                   Enumerator,
                                   *(_QWORD *)(v44 + 8));
    v47 = (Il2CppObject *)v45;
    if ( !v45 )
      goto LABEL_52;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v45->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v45->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1BCACFC(v45);
LABEL_52:
      sub_1BCAA3C(v45, v46);
    }
    if ( v45->fields.id == scriptId && v45->fields.folderType != 4 )
    {
      v49 = QuestScriptEntity__CheckScriptRelease(v45, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v49 )
      {
        if ( !v32 )
          sub_1BCAA3C(v49, v50);
        items = v32->fields._items;
        v58 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          sub_1BCAA3C(v49, v50);
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            v47,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v47;
          sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v47, v51, v52, v53, v54, v55, v56);
        }
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_33;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_33:
    v64 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(Enumerator, *(_QWORD *)(v64 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v68 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v65);
    v68 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__bool__o *)v68->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v65);
      v68 = QuestScriptMaster___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestScriptEntity__bool__TypeInfo, v65, v66, v67);
    System_Func_object__bool____ctor(_9__7_0, v70, Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, 0LL);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v72, v73, v74, v75, v76, v77);
  }
  if ( BasicHelper__Any_object_(
         (System_Collections_Generic_List_T__o *)v32,
         (System_Func_T__bool__o *)_9__7_0,
         (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    return 0;
  }
  v82 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v78);
    v82 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__bool__o *)v82->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82, v78);
      v82 = QuestScriptMaster___c_TypeInfo;
    }
    v84 = (Il2CppObject *)v82->static_fields->__9;
    _9__7_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestScriptEntity__bool__TypeInfo, v78, v79, v80);
    System_Func_object__bool____ctor(_9__7_1, v84, Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, 0LL);
    v85 = QuestScriptMaster___c_TypeInfo->static_fields;
    v85->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v85->__9__7_1, (int64_t)_9__7_1, v86, v87, v88, v89, v90, v91);
  }
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)v32,
           (System_Func_T__bool__o *)_9__7_1,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_QuestScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__TryGetEntity(
        QuestScriptMaster_o *this,
        QuestScriptEntity_o **entity,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B167C5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B167C5 = 1;
  }
  PK = (Il2CppObject *)QuestScriptEntity__CreatePK(
                         id,
                         folderType,
                         materialFolderId,
                         parentWarId,
                         *(const MethodInfo **)&materialFolderId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void __fastcall QuestScriptMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B167C6 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestScriptMaster___c_TypeInfo, v1, v2);
    byte_4B167C6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestScriptMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestScriptMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestScriptMaster___c___ctor(QuestScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaster___c___GetEntityListFromQuestId_b__1_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *a,
        QuestScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.parentWarId != 0;
}