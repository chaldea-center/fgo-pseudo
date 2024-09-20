void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_Collections_Generic_List_object__o *v3; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C3D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6636/*"Fgo_20160211_1"*/);
    byte_4A5C3D0 = 1;
  }
  UserMissionProgressManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6636/*"Fgo_20160211_1"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserMissionProgressManager_TypeInfo->static_fields,
    StringLiteral_6636/*"Fgo_20160211_1"*/,
    v1,
    v2);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  static_fields->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->missionProgList, (int32_t)v3, v5, v6);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5C3CA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CA = 1;
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
      sub_1B8880C(v2, v1);
  }
  size = missionProgList->fields._size;
  v5 = missionProgList->fields._version + 1;
  missionProgList->fields._size = 0;
  missionProgList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionProgList->fields._items, 0, size, 0LL);
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


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4A5C3C8 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3C8 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v1);
  UserMissionProgressManager__ClearSaveDataList(v2);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionProgressManager__WriteData(v3);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A5C3C7 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3C7 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4A5C3CF & 1) == 0 )
  {
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CF = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  return v1->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4A5C3C9 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3C9 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
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
  int32_t v25; // w3
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

  if ( (byte_4A5C3CB & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1B885B0(&UserMissionProgressInfo_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CB = 1;
  }
  v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  *((_BYTE *)v1[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v1);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
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
  v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v5 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v5, v4, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._22_ReadString.method)(
                            v5,
                            v5->klass->vtable._23_ReadChars.methodPtr);
  v9 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0LL) )
  {
    v10 = 4;
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
            v5,
            v5->klass->vtable._10_ReadByte.methodPtr);
    v12 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v12 = UserMissionProgressManager_TypeInfo;
    }
    v12->static_fields->isContinueDevice = v11 & 1;
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
            v5,
            v5->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v13 >= 1 )
    {
      do
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                v5,
                v5->klass->vtable._18_ReadUInt64.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                v5,
                v5->klass->vtable._18_ReadUInt64.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v21 = sub_1B887FC(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0LL);
        if ( !v21 )
          sub_1B8880C(v22, v23);
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
          sub_1B8880C(0LL, v23);
        items = missionProgList->fields._items;
        v29 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++missionProgList->fields._version;
        if ( !items )
          sub_1B8880C(missionProgList, v23);
        size = missionProgList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionProgList,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          missionProgList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), v21, v24, v25);
        }
        --v13;
      }
      while ( v13 );
    }
    v10 = 7;
  }
  klass = v5->klass;
  v33 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_30;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_30:
    v35 = sub_1BDA590(v5, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v5, *(_QWORD *)(v35 + 8));
  return v10 == 7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
        const MethodInfo *method)
{
  UserMissionProgressManager_c *v5; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserMissionProgressManager_c *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5C3CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CE = 1;
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
    sub_1B8880C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    missionProgList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v7, v8);
    if ( HIDWORD(v10.fields._current[1].klass) == missionId && LODWORD(v10.fields._current[1].monitor) == 4 )
    {
      if ( HIDWORD(v10.fields._current[1].monitor) == progStatus )
        break;
      HIDWORD(v10.fields._current[1].monitor) = progStatus;
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
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
  int32_t v13; // w3
  UserMissionProgressManager_c *v14; // x0
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppArrayBounds *v18; // x8

  if ( (byte_4A5C3CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserMissionProgressInfo_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CC = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    max_length = Instance->max_length;
    v6 = Instance;
    if ( max_length >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1B88814(Instance, v4);
        v8 = v6->m_Items[v7];
        if ( !v8 )
          break;
        id = v8->fields.id;
        v10 = sub_1B887FC(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
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
        ++*(&Instance->max_length + 1);
        if ( !bounds )
          break;
        v17 = (int)Instance->max_length;
        if ( (unsigned int)v17 >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &bounds[v17];
          Instance->max_length = v17 + 1;
          v18[4] = (Il2CppArrayBounds)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v18[4], v10, v12, v13);
        }
        max_length = v6->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_19:
      sub_1B8880C(Instance, v4);
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
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

  if ( (byte_4A5C3CD & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3CD = 1;
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
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v8, v7, 0LL);
  v10 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v10 = UserMissionProgressManager_TypeInfo;
  }
  v11 = v10->static_fields;
  missionProgList = v11->missionProgList;
  if ( !missionProgList )
    sub_1B8880C(v10, v9);
  if ( !v8 )
    sub_1B8880C(v10, v9);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v8->klass->vtable._22_Write.method)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
    v8,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._18_Write.methodPtr);
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
        sub_1B8880C(0LL, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1B8880C(0LL, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(v20[1].monitor),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        HIDWORD(v20[1].monitor),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppClass *, Il2CppMethodPointer))v8->klass->vtable._19_Write.method)(
        v8,
        v20[2].klass,
        v8->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v8->klass->vtable._19_Write.method)(
        v8,
        v20[2].monitor,
        v8->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(v20[3].klass),
        v8->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v8->klass;
  v22 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v24 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  UserMissionProgressManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4A5C3C6 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3C6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v2 = UserMissionProgressManager_TypeInfo;
  v3 = DatFileSavePath;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_61707032(v3, v2->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_37681804; // x2

  if ( (byte_4A5C3C4 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3C4 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(23, eventId, 0, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_40552032(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_37681804; // x2

  if ( (byte_4A5C3C5 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3C5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(24, eventId, slot, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_37681804; // x0
  System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UserMissionProgressManager_c *v7; // x8
  System_String_o *v8; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4A5C3C2 & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3C2 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(23, eventId, 0, 0LL);
  v4 = System_String__Concat_61707032((System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
  v7 = UserMissionProgressManager_TypeInfo;
  v8 = v4;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->saveName = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v8, v5, v6);
}


void __fastcall UserMissionProgressManager__setSaveFileName_40551632(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *FileName_37681804; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UserMissionProgressManager_c *v9; // x8
  System_String_o *v10; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4A5C3C3 & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3C3 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(24, eventId, slot, 0LL);
  v6 = System_String__Concat_61707032((System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
  v9 = UserMissionProgressManager_TypeInfo;
  v10 = v6;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->saveName = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v10, v7, v8);
}