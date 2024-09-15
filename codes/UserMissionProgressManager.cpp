void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A2F19D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__, v1);
    sub_1B761C0(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo, v4);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_6635/*"Fgo_20160211_1"*/, v6);
    byte_4A2F19D = 1;
  }
  UserMissionProgressManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6635/*"Fgo_20160211_1"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)UserMissionProgressManager_TypeInfo->static_fields,
    StringLiteral_6635/*"Fgo_20160211_1"*/,
    v2,
    v3);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  static_fields->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v7;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->missionProgList, (int32_t)v7, v9, v10);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserMissionProgressManager_c *v4; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4A2F197 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__, v1);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v2);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v3);
    byte_4A2F197 = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = v4->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_14;
  if ( missionProgList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionProgressManager_TypeInfo;
    missionProgList = UserMissionProgressManager_TypeInfo->static_fields->missionProgList;
    if ( !missionProgList )
LABEL_14:
      sub_1B7641C(v4, v1);
  }
  size = missionProgList->fields._size;
  v7 = missionProgList->fields._version + 1;
  missionProgList->fields._size = 0;
  missionProgList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionProgList->fields._items, 0, size, 0LL);
    v4 = UserMissionProgressManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4A2F195 & 1) == 0 )
  {
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v1);
    byte_4A2F195 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v2);
  UserMissionProgressManager__ClearSaveDataList(v3);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionProgressManager__WriteData(v4);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A2F194 & 1) == 0 )
  {
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v1);
    byte_4A2F194 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_4A2F19C & 1) == 0 )
  {
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v1);
    byte_4A2F19C = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  return v2->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_4A2F196 & 1) == 0 )
  {
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v1);
    byte_4A2F196 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  System_String_o *SaveFileName; // x19
  UserMissionProgressManager_c *v8; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  UserMissionProgressManager_c *v14; // x0
  int v15; // w20
  char v16; // w20
  UserMissionProgressManager_c *v17; // x0
  int v18; // w20
  int v19; // w21
  int v20; // w22
  int v21; // w24
  int v22; // w25
  __int64 v23; // x26
  __int64 v24; // x27
  int v25; // w28
  __int64 v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  UserMissionProgressManager_c *v31; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  UserMissionProgressManager_c *v42; // x0

  if ( (byte_4A2F198 & 1) == 0 )
  {
    sub_1B761C0(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B761C0(&System_IDisposable_TypeInfo, v2);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_1B761C0(&UserMissionProgressInfo_TypeInfo, v4);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v5);
    byte_4A2F198 = 1;
  }
  v6 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v6 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  *((_BYTE *)v6[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v6);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v42 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v42);
    return 0;
  }
  v8 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v8);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v10 = (System_IO_BinaryReader_o *)sub_1B7640C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v10, v9, 0LL);
  if ( !v10 )
    sub_1B7641C(v11, v12);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                             v10,
                             v10->klass->vtable._23_ReadChars.methodPtr);
  v14 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v14 = UserMissionProgressManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0LL) )
  {
    v15 = 4;
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
            v10,
            v10->klass->vtable._10_ReadByte.methodPtr);
    v17 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v17 = UserMissionProgressManager_TypeInfo;
    }
    v17->static_fields->isContinueDevice = v16 & 1;
    v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
            v10,
            v10->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v18 >= 1 )
    {
      do
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._17_ReadInt64.method)(
                v10,
                v10->klass->vtable._18_ReadUInt64.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._17_ReadInt64.method)(
                v10,
                v10->klass->vtable._18_ReadUInt64.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v26 = sub_1B7640C(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v26, 0LL);
        if ( !v26 )
          sub_1B7641C(v27, v28);
        *(_DWORD *)(v26 + 16) = v19;
        *(_DWORD *)(v26 + 20) = v20;
        *(_DWORD *)(v26 + 24) = v21;
        *(_DWORD *)(v26 + 28) = v22;
        *(_QWORD *)(v26 + 32) = v23;
        *(_QWORD *)(v26 + 40) = v24;
        *(_DWORD *)(v26 + 48) = v25;
        v31 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v31 = UserMissionProgressManager_TypeInfo;
        }
        missionProgList = (System_Collections_Generic_List_object__o *)v31->static_fields->missionProgList;
        if ( !missionProgList )
          sub_1B7641C(0LL, v28);
        items = missionProgList->fields._items;
        v34 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++missionProgList->fields._version;
        if ( !items )
          sub_1B7641C(missionProgList, v28);
        size = missionProgList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionProgList,
            (Il2CppObject *)v26,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          missionProgList->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v26;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v36 + 4), v26, v29, v30);
        }
        --v18;
      }
      while ( v18 );
    }
    v15 = 7;
  }
  klass = v10->klass;
  v38 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_30;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_30:
    v40 = sub_1BC81A0(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v10, *(_QWORD *)(v40 + 8));
  return v15 == 7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserMissionProgressManager_c *v9; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UserMissionProgressManager_c *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A2F19B & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__,
      *(_QWORD *)&progStatus);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__, v7);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v8);
    byte_4A2F19B = 1;
  }
  v9 = UserMissionProgressManager_TypeInfo;
  memset(&v14, 0, sizeof(v14));
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_object__o *)v9->static_fields->missionProgList;
  if ( !missionProgList )
    sub_1B7641C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    missionProgList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v11 )
      break;
    if ( !v14.fields._current )
      sub_1B7641C(v11, v12);
    if ( HIDWORD(v14.fields._current[1].klass) == missionId && LODWORD(v14.fields._current[1].monitor) == 4 )
    {
      if ( HIDWORD(v14.fields._current[1].monitor) == progStatus )
        break;
      HIDWORD(v14.fields._current[1].monitor) = progStatus;
      v13 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v13 = UserMissionProgressManager_TypeInfo;
      }
      v13->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventMissionEntity_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  EventMissionEntity_array *v10; // x20
  __int64 v11; // x22
  EventMissionEntity_o *v12; // x8
  int32_t id; // w27
  __int64 v14; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  UserMissionProgressManager_c *v18; // x0
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppArrayBounds *v22; // x8

  if ( (byte_4A2F199 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B761C0(&UserMissionProgressInfo_TypeInfo, v5);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v6);
    byte_4A2F199 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    max_length = Instance->max_length;
    v10 = Instance;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1B76424(Instance, v8);
        v12 = v10->m_Items[v11];
        if ( !v12 )
          break;
        id = v12->fields.id;
        v14 = sub_1B7640C(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        *(_DWORD *)(v14 + 16) = eventId;
        *(_DWORD *)(v14 + 20) = id;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v14, v15);
        v18 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v18 = UserMissionProgressManager_TypeInfo;
        }
        Instance = (EventMissionEntity_array *)v18->static_fields->missionProgList;
        if ( !Instance )
          break;
        bounds = Instance->bounds;
        v20 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++*(&Instance->max_length + 1);
        if ( !bounds )
          break;
        v21 = (int)Instance->max_length;
        if ( (unsigned int)v21 >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v14,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &bounds[v21];
          Instance->max_length = v21 + 1;
          v22[4] = (Il2CppArrayBounds)v14;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&v22[4], v14, v16, v17);
        }
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_19:
      sub_1B7641C(Instance, v8);
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserMissionProgressManager_c *v7; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserMissionProgressManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x1
  UserMissionProgressManager_c *v16; // x0
  struct UserMissionProgressManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v20; // x1
  int32_t i; // w21
  UserMissionProgressManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0

  if ( (byte_4A2F19A & 1) == 0 )
  {
    sub_1B761C0(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B761C0(&System_IDisposable_TypeInfo, v2);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__, v4);
    sub_1B761C0(&ManagerConfig_TypeInfo, v5);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v6);
    byte_4A2F19A = 1;
  }
  v7 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1B7640C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61773224(v14, v13, 0LL);
  v16 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v16 = UserMissionProgressManager_TypeInfo;
  }
  v17 = v16->static_fields;
  missionProgList = v17->missionProgList;
  if ( !missionProgList )
    sub_1B7641C(v16, v15);
  if ( !v14 )
    sub_1B7641C(v16, v15);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v22 = UserMissionProgressManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->missionProgList;
      if ( !v23 )
        sub_1B7641C(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1B7641C(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(v26[1].monitor),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].monitor),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppClass *, Il2CppMethodPointer))v14->klass->vtable._19_Write.method)(
        v14,
        v26[2].klass,
        v14->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v14->klass->vtable._19_Write.method)(
        v14,
        v26[2].monitor,
        v14->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(v26[3].klass),
        v14->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v14->klass;
  v28 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v30 = sub_1BC81A0(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x0
  UserMissionProgressManager_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_4A2F193 & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, v1);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v2);
    byte_4A2F193 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v4 = UserMissionProgressManager_TypeInfo;
  v5 = DatFileSavePath;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_61535060(v5, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_37503528; // x2

  if ( (byte_4A2F191 & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, method);
    sub_1B761C0(&DatFileName_TypeInfo, v3);
    sub_1B761C0(&StringLiteral_1123/*"/"*/, v4);
    byte_4A2F191 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37503528 = DatFileName__getFileName_37503528(23, eventId, 0, 0LL);
  return System_String__Concat_61546320(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_37503528, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_40366624(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_37503528; // x2

  if ( (byte_4A2F192 & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, *(_QWORD *)&slot);
    sub_1B761C0(&DatFileName_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_1123/*"/"*/, v6);
    byte_4A2F192 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37503528 = DatFileName__getFileName_37503528(24, eventId, slot, 0LL);
  return System_String__Concat_61546320(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_37503528, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName_37503528; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UserMissionProgressManager_c *v9; // x8
  System_String_o *v10; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4A2F18F & 1) == 0 )
  {
    sub_1B761C0(&DatFileName_TypeInfo, method);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v3);
    sub_1B761C0(&StringLiteral_1123/*"/"*/, v4);
    byte_4A2F18F = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37503528 = DatFileName__getFileName_37503528(23, eventId, 0, 0LL);
  v6 = System_String__Concat_61535060((System_String_o *)StringLiteral_1123/*"/"*/, FileName_37503528, 0LL);
  v9 = UserMissionProgressManager_TypeInfo;
  v10 = v6;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->saveName = v10;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v10, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__setSaveFileName_40366224(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *FileName_37503528; // x0
  System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UserMissionProgressManager_c *v11; // x8
  System_String_o *v12; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4A2F190 & 1) == 0 )
  {
    sub_1B761C0(&DatFileName_TypeInfo, *(_QWORD *)&slot);
    sub_1B761C0(&UserMissionProgressManager_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_1123/*"/"*/, v6);
    byte_4A2F190 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37503528 = DatFileName__getFileName_37503528(24, eventId, slot, 0LL);
  v8 = System_String__Concat_61535060((System_String_o *)StringLiteral_1123/*"/"*/, FileName_37503528, 0LL);
  v11 = UserMissionProgressManager_TypeInfo;
  v12 = v8;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v11 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->saveName = v12;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v12, v9, v10);
}