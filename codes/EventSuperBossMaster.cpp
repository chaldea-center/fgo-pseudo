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
  __int64 v9; // x2

  if ( (byte_4B16376 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSuperBossMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v8, v9);
    byte_4B16376 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16373 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method, v2);
    byte_4B16373 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    170,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w20
  int32_t v15; // w21
  System_Collections_ObjectModel_Collection_T__c *klass; // x9
  __int64 methodPtr_low; // x10
  int v18; // w22
  System_Collections_ObjectModel_Collection_T__o *v19; // x8
  int items; // w28
  __int64 v21; // x10
  int i; // w29
  EventSuperBossMaster_c *v23; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x22
  int v28; // [xsp+8h] [xbp-68h] BYREF
  int v29; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B16375 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&EventSuperBossMaster_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    byte_4B16375 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      klass = list->klass;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v18 = v15;
      if ( (EventSuperBossEntity_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == EventSuperBossEntity_TypeInfo )
        v19 = list;
      else
        v19 = 0LL;
      items = (int)v19->fields.items;
      while ( v18 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_28;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   --v18,
                                                                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_28;
        v21 = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_28;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_20;
      }
      for ( i = 0; ; ++i )
      {
        v23 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, method);
          v23 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v23->static_fields->SAVE_KEY;
        v29 = items;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
        v28 = i;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        v27 = System_String__Format_62415592(SAVE_KEY, v25, v26, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v27, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v27, 0LL);
      }
LABEL_20:
      if ( ++v15 == v14 )
        return;
    }
LABEL_28:
    sub_1BCAA3C(list, method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
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
  System_Collections_Generic_List_object__o *v26; // x20
  const MethodInfo *v27; // x1
  int64_t list; // x0
  int64_t v29; // x2
  __int64 v30; // x3
  int v31; // w22
  int32_t v32; // w23
  Il2CppObject *v33; // x24
  __int64 methodPtr_low; // x10
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_List_object__o *v43; // x21
  int v44; // w29
  EventSuperBossMaster_c *v45; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int32_t Int; // w0
  int v51; // w8
  int32_t v52; // w23
  int32_t v53; // w22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  int64_t v63; // x1
  Il2CppClass **v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  int64_t v74; // x1
  Il2CppClass **v75; // x0
  __int64 v76; // x1
  EventSuperBossMaster_c *v77; // x0
  System_String_o *v78; // x22
  Il2CppObject *v79; // x23
  Il2CppObject *v80; // x0
  System_String_o *v81; // x22
  int v83; // [xsp+8h] [xbp-68h] BYREF
  int32_t v84; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B16374 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&EventSuperBossMaster_TypeInfo, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v24, v25);
    byte_4B16374 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_49;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = list;
    v32 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v32,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v33 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        list = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v27);
        if ( (list & 1) != 0 )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v33,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v33;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v33, v29, v30, v35, v36, v37, v38);
          }
        }
      }
      if ( v31 == ++v32 )
        goto LABEL_18;
    }
LABEL_49:
    sub_1BCAA3C(list, v27);
  }
LABEL_18:
  if ( !v26 )
    goto LABEL_49;
  if ( !v26->fields._size )
    return 0LL;
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                       v27,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v44 = 0;
  while ( 1 )
  {
LABEL_21:
    v45 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v27);
      v45 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v45->static_fields->SAVE_KEY;
    v84 = eventId;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
    v83 = v44;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
    v49 = System_String__Format_62415592(SAVE_KEY, v47, v48, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v49, 0, 0LL);
    v51 = v26->fields._size;
    if ( !Int )
      break;
    ++v44;
    if ( v51 >= 1 )
    {
      v52 = Int;
      v53 = 0;
      while ( 1 )
      {
        list = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v26,
                          v53,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_49;
        if ( *(_DWORD *)(list + 20) == v52 )
          break;
        if ( ++v53 >= v26->fields._size )
          goto LABEL_21;
      }
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v26,
                        v53,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v43 )
        goto LABEL_49;
      v60 = v43->fields._items;
      v61 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v43->fields._version;
      if ( !v60 )
        goto LABEL_49;
      v62 = v43->fields._size;
      v63 = list;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v60->obj.klass + v62;
        v43->fields._size = v62 + 1;
        v64[4] = (Il2CppClass *)v63;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), v63, v54, v55, v56, v57, v58, v59);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v26,
        v53,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v51 >= 1 )
  {
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v26,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v43 )
        goto LABEL_49;
      v71 = v43->fields._items;
      v72 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v43->fields._version;
      if ( !v71 )
        goto LABEL_49;
      v73 = v43->fields._size;
      v74 = list;
      if ( (unsigned int)v73 >= v71->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &v71->obj.klass + v73;
        v43->fields._size = v73 + 1;
        v75[4] = (Il2CppClass *)v74;
        sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), v74, v65, v66, v67, v68, v69, v70);
      }
      v77 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v76);
        v77 = EventSuperBossMaster_TypeInfo;
      }
      v78 = v77->static_fields->SAVE_KEY;
      v84 = eventId;
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
      v83 = v44;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
      v81 = System_String__Format_62415592(v78, v79, v80, 0LL);
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v26,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_49;
      ++v44;
      UnityEngine_PlayerPrefs__SetInt(v81, *(_DWORD *)(list + 20), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v26,
        0,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v26->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v43;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16371 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v7, v8);
    byte_4B16371 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16372 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v9, v10);
    byte_4B16372 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}