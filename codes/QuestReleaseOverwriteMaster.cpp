void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2253E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method);
    byte_4C2253E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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
  System_Collections_Generic_Dictionary_int__object__o *v11; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w21
  int64_t v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x23
  Il2CppClass *klass; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  void **v33; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C22541 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__, v6);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v10);
    byte_4C22541 = 1;
  }
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v11,
      (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v11;
    p_idCache = &this->fields.idCache;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.idCache, (int64_t)v11, v13, v14, v15, v16, v17, v18);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C3B9C0(list, v19);
    v21 = 0;
    while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v21,
                                                                   (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( list )
        {
          v22 = (int64_t)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    *(_DWORD *)(v22 + 16),
                    &value,
                    (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v29 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v29,
                (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              value = (Il2CppObject *)v29;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                *(_DWORD *)(v22 + 16),
                (Il2CppObject *)v29,
                (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v31 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v33[4] = (void *)v22;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), v22, v23, v24, v25, v26, v27, v28);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v21;
                if ( list )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_19;
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
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.idCache, 0LL, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *__fastcall QuestReleaseOverwriteMaster__GetCacheById(
        QuestReleaseOverwriteMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22542 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__,
      *(_QWORD *)&id);
    byte_4C22542 = 1;
  }
  value = 0LL;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C3B9C0(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
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

  if ( (byte_4C2253C & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4C2253C = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_329F900 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  QuestReleaseOverwriteEntity_o *v12; // x23
  int32_t v13; // w24
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v15; // x2
  QuestReleaseOverwriteEntity_o *v16; // x25
  int32_t priority; // w8
  int32_t v18; // w9

  if ( (byte_4C2253F & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C2253F = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                list,
                                                v13,
                                                (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
      if ( Item )
      {
        v16 = Item;
        if ( Item->fields.questId == questId && QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v15) )
        {
          if ( !v12
            || (priority = v12->fields.priority, v18 = v16->fields.priority, priority < v18)
            || priority == v18 && v12->fields.imagePriority < v16->fields.imagePriority )
          {
            v12 = v16;
          }
        }
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_23:
    sub_1C3B9C0(list, *(_QWORD *)&questId);
  }
  return 0LL;
}


void __fastcall QuestReleaseOverwriteMaster__OnListChangedImplementation(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
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

  if ( (byte_4C2253D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4C2253D = 1;
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
           (const MethodInfo_329F94C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v27; // x20
  void *Instance; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  int v32; // w25
  System_Collections_Generic_List_object__o *v33; // x22
  int32_t v34; // w23
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Comparison_T__o *v47; // x21
  Il2CppObject *v48; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int v56; // w21
  _BOOL8 v57; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *v65; // x8
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *v67; // x9
  _QWORD *v68; // x10
  __int64 v69; // x11
  Il2CppClass **v70; // x9
  int32_t Count; // w0
  int32_t v72; // w24
  int32_t v73; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v75; // x2
  Il2CppObject *v76; // x26
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  System_Comparison_T__o *v87; // x21
  Il2CppObject *v88; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int v96; // w21
  _BOOL8 v97; // x0
  __int64 v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v106; // x0
  struct System_Object_array *v107; // x9
  _QWORD *v108; // x10
  __int64 v109; // x11
  Il2CppClass **v110; // x9
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22540 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__, entityList);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v9);
    sub_1C3B764(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v20);
    sub_1C3B764(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v21);
    sub_1C3B764(&NetworkManager_TypeInfo, v22);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1C3B764(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v24);
    sub_1C3B764(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__, v25);
    sub_1C3B764(&QuestReleaseOverwriteMaster___c_TypeInfo, v26);
    byte_4C22540 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    if ( Count >= 1 )
    {
      v72 = Count;
      v73 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v73,
                                                  (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( Item )
        {
          v76 = (Il2CppObject *)Item;
          if ( Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v75);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v27 )
                break;
              items = v27->fields._items;
              v84 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v27->fields._version;
              if ( !items )
                break;
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  v76,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
              }
              else
              {
                v86 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v86[4] = (Il2CppClass *)v76;
                sub_1C3B708((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)v76, v77, v78, v79, v80, v81, v82);
              }
            }
          }
        }
        if ( v72 == ++v73 )
          goto LABEL_51;
      }
LABEL_72:
      sub_1C3B9C0(Instance, v29);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
           (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v87 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v87 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v88 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v87 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v87,
          v88,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0LL);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v87;
        sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v87, v90, v91, v92, v93, v94, v95);
      }
      if ( !v27 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_57202480(
        v27,
        v87,
        (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v27,
                   0,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v96 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v112,
        v27,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v113 = v112;
      while ( 1 )
      {
        v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v113,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v97 )
          break;
        current = v113.fields._current;
        if ( !v113.fields._current )
          sub_1C3B9C0(v97, v98);
        if ( HIDWORD(v113.fields._current[1].klass) == v96 )
        {
          v106 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1C3B9C0(0LL, v98);
          v107 = v106->fields._items;
          v108 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v106->fields._version;
          if ( !v107 )
            sub_1C3B9C0(v106, v98);
          v109 = v106->fields._size;
          if ( (unsigned int)v109 >= v107->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v106,
              current,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = &v107->obj.klass + v109;
            v106->fields._size = v109 + 1;
            v110[4] = (Il2CppClass *)current;
            sub_1C3B708((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)current, v99, v100, v101, v102, v103, v104);
          }
        }
      }
      goto LABEL_70;
    }
    goto LABEL_69;
  }
  CacheById = (System_Collections_Generic_List_object__o *)QuestReleaseOverwriteMaster__GetCacheById(this, questId, v30);
  if ( CacheById )
  {
    v32 = CacheById->fields._size;
    v33 = CacheById;
    if ( v32 >= 1 )
    {
      v34 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v33,
                     v34,
                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
        if ( !Instance )
          goto LABEL_72;
        v36 = (Il2CppObject *)Instance;
        Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(
                             (QuestReleaseOverwriteEntity_o *)Instance,
                             nowTime,
                             v35);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_72;
          v43 = v27->fields._items;
          v44 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v27->fields._version;
          if ( !v43 )
            goto LABEL_72;
          v45 = v27->fields._size;
          if ( (unsigned int)v45 >= v43->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              v36,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &v43->obj.klass + v45;
            v27->fields._size = v45 + 1;
            v46[4] = (Il2CppClass *)v36;
            sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v36, v37, v38, v39, v40, v41, v42);
          }
        }
      }
      while ( v32 != ++v34 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
           (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v47 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v47 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v48 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v47 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v47,
          v48,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0LL);
        v49 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v49->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v47;
        sub_1C3B708((PartyOrganizationUtility_o *)&v49->__9__4_1, (int64_t)v47, v50, v51, v52, v53, v54, v55);
      }
      if ( !v27 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_57202480(
        v27,
        v47,
        (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v27,
                   0,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v56 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v112,
        v27,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v113 = v112;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v113,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v57 )
          break;
        v65 = v113.fields._current;
        if ( !v113.fields._current )
          sub_1C3B9C0(v57, v58);
        if ( HIDWORD(v113.fields._current[1].klass) != v56 )
          break;
        v66 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1C3B9C0(0LL, v58);
        v67 = v66->fields._items;
        v68 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v66->fields._version;
        if ( !v67 )
          sub_1C3B9C0(v66, v58);
        v69 = v66->fields._size;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            v65,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          v66->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v65;
          sub_1C3B708((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v65, v59, v60, v61, v62, v63, v64);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v113,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
      return (unsigned __int8)CacheById & 1;
    }
LABEL_69:
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

  if ( (byte_4C22543 & 1) == 0 )
  {
    sub_1C3B764(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_4C22543 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v2;
  sub_1C3B708(
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
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}