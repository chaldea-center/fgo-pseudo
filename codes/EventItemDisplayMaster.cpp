void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method, v2);
    byte_4B161C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    164,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B161BE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&eventId);
    byte_4B161BE = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_object__o *v56; // x19
  const MethodInfo *v57; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  int *Instance; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  const MethodInfo_3205E44 **v66; // x27
  System_Collections_Generic_Dictionary_int__object__o *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  int max_length; // w8
  __int64 v71; // x20
  EventItemDisplayEntity_o **m_Items; // x29
  unsigned int v73; // w24
  int64_t v74; // x25
  int v75; // w8
  int32_t v76; // w26
  int32_t v77; // w28
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  EventItemDisplayEntity_array *v81; // x22
  EventItemDisplayEntity_o **v82; // x23
  const MethodInfo_3205E44 **v83; // x29
  System_Collections_Generic_List_object__o *v84; // x27
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  int64_t v88; // x27
  const MethodInfo *v89; // x3
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int v96; // w8
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  System_Comparison_T__o *v111; // x20
  Il2CppObject *v112; // x23
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  _BOOL8 v120; // x0
  __int64 v121; // x1
  Il2CppObject *Item; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  EventItemDisplayGroupMaster_o *v135; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v136; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B161C2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
      *(_QWORD *)&eventId,
      *(_QWORD *)&screenFlag);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v34,
      v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v44, v45);
    sub_1BCA7E0(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51);
    sub_1BCA7E0(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v52, v53);
    sub_1BCA7E0(&EventItemDisplayMaster___c_TypeInfo, v54, v55);
    byte_4B161C2 = 1;
  }
  memset(&v139, 0, sizeof(v139));
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&screenFlag,
                                                       isTerminalTop);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v57);
  v136 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                        v59,
                                                        v60,
                                                        v61);
  System_Collections_Generic_List_object____ctor(
    v136,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (int *)DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_53;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v56;
  v135 = (EventItemDisplayGroupMaster_o *)Instance;
  v66 = (const MethodInfo_3205E44 **)&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__;
  v67 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo,
                                                                  v63,
                                                                  v64,
                                                                  v65);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v67,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v71 = 0LL;
    m_Items = ListByEventIdAndScreenFlag->m_Items;
    v73 = screenFlag - 16;
    while ( 1 )
    {
      if ( (unsigned int)v71 >= max_length )
        sub_1BCAA44(Instance, v63);
      v74 = (int64_t)m_Items[v71];
      if ( !v74 )
        goto LABEL_53;
      if ( v73 > 0x30 || ((1LL << v73) & 0x1000000010001LL) == 0 )
        break;
      v75 = *(_DWORD *)(v74 + 24);
      if ( (v75 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v67 )
        goto LABEL_53;
      v76 = *(_DWORD *)(v74 + 36);
      v77 = *(_DWORD *)(v74 + 20);
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v67,
              v76,
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v81 = ListByEventIdAndScreenFlag;
        v82 = m_Items;
        v83 = v66;
        v84 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                             v78,
                                                             v79,
                                                             v80);
        System_Collections_Generic_List_object____ctor(
          v84,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v67,
          v76,
          (Il2CppObject *)v84,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v88 = sub_1BCAA2C(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v85, v86, v87);
        System_Object___ctor((Il2CppObject *)v88, 0LL);
        Instance = (int *)v135;
        if ( !v135 )
          goto LABEL_53;
        Instance = (int *)EventItemDisplayGroupMaster__GetEntity(v135, v77, v76, v89);
        if ( !v88 )
          goto LABEL_53;
        *(_DWORD *)(v88 + 20) = v77;
        *(_DWORD *)(v88 + 24) = v76;
        v96 = Instance ? Instance[7] : 0;
        Instance = (int *)v136;
        *(_DWORD *)(v88 + 16) = v96;
        if ( !v136 )
          goto LABEL_53;
        items = v136->fields._items;
        v98 = Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__;
        ++v136->fields._version;
        if ( !items )
          goto LABEL_53;
        size = v136->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v136,
            (Il2CppObject *)v88,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &items->obj.klass + size;
          v136->fields._size = size + 1;
          v100[4] = (Il2CppClass *)v88;
          sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), v88, v90, v91, v92, v93, v94, v95);
        }
        v66 = v83;
        m_Items = v82;
        ListByEventIdAndScreenFlag = v81;
      }
      Instance = (int *)System_Collections_Generic_Dictionary_int__object___get_Item(v67, v76, *v66);
      if ( !Instance )
        goto LABEL_53;
      v107 = *((_QWORD *)Instance + 2);
      v108 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
      ++Instance[7];
      if ( !v107 )
        goto LABEL_53;
      v109 = Instance[6];
      if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v74,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = v107 + 8 * v109;
        Instance[6] = v109 + 1;
        *(_QWORD *)(v110 + 32) = v74;
        sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 32), v74, v101, v102, v103, v104, v105, v106);
      }
LABEL_34:
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v71 >= max_length )
        goto LABEL_35;
    }
    v75 = *(_DWORD *)(v74 + 24);
LABEL_15:
    if ( (v75 & screenFlag) == 0 )
      goto LABEL_34;
    goto LABEL_16;
  }
LABEL_35:
  Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo, v63);
    Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
  }
  v111 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v111 )
  {
    if ( !Instance[56] )
    {
      j_il2cpp_runtime_class_init_0(Instance, v63);
      Instance = (int *)EventItemDisplayMaster___c_TypeInfo;
    }
    v112 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v111 = (System_Comparison_T__o *)sub_1BCAA2C(
                                       System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                       v63,
                                       v68,
                                       v69);
    System_Comparison_object____ctor(v111, v112, Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, 0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)v111;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
      (int64_t)v111,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
  }
  if ( !v136 )
