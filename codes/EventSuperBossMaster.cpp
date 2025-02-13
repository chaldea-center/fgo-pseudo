void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDC6BD & 1) == 0 )
  {
    sub_1C21E38(&EventSuperBossMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_5853/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_4BDC6BD = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5853/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5853/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC6BA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_4BDC6BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int v10; // w27
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

  if ( (byte_4BDC6BC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C21E38(&EventSuperBossMaster_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    byte_4BDC6BC = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v6,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v10 = *((_DWORD *)list + 4);
      v11 = v6;
      while ( v11 > 0 )
      {
        list = this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 --v11,
                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( v10 == *((_DWORD *)list + 4) )
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
        v22 = v10;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v7, v8, v9);
        v21 = i;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
        v20 = System_String__Format_63129848(SAVE_KEY, v15, v19, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v20, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v20, 0LL);
      }
LABEL_13:
      if ( ++v6 == v5 )
        return;
    }
LABEL_21:
    sub_1C22094(list, method);
  }
}


System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t list; // x0
  int v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int v25; // w29
  EventSuperBossMaster_c *v26; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t Int; // w0
  int v35; // w8
  int32_t v36; // w23
  int32_t v37; // w22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  EventSuperBossMaster_c *v63; // x0
  System_String_o *v64; // x22
  Il2CppObject *v65; // x23
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x0
  System_String_o *v70; // x22
  int v72; // [xsp+8h] [xbp-68h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDC6BB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
    sub_1C21E38(&EventSuperBossMaster_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_4BDC6BB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v10 = (Il2CppObject *)list;
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        list = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v6);
        if ( (list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v10,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1C22094(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_47;
  if ( !v5->fields._size )
    return 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v25 = 0;
  while ( 1 )
  {
LABEL_19:
    v26 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v26 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v26->static_fields->SAVE_KEY;
    v73 = eventId;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v22, v23, v24);
    v72 = v25;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v29, v30, v31);
    v33 = System_String__Format_63129848(SAVE_KEY, v28, v32, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v33, 0, 0LL);
    v35 = v5->fields._size;
    if ( !Int )
      break;
    ++v25;
    if ( v35 >= 1 )
    {
      v36 = Int;
      v37 = 0;
      while ( 1 )
      {
        list = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v5,
                          v37,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *(_DWORD *)(list + 20) == v36 )
          break;
        if ( ++v37 >= v5->fields._size )
          goto LABEL_19;
      }
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v5,
                        v37,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v44 = v21->fields._items;
      v45 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v44 )
        goto LABEL_47;
      v46 = v21->fields._size;
      v47 = list;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v44->obj.klass + v46;
        v21->fields._size = v46 + 1;
        v48[4] = (Il2CppClass *)v47;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        v37,
        (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v35 >= 1 )
  {
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v5,
                        0,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v21 )
        goto LABEL_47;
      v55 = v21->fields._items;
      v56 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v21->fields._version;
      if ( !v55 )
        goto LABEL_47;
      v57 = v21->fields._size;
      v58 = list;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &v55->obj.klass + v57;
        v21->fields._size = v57 + 1;
        v59[4] = (Il2CppClass *)v58;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
      }
      v63 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v63 = EventSuperBossMaster_TypeInfo;
      }
      v64 = v63->static_fields->SAVE_KEY;
      v73 = eventId;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v60, v61, v62);
      v72 = v25;
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v66, v67, v68);
      v70 = System_String__Format_63129848(v64, v65, v69, 0LL);
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v5,
                        0,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v25;
      UnityEngine_PlayerPrefs__SetInt(v70, *(_DWORD *)(list + 20), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v5,
        0,
        (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v5->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC6B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    byte_4BDC6B8 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3260880 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4BDC6B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    byte_4BDC6B9 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}