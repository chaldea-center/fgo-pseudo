void EventSuperBossMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593892B & 1) == 0 )
  {
    sub_21FFC50(&EventSuperBossMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_5950/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_593892B = 1;
  }
  v7 = StringLiteral_5950/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5950/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventSuperBossMaster_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938928 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_5938928 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  int items; // w27
  int v8; // w22
  int i; // w28
  EventSuperBossMaster_c *v10; // x0
  System_String_o **p_SAVE_KEY; // x8
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  int v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593892A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_21FFC50(&EventSuperBossMaster_TypeInfo);
    byte_593892A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      items = (int)list->fields.items;
      v8 = v6;
      while ( v8 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v8,
                                                                   (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_13;
      }
      for ( i = 0; ; ++i )
      {
        v10 = EventSuperBossMaster_TypeInfo;
        if ( !*(&EventSuperBossMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, method);
          v10 = EventSuperBossMaster_TypeInfo;
        }
        p_SAVE_KEY = &v10->static_fields->SAVE_KEY;
        v17 = items;
        v12 = *p_SAVE_KEY;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
        v16 = i;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
        v15 = System_String__Format_75484576(v12, v13, v14, 0);
        if ( !UnityEngine_PlayerPrefs__HasKey(v15, 0) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_21FFECC(list, method);
  }
}


System_Collections_Generic_List_EventSuperBossEntity__o *EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  int v22; // w29
  EventSuperBossMaster_c *v23; // x0
  System_String_o **p_SAVE_KEY; // x8
  System_String_o *v25; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t Int; // w0
  int v30; // w8
  int32_t v31; // w23
  int32_t v32; // w22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass *v42; // x1
  Il2CppClass **v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass *v53; // x1
  Il2CppClass **v54; // x0
  __int64 v55; // x1
  EventSuperBossMaster_c *v56; // x0
  System_String_o **v57; // x8
  System_String_o *v58; // x22
  Il2CppObject *v59; // x23
  Il2CppObject *v60; // x0
  System_String_o *v61; // x22
  int v63; // [xsp+8h] [xbp-68h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5938929 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_21FFC50(&EventSuperBossMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_5938929 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v10 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        list = (void *)EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v6);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v10,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_21FFECC(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v22 = 0;
  while ( 1 )
  {
LABEL_19:
    v23 = EventSuperBossMaster_TypeInfo;
    if ( !*(&EventSuperBossMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v6);
      v23 = EventSuperBossMaster_TypeInfo;
    }
    p_SAVE_KEY = &v23->static_fields->SAVE_KEY;
    v64 = eventId;
    v25 = *p_SAVE_KEY;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v64);
    v63 = v22;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v63);
    v28 = System_String__Format_75484576(v25, v26, v27, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v28, 0, 0);
    v30 = v5->fields._size;
    if ( !Int )
      break;
    ++v22;
    if ( v30 >= 1 )
    {
      v31 = Int;
      v32 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v32,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v31 )
          break;
        if ( ++v32 >= v5->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v32,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v39 = v21->fields._items;
      v40 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v39 )
        goto LABEL_47;
      v41 = v21->fields._size;
      v42 = (Il2CppClass *)list;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v39->obj.klass + v41;
        v21->fields._size = v41 + 1;
        v43[4] = v42;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v42, v33, v34, v35, v36, v37, v38);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v32,
        (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v30 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v50 = v21->fields._items;
      v51 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v50 )
        goto LABEL_47;
      v52 = v21->fields._size;
      v53 = (Il2CppClass *)list;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v50->obj.klass + v52;
        v21->fields._size = v52 + 1;
        v54[4] = v53;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v53, v44, v45, v46, v47, v48, v49);
      }
      v56 = EventSuperBossMaster_TypeInfo;
      if ( !*(&EventSuperBossMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v55);
        v56 = EventSuperBossMaster_TypeInfo;
      }
      v57 = &v56->static_fields->SAVE_KEY;
      v64 = eventId;
      v58 = *v57;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v64);
      v63 = v22;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v63);
      v61 = System_String__Format_75484576(v58, v59, v60, 0);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v22;
      UnityEngine_PlayerPrefs__SetInt(v61, *((_DWORD *)list + 5), 0);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v5->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938926 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_21FFC50(&EventSuperBossEntity_TypeInfo);
    byte_5938926 = 1;
  }
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938927 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_21FFC50(&EventSuperBossEntity_TypeInfo);
    byte_5938927 = 1;
  }
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}