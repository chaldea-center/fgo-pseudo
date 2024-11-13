void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1678B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method,
      v2);
    byte_4B1678B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_4B16789 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&priority);
    byte_4B16789 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  QuestReleaseOverwriteEntity_o *v16; // x23
  int32_t v17; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v19; // x2
  QuestReleaseOverwriteEntity_o *v20; // x25
  __int64 methodPtr_low; // x10
  int32_t priority; // w8
  int32_t v23; // w9

  Time = nowTime;
  if ( (byte_4B1678C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      nowTime);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestReleaseOverwriteEntity_TypeInfo, v11, v12);
    byte_4B1678C = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
    Time = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v17,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = (QuestReleaseOverwriteEntity_o *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, Time, v19) )
        {
          if ( !v16
            || (priority = v16->fields.priority, v23 = v20->fields.priority, priority < v23)
            || priority == v23 && v16->fields.imagePriority < v20->fields.imagePriority )
          {
            v16 = v20;
          }
        }
      }
      if ( v15 == ++v17 )
        return v16;
    }
LABEL_26:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  }
  return 0LL;
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

  if ( (byte_4B1678A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B1678A = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x22
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x23
  __int64 v42; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v45; // w24
  int32_t v46; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v48; // x2
  Il2CppObject *v49; // x26
  __int64 methodPtr_low; // x10
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
  __int64 v61; // x2
  __int64 v62; // x3
  System_Comparison_T__o *v63; // x20
  Il2CppObject *v64; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int v72; // w20
  _BOOL8 v73; // x0
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v82; // x0
  struct System_Object_array *v83; // x9
  _QWORD *v84; // x10
  __int64 v85; // x11
  Il2CppClass **v86; // x9
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-80h] BYREF

  Time = nowTime;
  if ( (byte_4B1678D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      entityList,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&QuestReleaseOverwriteEntity_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v37, v38);
    sub_1BCA7E0(&QuestReleaseOverwriteMaster___c_TypeInfo, v39, v40);
    byte_4B1678D = 1;
  }
  memset(&v90, 0, sizeof(v90));
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entityList);
    Time = NetworkManager__getTime(0LL);
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       entityList,
                                                       *(_QWORD *)&questId,
                                                       nowTime);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v45 = Count;
    v46 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                (System_Collections_ObjectModel_Collection_T__o *)list,
                                                v46,
                                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v49 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, Time, v48);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v41 )
              break;
            items = v41->fields._items;
            v58 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
            ++v41->fields._version;
            if ( !items )
              break;
            size = v41->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v41,
                v49,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &items->obj.klass + size;
              v41->fields._size = size + 1;
              v60[4] = (Il2CppClass *)v49;
              sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v49, v51, v52, v53, v54, v55, v56);
            }
          }
        }
      }
      if ( v45 == ++v46 )
        goto LABEL_22;
    }
LABEL_43:
    sub_1BCAA3C(list, v42);
  }
LABEL_22:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v41,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    list = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo, v42);
      list = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    v63 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v63 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list, v42);
        list = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v64 = (Il2CppObject *)**((_QWORD **)list + 23);
      v63 = (System_Comparison_T__o *)sub_1BCAA2C(
                                        System_Comparison_QuestReleaseOverwriteEntity__TypeInfo,
                                        v42,
                                        v61,
                                        v62);
      System_Comparison_object____ctor(
        v63,
        v64,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        0LL);
      static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v63;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v63, v66, v67, v68, v69, v70, v71);
    }
    if ( !v41 )
      goto LABEL_43;
    System_Collections_Generic_List_object___Sort_56244000(
      v41,
      v63,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    list = System_Collections_Generic_List_object___get_Item(
             v41,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    if ( !list )
      goto LABEL_43;
    v72 = *((_DWORD *)list + 5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v89,
      v41,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v90 = v89;
    while ( 1 )
    {
      v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v90,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v73 )
        break;
      current = v90.fields._current;
      if ( !v90.fields._current )
        sub_1BCAA3C(v73, v74);
      if ( HIDWORD(v90.fields._current[1].klass) == v72 )
      {
        v82 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1BCAA3C(0LL, v74);
        v83 = v82->fields._items;
        v84 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v82->fields._version;
        if ( !v83 )
          sub_1BCAA3C(v82, v74);
        v85 = v82->fields._size;
        if ( (unsigned int)v85 >= v83->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v82,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &v83->obj.klass + v85;
          v82->fields._size = v85 + 1;
          v86[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)current, v75, v76, v77, v78, v79, v80);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1678E & 1) == 0 )
  {
    sub_1BCA7E0(&QuestReleaseOverwriteMaster___c_TypeInfo, v1, v2);
    byte_4B1678E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestReleaseOverwriteMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}