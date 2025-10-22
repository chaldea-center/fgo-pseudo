void UserMissionProgressManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C58219 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    sub_1C3E564(&StringLiteral_6672/*"Fgo_20160211_1"*/);
    byte_4C58219 = 1;
  }
  UserMissionProgressManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6672/*"Fgo_20160211_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)UserMissionProgressManager_TypeInfo->static_fields, StringLiteral_6672/*"Fgo_20160211_1"*/, v1, v2);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  static_fields->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->missionProgList, (int32_t)v3, v5, v6);
}


void UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4C58213 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58213 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = v2->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_14;
  if ( missionProgList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionProgressManager_TypeInfo;
    missionProgList = UserMissionProgressManager_TypeInfo->static_fields->missionProgList;
    if ( !missionProgList )
LABEL_14:
      sub_1C3E7C0(v2, v1);
  }
  size = missionProgList->fields._size;
  v5 = missionProgList->fields._version + 1;
  missionProgList->fields._size = 0;
  missionProgList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionProgList->fields._items, 0, size, 0);
    v2 = UserMissionProgressManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4C58211 & 1) == 0 )
  {
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58211 = 1;
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

  if ( (byte_4C58210 & 1) == 0 )
  {
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58210 = 1;
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

  if ( (byte_4C58218 & 1) == 0 )
  {
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58218 = 1;
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

  if ( (byte_4C58212 & 1) == 0 )
  {
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58212 = 1;
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
  __int64 v7; // x1
  System_String_o *v8; // x20
  UserMissionProgressManager_c *v9; // x0
  int v10; // w20
  char v11; // w20
  UserMissionProgressManager_c *v12; // x0
  int v13; // w20
  int v14; // w21
  int v15; // w22
  int v16; // w24
  int v17; // w25
  __int64 v18; // x26
  __int64 v19; // x27
  int v20; // w28
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UserMissionProgressManager_c *v26; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  UserMissionProgressManager_c *v37; // x0

  if ( (byte_4C58214 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1C3E564(&UserMissionProgressInfo_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58214 = 1;
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
    v37 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v37);
    return 0;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v3);
  v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v5 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v5, v4, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._22_ReadString.methodPtr)(
                            v5,
                            v5->klass->vtable._22_ReadString.method);
  v9 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0) )
  {
    v10 = 4;
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._9_ReadBoolean.methodPtr)(
            v5,
            v5->klass->vtable._9_ReadBoolean.method);
    v12 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v12 = UserMissionProgressManager_TypeInfo;
    }
    v12->static_fields->isContinueDevice = v11 & 1;
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
            v5,
            v5->klass->vtable._15_ReadInt32.method);
    if ( v13 >= 1 )
    {
      do
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._17_ReadInt64.methodPtr)(
                v5,
                v5->klass->vtable._17_ReadInt64.method);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._17_ReadInt64.methodPtr)(
                v5,
                v5->klass->vtable._17_ReadInt64.method);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v21 = sub_1C3E7B0(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0);
        if ( !v21 )
          sub_1C3E7C0(v22, v23);
        *(_DWORD *)(v21 + 16) = v14;
        *(_DWORD *)(v21 + 20) = v15;
        *(_DWORD *)(v21 + 24) = v16;
        *(_DWORD *)(v21 + 28) = v17;
        *(_QWORD *)(v21 + 32) = v18;
        *(_QWORD *)(v21 + 40) = v19;
        *(_DWORD *)(v21 + 48) = v20;
        v26 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v26 = UserMissionProgressManager_TypeInfo;
        }
        missionProgList = (System_Collections_Generic_List_object__o *)v26->static_fields->missionProgList;
        if ( !missionProgList )
          sub_1C3E7C0(0, v23);
        items = missionProgList->fields._items;
        v29 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++missionProgList->fields._version;
        if ( !items )
          sub_1C3E7C0(missionProgList, v23);
        size = missionProgList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionProgList,
            (Il2CppObject *)v21,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          missionProgList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), v21, v24, v25);
        }
        --v13;
      }
      while ( v13 );
    }
    v10 = 7;
  }
  klass = v5->klass;
  v33 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_30;
    }
    v35 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_30:
    v35 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v5, *(_QWORD *)(v35 + 8));
  return v10 == 7;
}


