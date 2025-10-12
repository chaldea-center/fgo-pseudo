void UserMissionProgressManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C38E51 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6671/*"Fgo_20160211_1"*/);
    byte_4C38E51 = 1;
  }
  UserMissionProgressManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6671/*"Fgo_20160211_1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)UserMissionProgressManager_TypeInfo->static_fields, StringLiteral_6671/*"Fgo_20160211_1"*/, v1, v2);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  static_fields->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->missionProgList, (int32_t)v3, v5, v6);
}


void UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C38E4B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4B = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = v1->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_14;
  if ( missionProgList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = UserMissionProgressManager_TypeInfo;
    missionProgList = UserMissionProgressManager_TypeInfo->static_fields->missionProgList;
    if ( !missionProgList )
LABEL_14:
      sub_1C32E7C(v1);
  }
  size = missionProgList->fields._size;
  v4 = missionProgList->fields._version + 1;
  missionProgList->fields._size = 0;
  missionProgList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionProgList->fields._items, 0, size, 0);
    v1 = UserMissionProgressManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModfiy = 1;
}


void UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4C38E49 & 1) == 0 )
  {
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E49 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v1);
  UserMissionProgressManager__ClearSaveDataList(v2);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionProgressManager__WriteData(v3);
}


void UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C38E48 & 1) == 0 )
  {
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E48 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4C38E50 & 1) == 0 )
  {
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E50 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  return v1->static_fields->missionProgList;
}


void UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4C38E4A & 1) == 0 )
  {
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4A = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ReadData((const MethodInfo *)v1);
}


bool UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  System_String_o *SaveFileName; // x19
  UserMissionProgressManager_c *v3; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x19
  __int64 v6; // x0
  System_String_o *v7; // x20
  UserMissionProgressManager_c *v8; // x0
  int v9; // w20
  char v10; // w20
  UserMissionProgressManager_c *v11; // x0
  int v12; // w20
  int v13; // w21
  int v14; // w22
  int v15; // w24
  int v16; // w25
  __int64 v17; // x26
  __int64 v18; // x27
  int v19; // w28
  __int64 v20; // x23
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UserMissionProgressManager_c *v24; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  UserMissionProgressManager_c *v35; // x0

  if ( (byte_4C38E4C & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1C32C20(&UserMissionProgressInfo_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4C = 1;
  }
  v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  *((_BYTE *)v1[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v1);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v35 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v35);
    return 0;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v3);
  v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v5 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v5, v4, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._22_ReadString.methodPtr)(
                            v5,
                            v5->klass->vtable._22_ReadString.method);
  v8 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v8 = UserMissionProgressManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v8->static_fields->SAVE_DATA_VERSION, v7, 0) )
  {
    v9 = 4;
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._9_ReadBoolean.methodPtr)(
            v5,
            v5->klass->vtable._9_ReadBoolean.method);
    v11 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v11 = UserMissionProgressManager_TypeInfo;
    }
    v11->static_fields->isContinueDevice = v10 & 1;
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
            v5,
            v5->klass->vtable._15_ReadInt32.method);
    if ( v12 >= 1 )
    {
      do
      {
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._17_ReadInt64.methodPtr)(
                v5,
                v5->klass->vtable._17_ReadInt64.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._17_ReadInt64.methodPtr)(
                v5,
                v5->klass->vtable._17_ReadInt64.method);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v20 = sub_1C32E6C(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v20, 0);
        if ( !v20 )
          sub_1C32E7C(v21);
        *(_DWORD *)(v20 + 16) = v13;
        *(_DWORD *)(v20 + 20) = v14;
        *(_DWORD *)(v20 + 24) = v15;
        *(_DWORD *)(v20 + 28) = v16;
        *(_QWORD *)(v20 + 32) = v17;
        *(_QWORD *)(v20 + 40) = v18;
        *(_DWORD *)(v20 + 48) = v19;
        v24 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v24 = UserMissionProgressManager_TypeInfo;
        }
        missionProgList = (System_Collections_Generic_List_object__o *)v24->static_fields->missionProgList;
        if ( !missionProgList )
          sub_1C32E7C(0);
        items = missionProgList->fields._items;
        v27 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++missionProgList->fields._version;
        if ( !items )
          sub_1C32E7C(missionProgList);
        size = missionProgList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionProgList,
            (Il2CppObject *)v20,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          missionProgList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v20;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), v20, v22, v23);
        }
        --v12;
      }
      while ( v12 );
    }
    v9 = 7;
  }
  klass = v5->klass;
  v31 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_30:
    v33 = sub_1C83438(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v5, *(_QWORD *)(v33 + 8));
  return v9 == 7;
}


