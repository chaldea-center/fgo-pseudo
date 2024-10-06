void __fastcall QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7041E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__, method);
    byte_4A7041E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  QuestScriptEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A70417 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v10);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v11);
    byte_4A70417 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
      v24 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_36;
    v30 = QuestScriptEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v25);
LABEL_36:
      sub_1B9026C(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 32) == 4 && *(_DWORD *)(v25 + 40) == parentWarId )
    {
      if ( !v12 )
        sub_1B9026C(v25, QuestScriptEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B9026C(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v27, v28);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v12;
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

  if ( (byte_4A7041F & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A7041F = 1;
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
                                  (const MethodInfo_312C900 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *EntityListFromQuestId; // x0
  __int64 v7; // x1

  if ( (byte_4A70414 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__, v5);
    byte_4A70414 = 1;
  }
  EntityListFromQuestId = (System_Collections_Generic_List_object__o *)QuestScriptMaster__GetEntityListFromQuestId(
                                                                         this,
                                                                         questId,
                                                                         method);
  if ( !EntityListFromQuestId )
    sub_1B9026C(0LL, v7);
  if ( EntityListFromQuestId->fields._size < 1 )
    return 0LL;
  else
    return (QuestScriptEntity_o *)System_Collections_Generic_List_object___get_Item(
                                    EntityListFromQuestId,
                                    0,
                                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_array *__fastcall QuestScriptMaster__GetEntityListFromFolderType(
        QuestScriptMaster_o *this,
        int32_t folderType,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = folderType;
  if ( (byte_4A70416 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&folderType);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v9);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v10);
    byte_4A70416 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&folderType = list;
        methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptEntity_TypeInfo
          && LODWORD(list[1].monitor) == v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = *(Il2CppClass **)&folderType;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 4), folderType, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B9026C(list, *(_QWORD *)&folderType);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
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
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  QuestScriptEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  QuestScriptMaster___c_c *v44; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v46; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_4A70415 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B90010(&System_Comparison_QuestScriptEntity__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v12);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v13);
    sub_1B90010(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, v14);
    sub_1B90010(&QuestScriptMaster___c_TypeInfo, v15);
    byte_4A70415 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v33 = v29;
    if ( !v29 )
      goto LABEL_42;
    v34 = QuestScriptEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v29);
LABEL_42:
      sub_1B9026C(v29, v30);
    }
    if ( *(_DWORD *)(v29 + 16) == questId )
    {
      if ( !v16 )
        sub_1B9026C(v29, QuestScriptEntity_TypeInfo);
      items = v16->fields._items;
      v37 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1B9026C(v29, v34);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v29,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v39 + 4), v33, v31, v32);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  v44 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v44 = QuestScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v44->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = QuestScriptMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_QuestScriptEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v46, Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, 0LL);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v48, v49);
  }
  if ( !v16 )
LABEL_45:
    sub_1B9026C(list, v17);
  System_Collections_Generic_List_object___Sort_55649412(
    v16,
    _9__1_0,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v19; // x22
  Il2CppClass *klass; // x25
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  QuestScriptEntity_o *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 HasScriptReleaseForceFalse; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4A7041C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B90010(&System_IDisposable_TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v12);
    sub_1B90010(&NetworkManager_TypeInfo, v13);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A7041C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity
    || (v19 = Instance,
        klass = Entity[7].klass,
        v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
LABEL_46:
    sub_1B9026C(Instance, v17);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v22);
  while ( 1 )
  {
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_14;
      }
      p_method = (__int64)&v24->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_21;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_21:
      v31 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                   Enumerator,
                                   *(_QWORD *)(v31 + 8));
    v34 = (Il2CppObject *)v32;
    if ( !v32 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v32);
LABEL_45:
      sub_1B9026C(v32, v33);
    }
    if ( v32->fields.folderType == 2 && v32->fields.materialFolderId == eventId )
    {
      if ( (__int64)v19 >= (__int64)klass )
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__HasScriptReleaseForceFalse(
                                       v32,
                                       (const MethodInfo *)QuestScriptEntity_TypeInfo);
        if ( !HasScriptReleaseForceFalse )
          goto LABEL_32;
      }
      else
      {
        HasScriptReleaseForceFalse = QuestScriptEntity__CheckScriptRelease(
                                       v32,
                                       (const MethodInfo *)QuestScriptEntity_TypeInfo);
        if ( HasScriptReleaseForceFalse )
        {
LABEL_32:
          if ( !v21 )
            sub_1B9026C(HasScriptReleaseForceFalse, v37);
          items = v21->fields._items;
          v41 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1B9026C(HasScriptReleaseForceFalse, v37);
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v34,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v34;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v34, v38, v39);
          }
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_41;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_41:
    v47 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v21;
}


System_Collections_Generic_List_int__o *__fastcall QuestScriptMaster__GetMovedEventScriptList_39610524(
        QuestScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestScriptEntity_o *v23; // x0
  __int64 v24; // x1
  QuestScriptEntity_o *v25; // x21
  __int64 methodPtr_low; // x9
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 v28; // x1
  __int64 id; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4A7041D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B90010(&System_IDisposable_TypeInfo, v3);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v9);
    byte_4A7041D = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                   Enumerator,
                                   *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v23);
