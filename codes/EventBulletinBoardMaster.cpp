void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E37E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__, method);
    byte_4A4E37E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    242,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
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
  System_Collections_Generic_List_object__o *v12; // x21
  EventBulletinBoardReleaseMaster_o *Master_object; // x0
  __int64 v14; // x1
  EventBulletinBoardReleaseMaster_o *v15; // x22
  int v16; // w23
  int32_t v17; // w24
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A4E37F & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v10);
    sub_1B863B8(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v11);
    byte_4A4E37F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v15 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
  if ( (int)Master_object >= 1 )
  {
    v16 = (int)Master_object;
    v17 = 0;
    while ( 1 )
    {
      Master_object = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_object )
        break;
      Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v17,
                                                             (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
      if ( !Master_object )
        break;
      v19 = (Il2CppObject *)Master_object;
      if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v15 )
          break;
        Master_object = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                               v15,
                                                               Master_object->fields._MasterKind_k__BackingField,
                                                               v18);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v23 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v19,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v19;
            sub_1B8635C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B86614(Master_object, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_23;
  if ( v12->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *m_CancellationTokenSource; // x1
  EventBulletinBoardReleaseMaster_o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  char v17; // w28
  int32_t i; // w24
  const MethodInfo *v19; // x2
  DataManager_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A4E380 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4E380 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_23:
    sub_1B86614(Instance, m_CancellationTokenSource);
  }
  v14 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  v17 = 0;
  for ( i = 0; i != v16; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  i,
                                  (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
    if ( !Instance )
      goto LABEL_23;
    v20 = Instance;
    if ( *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == eventId )
    {
      if ( !v14 )
        goto LABEL_23;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v14, Instance->fields.m_CachedPtr, v19);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_23;
        m_CancellationTokenSource = (Il2CppObject *)v20->fields.m_CancellationTokenSource;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            m_CancellationTokenSource,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)m_CancellationTokenSource;
          sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)m_CancellationTokenSource, v21, v22);
        }
      }
      v17 = 1;
    }
  }
  if ( (v17 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v11;
  else
    return 0LL;
}