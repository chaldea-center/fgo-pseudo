void QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597104E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
    byte_597104E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_5971047 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_5971047 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_2213CDC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v38, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v21 + 32) == 4 && *(_DWORD *)(v21 + 40) == parentWarId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_35;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_35:
      v36 = sub_224BC3C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
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

  if ( (byte_597104F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
    byte_597104F = 1;
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
                                  (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


QuestScriptEntity_o *QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListFromQuestId; // x0
  __int64 v6; // x1

  if ( (byte_5971044 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
    byte_5971044 = 1;
  }
  EntityListFromQuestId = (System_Collections_Generic_List_object__o *)QuestScriptMaster__GetEntityListFromQuestId(
                                                                         this,
                                                                         questId,
                                                                         method);
  if ( !EntityListFromQuestId )
    sub_2213CDC(0, v6);
  if ( EntityListFromQuestId->fields._size < 1 )
    return 0;
  else
    return (QuestScriptEntity_o *)System_Collections_Generic_List_object___get_Item(
                                    EntityListFromQuestId,
                                    0,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = folderType;
  if ( (byte_5971046 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_5971046 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&folderType;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), folderType, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(list, *(_QWORD *)&folderType);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v38; // x21
  struct QuestScriptMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-38h]

  if ( (byte_5971045 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_2213A60(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__);
    sub_2213A60(&QuestScriptMaster___c_TypeInfo);
    byte_5971045 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v47 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v47 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v47 )
      sub_2213CDC(v15, v6);
    v16 = v47->klass;
    v17 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v47, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v47,
            *(_QWORD *)(v19 + 8));
    v27 = v20;
    if ( !v20 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v20 + 16) == questId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v29 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v20, v20);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v27;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
      }
    }
  }
  if ( v47 )
  {
    v32 = v47->klass;
    v33 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_34:
      v35 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v47, *(_QWORD *)(v35 + 8));
  }
  list = QuestScriptMaster___c_TypeInfo;
  if ( !*(&QuestScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v6);
    list = QuestScriptMaster___c_TypeInfo;
  }
  static_fields = (struct QuestScriptMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestScriptEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v38, Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, 0);
    v39 = QuestScriptMaster___c_TypeInfo->static_fields;
    v39->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__1_0, (int32_t)_9__1_0, v40, v41, v42, v43, v44, v45);
  }
  if ( !v5 )
LABEL_48:
    sub_2213CDC(list, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__1_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Entity; // x19
  DataManager_o *v9; // x21
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_object__o *v11; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  QuestScriptEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *v27; // x22
  _BOOL8 HasScriptReleaseForceFalse; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_Generic_IEnumerator_T__o *v45; // [xsp+18h] [xbp-48h]

  if ( (byte_597104C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597104C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !Entity
    || (v9 = Instance,
        klass = Entity[7].klass,
        v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
LABEL_51:
    sub_2213CDC(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v45 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v13);
  for ( i = Enumerator; ; i = v45 )
  {
    v15 = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_15;
      }
      v18 = (__int64)&v15->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v18 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    if ( !v45 )
      sub_2213CDC(v19, v20);
    v21 = v45->klass;
    v22 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_23:
      v24 = sub_224BC3C(v45, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v25 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                   v45,
                                   *(_QWORD *)(v24 + 8));
    v27 = (Il2CppObject *)v25;
    if ( !v25 )
      sub_2213CDC(0, v26);
    if ( v25->fields.folderType == 2 && v25->fields.materialFolderId == eventId )
    {
      if ( (__int64)v9 >= (__int64)klass )
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__HasScriptReleaseForceFalse(v25, v26);
        if ( HasScriptReleaseForceFalse )
          continue;
      }
      else
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__CheckScriptRelease(v25, v26);
        if ( !HasScriptReleaseForceFalse )
          continue;
      }
      if ( !v11
        || (items = v11->fields._items,
            v37 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
            ++v11->fields._version,
            !items) )
      {
        sub_2213CDC(HasScriptReleaseForceFalse, v29);
      }
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v27,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v27;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v27, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  if ( v45 )
  {
    v40 = v45->klass;
    v41 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_44;
      }
      v43 = (__int64)&v40->vtable[*v42];
    }
    else
    {
LABEL_44:
      v43 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(v45, *(_QWORD *)(v43 + 8));
  }
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v11;
}


System_Collections_Generic_List_int__o *QuestScriptMaster__GetMovedEventScriptList_49593588(
        QuestScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  QuestScriptEntity_o *v19; // x0
  const MethodInfo *v20; // x1
  QuestScriptEntity_o *v21; // x20
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 id; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-38h]

  if ( (byte_597104D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597104D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v32 )
      sub_2213CDC(v13, v14);
    v15 = v32->klass;
    v16 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v19 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                   v32,
                                   *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_2213CDC(0, v20);
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(v19, v20);
    if ( IsMaterialLatestClear )
    {
      if ( !v3
        || (items = v3->fields._items,
            id = (unsigned int)v21->fields.id,
            v25 = Method_System_Collections_Generic_List_int__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(IsMaterialLatestClear, id);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          id,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = id;
      }
    }
  }
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_34;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_34:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  return v3;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  QuestScriptEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-38h]

  if ( (byte_597104A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_597104A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v41 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v41 )
      sub_2213CDC(v15, v16);
    v17 = v41->klass;
    v18 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v21 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                   v41,
                                   *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( !v21->fields.folderType && v21->fields.parentWarId == parentWarId )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v21, v22);
      if ( v24 )
      {
        if ( !v5
          || (items = v5->fields._items,
              v33 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v24, v25);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        }
      }
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_36;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_36:
      v39 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  QuestScriptEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-38h]

  if ( (byte_5971048 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    byte_5971048 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v41 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v41 )
      sub_2213CDC(v15, v16);
    v17 = v41->klass;
    v18 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v21 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                   v41,
                                   *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( v21->fields.parentWarId == parentWarId )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v21, v22);
      if ( v24 )
      {
        if ( !v5
          || (items = v5->fields._items,
              v33 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v24, v25);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        }
      }
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_35;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_35:
      v39 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptMaster__IsDummyFolder(QuestScriptMaster_o *this, int32_t parentWarId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  char v15; // w20
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // [xsp+18h] [xbp-38h]

  if ( (byte_5971049 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971049 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v27 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    v15 = v13;
    if ( (v13 & 1) == 0 )
      break;
    if ( !v27 )
      sub_2213CDC(v13, v14);
    v16 = v27->klass;
    v17 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v27, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v27,
            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_2213CDC(0, v21);
    if ( *(_DWORD *)(v20 + 32) == 4 && *(_DWORD *)(v20 + 36) == parentWarId )
      goto LABEL_26;
  }
  v15 = 0;
LABEL_26:
  if ( v27 )
  {
    v22 = v27->klass;
    v23 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_31:
      v25 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v27, *(_QWORD *)(v25 + 8));
  }
  return v15 & 1;
}


