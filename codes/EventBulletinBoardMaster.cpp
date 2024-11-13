void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__, method, v2);
    byte_4B160E0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
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
  System_Collections_Generic_List_object__o *v22; // x21
  __int64 v23; // x1
  EventBulletinBoardReleaseMaster_o *Master_object; // x0
  __int64 v25; // x1
  EventBulletinBoardReleaseMaster_o *v26; // x22
  int v27; // w23
  int32_t v28; // w24
  const MethodInfo *v29; // x2
  Il2CppObject *v30; // x25
  __int64 methodPtr_low; // x10
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4B160E1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&EventBulletinBoardEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v20, v21);
    byte_4B160E1 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v26 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_object >= 1 )
  {
    v27 = (int)Master_object;
    v28 = 0;
    while ( 1 )
    {
      Master_object = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_object )
        break;
      Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v28,
                                                             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_object )
        break;
      v30 = (Il2CppObject *)Master_object;
      methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventBulletinBoardEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v26 )
          break;
        Master_object = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                               v26,
                                                               Master_object->fields._MasterKind_k__BackingField,
                                                               v29);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v39 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              v30,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v30;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
          }
        }
      }
      if ( v27 == ++v28 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1BCAA3C(Master_object, v25);
  }
LABEL_21:
  if ( !v22 )
    goto LABEL_25;
  if ( v22->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v22;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
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
  System_Collections_Generic_List_object__o *v20; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *m_CancellationTokenSource; // x1
  EventBulletinBoardReleaseMaster_o *v23; // x22
  int32_t Count; // w0
  int32_t v25; // w23
  char v26; // w29
  int32_t i; // w24
  const MethodInfo *v28; // x2
  DataManager_o *v29; // x25
  __int64 methodPtr_low; // x10
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B160E2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v8, v9);
    sub_1BCA7E0(&EventBulletinBoardEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B160E2 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, m_CancellationTokenSource);
  }
  v23 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v25 = Count;
  v26 = 0;
  for ( i = 0; i != v25; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  i,
                                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v29 = Instance;
    methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == eventId )
    {
      if ( !v23 )
        goto LABEL_25;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v23, Instance->fields.m_CachedPtr, v28);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_25;
        m_CancellationTokenSource = (Il2CppObject *)v29->fields.m_CancellationTokenSource;
        items = v20->fields._items;
        v38 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            m_CancellationTokenSource,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v40[4] = (Il2CppClass *)m_CancellationTokenSource;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v40 + 4),
            (int64_t)m_CancellationTokenSource,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
      }
      v26 = 1;
    }
  }
  if ( (v26 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v20;
  else
    return 0LL;
}