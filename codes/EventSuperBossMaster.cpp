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

  if ( (byte_4188213 & 1) == 0 )
  {
    sub_B2C35C(&EventSuperBossMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_5733/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v8);
    byte_4188213 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5733/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5733/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188210 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4188210 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    168,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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

  if ( (byte_4188212 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v4);
    sub_B2C35C(&EventSuperBossMaster_TypeInfo, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    byte_4188212 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                                                                                             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v19 = System_String__Format_44301068(SAVE_KEY, v17, v18, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v19, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v19, 0LL);
      }
LABEL_27:
      if ( ++v8 >= Count )
        return;
    }
LABEL_29:
    sub_B2C434(list, method);
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w22
  int32_t v19; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x24
  __int64 v21; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  int v23; // w24
  __int64 v24; // x23
  __int64 v25; // x8
  int size; // w8
  EventSuperBossMaster_c *v27; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  EventSuperBossMaster_c *v32; // x0
  System_String_o *v33; // x22
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x8
  int v38; // [xsp+8h] [xbp-58h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4188211 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v6);
    sub_B2C35C(&EventSuperBossMaster_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v14);
    byte_4188211 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v19,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v21 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] != EventSuperBossEntity_TypeInfo )
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
            v20,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B2C434(list, v16);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_46;
  if ( !v15->fields._size )
    return 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v23 = 0;
  while ( 1 )
  {
LABEL_30:
    v27 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v27 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v27->static_fields->SAVE_KEY;
    v39 = eventId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v38 = v23;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v31 = System_String__Format_44301068(SAVE_KEY, v29, v30, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                                         v31,
                                                                                         0,
                                                                                         0LL);
    size = v15->fields._size;
    if ( !(_DWORD)list )
      break;
    ++v23;
    if ( size >= 1 )
    {
      v24 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v24 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v25 = *((_QWORD *)&v15->fields._items->obj.klass + v24);
        if ( !v25 )
          goto LABEL_46;
        if ( *(_DWORD *)(v25 + 20) == (_DWORD)list )
          break;
        size = v15->fields._size;
        if ( (int)++v24 - 4 >= size )
          goto LABEL_30;
      }
      if ( v15->fields._size <= (unsigned int)(v24 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v22 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v15->fields._items->obj.klass + v24),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
        v24 - 4,
        (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( size >= 1 )
  {
    if ( v22 )
    {
      while ( 1 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          v15->fields._items->m_Items[0],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v32 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v32 = EventSuperBossMaster_TypeInfo;
        }
        v33 = v32->static_fields->SAVE_KEY;
        v39 = eventId;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        v38 = v23;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_String__Format_44301068(
                                                                                             v33,
                                                                                             v34,
                                                                                             v35,
                                                                                             0LL);
        if ( !v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v36 = v15->fields._items->m_Items[0];
        if ( !v36 )
          break;
        ++v23;
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)list, v36->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
          0,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
        if ( v15->fields._size <= 0 )
          goto LABEL_43;
      }
    }
    goto LABEL_46;
  }
LABEL_43:
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v22;
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

  if ( (byte_418820E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v7);
    byte_418820E = 1;
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
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_418820F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v9);
    byte_418820F = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}