void UserMissionProgressManager__SetAchiveMission(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  UserMissionProgressManager_c *v5; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  _BOOL8 v7; // x0
  UserMissionProgressManager_c *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C38E4F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4F = 1;
  }
  v5 = UserMissionProgressManager_TypeInfo;
  memset(&v9, 0, sizeof(v9));
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v5 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_object__o *)v5->static_fields->missionProgList;
  if ( !missionProgList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    missionProgList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v9.fields._current )
      sub_1C32E7C(v7);
    if ( *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_14) == missionId
      && *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18) == 4 )
    {
      if ( *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18 + 4) == progStatus )
        break;
      *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18 + 4) = progStatus;
      v8 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v8 = UserMissionProgressManager_TypeInfo;
      }
      v8->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  int max_length; // w8
  EventMissionEntity_array *v5; // x20
  __int64 v6; // x22
  EventMissionEntity_o *v7; // x8
  int32_t id; // w27
  __int64 v9; // x21
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UserMissionProgressManager_c *v13; // x0
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v15; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v17; // x8

  if ( (byte_4C38E4D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UserMissionProgressInfo_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4D = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0);
  if ( Instance )
  {
    max_length = Instance->max_length;
    v5 = Instance;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C32E84(Instance);
        v7 = v5->m_Items[v6];
        if ( !v7 )
          break;
        id = v7->fields.id;
        v9 = sub_1C32E6C(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        *(_DWORD *)(v9 + 16) = eventId;
        *(_DWORD *)(v9 + 20) = id;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v9, v10);
        v13 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v13 = UserMissionProgressManager_TypeInfo;
        }
        Instance = (EventMissionEntity_array *)v13->static_fields->missionProgList;
        if ( !Instance )
          break;
        bounds = Instance->bounds;
        v15 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++HIDWORD(Instance->max_length);
        if ( !bounds )
          break;
        max_length_low = SLODWORD(Instance->max_length);
        if ( (unsigned int)max_length_low >= bounds[1].lower_bound )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &bounds->length + max_length_low;
          LODWORD(Instance->max_length) = max_length_low + 1;
          v17[4] = v9;
          sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), v9, v11, v12);
        }
        max_length = v5->max_length;
        if ( (int)++v6 >= max_length )
          return;
      }
LABEL_19:
      sub_1C32E7C(Instance);
    }
  }
}


bool UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserMissionProgressManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  UserMissionProgressManager_c *v9; // x0
  struct UserMissionProgressManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  int32_t i; // w21
  UserMissionProgressManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4C38E4E & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E4E = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v8, v7, 0);
  v9 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  v10 = v9->static_fields;
  missionProgList = v10->missionProgList;
  if ( !missionProgList )
    sub_1C32E7C(v9);
  if ( !v8 )
    sub_1C32E7C(v9);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v14 = UserMissionProgressManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->missionProgList;
      if ( !v15 )
        sub_1C32E7C(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C32E7C(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v17[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(v17[1].monitor),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v17[1].monitor),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppClass *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v17[2].klass,
        v8->klass->vtable._19_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v17[2].monitor,
        v8->klass->vtable._19_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(v17[3].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  klass = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_29;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v21 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return 1;
}


System_String_o *UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  UserMissionProgressManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4C38E47 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    byte_4C38E47 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  v2 = UserMissionProgressManager_TypeInfo;
  v3 = DatFileSavePath;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_63518544(v3, v2->static_fields->saveName, 0);
}


System_String_o *UserMissionProgressManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_40321568; // x2

  if ( (byte_4C38E45 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E45 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40321568 = DatFileName__getFileName_40321568(23, eventId, 0, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName_40321568, 0);
}


System_String_o *UserMissionProgressManager__getSaveFileNameByEvent_43443980(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_40321568; // x2

  if ( (byte_4C38E46 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E46 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40321568 = DatFileName__getFileName_40321568(24, eventId, slot, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName_40321568, 0);
}


void UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_40321568; // x0
  System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UserMissionProgressManager_c *v7; // x8
  System_String_o *v8; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4C38E43 & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E43 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40321568 = DatFileName__getFileName_40321568(23, eventId, 0, 0);
  v4 = System_String__Concat_63518544((System_String_o *)StringLiteral_1048/*"/"*/, FileName_40321568, 0);
  v7 = UserMissionProgressManager_TypeInfo;
  v8 = v4;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->saveName = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->saveName, (int32_t)v8, v5, v6);
}


void UserMissionProgressManager__setSaveFileName_43443580(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *FileName_40321568; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UserMissionProgressManager_c *v9; // x8
  System_String_o *v10; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4C38E44 & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E44 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40321568 = DatFileName__getFileName_40321568(24, eventId, slot, 0);
  v6 = System_String__Concat_63518544((System_String_o *)StringLiteral_1048/*"/"*/, FileName_40321568, 0);
  v9 = UserMissionProgressManager_TypeInfo;
  v10 = v6;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->saveName = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->saveName, (int32_t)v10, v7, v8);
}