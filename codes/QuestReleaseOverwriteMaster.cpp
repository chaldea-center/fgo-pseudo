void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B3773D & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method);
    byte_4B3773D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void __fastcall QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__object__o *v12; // x21
  bool *p_isDirty; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w21
  int64_t v23; // x22
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  Il2CppClass *klass; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  void **v35; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B37740 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__, v6);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1BD3458(&QuestReleaseOverwriteEntity_TypeInfo, v11);
    byte_4B37740 = 1;
  }
  value = 0LL;
  if ( *((_BYTE *)&this->fields.revision + 4) )
  {
    *((_BYTE *)&this->fields.revision + 4) = 0;
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v12,
      (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    *(_QWORD *)&this->fields.isDirty = v12;
    p_isDirty = &this->fields.isDirty;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, (int64_t)v12, v14, v15, v16, v17, v18, v19);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_21:
      sub_1BD36B4(list, v20);
    v22 = 0;
    while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v22,
                                                                   (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v23 = (int64_t)list;
          methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (QuestReleaseOverwriteEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
            if ( *(_QWORD *)p_isDirty )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)list,
                      *(_DWORD *)(v23 + 16),
                      &value,
                      (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
              {
                v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v31,
                  (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
                value = (Il2CppObject *)v31;
                list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
                if ( !*(_QWORD *)p_isDirty )
                  goto LABEL_21;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  *(_DWORD *)(v23 + 16),
                  (Il2CppObject *)v31,
                  (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)value;
              if ( value )
              {
                klass = value[1].klass;
                v33 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
                ++HIDWORD(value[1].monitor);
                if ( klass )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v35 = &klass->_1.image + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v35[4] = (void *)v23;
                    sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 4), v23, v25, v26, v27, v28, v29, v30);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v22;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_21;
    }
  }
}


void __fastcall QuestReleaseOverwriteMaster__DeleteCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool *p_isDirty; // x19

  *(_QWORD *)&this->fields.isDirty = 0LL;
  p_isDirty = &this->fields.isDirty;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_isDirty - 4) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *__fastcall QuestReleaseOverwriteMaster__GetCacheById(
        QuestReleaseOverwriteMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B37741 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__,
      *(_QWORD *)&id);
    byte_4B37741 = 1;
  }
  value = 0LL;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isDirty;
  if ( !v6 )
    sub_1BD36B4(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v6,
         id,
         &value,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntity(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B3773B & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B3773B = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31D2248 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  QuestReleaseOverwriteEntity_o *v13; // x23
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x2
  QuestReleaseOverwriteEntity_o *v17; // x25
  __int64 methodPtr_low; // x10
  int32_t priority; // w8
  int32_t v20; // w9

  if ( (byte_4B3773E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&NetworkManager_TypeInfo, v8);
    sub_1BD3458(&QuestReleaseOverwriteEntity_TypeInfo, v9);
    byte_4B3773E = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (QuestReleaseOverwriteEntity_o *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v16) )
        {
          if ( !v13
            || (priority = v13->fields.priority, v20 = v17->fields.priority, priority < v20)
            || priority == v20 && v13->fields.imagePriority < v17->fields.imagePriority )
          {
            v13 = v17;
          }
        }
      }
      if ( v12 == ++v14 )
        return v13;
    }
LABEL_26:
    sub_1BD36B4(list, *(_QWORD *)&questId);
  }
  return 0LL;
}


void __fastcall QuestReleaseOverwriteMaster__OnListChangedImplementation(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  *((_BYTE *)&this->fields.revision + 4) = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseOverwriteMaster__TryGetEntity(
        QuestReleaseOverwriteMaster_o *this,
        QuestReleaseOverwriteEntity_o **entity,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B3773C & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4B3773C = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x20
  void *Instance; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  int v33; // w25
  System_Collections_Generic_List_object__o *v34; // x22
  int32_t v35; // w23
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  System_Comparison_T__o *v48; // x21
  Il2CppObject *v49; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int v57; // w21
  _BOOL8 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x8
  System_Collections_Generic_List_object__o *v67; // x0
  struct System_Object_array *v68; // x9
  _QWORD *v69; // x10
  __int64 v70; // x11
  Il2CppClass **v71; // x9
  int32_t Count; // w0
  int32_t v73; // w24
  int32_t v74; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v76; // x2
  Il2CppObject *v77; // x26
  __int64 methodPtr_low; // x10
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x0
  System_Comparison_T__o *v89; // x21
  Il2CppObject *v90; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int v98; // w21
  _BOOL8 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v108; // x0
  struct System_Object_array *v109; // x9
  _QWORD *v110; // x10
  __int64 v111; // x11
  Il2CppClass **v112; // x9
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3773F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, entityList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BD3458(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1BD3458(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v21);
    sub_1BD3458(&NetworkManager_TypeInfo, v22);
    sub_1BD3458(&QuestReleaseOverwriteEntity_TypeInfo, v23);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1BD3458(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v25);
    sub_1BD3458(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__, v26);
    sub_1BD3458(&QuestReleaseOverwriteMaster___c_TypeInfo, v27);
    byte_4B3773F = 1;
  }
  memset(&v115, 0, sizeof(v115));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_74;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v73 = Count;
      v74 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v74,
                                                  (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v77 = (Il2CppObject *)Item;
          methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
            && Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v76);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v28 )
                break;
              items = v28->fields._items;
              v86 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v28->fields._version;
              if ( !items )
                break;
              size = v28->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v28,
                  v77,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
              }
              else
              {
                v88 = &items->obj.klass + size;
                v28->fields._size = size + 1;
                v88[4] = (Il2CppClass *)v77;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v77, v79, v80, v81, v82, v83, v84);
              }
            }
          }
        }
        if ( v73 == ++v74 )
          goto LABEL_53;
      }
