void QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D01B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
    byte_4D2D01B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D2D014 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_4D2D014 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( *(_DWORD *)(v18 + 32) == 4 && *(_DWORD *)(v18 + 40) == parentWarId )
    {
      if ( !v5 )
        sub_1C942F0(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C942F0(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_30;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_30:
    v34 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_o *QuestScriptMaster__GetEntity(
        QuestScriptMaster_o *this,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D01C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
    byte_4D2D01C = 1;
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
                                  (const MethodInfo_345FF78 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


QuestScriptEntity_o *QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListFromQuestId; // x0
  __int64 v6; // x1

  if ( (byte_4D2D011 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
    byte_4D2D011 = 1;
  }
  EntityListFromQuestId = (System_Collections_Generic_List_object__o *)QuestScriptMaster__GetEntityListFromQuestId(
                                                                         this,
                                                                         questId,
                                                                         method);
  if ( !EntityListFromQuestId )
    sub_1C942F0(0, v6);
  if ( EntityListFromQuestId->fields._size < 1 )
    return 0;
  else
    return (QuestScriptEntity_o *)System_Collections_Generic_List_object___get_Item(
                                    EntityListFromQuestId,
                                    0,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_array *QuestScriptMaster__GetEntityListFromFolderType(
        QuestScriptMaster_o *this,
        int32_t folderType,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = folderType;
  if ( (byte_4D2D013 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_4D2D013 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&folderType = list;
        if ( LODWORD(list[1].monitor) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&folderType;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), folderType, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(list, *(_QWORD *)&folderType);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  QuestScriptMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v37; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4D2D012 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_Comparison_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_1C94098(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__);
    sub_1C94098(&QuestScriptMaster___c_TypeInfo);
    byte_4D2D012 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1C942F0(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C942F0(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  v35 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v35 = QuestScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v35->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = QuestScriptMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_QuestScriptEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v37, Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, 0);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v39, v40, v41, v42, v43, v44);
  }
  if ( !v5 )
LABEL_42:
    sub_1C942F0(list, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    _9__1_0,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v8; // x22
  Il2CppClass *klass; // x25
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  QuestScriptEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x23
  _BOOL8 HasScriptReleaseForceFalse; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4D2D019 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D019 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !Entity
    || (v8 = Instance,
        klass = Entity[7].klass,
        v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v10,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
LABEL_43:
    sub_1C942F0(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v11);
  while ( 1 )
  {
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&v13->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v16 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_21:
      v20 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v21 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                   Enumerator,
                                   *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_1C942F0(0, v22);
    if ( v21->fields.folderType == 2 && v21->fields.materialFolderId == eventId )
    {
      if ( (__int64)v8 >= (__int64)klass )
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__HasScriptReleaseForceFalse(v21, v22);
        if ( !HasScriptReleaseForceFalse )
          goto LABEL_30;
      }
      else
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__CheckScriptRelease(v21, v22);
        if ( HasScriptReleaseForceFalse )
        {
LABEL_30:
          if ( !v10 )
            sub_1C942F0(HasScriptReleaseForceFalse, v25);
          items = v10->fields._items;
          v33 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            sub_1C942F0(HasScriptReleaseForceFalse, v25);
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v23,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v23;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v23, v26, v27, v28, v29, v30, v31);
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_39;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_39:
    v39 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v10;
}


System_Collections_Generic_List_int__o *QuestScriptMaster__GetMovedEventScriptList_43339052(
        QuestScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  QuestScriptEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  QuestScriptEntity_o *v18; // x21
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 v20; // x1
  __int64 id; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4D2D01A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D01A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v16 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                   Enumerator,
                                   *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      sub_1C942F0(0, v17);
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(v16, v17);
    if ( IsMaterialLatestClear )
    {
      if ( !v3 )
        sub_1C942F0(IsMaterialLatestClear, v20);
      id = (unsigned int)v18->fields.id;
      items = v3->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(IsMaterialLatestClear, id);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          id,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = id;
      }
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_29:
    v28 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v3;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QuestScriptEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4D2D017 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_4D2D017 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v18 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( !v18->fields.folderType && v18->fields.parentWarId == parentWarId )
    {
      v21 = QuestScriptEntity__CheckScriptRelease(v18, v19);
      if ( v21 )
      {
        if ( !v5 )
          sub_1C942F0(v21, v22);
        items = v5->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C942F0(v21, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_31:
    v36 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QuestScriptEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4D2D015 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_4D2D015 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v18 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( v18->fields.parentWarId == parentWarId )
    {
      v21 = QuestScriptEntity__CheckScriptRelease(v18, v19);
      if ( v21 )
      {
        if ( !v5 )
          sub_1C942F0(v21, v22);
        items = v5->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C942F0(v21, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptMaster__IsDummyFolder(QuestScriptMaster_o *this, int32_t parentWarId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4D2D016 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D016 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C942F0(0, v18);
    if ( *(_DWORD *)(v17 + 32) == 4 && *(_DWORD *)(v17 + 36) == parentWarId )
      goto LABEL_23;
  }
  v12 = 0;
LABEL_23:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


bool QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QuestScriptEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  QuestScriptMaster___c_c *v37; // x0
  System_Func_object__bool__o *_9__7_0; // x20
  Il2CppObject *v39; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  QuestScriptMaster___c_c *v48; // x0
  System_Func_object__bool__o *_9__7_1; // x20
  Il2CppObject *v50; // x21
  struct QuestScriptMaster___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7

  if ( (byte_4D2D018 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_QuestScriptEntity___);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___);
    sub_1C94098(&System_Func_QuestScriptEntity__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_1C94098(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__);
    sub_1C94098(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__);
    sub_1C94098(&QuestScriptMaster___c_TypeInfo);
    byte_4D2D018 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v18 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( v18->fields.id == scriptId && v18->fields.folderType != 4 )
    {
      v21 = QuestScriptEntity__CheckScriptRelease(v18, v19);
      if ( v21 )
      {
        if ( !v5 )
          sub_1C942F0(v21, v22);
        items = v5->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C942F0(v21, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_31:
    v36 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v37 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v37 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__bool__o *)v37->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = QuestScriptMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__7_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_0, v39, Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, 0);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v41, v42, v43, v44, v45, v46);
  }
  if ( BasicHelper__Any_object_(
         (System_Collections_Generic_List_T__o *)v5,
         (System_Func_T__bool__o *)_9__7_0,
         (const MethodInfo_3185468 *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    return 0;
  }
  v48 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v48 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__bool__o *)v48->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = QuestScriptMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__7_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_1, v50, Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, 0);
    v51 = QuestScriptMaster___c_TypeInfo->static_fields;
    v51->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v51->__9__7_1, (int32_t)_9__7_1, v52, v53, v54, v55, v56, v57);
  }
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)v5,
           (System_Func_T__bool__o *)_9__7_1,
           (const MethodInfo_3185468 *)Method_BasicHelper_Any_QuestScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptMaster__TryGetEntity(
        QuestScriptMaster_o *this,
        QuestScriptEntity_o **entity,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D01D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
    byte_4D2D01D = 1;
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
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void QuestScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D01E & 1) == 0 )
  {
    sub_1C94098(&QuestScriptMaster___c_TypeInfo);
    byte_4D2D01E = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(QuestScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestScriptMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)QuestScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestScriptMaster___c___ctor(QuestScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestScriptMaster___c___GetEntityListFromQuestId_b__1_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *a,
        QuestScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.parentWarId != 0;
}