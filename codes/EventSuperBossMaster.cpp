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

  if ( (byte_42AF840 & 1) == 0 )
  {
    sub_B52984(&EventSuperBossMaster_TypeInfo);
    sub_B52984(&StringLiteral_5775/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/);
    byte_42AF840 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5775/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5775/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AF83D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
    byte_42AF83D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    169,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v4; // w21
  __int64 v5; // x10
  int v6; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x8
  int items; // w28
  __int64 v9; // x10
  int i; // w20
  EventSuperBossMaster_c *v11; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  int32_t Count; // [xsp+4h] [xbp-5Ch]
  int v17; // [xsp+8h] [xbp-58h] BYREF
  int v18; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AF83F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventSuperBossEntity_TypeInfo);
    sub_B52984(&EventSuperBossMaster_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42AF83F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v5 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v5
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v5 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v6 = v4;
      if ( (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[*(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] == EventSuperBossEntity_TypeInfo )
        v7 = list;
      else
        v7 = 0LL;
      items = (int)v7->fields.items;
      while ( v6 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_29;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             --v6,
                                                                                             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_29;
        v9 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_27;
      }
      for ( i = 0; ; ++i )
      {
        v11 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v11 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v11->static_fields->SAVE_KEY;
        v18 = items;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
        v17 = i;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
        v15 = System_String__Format_44563852(SAVE_KEY, v13, v14, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v15, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v15, 0LL);
      }
LABEL_27:
      if ( ++v4 >= Count )
        return;
    }
LABEL_29:
    sub_B52A5C(list, method);
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
  int v13; // w24
  __int64 v14; // x23
  __int64 v15; // x8
  int size; // w8
  EventSuperBossMaster_c *v17; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  EventSuperBossMaster_c *v22; // x0
  System_String_o *v23; // x22
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x8
  int v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AF83E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventSuperBossEntity_TypeInfo);
    sub_B52984(&EventSuperBossMaster_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
    byte_42AF83E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B52A5C(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_46;
  if ( !v5->fields._size )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v13 = 0;
  while ( 1 )
  {
LABEL_30:
    v17 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v17 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v17->static_fields->SAVE_KEY;
    v29 = eventId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v28 = v13;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v21 = System_String__Format_44563852(SAVE_KEY, v19, v20, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                                         v21,
                                                                                         0,
                                                                                         0LL);
    size = v5->fields._size;
    if ( !(_DWORD)list )
      break;
    ++v13;
    if ( size >= 1 )
    {
      v14 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v14 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v15 = *((_QWORD *)&v5->fields._items->obj.klass + v14);
        if ( !v15 )
          goto LABEL_46;
        if ( *(_DWORD *)(v15 + 20) == (_DWORD)list )
          break;
        size = v5->fields._size;
        if ( (int)++v14 - 4 >= size )
          goto LABEL_30;
      }
      if ( v5->fields._size <= (unsigned int)(v14 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v12 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v5->fields._items->obj.klass + v14),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
        v14 - 4,
        (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v22 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v22 = EventSuperBossMaster_TypeInfo;
        }
        v23 = v22->static_fields->SAVE_KEY;
        v29 = eventId;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
        v28 = v13;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_String__Format_44563852(
                                                                                             v23,
                                                                                             v24,
                                                                                             v25,
                                                                                             0LL);
        if ( !v5->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v26 = v5->fields._items->m_Items[0];
        if ( !v26 )
          break;
        ++v13;
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)list, v26->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
          0,
          (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
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

  if ( (byte_42AF83B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
    sub_B52984(&EventSuperBossEntity_TypeInfo);
    byte_42AF83B = 1;
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
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AF83C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
    sub_B52984(&EventSuperBossEntity_TypeInfo);
    byte_42AF83C = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}