void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B2E7 & 1) == 0 )
  {
    sub_1B885B0(&EventSuperBossMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_5726/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4A5B2E7 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5726/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5726/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v1,
    v2);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4A5B2E4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    170,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Collections_ObjectModel_Collection_T__c *klass; // x9
  __int64 methodPtr_low; // x10
  int v12; // w22
  System_Collections_ObjectModel_Collection_T__o *v13; // x8
  int items; // w28
  __int64 v15; // x10
  int i; // w29
  EventSuperBossMaster_c *v17; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  int v25; // [xsp+8h] [xbp-68h] BYREF
  int v26; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5B2E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    sub_1B885B0(&EventSuperBossMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5B2E6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      klass = list->klass;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v12 = v6;
      if ( (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == EventSuperBossEntity_TypeInfo )
        v13 = list;
      else
        v13 = 0LL;
      items = (int)v13->fields.items;
      while ( v12 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_28;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v12,
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_28;
        v15 = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v15
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_28;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_20;
      }
      for ( i = 0; ; ++i )
      {
        v17 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v17 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v17->static_fields->SAVE_KEY;
        v26 = items;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v7, v8, v9);
        v25 = i;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v20, v21, v22);
        v24 = System_String__Format_61721404(SAVE_KEY, v19, v23, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v24, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v24, 0LL);
      }
LABEL_20:
      if ( ++v6 == v5 )
        return;
    }
LABEL_28:
    sub_1B8880C(list, method);
  }
}


System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int v22; // w29
  EventSuperBossMaster_c *v23; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t Int; // w0
  int v32; // w8
  int32_t v33; // w23
  int32_t v34; // w22
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass *v40; // x1
  Il2CppClass **v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass *v47; // x1
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  EventSuperBossMaster_c *v52; // x0
  System_String_o *v53; // x22
  Il2CppObject *v54; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  System_String_o *v59; // x22
  int v61; // [xsp+8h] [xbp-68h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5B2E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    sub_1B885B0(&EventSuperBossMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4A5B2E5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        list = (void *)EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v6);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v10,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_18;
    }
LABEL_49:
    sub_1B8880C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_49;
  if ( !v5->fields._size )
    return 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v22 = 0;
  while ( 1 )
  {
LABEL_21:
    v23 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v23 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v23->static_fields->SAVE_KEY;
    v62 = eventId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v19, v20, v21);
    v61 = v22;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v26, v27, v28);
    v30 = System_String__Format_61721404(SAVE_KEY, v25, v29, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v30, 0, 0LL);
    v32 = v5->fields._size;
    if ( !Int )
      break;
    ++v22;
    if ( v32 >= 1 )
    {
      v33 = Int;
      v34 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v34,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_49;
        if ( *((_DWORD *)list + 5) == v33 )
          break;
        if ( ++v34 >= v5->fields._size )
          goto LABEL_21;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               v34,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v18 )
        goto LABEL_49;
      v37 = v18->fields._items;
      v38 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v18->fields._version;
      if ( !v37 )
        goto LABEL_49;
      v39 = v18->fields._size;
      v40 = (Il2CppClass *)list;
      if ( (unsigned int)v39 >= v37->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v37->obj.klass + v39;
        v18->fields._size = v39 + 1;
        v41[4] = v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v34,
        (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v32 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v18 )
        goto LABEL_49;
      v44 = v18->fields._items;
      v45 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v18->fields._version;
      if ( !v44 )
        goto LABEL_49;
      v46 = v18->fields._size;
      v47 = (Il2CppClass *)list;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v44->obj.klass + v46;
        v18->fields._size = v46 + 1;
        v48[4] = v47;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v47, v42, v43);
      }
      v52 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v52 = EventSuperBossMaster_TypeInfo;
      }
      v53 = v52->static_fields->SAVE_KEY;
      v62 = eventId;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v49, v50, v51);
      v61 = v22;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v55, v56, v57);
      v59 = System_String__Format_61721404(v53, v54, v58, 0LL);
      list = System_Collections_Generic_List_object___get_Item(
               v5,
               0,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_49;
      ++v22;
      UnityEngine_PlayerPrefs__SetInt(v59, *((_DWORD *)list + 5), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v5->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B2E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    byte_4A5B2E2 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B2E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    byte_4A5B2E3 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}