// local variable allocation has failed, the output may be wrong!
void UserMissionProgressManager__SetAchiveMission(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  UserMissionProgressManager_c *v5; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserMissionProgressManager_c *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C58217 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58217 = 1;
  }
  v5 = UserMissionProgressManager_TypeInfo;
  memset(&v10, 0, sizeof(v10));
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v5 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_object__o *)v5->static_fields->missionProgList;
  if ( !missionProgList )
    sub_1C3E7C0(0, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    missionProgList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C3E7C0(v7, v8);
    if ( *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_14) == missionId
      && *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18) == 4 )
    {
      if ( *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18 + 4) == progStatus )
        break;
      *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18 + 4) = progStatus;
      v9 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v9 = UserMissionProgressManager_TypeInfo;
      }
      v9->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  EventMissionEntity_array *v6; // x20
  __int64 v7; // x22
  EventMissionEntity_o *v8; // x8
  int32_t id; // w27
  __int64 v10; // x21
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UserMissionProgressManager_c *v14; // x0
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v16; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v18; // x8

  if ( (byte_4C58215 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&UserMissionProgressInfo_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58215 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0);
  if ( Instance )
  {
    max_length = Instance->max_length;
    v6 = Instance;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1C3E7C8(Instance, v4);
        v8 = v6->m_Items[v7];
        if ( !v8 )
          break;
        id = v8->fields.id;
        v10 = sub_1C3E7B0(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        *(_DWORD *)(v10 + 16) = eventId;
        *(_DWORD *)(v10 + 20) = id;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v10, v11);
        v14 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v14 = UserMissionProgressManager_TypeInfo;
        }
        Instance = (EventMissionEntity_array *)v14->static_fields->missionProgList;
        if ( !Instance )
          break;
        bounds = Instance->bounds;
        v16 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++HIDWORD(Instance->max_length);
        if ( !bounds )
          break;
        max_length_low = SLODWORD(Instance->max_length);
        if ( (unsigned int)max_length_low >= bounds[1].lower_bound )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v10,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &bounds->length + max_length_low;
          LODWORD(Instance->max_length) = max_length_low + 1;
          v18[4] = v10;
          sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), v10, v12, v13);
        }
        max_length = v6->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_19:
      sub_1C3E7C0(Instance, v4);
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
  __int64 v9; // x1
  UserMissionProgressManager_c *v10; // x0
  struct UserMissionProgressManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  UserMissionProgressManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4C58216 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C58216 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64547772(v8, v7, 0);
  v10 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v10 = UserMissionProgressManager_TypeInfo;
  }
  v11 = v10->static_fields;
  missionProgList = v11->missionProgList;
  if ( !missionProgList )
    sub_1C3E7C0(v10, v9);
  if ( !v8 )
    sub_1C3E7C0(v10, v9);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
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
      v16 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v16 = UserMissionProgressManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->missionProgList;
      if ( !v17 )
        sub_1C3E7C0(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C3E7C0(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(v20[1].monitor),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v20[1].monitor),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppClass *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v20[2].klass,
        v8->klass->vtable._19_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v20[2].monitor,
        v8->klass->vtable._19_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(v20[3].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  klass = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v24 = sub_1C8ED7C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  return 1;
}


System_String_o *UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  UserMissionProgressManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4C5820F & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    byte_4C5820F = 1;
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
  return System_String__Concat_63636468(v3, v2->static_fields->saveName, 0);
}


System_String_o *UserMissionProgressManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_40467192; // x2

  if ( (byte_4C5820D & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5820D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40467192 = DatFileName__getFileName_40467192(23, eventId, 0, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName_40467192, 0);
}


System_String_o *UserMissionProgressManager__getSaveFileNameByEvent_43601996(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_40467192; // x2

  if ( (byte_4C5820E & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5820E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40467192 = DatFileName__getFileName_40467192(24, eventId, slot, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName_40467192, 0);
}


void UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_40467192; // x0
  System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UserMissionProgressManager_c *v7; // x8
  System_String_o *v8; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4C5820B & 1) == 0 )
  {
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5820B = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40467192 = DatFileName__getFileName_40467192(23, eventId, 0, 0);
  v4 = System_String__Concat_63636468((System_String_o *)StringLiteral_1048/*"/"*/, FileName_40467192, 0);
  v7 = UserMissionProgressManager_TypeInfo;
  v8 = v4;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->saveName = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->saveName, (int32_t)v8, v5, v6);
}


void UserMissionProgressManager__setSaveFileName_43601596(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *FileName_40467192; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UserMissionProgressManager_c *v9; // x8
  System_String_o *v10; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4C5820C & 1) == 0 )
  {
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5820C = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40467192 = DatFileName__getFileName_40467192(24, eventId, slot, 0);
  v6 = System_String__Concat_63636468((System_String_o *)StringLiteral_1048/*"/"*/, FileName_40467192, 0);
  v9 = UserMissionProgressManager_TypeInfo;
  v10 = v6;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->saveName = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->saveName, (int32_t)v10, v7, v8);
}