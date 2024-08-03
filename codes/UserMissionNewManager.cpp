void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  struct UserMissionNewManager_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  struct UserMissionNewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FD639 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v4);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6611/*"Fgo_20160323_1"*/, v6);
    byte_49FD639 = 1;
  }
  UserMissionNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6611/*"Fgo_20160323_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserMissionNewManager_TypeInfo->static_fields,
    StringLiteral_6611/*"Fgo_20160323_1"*/,
    v2,
    v3);
  static_fields = UserMissionNewManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isModfiy = 0;
  static_fields->isNew = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v11 = UserMissionNewManager_TypeInfo->static_fields;
  v11->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->missionNewInfoList, (int32_t)v10, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v17 = UserMissionNewManager_TypeInfo->static_fields;
  v17->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->oldNewInfoList, (int32_t)v16, v18, v19);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserMissionNewManager_c *v4; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FD634 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v2);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v3);
    byte_49FD634 = 1;
  }
  v4 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v4 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = v4->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_14;
  if ( missionNewInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionNewManager_TypeInfo;
    missionNewInfoList = UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList;
    if ( !missionNewInfoList )
LABEL_14:
      sub_1B64324(v4);
  }
  size = missionNewInfoList->fields._size;
  v7 = missionNewInfoList->fields._version + 1;
  missionNewInfoList->fields._size = 0;
  missionNewInfoList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionNewInfoList->fields._items, 0, size, 0LL);
    v4 = UserMissionNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionNewManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_49FD632 & 1) == 0 )
  {
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v1);
    byte_49FD632 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserMissionNewManager__ClearSaveDataList(v3);
  *(_WORD *)&UserMissionNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionNewManager__WriteData(v4);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD631 & 1) == 0 )
  {
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v1);
    byte_49FD631 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_49FD633 & 1) == 0 )
  {
    sub_1B640C8(&UserMissionProgressManager_TypeInfo, v1);
    byte_49FD633 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  System_String_o *SaveFileName; // x19
  UserMissionNewManager_c *v8; // x0
  System_IO_Stream_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  System_String_o *v14; // x20
  UserMissionNewManager_c *v15; // x0
  int v16; // w21
  char v17; // w20
  UserMissionNewManager_c *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int v21; // w20
  int v22; // w22
  int v23; // w23
  char v24; // w24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  UserMissionNewManager_c *v31; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  UserMissionNewManager_c *v37; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v39; // x1
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  UserMissionNewManager_c *v45; // x0

  if ( (byte_49FD635 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v3);
    sub_1B640C8(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v4);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v5);
    byte_49FD635 = 1;
  }
  v6 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  *((_BYTE *)v6[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v6);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v45 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v45);
    return 0;
  }
  v8 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v8);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v10, v11);
  System_IO_BinaryReader___ctor(v12, v9, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                             v12,
                             v12->klass->vtable._23_ReadChars.methodPtr);
  v15 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v15 = UserMissionNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0LL) )
  {
    v16 = 4;
  }
  else
  {
    v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
            v12,
            v12->klass->vtable._10_ReadByte.methodPtr);
    v18 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v18 = UserMissionNewManager_TypeInfo;
    }
    v18->static_fields->isContinueDevice = v17 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
            v12,
            v12->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      do
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                v12,
                v12->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                v12,
                v12->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
                v12,
                v12->klass->vtable._10_ReadByte.methodPtr);
        v27 = sub_1B64314(UserMissionNewManager_UserMissionNewInfo_TypeInfo, v25, v26);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        if ( !v27 )
          sub_1B64324(v28);
        *(_DWORD *)(v27 + 16) = v22;
        *(_DWORD *)(v27 + 20) = v23;
        *(_BYTE *)(v27 + 24) = v24 & 1;
        v31 = UserMissionNewManager_TypeInfo;
        if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
          v31 = UserMissionNewManager_TypeInfo;
        }
        missionNewInfoList = (System_Collections_Generic_List_object__o *)v31->static_fields->missionNewInfoList;
        if ( !missionNewInfoList )
          sub_1B64324(0LL);
        items = missionNewInfoList->fields._items;
        v34 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__;
        ++missionNewInfoList->fields._version;
        if ( !items )
          sub_1B64324(missionNewInfoList);
        size = missionNewInfoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionNewInfoList,
            (Il2CppObject *)v27,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          missionNewInfoList->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v27, v29, v30);
        }
        --v21;
      }
      while ( v21 );
    }
    v37 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v37 = UserMissionNewManager_TypeInfo;
    }
    static_fields = v37->static_fields;
    v39 = static_fields->missionNewInfoList;
    static_fields->oldNewInfoList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->oldNewInfoList, (int32_t)v39, v19, v20);
    v16 = 7;
  }
  klass = v12->klass;
  v41 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_32;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v43 = sub_1BB60A8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v12, *(_QWORD *)(v43 + 8));
  return v16 == 7;
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserMissionNewManager_c *v6; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  _BOOL8 v8; // x0
  UserMissionNewManager_c *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FD638 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v4);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v5);
    byte_49FD638 = 1;
  }
  v6 = UserMissionNewManager_TypeInfo;
  memset(&v10, 0, sizeof(v10));
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_object__o *)v6->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    missionNewInfoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_1B64324(v8);
    if ( LOBYTE(v10.fields._current[1].monitor) )
    {
      LOBYTE(v10.fields._current[1].monitor) = 0;
      v9 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v9 = UserMissionNewManager_TypeInfo;
      }
      v9->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_object__o *oldNewInfoList; // x9
  _BOOL8 v13; // x0
  char v14; // w19
  __int64 v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  int32_t currentEventId; // w9
  const char *name; // x8
  _QWORD *v21; // x9
  __int64 namespaze_low; // x10
  const char *v23; // x8
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FD637 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v8);
    sub_1B640C8(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v9);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v10);
    byte_49FD637 = 1;
  }
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  memset(&v26, 0, sizeof(v26));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      oldNewInfoList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
      if ( !v13 )
        break;
      if ( !v26.fields._current )
        sub_1B64324(v13);
      if ( HIDWORD(v26.fields._current[1].klass) == targetMissionId )
      {
        v14 = LOBYTE(v26.fields._current[1].monitor) != 0;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
        return v14;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  }
  v15 = sub_1B64314(UserMissionNewManager_UserMissionNewInfo_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_26;
  static_fields = missionNewInfoList->static_fields;
  currentEventId = static_fields->currentEventId;
  *(_BYTE *)(v15 + 24) = 1;
  *(_DWORD *)(v15 + 16) = currentEventId;
  *(_DWORD *)(v15 + 20) = targetMissionId;
  missionNewInfoList = (UserMissionNewManager_c *)static_fields->missionNewInfoList;
  if ( !missionNewInfoList
    || (name = missionNewInfoList->_1.name,
        v21 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__,
        ++HIDWORD(missionNewInfoList->_1.namespaze),
        !name) )
  {
LABEL_26:
    sub_1B64324(missionNewInfoList);
  }
  namespaze_low = SLODWORD(missionNewInfoList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)missionNewInfoList,
      (Il2CppObject *)v15,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &name[8 * namespaze_low];
    LODWORD(missionNewInfoList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v23 + 4) = v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), v15, v16, v17);
  }
  v14 = 1;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
  return v14;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserMissionNewManager_c *v7; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserMissionNewManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x19
  UserMissionNewManager_c *v17; // x0
  struct UserMissionNewManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  int32_t i; // w21
  UserMissionNewManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_49FD636 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v6);
    byte_49FD636 = 1;
  }
  v7 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v7 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserMissionNewManager_TypeInfo->static_fields;
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
  v11 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v17 = UserMissionNewManager_TypeInfo;
  }
  v18 = v17->static_fields;
  missionNewInfoList = v18->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v18->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v22 = UserMissionNewManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->missionNewInfoList;
      if ( !v23 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        HIDWORD(v25[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
        v16,
        LOBYTE(v25[1].monitor),
        v16->klass->vtable._9_Write.methodPtr);
    }
  }
  klass = v16->klass;
  v27 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x0
  UserMissionNewManager_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_49FD630 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v2);
    byte_49FD630 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v4 = UserMissionNewManager_TypeInfo;
  v5 = DatFileSavePath;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v4 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_61375396(v5, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_37370296; // x2

  if ( (byte_49FD62F & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&DatFileName_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v4);
    byte_49FD62F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37370296 = DatFileName__getFileName_37370296(25, eventId, 0, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName_37370296, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName_37370296; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UserMissionNewManager_c *v9; // x8
  System_String_o *v10; // x20
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_49FD62E & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, method);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v4);
    byte_49FD62E = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37370296 = DatFileName__getFileName_37370296(25, eventId, 0, 0LL);
  v6 = System_String__Concat_61375396((System_String_o *)StringLiteral_1124/*"/"*/, FileName_37370296, 0LL);
  v9 = UserMissionNewManager_TypeInfo;
  v10 = v6;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v9 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->saveName = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->saveName, (int32_t)v10, v7, v8);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}