void EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB645C & 1) == 0 )
  {
    sub_1C6BA08(&EventSuperBossMaster_TypeInfo);
    sub_1C6BA08(&StringLiteral_5721/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4CB645C = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5721/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventSuperBossMaster_TypeInfo->static_fields, StringLiteral_5721/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v1, v2);
}


void EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6459 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4CB6459 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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

  if ( (byte_4CB645B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C6BA08(&EventSuperBossMaster_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB645B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
                                                                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
        v14 = System_String__Format_64008100(SAVE_KEY, v12, v13, 0);
        if ( !UnityEngine_PlayerPrefs__HasKey(v14, 0) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_1C6BC60(list, method);
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
  int v18; // w29
  EventSuperBossMaster_c *v19; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t Int; // w0
  int v25; // w8
  int32_t v26; // w23
  int32_t v27; // w22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass *v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass *v40; // x1
  Il2CppClass **v41; // x0
  EventSuperBossMaster_c *v42; // x0
  System_String_o *v43; // x22
  Il2CppObject *v44; // x23
  Il2CppObject *v45; // x0
  System_String_o *v46; // x22
  int v48; // [xsp+8h] [xbp-68h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB645A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C6BA08(&EventSuperBossMaster_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4CB645A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
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
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v10;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C6BC60(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v18 = 0;
  while ( 1 )
  {
LABEL_19:
    v19 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v19 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v19->static_fields->SAVE_KEY;
    v49 = eventId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v48 = v18;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v23 = System_String__Format_64008100(SAVE_KEY, v21, v22, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v23, 0, 0);
    v25 = v5->fields._size;
    if ( !Int )
      break;
    ++v18;
    if ( v25 >= 1 )
    {
      v26 = Int;
      v27 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v27,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v26 )
          break;
        if ( ++v27 >= v5->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v27,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v30 = v17->fields._items;
      v31 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v30 )
        goto LABEL_47;
      v32 = v17->fields._size;
      v33 = (Il2CppClass *)list;
      if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &v30->obj.klass + v32;
        v17->fields._size = v32 + 1;
        v34[4] = v33;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v27,
        (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v25 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v17 )
        goto LABEL_47;
      v37 = v17->fields._items;
      v38 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v17->fields._version;
      if ( !v37 )
        goto LABEL_47;
      v39 = v17->fields._size;
      v40 = (Il2CppClass *)list;
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v37->obj.klass + v39;
        v17->fields._size = v39 + 1;
        v41[4] = v40;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
      }
      v42 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v42 = EventSuperBossMaster_TypeInfo;
      }
      v43 = v42->static_fields->SAVE_KEY;
      v49 = eventId;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
      v48 = v18;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
      v46 = System_String__Format_64008100(v43, v44, v45, 0);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v18;
      UnityEngine_PlayerPrefs__SetInt(v46, *((_DWORD *)list + 5), 0);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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

  if ( (byte_4CB6457 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1C6BA08(&EventSuperBossEntity_TypeInfo);
    byte_4CB6457 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4CB6458 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1C6BA08(&EventSuperBossEntity_TypeInfo);
    byte_4CB6458 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}