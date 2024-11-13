void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method, v2);
    byte_4B163F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *List; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_int__object__o *v41; // x20
  Il2CppObject *Instance; // x0
  __int64 v43; // x1
  EventUiReleaseMaster_o *v44; // x21
  int32_t v45; // w22
  EventUiEntity_o *v46; // x23
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B163F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&eventId, *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventUiEntity___, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    byte_4B163F5 = 1;
  }
  List = (System_Collections_Generic_List_object__o *)EventUiMaster__GetList(this, eventId, warId, mapId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)List,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                    v38,
                                                                    v39,
                                                                    v40);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v41,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    if ( !List )
      goto LABEL_22;
    if ( List->fields._size >= 1 )
    {
      v44 = (EventUiReleaseMaster_o *)Instance;
      v45 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     List,
                     v45,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Instance || !v41 )
          break;
        v46 = (EventUiEntity_o *)Instance;
        Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v41,
                                     (int32_t)Instance[1].klass,
                                     (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_13;
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v41,
                     v46->fields.id,
                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Instance )
          break;
        if ( SHIDWORD(Instance[1].klass) < v46->fields.priority )
        {
LABEL_13:
          if ( !v44 )
            break;
          Instance = (Il2CppObject *)EventUiReleaseMaster__IsOpen(v44, v46, v47);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v41,
              v46->fields.id,
              (Il2CppObject *)v46,
              (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v45 >= List->fields._size )
          goto LABEL_17;
      }
LABEL_22:
      sub_1BCAA3C(Instance, v43);
    }
LABEL_17:
    if ( !v41 )
      goto LABEL_22;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v41,
           (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v41,
                 (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      return (System_Collections_Generic_List_EventUiEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventUiEntity___);
    }
    List = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                          v48,
                                                          v49,
                                                          v50);
    System_Collections_Generic_List_object____ctor(
      List,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)List;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
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
  System_Collections_Generic_List_object__o *ListByWarId; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__object__o *v47; // x21
  __int64 v48; // x1
  Il2CppObject *Master_object; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x19
  Il2CppObject *Item; // x0
  __int64 v55; // x1
  int32_t v56; // w23
  EventUiEntity_o *v57; // x24
  const MethodInfo *v58; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  _BOOL8 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B163F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity___ctor___76783488, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v41, v42);
    byte_4B163F6 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  ListByWarId = (System_Collections_Generic_List_object__o *)EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v47 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                    v44,
                                                                    v45,
                                                                    v46);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v47,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                         v50,
                                                         v51,
                                                         v52);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    if ( ListByWarId->fields._size >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 ListByWarId,
                 v56,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item || !v47 )
          break;
        v57 = (EventUiEntity_o *)Item;
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 v47,
                                 (int32_t)Item[1].klass,
                                 (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v47,
                 v57->fields.id,
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item[1].klass) < v57->fields.priority )
        {
LABEL_14:
          if ( !Master_object )
            break;
          Item = (Il2CppObject *)EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v57, v58);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v47,
              v57->fields.id,
              (Il2CppObject *)v57,
              (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        if ( ++v56 >= ListByWarId->fields._size )
          goto LABEL_18;
      }
LABEL_31:
      sub_1BCAA3C(Item, v55);
    }
LABEL_18:
    if ( !v47 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           v47,
           (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v47,
                 (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                           v60,
                                                           v61,
                                                           v62);
      System_Collections_Generic_List_object____ctor_56235344(
        v63,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___76783488);
      if ( !v63 )
        goto LABEL_31;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v78,
        v63,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v78,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v64 )
          break;
        if ( !v53 )
          sub_1BCAA3C(v64, v65);
        current = v78.fields._current;
        items = v53->fields._items;
        v74 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v53->fields._version;
        if ( !items )
          sub_1BCAA3C(v64, current);
        size = v53->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          v53->fields._size = size + 1;
          v76[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)current, v66, v67, v68, v69, v70, v71);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v78,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v53;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)ListByWarId;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__GetEntity(
        EventUiMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B163F0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v7, v8);
    byte_4B163F0 = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, *(_QWORD *)&id);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31B3198 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetList(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v19; // x23
  int64_t v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B163F3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v17, v18);
    byte_4B163F3 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&warId,
                                                       *(_QWORD *)&mapId);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1BCAA3C(list, v20);
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v22,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v20 = (int64_t)list;
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && LODWORD(list[1].klass) == eventId
        && (SHIDWORD(list[2].fields.items) > 1 || HIDWORD(list[1].klass) == warId && LODWORD(list[1].monitor) == mapId) )
      {
        if ( !v19 )
          goto LABEL_21;
        items = v19->fields._items;
        v31 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
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
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v19; // w22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B163F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v14, v15);
    byte_4B163F4 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BCAA3C(list, v17);
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v19,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v17 = (int64_t)list;
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && HIDWORD(list[1].klass) == warId )
      {
        if ( !v16 )
          goto LABEL_17;
        items = v16->fields._items;
        v28 = Method_System_Collections_Generic_List_EventUiEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v17, v20, v21, v22, v23, v24, v25);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__IsDispEventUIForSpot(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventUiEntity__o *DispList; // x20
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  int32_t v18; // w21
  const MethodInfo *v19; // x2
  bool IsDispEventUIForSpot; // w0

  if ( (byte_4B163F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventUiEntity___, *(_QWORD *)&event_id, *(_QWORD *)&war_id);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v13, v14);
    byte_4B163F7 = 1;
  }
  DispList = EventUiMaster__GetDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  Item = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)DispList,
                           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventUiEntity___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !DispList )
      goto LABEL_13;
    if ( DispList->fields._size >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)DispList,
                 v18,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
        if ( !Item )
          break;
        IsDispEventUIForSpot = EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)Item, spotId, v19);
        if ( !IsDispEventUIForSpot && ++v18 < DispList->fields._size )
          continue;
        return IsDispEventUIForSpot;
      }
LABEL_13:
      sub_1BCAA3C(Item, v17);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__TryGetEntity(
        EventUiMaster_o *this,
        EventUiEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B163F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v9, v10);
    byte_4B163F1 = 1;
  }
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  EventUiEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B163F8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&priority);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v9, v10);
    byte_4B163F8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v12,
                                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventUiEntity_TypeInfo
        && result->fields.eventId == eventId
        && result->fields.priority == priority )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}