LABEL_35:
      sub_1B9026C(v23, v24);
    }
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(
                              v23,
                              (const MethodInfo *)QuestScriptEntity_TypeInfo);
    if ( IsMaterialLatestClear )
    {
      if ( !v10 )
        sub_1B9026C(IsMaterialLatestClear, v28);
      id = (unsigned int)v25->fields.id;
      items = v10->fields._items;
      v31 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1B9026C(IsMaterialLatestClear, id);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          id,
          *(const MethodInfo_34F399C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_31:
    v36 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  QuestScriptEntity_o *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A7041A & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v10);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v11);
    byte_4A7041A = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
      v24 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                   Enumerator,
                                   *(_QWORD *)(v24 + 8));
    v27 = (Il2CppObject *)v25;
    if ( !v25 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v25);
LABEL_37:
      sub_1B9026C(v25, v26);
    }
    if ( !v25->fields.folderType && v25->fields.parentWarId == parentWarId )
    {
      v29 = QuestScriptEntity__CheckScriptRelease(v25, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v29 )
      {
        if ( !v12 )
          sub_1B9026C(v29, v30);
        items = v12->fields._items;
        v34 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B9026C(v29, v30);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v27,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v27;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v27, v31, v32);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_33;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_33:
    v40 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  QuestScriptEntity_o *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A70418 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v10);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v11);
    byte_4A70418 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
      v24 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                   Enumerator,
                                   *(_QWORD *)(v24 + 8));
    v27 = (Il2CppObject *)v25;
    if ( !v25 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v25);
LABEL_36:
      sub_1B9026C(v25, v26);
    }
    if ( v25->fields.parentWarId == parentWarId )
    {
      v29 = QuestScriptEntity__CheckScriptRelease(v25, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v29 )
      {
        if ( !v12 )
          sub_1B9026C(v29, v30);
        items = v12->fields._items;
        v34 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B9026C(v29, v30);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v27,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v27;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v27, v31, v32);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsDummyFolder(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A70419 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&parentWarId);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v8);
    byte_4A70419 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v21);
LABEL_33:
      sub_1B9026C(v21, v22);
    }
    if ( v21[8] == 4 && v21[9] == parentWarId )
      goto LABEL_25;
  }
  v16 = 0;
LABEL_25:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v16 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  QuestScriptEntity_o *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  QuestScriptMaster___c_c *v47; // x0
  System_Func_object__bool__o *_9__7_0; // x20
  Il2CppObject *v49; // x21
  struct QuestScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  QuestScriptMaster___c_c *v54; // x0
  System_Func_object__bool__o *_9__7_1; // x20
  Il2CppObject *v56; // x21
  struct QuestScriptMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3

  if ( (byte_4A7041B & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_QuestScriptEntity___, *(_QWORD *)&scriptId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___, v6);
    sub_1B90010(&System_Func_QuestScriptEntity__bool__TypeInfo, v7);
    sub_1B90010(&System_IDisposable_TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v13);
    sub_1B90010(&QuestScriptEntity_TypeInfo, v14);
    sub_1B90010(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, v15);
    sub_1B90010(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, v16);
    sub_1B90010(&QuestScriptMaster___c_TypeInfo, v17);
    byte_4A7041B = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                   Enumerator,
                                   *(_QWORD *)(v30 + 8));
    v33 = (Il2CppObject *)v31;
    if ( !v31 )
      goto LABEL_52;
    methodPtr_low = LOBYTE(QuestScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptEntity_c *)v31->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptEntity_TypeInfo )
    {
      sub_1B9052C(v31);
LABEL_52:
      sub_1B9026C(v31, v32);
    }
    if ( v31->fields.id == scriptId && v31->fields.folderType != 4 )
    {
      v35 = QuestScriptEntity__CheckScriptRelease(v31, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v35 )
      {
        if ( !v18 )
          sub_1B9026C(v35, v36);
        items = v18->fields._items;
        v40 = Method_System_Collections_Generic_List_QuestScriptEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1B9026C(v35, v36);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v33,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v33;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v33, v37, v38);
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_33;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_33:
    v46 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v47 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v47 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__bool__o *)v47->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = QuestScriptMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__7_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_0, v49, Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, 0LL);
    static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v51, v52);
  }
  if ( BasicHelper__Any_object_(
         (System_Collections_Generic_List_T__o *)v18,
         (System_Func_T__bool__o *)_9__7_0,
         (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    return 0;
  }
  v54 = QuestScriptMaster___c_TypeInfo;
  if ( !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v54 = QuestScriptMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__bool__o *)v54->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = QuestScriptMaster___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__7_1 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_1, v56, Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, 0LL);
    v57 = QuestScriptMaster___c_TypeInfo->static_fields;
    v57->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v57->__9__7_1, (int32_t)_9__7_1, v58, v59);
  }
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)v18,
           (System_Func_T__bool__o *)_9__7_1,
           (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_QuestScriptEntity___);
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

  if ( (byte_4A70420 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__, entity);
    byte_4A70420 = 1;
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
           (const MethodInfo_312C950 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void __fastcall QuestScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70421 & 1) == 0 )
  {
    sub_1B90010(&QuestScriptMaster___c_TypeInfo, v1);
    byte_4A70421 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(QuestScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)QuestScriptMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return x->fields.parentWarId != 0;
}