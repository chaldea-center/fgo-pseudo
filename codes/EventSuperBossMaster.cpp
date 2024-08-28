void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A1FC5C & 1) == 0 )
  {
    sub_1B715CC(&EventSuperBossMaster_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_5706/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v4);
    byte_4A1FC5C = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5706/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5706/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v2,
    v3);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FC59 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4A1FC59 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    170,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w20
  int32_t v10; // w21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_ObjectModel_Collection_T__c *klass; // x9
  __int64 methodPtr_low; // x10
  int v16; // w22
  System_Collections_ObjectModel_Collection_T__o *v17; // x8
  int items; // w28
  __int64 v19; // x10
  int i; // w29
  EventSuperBossMaster_c *v21; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x22
  int v29; // [xsp+8h] [xbp-68h] BYREF
  int v30; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A1FC5B & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B715CC(&EventSuperBossEntity_TypeInfo, v4);
    sub_1B715CC(&EventSuperBossMaster_TypeInfo, v5);
    sub_1B715CC(&int_TypeInfo, v6);
    byte_4A1FC5B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      klass = list->klass;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v16 = v10;
      if ( (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == EventSuperBossEntity_TypeInfo )
        v17 = list;
      else
        v17 = 0LL;
      items = (int)v17->fields.items;
      while ( v16 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_28;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v16,
                                                                   (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_28;
        v19 = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_28;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_20;
      }
      for ( i = 0; ; ++i )
      {
        v21 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v21 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v21->static_fields->SAVE_KEY;
        v30 = items;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v11, v12, v13);
        v29 = i;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v24, v25, v26);
        v28 = System_String__Format_61519876(SAVE_KEY, v23, v27, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v28, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v28, 0LL);
      }
LABEL_20:
      if ( ++v10 == v9 )
        return;
    }
LABEL_28:
    sub_1B71828(list, method);
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  const MethodInfo *v16; // x1
  void *list; // x0
  int v18; // w22
  int32_t v19; // w23
  Il2CppObject *v20; // x24
  __int64 methodPtr_low; // x10
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int v32; // w29
  EventSuperBossMaster_c *v33; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int32_t Int; // w0
  int v42; // w8
  int32_t v43; // w23
  int32_t v44; // w22
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass *v50; // x1
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass *v57; // x1
  Il2CppClass **v58; // x0
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  EventSuperBossMaster_c *v62; // x0
  System_String_o *v63; // x22
  Il2CppObject *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  System_String_o *v69; // x22
  int v71; // [xsp+8h] [xbp-68h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A1FC5A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&EventSuperBossEntity_TypeInfo, v6);
    sub_1B715CC(&EventSuperBossMaster_TypeInfo, v7);
    sub_1B715CC(&int_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v13);
    sub_1B715CC(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v14);
    byte_4A1FC5A = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        list = (void *)EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v16);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v20,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v20;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_18;
    }
LABEL_49:
    sub_1B71828(list, v16);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_49;
  if ( !v15->fields._size )
    return 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v32 = 0;
  while ( 1 )
  {
LABEL_21:
    v33 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v33 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v33->static_fields->SAVE_KEY;
    v72 = eventId;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v29, v30, v31);
    v71 = v32;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v36, v37, v38);
    v40 = System_String__Format_61519876(SAVE_KEY, v35, v39, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v40, 0, 0LL);
    v42 = v15->fields._size;
    if ( !Int )
      break;
    ++v32;
    if ( v42 >= 1 )
    {
      v43 = Int;
      v44 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v44,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_49;
        if ( *((_DWORD *)list + 5) == v43 )
          break;
        if ( ++v44 >= v15->fields._size )
          goto LABEL_21;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               v44,
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v28 )
        goto LABEL_49;
      v47 = v28->fields._items;
      v48 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v28->fields._version;
      if ( !v47 )
        goto LABEL_49;
      v49 = v28->fields._size;
      v50 = (Il2CppClass *)list;
      if ( (unsigned int)v49 >= v47->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)list,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &v47->obj.klass + v49;
        v28->fields._size = v49 + 1;
        v51[4] = v50;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        v44,
        (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v42 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               0,
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v28 )
        goto LABEL_49;
      v54 = v28->fields._items;
      v55 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v28->fields._version;
      if ( !v54 )
        goto LABEL_49;
      v56 = v28->fields._size;
      v57 = (Il2CppClass *)list;
      if ( (unsigned int)v56 >= v54->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)list,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v54->obj.klass + v56;
        v28->fields._size = v56 + 1;
        v58[4] = v57;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v57, v52, v53);
      }
      v62 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v62 = EventSuperBossMaster_TypeInfo;
      }
      v63 = v62->static_fields->SAVE_KEY;
      v72 = eventId;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v59, v60, v61);
      v71 = v32;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v65, v66, v67);
      v69 = System_String__Format_61519876(v63, v64, v68, 0LL);
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               0,
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_49;
      ++v32;
      UnityEngine_PlayerPrefs__SetInt(v69, *((_DWORD *)list + 5), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        0,
        (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v15->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v28;
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

  if ( (byte_4A1FC57 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_1B715CC(&EventSuperBossEntity_TypeInfo, v7);
    byte_4A1FC57 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30F8AB8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4A1FC58 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_1B715CC(&EventSuperBossEntity_TypeInfo, v9);
    byte_4A1FC58 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}