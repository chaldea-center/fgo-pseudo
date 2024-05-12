void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438A659 & 1) == 0 )
  {
    sub_B775C4(&EventSuperBossMaster_TypeInfo);
    sub_B775C4(&StringLiteral_5877/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_438A659 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5877/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5877/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A656 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_438A656 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    169,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v4; // w21
  __int64 v5; // x2
  __int64 v6; // x10
  int v7; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x8
  int items; // w28
  __int64 v10; // x10
  int i; // w20
  EventSuperBossMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v14; // x23
  __int64 v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  int32_t Count; // [xsp+4h] [xbp-5Ch]
  int v19; // [xsp+8h] [xbp-58h] BYREF
  int v20; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438A658 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventSuperBossEntity_TypeInfo);
    sub_B775C4(&EventSuperBossMaster_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438A658 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v4,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v6
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v6 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v7 = v4;
      if ( (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[*(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] == EventSuperBossEntity_TypeInfo )
        v8 = list;
      else
        v8 = 0LL;
      items = (int)v8->fields.items;
      while ( v7 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_29;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             --v7,
                                                                                             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_29;
        v10 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_27;
      }
      for ( i = 0; ; ++i )
      {
        v12 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v12 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v12->static_fields->SAVE_KEY;
        v20 = items;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5);
        v19 = i;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v15);
        v17 = System_String__Format_44897472(SAVE_KEY, v14, v16, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v17, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v17, 0LL);
      }
LABEL_27:
      if ( ++v4 >= Count )
        return;
    }
LABEL_29:
    sub_B7769C(list, method);
  }
}


System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x2
  int v14; // w24
  __int64 v15; // x23
  __int64 v16; // x8
  int size; // w8
  EventSuperBossMaster_c *v18; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x2
  EventSuperBossMaster_c *v25; // x0
  System_String_o *v26; // x22
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x8
  int v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438A657 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventSuperBossEntity_TypeInfo);
    sub_B775C4(&EventSuperBossMaster_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_438A657 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v11 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != EventSuperBossEntity_TypeInfo )
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
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v10,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B7769C(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_46;
  if ( !v5->fields._size )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v14 = 0;
  while ( 1 )
  {
LABEL_30:
    v18 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v18 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v18->static_fields->SAVE_KEY;
    v33 = eventId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v13);
    v32 = v14;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v21);
    v23 = System_String__Format_44897472(SAVE_KEY, v20, v22, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                                         v23,
                                                                                         0,
                                                                                         0LL);
    size = v5->fields._size;
    if ( !(_DWORD)list )
      break;
    ++v14;
    if ( size >= 1 )
    {
      v15 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v15 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v16 = *((_QWORD *)&v5->fields._items->obj.klass + v15);
        if ( !v16 )
          goto LABEL_46;
        if ( *(_DWORD *)(v16 + 20) == (_DWORD)list )
          break;
        size = v5->fields._size;
        if ( (int)++v15 - 4 >= size )
          goto LABEL_30;
      }
      if ( v5->fields._size <= (unsigned int)(v15 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( !v12 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v5->fields._items->obj.klass + v15),
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
        v15 - 4,
        (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( size >= 1 )
  {
    if ( v12 )
    {
      while ( 1 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v5->fields._items->m_Items[0],
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v25 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v25 = EventSuperBossMaster_TypeInfo;
        }
        v26 = v25->static_fields->SAVE_KEY;
        v33 = eventId;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v24);
        v32 = v14;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v28);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_String__Format_44897472(
                                                                                             v26,
                                                                                             v27,
                                                                                             v29,
                                                                                             0LL);
        if ( !v5->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v30 = v5->fields._items->m_Items[0];
        if ( !v30 )
          break;
        ++v14;
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)list, v30->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
          0,
          (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
        if ( v5->fields._size <= 0 )
          goto LABEL_43;
      }
    }
    goto LABEL_46;
  }
LABEL_43:
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v12;
}


EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438A654 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_B775C4(&EventSuperBossEntity_TypeInfo);
    byte_438A654 = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return (EventSuperBossEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438A655 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_B775C4(&EventSuperBossEntity_TypeInfo);
    byte_438A655 = 1;
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
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}