LABEL_53:
    sub_1BCAA3C(Instance, v63);
  System_Collections_Generic_List_object___Sort_56244000(
    v136,
    v111,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v138,
    v136,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  v139 = v138;
  while ( 1 )
  {
    v120 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v139,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v120 )
      break;
    if ( !v139.fields._current )
      sub_1BCAA3C(v120, v121);
    if ( !v67 )
      sub_1BCAA3C(v120, v121);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v67,
             (int32_t)v139.fields._current[1].monitor,
             *v66);
    v129 = (int64_t)Item;
    if ( !v56 )
      sub_1BCAA3C(Item, Item);
    v130 = v56->fields._items;
    v131 = Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__;
    ++v56->fields._version;
    if ( !v130 )
      sub_1BCAA3C(Item, Item);
    v132 = v56->fields._size;
    if ( (unsigned int)v132 >= v130->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        Item,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      v133 = &v130->obj.klass + v132;
      v56->fields._size = v132 + 1;
      v133[4] = (Il2CppClass *)v129;
      sub_1BCA784((PartyOrganizationUtility_o *)(v133 + 4), v129, v123, v124, v125, v126, v127, v128);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v139,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v56;
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
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
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v38; // w29
  bool v39; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  EventItemDisplayEntity_o *v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x23
  __int64 methodPtr_low; // x9
  int32_t v52; // w8
  _BOOL8 IsEnable; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  EventItemDisplayMaster___c_c *v71; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v73; // x21
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B161C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&screenFlag);
    sub_1BCA7E0(&System_Comparison_EventItemDisplayEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventItemDisplayEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v29, v30);
    sub_1BCA7E0(&EventItemDisplayMaster___c_TypeInfo, v31, v32);
    byte_4B161C1 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&screenFlag,
                                                       isTerminalTop);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v36);
  v38 = screenFlag - 16;
  v39 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_17;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_17:
      v47 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                                        Enumerator,
                                        *(_QWORD *)(v47 + 8));
    v50 = (Il2CppObject *)v48;
    if ( !v48 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(EventItemDisplayEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v48->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventItemDisplayEntity_c *)v48->klass->_2.typeHierarchy[methodPtr_low - 1] != EventItemDisplayEntity_TypeInfo )
    {
      sub_1BCACFC(v48);
LABEL_50:
      if ( v39 )
        sub_1BCAA3C(v48, v49);
      sub_1BCAA3C(v48, v49);
    }
    if ( v39 )
      goto LABEL_26;
    if ( v48->fields.eventId == eventId )
    {
      if ( v38 > 0x30 || ((1LL << v38) & 0x1000000010001LL) == 0 )
      {
        v52 = v48->fields.screenFlag;
        goto LABEL_27;
      }
LABEL_26:
      v52 = v48->fields.screenFlag;
      if ( (v52 & 2) != 0 )
      {
LABEL_28:
        IsEnable = EventItemDisplayEntity__IsEnable(v48, (const MethodInfo *)EventItemDisplayEntity_TypeInfo);
        if ( IsEnable )
        {
          if ( !v33 )
            sub_1BCAA3C(IsEnable, v54);
          items = v33->fields._items;
          v62 = Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__;
          ++v33->fields._version;
          if ( !items )
            sub_1BCAA3C(IsEnable, v54);
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              v50,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v64[4] = (Il2CppClass *)v50;
            sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v50, v55, v56, v57, v58, v59, v60);
          }
        }
      }
      else
      {
LABEL_27:
        if ( (v52 & screenFlag) != 0 )
          goto LABEL_28;
      }
    }
  }
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_39;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_39:
    v68 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                                                             Enumerator,
                                                             *(_QWORD *)(v68 + 8));
  v71 = EventItemDisplayMaster___c_TypeInfo;
  if ( !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo, v34);
    v71 = EventItemDisplayMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v71->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71, v34);
      v71 = EventItemDisplayMaster___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v71->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventItemDisplayEntity__TypeInfo, v34, v69, v70);
    System_Comparison_object____ctor(
      _9__4_0,
      v73,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      0LL);
    static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v75, v76, v77, v78, v79, v80);
  }
  if ( !v33 )
LABEL_55:
    sub_1BCAA3C(list, v34);
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__4_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v33,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemDisplayMaster__TryGetEntity(
        EventItemDisplayMaster_o *this,
        EventItemDisplayEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B161BF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B161BF = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B161C3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemDisplayMaster___c_TypeInfo, v1, v2);
    byte_4B161C3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventItemDisplayMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventItemDisplayMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventItemDisplayMaster___c___ctor(EventItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventItemDisplayMaster___c___GetGroupItemLists_b__5_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayMaster_EventItemDisplaySort_o *a,
        EventItemDisplayMaster_EventItemDisplaySort_o *b,
        const MethodInfo *method)
{
  int32_t dispPriority; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t dispEventId; // w8
  int32_t v8; // w9

  if ( !b || !a )
    sub_1BCAA3C(this, a);
  dispPriority = b->fields.dispPriority;
  v5 = a->fields.dispPriority;
  result = dispPriority - v5;
  if ( dispPriority == v5 )
  {
    dispEventId = a->fields.dispEventId;
    v8 = b->fields.dispEventId;
    result = dispEventId - v8;
    if ( dispEventId == v8 )
      return a->fields.dispGroupIndex - b->fields.dispGroupIndex;
  }
  return result;
}


int32_t __fastcall EventItemDisplayMaster___c___GetListByEventIdAndScreenFlag_b__4_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayEntity_o *a,
        EventItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}