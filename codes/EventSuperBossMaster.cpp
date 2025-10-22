void EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C56EF3 & 1) == 0 )
  {
    sub_1C3E564(&EventSuperBossMaster_TypeInfo);
    sub_1C3E564(&StringLiteral_5731/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4C56EF3 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5731/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)EventSuperBossMaster_TypeInfo->static_fields, StringLiteral_5731/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v1, v2);
}


void EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56EF0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4C56EF0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  int items; // w27
  int v14; // w22
  int i; // w28
  EventSuperBossMaster_c *v16; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  System_String_o *v26; // x22
  int v27; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C56EF2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C3E564(&EventSuperBossMaster_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C56EF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      items = (int)list->fields.items;
      v14 = v6;
      while ( v14 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v14,
                                                                   (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( items == LODWORD(list->fields.items) )
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
        v28 = items;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v7, v8, v9, v10, v11, v12);
        v27 = i;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v19, v20, v21, v22, v23, v24);
        v26 = System_String__Format_63677760(SAVE_KEY, v18, v25, 0);
        if ( !UnityEngine_PlayerPrefs__HasKey(v26, 0) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v26, 0);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_1C3E7C0(list, method);
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
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  int v24; // w29
  EventSuperBossMaster_c *v25; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int32_t Int; // w0
  int v37; // w8
  int32_t v38; // w23
  int32_t v39; // w22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass *v52; // x1
  Il2CppClass **v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  EventSuperBossMaster_c *v60; // x0
  System_String_o *v61; // x22
  Il2CppObject *v62; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  Il2CppObject *v69; // x0
  System_String_o *v70; // x22
  int v72; // [xsp+8h] [xbp-68h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C56EF1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C3E564(&EventSuperBossMaster_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4C56EF1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v10;
            sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C3E7C0(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v24 = 0;
  while ( 1 )
  {
LABEL_19:
    v25 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v25 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v25->static_fields->SAVE_KEY;
    v73 = eventId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v18, v19, v20, v21, v22, v23);
    v72 = v24;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v28, v29, v30, v31, v32, v33);
    v35 = System_String__Format_63677760(SAVE_KEY, v27, v34, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v35, 0, 0);
    v37 = v5->fields._size;
    if ( !Int )
      break;
    ++v24;
    if ( v37 >= 1 )
    {
      v38 = Int;
      v39 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v39,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v38 )
          break;
        if ( ++v39 >= v5->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v39,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v42 = v17->fields._items;
      v43 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v42 )
        goto LABEL_47;
      v44 = v17->fields._size;
      v45 = (Il2CppClass *)list;
      if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v42->obj.klass + v44;
        v17->fields._size = v44 + 1;
        v46[4] = v45;
        sub_1C3E508((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v39,
        (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v37 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v49 = v17->fields._items;
      v50 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v49 )
        goto LABEL_47;
      v51 = v17->fields._size;
      v52 = (Il2CppClass *)list;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v49->obj.klass + v51;
        v17->fields._size = v51 + 1;
        v53[4] = v52;
        sub_1C3E508((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v52, v47, v48);
      }
      v60 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v60 = EventSuperBossMaster_TypeInfo;
      }
      v61 = v60->static_fields->SAVE_KEY;
      v73 = eventId;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v54, v55, v56, v57, v58, v59);
      v72 = v24;
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v63, v64, v65, v66, v67, v68);
      v70 = System_String__Format_63677760(v61, v62, v69, 0);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v24;
      UnityEngine_PlayerPrefs__SetInt(v70, *((_DWORD *)list + 5), 0);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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

  if ( (byte_4C56EEE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1C3E564(&EventSuperBossEntity_TypeInfo);
    byte_4C56EEE = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_33B7A10 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4C56EEF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1C3E564(&EventSuperBossEntity_TypeInfo);
    byte_4C56EEF = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}