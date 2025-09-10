void EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C27455 & 1) == 0 )
  {
    sub_1C2D490(&EventSuperBossMaster_TypeInfo);
    sub_1C2D490(&StringLiteral_5722/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4C27455 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5722/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)EventSuperBossMaster_TypeInfo->static_fields, StringLiteral_5722/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v1, v2);
}


void EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27452 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4C27452 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int items; // w27
  int v11; // w22
  int i; // w28
  EventSuperBossMaster_c *v13; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  int v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C27454 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C2D490(&EventSuperBossMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C27454 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      items = (int)list->fields.items;
      v11 = v6;
      while ( v11 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v11,
                                                                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_13;
      }
      for ( i = 0; ; ++i )
      {
        v13 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v13 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v13->static_fields->SAVE_KEY;
        v22 = items;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v7, v8, v9);
        v21 = i;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
        v20 = System_String__Format_63499156(SAVE_KEY, v15, v19, 0);
        if ( !UnityEngine_PlayerPrefs__HasKey(v20, 0) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v20, 0);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_1C2D6EC(list, method);
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
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int v21; // w29
  EventSuperBossMaster_c *v22; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  int32_t Int; // w0
  int v31; // w8
  int32_t v32; // w23
  int32_t v33; // w22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass *v46; // x1
  Il2CppClass **v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  EventSuperBossMaster_c *v51; // x0
  System_String_o *v52; // x22
  Il2CppObject *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x22
  int v60; // [xsp+8h] [xbp-68h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C27453 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C2D490(&EventSuperBossMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4C27453 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
          v14 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v10,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v10;
            sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C2D6EC(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v21 = 0;
  while ( 1 )
  {
LABEL_19:
    v22 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v22 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v22->static_fields->SAVE_KEY;
    v61 = eventId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v18, v19, v20);
    v60 = v21;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v25, v26, v27);
    v29 = System_String__Format_63499156(SAVE_KEY, v24, v28, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v29, 0, 0);
    v31 = v5->fields._size;
    if ( !Int )
      break;
    ++v21;
    if ( v31 >= 1 )
    {
      v32 = Int;
      v33 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v33,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v32 )
          break;
        if ( ++v33 >= v5->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v33,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v36 = v17->fields._items;
      v37 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v36 )
        goto LABEL_47;
      v38 = v17->fields._size;
      v39 = (Il2CppClass *)list;
      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &v36->obj.klass + v38;
        v17->fields._size = v38 + 1;
        v40[4] = v39;
        sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v33,
        (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v31 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v43 = v17->fields._items;
      v44 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v43 )
        goto LABEL_47;
      v45 = v17->fields._size;
      v46 = (Il2CppClass *)list;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &v43->obj.klass + v45;
        v17->fields._size = v45 + 1;
        v47[4] = v46;
        sub_1C2D434((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
      }
      v51 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v51 = EventSuperBossMaster_TypeInfo;
      }
      v52 = v51->static_fields->SAVE_KEY;
      v61 = eventId;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v48, v49, v50);
      v60 = v21;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v54, v55, v56);
      v58 = System_String__Format_63499156(v52, v53, v57, 0);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v21;
      UnityEngine_PlayerPrefs__SetInt(v58, *((_DWORD *)list + 5), 0);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v5->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27450 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1C2D490(&EventSuperBossEntity_TypeInfo);
    byte_4C27450 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4C27451 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1C2D490(&EventSuperBossEntity_TypeInfo);
    byte_4C27451 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}