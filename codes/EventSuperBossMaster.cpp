void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4215085 & 1) == 0 )
  {
    sub_B0D8A4(&EventSuperBossMaster_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_5749/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v8);
    byte_4215085 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5749/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5749/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215082 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4215082 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    168,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  __int64 v9; // x10
  int v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x8
  int items; // w28
  __int64 v13; // x10
  int i; // w20
  EventSuperBossMaster_c *v15; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  int32_t Count; // [xsp+4h] [xbp-5Ch]
  int v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4215084 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&EventSuperBossEntity_TypeInfo, v4);
    sub_B0D8A4(&EventSuperBossMaster_TypeInfo, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    byte_4215084 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v10 = v8;
      if ( (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[*(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] == EventSuperBossEntity_TypeInfo )
        v11 = list;
      else
        v11 = 0LL;
      items = (int)v11->fields.items;
      while ( v10 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_29;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             --v10,
                                                                                             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_29;
        v13 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_27;
      }
      for ( i = 0; ; ++i )
      {
        v15 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v15 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v15->static_fields->SAVE_KEY;
        v22 = items;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
        v21 = i;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
        v19 = System_String__Format_43845440(SAVE_KEY, v17, v18, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v19, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v19, 0LL);
      }
LABEL_27:
      if ( ++v8 >= Count )
        return;
    }
LABEL_29:
    sub_B0D97C(list);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w22
  int32_t v20; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24
  __int64 v22; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  int v24; // w24
  __int64 v25; // x23
  __int64 v26; // x8
  int size; // w8
  EventSuperBossMaster_c *v28; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  EventSuperBossMaster_c *v33; // x0
  System_String_o *v34; // x22
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x8
  int v39; // [xsp+8h] [xbp-58h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4215083 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventSuperBossEntity_TypeInfo, v6);
    sub_B0D8A4(&EventSuperBossMaster_TypeInfo, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v14);
    byte_4215083 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v19 = (int)list;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v20,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v22 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventSuperBossEntity__IsEncounted(
                                                                                             (EventSuperBossEntity_o *)list,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v21,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        }
      }
      if ( ++v20 >= v19 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B0D97C(list);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_46;
  if ( !v15->fields._size )
    return 0LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v24 = 0;
  while ( 1 )
  {
LABEL_30:
    v28 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v28 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v28->static_fields->SAVE_KEY;
    v40 = eventId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v39 = v24;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v32 = System_String__Format_43845440(SAVE_KEY, v30, v31, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                                         v32,
                                                                                         0,
                                                                                         0LL);
    size = v15->fields._size;
    if ( !(_DWORD)list )
      break;
    ++v24;
    if ( size >= 1 )
    {
      v25 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v25 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v26 = *((_QWORD *)&v15->fields._items->obj.klass + v25);
        if ( !v26 )
          goto LABEL_46;
        if ( *(_DWORD *)(v26 + 20) == (_DWORD)list )
          break;
        size = v15->fields._size;
        if ( (int)++v25 - 4 >= size )
          goto LABEL_30;
      }
      if ( v15->fields._size <= (unsigned int)(v25 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v23 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v15->fields._items->obj.klass + v25),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
        v25 - 4,
        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( size >= 1 )
  {
    if ( v23 )
    {
      while ( 1 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          v15->fields._items->m_Items[0],
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v33 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v33 = EventSuperBossMaster_TypeInfo;
        }
        v34 = v33->static_fields->SAVE_KEY;
        v40 = eventId;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
        v39 = v24;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_String__Format_43845440(
                                                                                             v34,
                                                                                             v35,
                                                                                             v36,
                                                                                             0LL);
        if ( !v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v37 = v15->fields._items->m_Items[0];
        if ( !v37 )
          break;
        ++v24;
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)list, v37->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
          0,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
        if ( v15->fields._size <= 0 )
          goto LABEL_43;
      }
    }
    goto LABEL_46;
  }
LABEL_43:
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_4215080 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_B0D8A4(&EventSuperBossEntity_TypeInfo, v7);
    byte_4215080 = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return (EventSuperBossEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266A024 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_4215081 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_B0D8A4(&EventSuperBossEntity_TypeInfo, v9);
    byte_4215081 = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}