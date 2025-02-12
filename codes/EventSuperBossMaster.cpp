void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB4856 & 1) == 0 )
  {
    sub_1C13D24(&EventSuperBossMaster_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_5839/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/, v8);
    byte_4BB4856 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5839/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5839/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4853 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4BB4853 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int v13; // w27
  int v14; // w22
  int i; // w28
  EventSuperBossMaster_c *v16; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  int v24; // [xsp+8h] [xbp-58h] BYREF
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB4855 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__, v3);
    sub_1C13D24(&EventSuperBossMaster_TypeInfo, v4);
    sub_1C13D24(&int_TypeInfo, v5);
    byte_4BB4855 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v13 = *((_DWORD *)list + 4);
      v14 = v9;
      while ( v14 > 0 )
      {
        list = this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 --v14,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( v13 == *((_DWORD *)list + 4) )
          goto LABEL_13;
      }
      for ( i = 0; ; ++i )
      {
        v16 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v16 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v16->static_fields->SAVE_KEY;
        v25 = v13;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v10, v11, v12);
        v24 = i;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v19, v20, v21);
        v23 = System_String__Format_62982316(SAVE_KEY, v18, v22, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v23, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
      }
LABEL_13:
      if ( ++v9 == v8 )
        return;
    }
LABEL_21:
    sub_1C13F80(list, method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
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
  System_Collections_Generic_List_object__o *v14; // x20
  const MethodInfo *v15; // x1
  int64_t list; // x0
  int v17; // w22
  int32_t v18; // w23
  Il2CppObject *v19; // x24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_object__o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int v34; // w29
  EventSuperBossMaster_c *v35; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t Int; // w0
  int v44; // w8
  int32_t v45; // w23
  int32_t v46; // w22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  int64_t v56; // x1
  Il2CppClass **v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  int64_t v67; // x1
  Il2CppClass **v68; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  EventSuperBossMaster_c *v72; // x0
  System_String_o *v73; // x22
  Il2CppObject *v74; // x23
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  System_String_o *v79; // x22
  int v81; // [xsp+8h] [xbp-68h] BYREF
  int32_t v82; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BB4854 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__, v5);
    sub_1C13D24(&EventSuperBossMaster_TypeInfo, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v13);
    byte_4BB4854 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = list;
    v18 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v18,
                        (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v19 = (Il2CppObject *)list;
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        list = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v15);
        if ( (list & 1) != 0 )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v27 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v19,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v19;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C13F80(list, v15);
  }
LABEL_16:
  if ( !v14 )
    goto LABEL_47;
  if ( !v14->fields._size )
    return 0LL;
  v30 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v34 = 0;
  while ( 1 )
  {
LABEL_19:
    v35 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v35 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v35->static_fields->SAVE_KEY;
    v82 = eventId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v31, v32, v33);
    v81 = v34;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v38, v39, v40);
    v42 = System_String__Format_62982316(SAVE_KEY, v37, v41, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v42, 0, 0LL);
    v44 = v14->fields._size;
    if ( !Int )
      break;
    ++v34;
    if ( v44 >= 1 )
    {
      v45 = Int;
      v46 = 0;
      while ( 1 )
      {
        list = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v14,
                          v46,
                          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *(_DWORD *)(list + 20) == v45 )
          break;
        if ( ++v46 >= v14->fields._size )
          goto LABEL_19;
      }
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v14,
                        v46,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v30 )
        goto LABEL_47;
      v53 = v30->fields._items;
      v54 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v30->fields._version;
      if ( !v53 )
        goto LABEL_47;
      v55 = v30->fields._size;
      v56 = list;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)list,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v53->obj.klass + v55;
        v30->fields._size = v55 + 1;
        v57[4] = (Il2CppClass *)v56;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v57 + 4), v56, v47, v48, v49, v50, v51, v52);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v14,
        v46,
        (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v44 >= 1 )
  {
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v14,
                        0,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v30 )
        goto LABEL_47;
      v64 = v30->fields._items;
      v65 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v30->fields._version;
      if ( !v64 )
        goto LABEL_47;
      v66 = v30->fields._size;
      v67 = list;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)list,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v64->obj.klass + v66;
        v30->fields._size = v66 + 1;
        v68[4] = (Il2CppClass *)v67;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v68 + 4), v67, v58, v59, v60, v61, v62, v63);
      }
      v72 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v72 = EventSuperBossMaster_TypeInfo;
      }
      v73 = v72->static_fields->SAVE_KEY;
      v82 = eventId;
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v69, v70, v71);
      v81 = v34;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v75, v76, v77);
      v79 = System_String__Format_62982316(v73, v74, v78, 0LL);
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v14,
                        0,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v34;
      UnityEngine_PlayerPrefs__SetInt(v79, *(_DWORD *)(list + 20), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v14,
        0,
        (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v14->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v30;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4BB4851 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&EventSuperBossEntity_TypeInfo, v7);
    byte_4BB4851 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_323D0DC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4BB4852 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_1C13D24(&EventSuperBossEntity_TypeInfo, v9);
    byte_4BB4852 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}