bool QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  QuestScriptEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  QuestScriptMaster___c_c *v41; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__7_0; // x20
  Il2CppObject *v44; // x21
  struct QuestScriptMaster___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x1
  QuestScriptMaster___c_c *v54; // x0
  struct QuestScriptMaster___c_StaticFields *v55; // x8
  System_Func_object__bool__o *_9__7_1; // x20
  Il2CppObject *v57; // x21
  struct QuestScriptMaster___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_Collections_Generic_IEnumerator_T__o *v66; // [xsp+18h] [xbp-38h]

  if ( (byte_597104B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_QuestScriptEntity___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___);
    sub_2213A60(&System_Func_QuestScriptEntity__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_2213A60(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__);
    sub_2213A60(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__);
    sub_2213A60(&QuestScriptMaster___c_TypeInfo);
    byte_597104B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptEntity__GetEnumerator__);
  v66 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v66 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v66 )
      sub_2213CDC(v15, v16);
    v17 = v66->klass;
    v18 = *(unsigned __int16 *)&v66->klass->_2.rank;
    if ( *(_WORD *)&v66->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v66, System_Collections_Generic_IEnumerator_QuestScriptEntity__TypeInfo, 0);
    }
    v21 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                   v66,
                                   *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( v21->fields.id == scriptId && v21->fields.folderType != 4 )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v21, v22);
      if ( v24 )
      {
        if ( !v5
          || (items = v5->fields._items,
              v33 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v24, v25);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        }
      }
    }
  }
  if ( v66 )
  {
    v36 = v66->klass;
    v37 = *(unsigned __int16 *)&v66->klass->_2.rank;
    if ( *(_WORD *)&v66->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_36;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_36:
      v39 = sub_224BC3C(v66, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v66, *(_QWORD *)(v39 + 8));
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v41 = QuestScriptMaster___c_TypeInfo;
  if ( !*(&QuestScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v40);
    v41 = QuestScriptMaster___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__7_0 = (System_Func_object__bool__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v41->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v41, v40);
      static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_0, v44, Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, 0);
    v45 = QuestScriptMaster___c_TypeInfo->static_fields;
    v45->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__7_0, (int32_t)_9__7_0, v46, v47, v48, v49, v50, v51);
  }
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v5,
          (System_Func_T__bool__o *)_9__7_0,
          (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    v54 = QuestScriptMaster___c_TypeInfo;
    if ( !*(&QuestScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo, v52);
      v54 = QuestScriptMaster___c_TypeInfo;
    }
    v55 = v54->static_fields;
    _9__7_1 = (System_Func_object__bool__o *)v55->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !*(&v54->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v54, v52);
        v55 = QuestScriptMaster___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)v55->__9;
      _9__7_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestScriptEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__7_1, v57, Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, 0);
      v58 = QuestScriptMaster___c_TypeInfo->static_fields;
      v58->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->__9__7_1, (int32_t)_9__7_1, v59, v60, v61, v62, v63, v64);
    }
    return BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)v5,
             (System_Func_T__bool__o *)_9__7_1,
             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_QuestScriptEntity___);
  }
  else
  {
    return 0;
  }
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

  if ( (byte_5971050 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
    byte_5971050 = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void QuestScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971051 & 1) == 0 )
  {
    sub_2213A60(&QuestScriptMaster___c_TypeInfo);
    byte_5971051 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestScriptMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestScriptMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.parentWarId != 0;
}