LABEL_74:
      sub_1BD36B4(Instance, v30);
    }
LABEL_53:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v28,
           (const MethodInfo_2F3D238 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v89 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v89 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v90 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v89 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v89,
          v90,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0LL);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v89;
        sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v89, v92, v93, v94, v95, v96, v97);
      }
      if ( !v28 )
        goto LABEL_74;
      System_Collections_Generic_List_object___Sort_56371284(
        v28,
        v89,
        (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   0,
                   (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_74;
      v98 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v114,
        v28,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v115 = v114;
      while ( 1 )
      {
        v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v115,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v99 )
          break;
        current = v115.fields._current;
        if ( !v115.fields._current )
          sub_1BD36B4(v99, v100);
        if ( HIDWORD(v115.fields._current[1].klass) == v98 )
        {
          v108 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1BD36B4(0LL, v100);
          v109 = v108->fields._items;
          v110 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v108->fields._version;
          if ( !v109 )
            sub_1BD36B4(v108, v100);
          v111 = v108->fields._size;
          if ( (unsigned int)v111 >= v109->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v108,
              current,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &v109->obj.klass + v111;
            v108->fields._size = v111 + 1;
            v112[4] = (Il2CppClass *)current;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v112 + 4), (int64_t)current, v101, v102, v103, v104, v105, v106);
          }
        }
      }
      goto LABEL_72;
    }
    goto LABEL_71;
  }
  CacheById = (System_Collections_Generic_List_object__o *)QuestReleaseOverwriteMaster__GetCacheById(this, questId, v31);
  if ( CacheById )
  {
    v33 = CacheById->fields._size;
    v34 = CacheById;
    if ( v33 >= 1 )
    {
      v35 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v34,
                     v35,
                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
        if ( !Instance )
          goto LABEL_74;
        v37 = (Il2CppObject *)Instance;
        Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(
                             (QuestReleaseOverwriteEntity_o *)Instance,
                             nowTime,
                             v36);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_74;
          v44 = v28->fields._items;
          v45 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v28->fields._version;
          if ( !v44 )
            goto LABEL_74;
          v46 = v28->fields._size;
          if ( (unsigned int)v46 >= v44->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              v37,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            v28->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v37;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, v38, v39, v40, v41, v42, v43);
          }
        }
      }
      while ( v33 != ++v35 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v28,
           (const MethodInfo_2F3D238 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v48 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v48 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v49 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v48 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v48,
          v49,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0LL);
        v50 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v50->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v48;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v50->__9__4_1, (int64_t)v48, v51, v52, v53, v54, v55, v56);
      }
      if ( !v28 )
        goto LABEL_74;
      System_Collections_Generic_List_object___Sort_56371284(
        v28,
        v48,
        (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   0,
                   (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_74;
      v57 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v114,
        v28,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v115 = v114;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v115,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v58 )
          break;
        v66 = v115.fields._current;
        if ( !v115.fields._current )
          sub_1BD36B4(v58, v59);
        if ( HIDWORD(v115.fields._current[1].klass) != v57 )
          break;
        v67 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1BD36B4(0LL, v59);
        v68 = v67->fields._items;
        v69 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v67->fields._version;
        if ( !v68 )
          sub_1BD36B4(v67, v59);
        v70 = v67->fields._size;
        if ( (unsigned int)v70 >= v68->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v67,
            v66,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &v68->obj.klass + v70;
          v67->fields._size = v70 + 1;
          v71[4] = (Il2CppClass *)v66;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v66, v60, v61, v62, v63, v64, v65);
        }
      }
LABEL_72:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v115,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_2F3D238 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
      return (unsigned __int8)CacheById & 1;
    }
LABEL_71:
    LOBYTE(CacheById) = 0;
  }
  return (unsigned __int8)CacheById & 1;
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37742 & 1) == 0 )
  {
    sub_1BD3458(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_4B37742 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestReleaseOverwriteMaster___c___ctor(
        QuestReleaseOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_0(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BD36B4(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BD36B4(this, a);
  return b->fields.priority - a->fields.priority;
}