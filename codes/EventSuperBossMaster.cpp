void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B1C6A7 & 1) == 0 )
  {
    sub_1BCAFF8(&EventSuperBossMaster_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_5685/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v4);
    byte_4B1C6A7 = 1;
  }
  EventSuperBossMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_5685/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventSuperBossMaster_TypeInfo->static_fields, StringLiteral_5685/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v2, v3);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_4B1C6A4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int v13; // w27
  int v14; // w22
  int i; // w28
  EventSuperBossMaster_c *v16; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  int v24; // [xsp+8h] [xbp-58h] BYREF
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1C6A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__, v3);
    sub_1BCAFF8(&EventSuperBossMaster_TypeInfo, v4);
    sub_1BCAFF8(&int_TypeInfo, v5);
    byte_4B1C6A6 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v13 = *((_DWORD *)list + 4);
      v14 = v9;
      while ( v14 > 0 )
      {
        list = this->fields.list;
        if ( !list )
          goto LABEL_21;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 --v14,
                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_21;
        if ( v13 == *((_DWORD *)list + 4) )
          goto LABEL_13;
      }
      for ( i = 0; ; ++i )
      {
        v16 = EventSuperBossMaster_TypeInfo;
        if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v16 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v16->static_fields->SAVE_KEY;
        v25 = v13;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v10, v11, v12);
        v24 = i;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v19, v20, v21);
        v23 = System_String__Format_62491716(SAVE_KEY, v18, v22, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v23, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
      }
LABEL_13:
      if ( ++v9 == v8 )
        return;
    }
LABEL_21:
    sub_1BCB254(list, method);
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
  System_Collections_Generic_List_object__o *v14; // x20
  const MethodInfo *v15; // x1
  void *list; // x0
  int v17; // w22
  int32_t v18; // w23
  Il2CppObject *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int v30; // w29
  EventSuperBossMaster_c *v31; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int32_t Int; // w0
  int v40; // w8
  int32_t v41; // w23
  int32_t v42; // w22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass *v48; // x1
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass *v55; // x1
  Il2CppClass **v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  EventSuperBossMaster_c *v60; // x0
  System_String_o *v61; // x22
  Il2CppObject *v62; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x22
  int v69; // [xsp+8h] [xbp-68h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1C6A5 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__, v5);
    sub_1BCAFF8(&EventSuperBossMaster_TypeInfo, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v13);
    byte_4B1C6A5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventSuperBossEntity__get_Item__);
      if ( !list )
        break;
      v19 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        list = (void *)EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)list, v15);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v19,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v19;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_16;
    }
LABEL_47:
    sub_1BCB254(list, v15);
  }
LABEL_16:
  if ( !v14 )
    goto LABEL_47;
  if ( !v14->fields._size )
    return 0LL;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v30 = 0;
  while ( 1 )
  {
LABEL_19:
    v31 = EventSuperBossMaster_TypeInfo;
    if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v31 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v31->static_fields->SAVE_KEY;
    v70 = eventId;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v27, v28, v29);
    v69 = v30;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v34, v35, v36);
    v38 = System_String__Format_62491716(SAVE_KEY, v33, v37, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v38, 0, 0LL);
    v40 = v14->fields._size;
    if ( !Int )
      break;
    ++v30;
    if ( v40 >= 1 )
    {
      v41 = Int;
      v42 = 0;
      while ( 1 )
      {
        list = System_Collections_Generic_List_object___get_Item(
                 v14,
                 v42,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
        if ( !list )
          goto LABEL_47;
        if ( *((_DWORD *)list + 5) == v41 )
          break;
        if ( ++v42 >= v14->fields._size )
          goto LABEL_19;
      }
      list = System_Collections_Generic_List_object___get_Item(
               v14,
               v42,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v26 )
        goto LABEL_47;
      v45 = v26->fields._items;
      v46 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v26->fields._version;
      if ( !v45 )
        goto LABEL_47;
      v47 = v26->fields._size;
      v48 = (Il2CppClass *)list;
      if ( (unsigned int)v47 >= v45->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)list,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &v45->obj.klass + v47;
        v26->fields._size = v47 + 1;
        v49[4] = v48;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v48, v43, v44);
      }
      System_Collections_Generic_List_object___RemoveAt(
        v14,
        v42,
        (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( v40 >= 1 )
  {
    do
    {
      list = System_Collections_Generic_List_object___get_Item(
               v14,
               0,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !v26 )
        goto LABEL_47;
      v52 = v26->fields._items;
      v53 = Method_System_Collections_Generic_List_EventSuperBossEntity__Add__;
      ++v26->fields._version;
      if ( !v52 )
        goto LABEL_47;
      v54 = v26->fields._size;
      v55 = (Il2CppClass *)list;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)list,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &v52->obj.klass + v54;
        v26->fields._size = v54 + 1;
        v56[4] = v55;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
      }
      v60 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v60 = EventSuperBossMaster_TypeInfo;
      }
      v61 = v60->static_fields->SAVE_KEY;
      v70 = eventId;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v57, v58, v59);
      v69 = v30;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v63, v64, v65);
      v67 = System_String__Format_62491716(v61, v62, v66, 0LL);
      list = System_Collections_Generic_List_object___get_Item(
               v14,
               0,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      ++v30;
      UnityEngine_PlayerPrefs__SetInt(v67, *((_DWORD *)list + 5), 0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v14,
        0,
        (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
    while ( v14->fields._size > 0 );
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v26;
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

  if ( (byte_4B1C6A2 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&EventSuperBossEntity_TypeInfo, v7);
    byte_4B1C6A2 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4B1C6A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_1BCAFF8(&EventSuperBossEntity_TypeInfo, v9);
    byte_4B1C6A3 = 1;
  }
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  PK = (Il2CppObject *)EventSuperBossEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}