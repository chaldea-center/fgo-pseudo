void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct UserMissionNewManager_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x19
  struct UserMissionNewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5C3BF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6637/*"Fgo_20160323_1"*/);
    byte_4A5C3BF = 1;
  }
  UserMissionNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6637/*"Fgo_20160323_1"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserMissionNewManager_TypeInfo->static_fields,
    StringLiteral_6637/*"Fgo_20160323_1"*/,
    v1,
    v2);
  static_fields = UserMissionNewManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isModfiy = 0;
  static_fields->isNew = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v5 = UserMissionNewManager_TypeInfo->static_fields;
  v5->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->missionNewInfoList, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v9 = UserMissionNewManager_TypeInfo->static_fields;
  v9->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->oldNewInfoList, (int32_t)v8, v10, v11);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5C3BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3BA = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_14;
  if ( missionNewInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionNewManager_TypeInfo;
    missionNewInfoList = UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList;
    if ( !missionNewInfoList )
LABEL_14:
      sub_1B8880C(v2, v1);
  }
  size = missionNewInfoList->fields._size;
  v5 = missionNewInfoList->fields._version + 1;
  missionNewInfoList->fields._size = 0;
  missionNewInfoList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionNewInfoList->fields._items, 0, size, 0LL);
    v2 = UserMissionNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4A5C3B8 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3B8 = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserMissionNewManager__ClearSaveDataList(v2);
  *(_WORD *)&UserMissionNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionNewManager__WriteData(v3);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A5C3B7 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3B7 = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4A5C3B9 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    byte_4A5C3B9 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  System_String_o *SaveFileName; // x19
  UserMissionNewManager_c *v3; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  UserMissionNewManager_c *v9; // x0
  int v10; // w21
  char v11; // w20
  UserMissionNewManager_c *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int v15; // w20
  int v16; // w22
  int v17; // w23
  char v18; // w24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  UserMissionNewManager_c *v24; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  UserMissionNewManager_c *v30; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v32; // x1
  System_IO_BinaryReader_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  UserMissionNewManager_c *v38; // x0

  if ( (byte_4A5C3BB & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_1B885B0(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3BB = 1;
  }
  v1 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v1 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  *((_BYTE *)v1[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v1);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v38 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
  v3 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v3);
  v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v5 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v5, v4, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._22_ReadString.method)(
                            v5,
                            v5->klass->vtable._23_ReadChars.methodPtr);
  v9 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v9 = UserMissionNewManager_TypeInfo;
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
    v12 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v12 = UserMissionNewManager_TypeInfo;
    }
    v12->static_fields->isContinueDevice = v11 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
            v5,
            v5->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                v5,
                v5->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
                v5,
                v5->klass->vtable._10_ReadByte.methodPtr);
        v19 = sub_1B887FC(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0LL);
        if ( !v19 )
          sub_1B8880C(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_BYTE *)(v19 + 24) = v18 & 1;
        v24 = UserMissionNewManager_TypeInfo;
        if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
          v24 = UserMissionNewManager_TypeInfo;
        }
        missionNewInfoList = (System_Collections_Generic_List_object__o *)v24->static_fields->missionNewInfoList;
        if ( !missionNewInfoList )
          sub_1B8880C(0LL, v21);
        items = missionNewInfoList->fields._items;
        v27 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__;
        ++missionNewInfoList->fields._version;
        if ( !items )
          sub_1B8880C(missionNewInfoList, v21);
        size = missionNewInfoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionNewInfoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          missionNewInfoList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v19, v22, v23);
        }
        --v15;
      }
      while ( v15 );
    }
    v30 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v30 = UserMissionNewManager_TypeInfo;
    }
    static_fields = v30->static_fields;
    v32 = static_fields->missionNewInfoList;
    static_fields->oldNewInfoList = v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->oldNewInfoList, (int32_t)v32, v13, v14);
    v10 = 7;
  }
  klass = v5->klass;
  v34 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_32;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v36 = sub_1BDA590(v5, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v5, *(_QWORD *)(v36 + 8));
  return v10 == 7;
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UserMissionNewManager_c *v6; // x0
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5C3BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3BE = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  memset(&v7, 0, sizeof(v7));
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_object__o *)v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1B8880C(0LL, v1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    missionNewInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current )
      sub_1B8880C(v4, v5);
    if ( LOBYTE(v7.fields._current[1].monitor) )
    {
      LOBYTE(v7.fields._current[1].monitor) = 0;
      v6 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v6 = UserMissionNewManager_TypeInfo;
      }
      v6->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_object__o *oldNewInfoList; // x9
  _BOOL8 v5; // x0
  __int64 v6; // x1
  char v7; // w19
  __int64 v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  int32_t currentEventId; // w9
  const char *name; // x8
  _QWORD *v14; // x9
  __int64 namespaze_low; // x10
  const char *v16; // x8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5C3BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_1B885B0(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3BD = 1;
  }
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  oldNewInfoList = (System_Collections_Generic_List_object__o *)missionNewInfoList->static_fields->oldNewInfoList;
  if ( !oldNewInfoList )
    goto LABEL_26;
  if ( oldNewInfoList->fields._size >= 1 )
  {
    if ( !missionNewInfoList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(missionNewInfoList);
      oldNewInfoList = (System_Collections_Generic_List_object__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
      if ( !oldNewInfoList )
        goto LABEL_26;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      oldNewInfoList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v19,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
      if ( !v5 )
        break;
      if ( !v19.fields._current )
        sub_1B8880C(v5, v6);
      if ( HIDWORD(v19.fields._current[1].klass) == targetMissionId )
      {
        v7 = LOBYTE(v19.fields._current[1].monitor) != 0;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
        return v7;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  }
  v8 = sub_1B887FC(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_26;
  static_fields = missionNewInfoList->static_fields;
  currentEventId = static_fields->currentEventId;
  *(_BYTE *)(v8 + 24) = 1;
  *(_DWORD *)(v8 + 16) = currentEventId;
  *(_DWORD *)(v8 + 20) = targetMissionId;
  missionNewInfoList = (UserMissionNewManager_c *)static_fields->missionNewInfoList;
  if ( !missionNewInfoList
    || (name = missionNewInfoList->_1.name,
        v14 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__,
        ++HIDWORD(missionNewInfoList->_1.namespaze),
        !name) )
  {
LABEL_26:
    sub_1B8880C(missionNewInfoList, method);
  }
  namespaze_low = SLODWORD(missionNewInfoList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)missionNewInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &name[8 * namespaze_low];
    LODWORD(missionNewInfoList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v16 + 4) = v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), v8, v9, v10);
  }
  v7 = 1;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
  return v7;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserMissionNewManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  UserMissionNewManager_c *v10; // x0
  struct UserMissionNewManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  UserMissionNewManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4A5C3BC & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3BC = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v1 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserMissionNewManager_TypeInfo->static_fields;
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
  v5 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v8, v7, 0LL);
  v10 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v10 = UserMissionNewManager_TypeInfo;
  }
  v11 = v10->static_fields;
  missionNewInfoList = v11->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1B8880C(v10, v9);
  if ( !v8 )
    sub_1B8880C(v10, v9);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v8->klass->vtable._22_Write.method)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
    v8,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v16 = UserMissionNewManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->missionNewInfoList;
      if ( !v17 )
        sub_1B8880C(0LL, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
        v8,
        LOBYTE(v20[1].monitor),
        v8->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  UserMissionNewManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4A5C3B6 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5C3B6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v2 = UserMissionNewManager_TypeInfo;
  v3 = DatFileSavePath;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_61707032(v3, v2->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_37681804; // x2

  if ( (byte_4A5C3B5 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3B5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(25, eventId, 0, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_37681804; // x0
  System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UserMissionNewManager_c *v7; // x8
  System_String_o *v8; // x20
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_4A5C3B4 & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3B4 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681804 = DatFileName__getFileName_37681804(25, eventId, 0, 0LL);
  v4 = System_String__Concat_61707032((System_String_o *)StringLiteral_1123/*"/"*/, FileName_37681804, 0LL);
  v7 = UserMissionNewManager_TypeInfo;
  v8 = v4;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v7 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->saveName = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v8, v5, v6);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}