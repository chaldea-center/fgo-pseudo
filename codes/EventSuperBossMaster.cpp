void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC598 & 1) == 0 )
  {
    sub_1B640C8(&EventSuperBossMaster_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_5700/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v4);
    byte_49FC598 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5700/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5700/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v2,
    v3);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC595 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_49FC595 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    170,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__c *klass; // x9
  __int64 methodPtr_low; // x10
  int v13; // w22
  System_Collections_ObjectModel_Collection_T__o *v14; // x8
  int items; // w28
  __int64 v16; // x10
  int i; // w29
  EventSuperBossMaster_c *v18; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x22
  int v23; // [xsp+8h] [xbp-68h] BYREF
  int v24; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FC597 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&EventSuperBossEntity_TypeInfo, v4);
    sub_1B640C8(&EventSuperBossMaster_TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    byte_49FC597 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      klass = list->klass;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v13 = v10;
      if ( (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == EventSuperBossEntity_TypeInfo )
        v14 = list;
      else
        v14 = 0LL;
      items = (int)v14->fields.items;
      while ( v13 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_28;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v13,
                                                                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_28;
        v16 = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_28;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_20;
      }
      for ( i = 0; ; ++i )
      {
        v18 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v18 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v18->static_fields->SAVE_KEY;
        v24 = items;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
        v23 = i;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
        v22 = System_String__Format_61389768(SAVE_KEY, v20, v21, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v22, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v22, 0LL);
      }
LABEL_20:
      if ( ++v10 == v9 )
        return;
    }
LABEL_28:
    sub_1B64324(list);
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
  void *list; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  int v19; // w22
  int32_t v20; // w23
  Il2CppObject *v21; // x24
  __int64 methodPtr_low; // x10
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x21
  int v29; // w29
  EventSuperBossMaster_c *v30; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int32_t Int; // w0
  int v36; // w8
  int32_t v37; // w23
  int32_t v38; // w22
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass *v51; // x1
  Il2CppClass **v52; // x0
  EventSuperBossMaster_c *v53; // x0
  System_String_o *v54; // x22
  Il2CppObject *v55; // x23
  Il2CppObject *v56; // x0
  System_String_o *v57; // x22
  int v59; // [xsp+8h] [xbp-68h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FC596 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventSuperBossEntity_TypeInfo, v6);
    sub_1B640C8(&EventSuperBossMaster_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v14);
    byte_49FC596 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v19 = (int)list;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        list = (void *)EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v17);
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
              v21,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v21;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v18, v23);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_18;
    }
LABEL_49:
    sub_1B64324(list);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_49;
  if ( !v15->fields._size )
    return 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v29 = 0;
  while ( 1 )
  {
LABEL_21:
    v30 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v30 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v30->static_fields->SAVE_KEY;
    v60 = eventId;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v59 = v29;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v34 = System_String__Format_61389768(SAVE_KEY, v32, v33, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v34, 0, 0LL);
    v36 = v15->fields._size;
    if ( !Int )
      break;
    ++v29;
    if ( v36 >= 1 )
    {
      v37 = Int;
      v38 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v38,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_49;
        if ( *((_DWORD *)list + 5) == v37 )
          break;
        if ( ++v38 >= v15->fields._size )
          goto LABEL_21;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               v38,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v28 )
        goto LABEL_49;
      v41 = v28->fields._items;
      v42 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v28->fields._version;
      if ( !v41 )
        goto LABEL_49;
      v43 = v28->fields._size;
      v44 = (Il2CppClass *)list;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)list,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v41->obj.klass + v43;
        v28->fields._size = v43 + 1;
        v45[4] = v44;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        v38,
        (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v36 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v28 )
        goto LABEL_49;
      v48 = v28->fields._items;
      v49 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v28->fields._version;
      if ( !v48 )
        goto LABEL_49;
      v50 = v28->fields._size;
      v51 = (Il2CppClass *)list;
      if ( (unsigned int)v50 >= v48->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)list,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v48->obj.klass + v50;
        v28->fields._size = v50 + 1;
        v52[4] = v51;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
      }
      v53 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v53 = EventSuperBossMaster_TypeInfo;
      }
      v54 = v53->static_fields->SAVE_KEY;
      v60 = eventId;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
      v59 = v29;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
      v57 = System_String__Format_61389768(v54, v55, v56, 0LL);
      list = System_Collections_Generic_List_object___get_Item(
               v15,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_49;
      ++v29;
      UnityEngine_PlayerPrefs__SetInt(v57, *((_DWORD *)list + 5), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        0,
        (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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

  if ( (byte_49FC593 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&EventSuperBossEntity_TypeInfo, v7);
    byte_49FC593 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30D41FC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_49FC594 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_1B640C8(&EventSuperBossEntity_TypeInfo, v9);
    byte_49FC594 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}