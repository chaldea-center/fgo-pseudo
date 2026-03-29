void EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D30B76 & 1) == 0 )
  {
    sub_1C93AD4(&EventSuperBossMaster_TypeInfo);
    sub_1C93AD4(&StringLiteral_5757/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4D30B76 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5757/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5757/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30B73 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4D30B73 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  int v15; // [xsp+8h] [xbp-58h] BYREF
  int v16; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D30B75 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C93AD4(&EventSuperBossMaster_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    byte_4D30B75 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
                                                                   (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_13;
      }
      for ( i = 0; ; ++i )
      {
        v10 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v10 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v10->static_fields->SAVE_KEY;
        v16 = items;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
        v15 = i;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        v14 = System_String__Format_64467032(SAVE_KEY, v12, v13, 0);
        if ( !UnityEngine_PlayerPrefs__HasKey(v14, 0) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_1C93D2C(list, method);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  int v22; // w29
  EventSuperBossMaster_c *v23; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int32_t Int; // w0
  int v29; // w8
  int32_t v30; // w23
  int32_t v31; // w22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass *v41; // x1
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass *v52; // x1
  Il2CppClass **v53; // x0
  EventSuperBossMaster_c *v54; // x0
  System_String_o *v55; // x22
  Il2CppObject *v56; // x23
  Il2CppObject *v57; // x0
  System_String_o *v58; // x22
  int v60; // [xsp+8h] [xbp-68h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D30B74 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C93AD4(&EventSuperBossMaster_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4D30B74 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C93D2C(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v22 = 0;
  while ( 1 )
  {
LABEL_19:
    v23 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v23 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v23->static_fields->SAVE_KEY;
    v61 = eventId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    v60 = v22;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v27 = System_String__Format_64467032(SAVE_KEY, v25, v26, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v27, 0, 0);
    v29 = v5->fields._size;
    if ( !Int )
      break;
    ++v22;
    if ( v29 >= 1 )
    {
      v30 = Int;
      v31 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v31,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v30 )
          break;
        if ( ++v31 >= v5->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v31,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v38 = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v38 )
        goto LABEL_47;
      v40 = v21->fields._size;
      v41 = (Il2CppClass *)list;
      if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &v38->obj.klass + v40;
        v21->fields._size = v40 + 1;
        v42[4] = v41;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)v41, v32, v33, v34, v35, v36, v37);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v31,
        (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v29 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v49 = v21->fields._items;
      v50 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v49 )
        goto LABEL_47;
      v51 = v21->fields._size;
      v52 = (Il2CppClass *)list;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v49->obj.klass + v51;
        v21->fields._size = v51 + 1;
        v53[4] = v52;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v52, v43, v44, v45, v46, v47, v48);
      }
      v54 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v54 = EventSuperBossMaster_TypeInfo;
      }
      v55 = v54->static_fields->SAVE_KEY;
      v61 = eventId;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      v60 = v22;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
      v58 = System_String__Format_64467032(v55, v56, v57, 0);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v22;
      UnityEngine_PlayerPrefs__SetInt(v58, *((_DWORD *)list + 5), 0);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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

  if ( (byte_4D30B71 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1C93AD4(&EventSuperBossEntity_TypeInfo);
    byte_4D30B71 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34681D4 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4D30B72 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1C93AD4(&EventSuperBossEntity_TypeInfo);
    byte_4D30B72 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}