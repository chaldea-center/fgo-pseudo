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

  if ( (byte_4B66D3F & 1) == 0 )
  {
    sub_1BE4ACC(&EventSuperBossMaster_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_5822/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v8);
    byte_4B66D3F = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5822/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventSuperBossMaster_TypeInfo->static_fields,
    StringLiteral_5822/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66D3C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4B66D3C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
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

  if ( (byte_4B66D3E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&EventSuperBossEntity_TypeInfo, v4);
    sub_1BE4ACC(&EventSuperBossMaster_TypeInfo, v5);
    sub_1BE4ACC(&int_TypeInfo, v6);
    byte_4B66D3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                                                                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v28 = System_String__Format_62713180(SAVE_KEY, v23, v27, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v28, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v28, 0LL);
      }
LABEL_20:
      if ( ++v10 == v9 )
        return;
    }
LABEL_28:
    sub_1BE4D28(list, method);
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
  int64_t list; // x0
  int v18; // w22
  int32_t v19; // w23
  Il2CppObject *v20; // x24
  __int64 methodPtr_low; // x10
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int v36; // w29
  EventSuperBossMaster_c *v37; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int32_t Int; // w0
  int v46; // w8
  int32_t v47; // w23
  int32_t v48; // w22
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
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  int64_t v69; // x1
  Il2CppClass **v70; // x0
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  EventSuperBossMaster_c *v74; // x0
  System_String_o *v75; // x22
  Il2CppObject *v76; // x23
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  System_String_o *v81; // x22
  int v83; // [xsp+8h] [xbp-68h] BYREF
  int32_t v84; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B66D3D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventSuperBossEntity_TypeInfo, v6);
    sub_1BE4ACC(&EventSuperBossMaster_TypeInfo, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v14);
    byte_4B66D3D = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_49;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = list;
    v19 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v19,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        list = EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v16);
        if ( (list & 1) != 0 )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v29 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v20,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v20;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_18;
    }
LABEL_49:
    sub_1BE4D28(list, v16);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_49;
  if ( !v15->fields._size )
    return 0LL;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v36 = 0;
  while ( 1 )
  {
LABEL_21:
    v37 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v37 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v37->static_fields->SAVE_KEY;
    v84 = eventId;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v33, v34, v35);
    v83 = v36;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v40, v41, v42);
    v44 = System_String__Format_62713180(SAVE_KEY, v39, v43, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v44, 0, 0LL);
    v46 = v15->fields._size;
    if ( !Int )
      break;
    ++v36;
    if ( v46 >= 1 )
    {
      v47 = Int;
      v48 = 0;
      while ( 1 )
      {
        list = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v15,
                          v48,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_49;
        if ( *(_DWORD *)(list + 20) == v47 )
          break;
        if ( ++v48 >= v15->fields._size )
          goto LABEL_21;
      }
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v15,
                        v48,
                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v32 )
        goto LABEL_49;
      v55 = v32->fields._items;
      v56 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v32->fields._version;
      if ( !v55 )
        goto LABEL_49;
      v57 = v32->fields._size;
      v58 = list;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &v55->obj.klass + v57;
        v32->fields._size = v57 + 1;
        v59[4] = (Il2CppClass *)v58;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        v48,
        (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v46 >= 1 )
  {
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v15,
                        0,
                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v32 )
        goto LABEL_49;
      v66 = v32->fields._items;
      v67 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v32->fields._version;
      if ( !v66 )
        goto LABEL_49;
      v68 = v32->fields._size;
      v69 = list;
      if ( (unsigned int)v68 >= v66->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v66->obj.klass + v68;
        v32->fields._size = v68 + 1;
        v70[4] = (Il2CppClass *)v69;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v70 + 4), v69, v60, v61, v62, v63, v64, v65);
      }
      v74 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v74 = EventSuperBossMaster_TypeInfo;
      }
      v75 = v74->static_fields->SAVE_KEY;
      v84 = eventId;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v71, v72, v73);
      v83 = v36;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v77, v78, v79);
      v81 = System_String__Format_62713180(v75, v76, v80, 0LL);
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v15,
                        0,
                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_49;
      ++v36;
      UnityEngine_PlayerPrefs__SetInt(v81, *(_DWORD *)(list + 20), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v15,
        0,
        (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v15->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v32;
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

  if ( (byte_4B66D3A & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventSuperBossEntity_TypeInfo, v7);
    byte_4B66D3A = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4B66D3B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_1BE4ACC(&EventSuperBossEntity_TypeInfo, v9);
    byte_4B66D3B = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}