void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17499 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6756/*"Fgo_20160211_1"*/, v12, v13);
    byte_4B17499 = 1;
  }
  UserMissionProgressManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6756/*"Fgo_20160211_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserMissionProgressManager_TypeInfo->static_fields,
    StringLiteral_6756/*"Fgo_20160211_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  static_fields->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->missionProgList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserMissionProgressManager_c *v7; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B17493 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v3, v4);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v5, v6);
    byte_4B17493 = 1;
  }
  v7 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = v7->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_14;
  if ( missionProgList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserMissionProgressManager_TypeInfo;
    missionProgList = UserMissionProgressManager_TypeInfo->static_fields->missionProgList;
    if ( !missionProgList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = missionProgList->fields._size;
  v10 = missionProgList->fields._version + 1;
  missionProgList->fields._size = 0;
  missionProgList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionProgList->fields._items, 0, size, 0LL);
    v7 = UserMissionProgressManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionProgressManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B17491 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v1, v2);
    byte_4B17491 = 1;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v3);
  UserMissionProgressManager__ClearSaveDataList(v4);
  *(_WORD *)&UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionProgressManager__WriteData(v5);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionProgressManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B17490 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v1, v2);
    byte_4B17490 = 1;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionProgressManager_c *v3; // x0

  if ( (byte_4B17498 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v1, v2);
    byte_4B17498 = 1;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
    v3 = UserMissionProgressManager_TypeInfo;
  }
  return v3->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionProgressManager_c *v3; // x0

  if ( (byte_4B17492 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v1, v2);
    byte_4B17492 = 1;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
  UserMissionProgressManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x0
  System_String_o *SaveFileName; // x19
  __int64 v13; // x1
  UserMissionProgressManager_c *v14; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_IO_BinaryReader_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_o *v23; // x20
  UserMissionProgressManager_c *v24; // x0
  int v25; // w20
  __int64 v26; // x1
  char v27; // w20
  UserMissionProgressManager_c *v28; // x0
  int v29; // w20
  int v30; // w21
  int v31; // w22
  int v32; // w24
  int v33; // w25
  __int64 v34; // x26
  __int64 v35; // x27
  int v36; // w28
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UserMissionProgressManager_c *v49; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  UserMissionProgressManager_c *v60; // x0

  if ( (byte_4B17494 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v5, v6);
    sub_1BCA7E0(&UserMissionProgressInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v9, v10);
    byte_4B17494 = 1;
  }
  v11 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
    v11 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  *((_BYTE *)v11[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v11);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v60 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v13);
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v60);
    return 0;
  }
  v14 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v13);
  UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v14);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v19 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v16, v17, v18);
  System_IO_BinaryReader___ctor(v19, v15, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._22_ReadString.method)(
                             v19,
                             v19->klass->vtable._23_ReadChars.methodPtr);
  v24 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v22);
    v24 = UserMissionProgressManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v24->static_fields->SAVE_DATA_VERSION, v23, 0LL) )
  {
    v25 = 4;
  }
  else
  {
    v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._9_ReadBoolean.method)(
            v19,
            v19->klass->vtable._10_ReadByte.methodPtr);
    v28 = UserMissionProgressManager_TypeInfo;
    if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v26);
      v28 = UserMissionProgressManager_TypeInfo;
    }
    v28->static_fields->isContinueDevice = v27 & 1;
    v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
            v19,
            v19->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v29 >= 1 )
    {
      do
      {
        v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._17_ReadInt64.method)(
                v19,
                v19->klass->vtable._18_ReadUInt64.methodPtr);
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._17_ReadInt64.method)(
                v19,
                v19->klass->vtable._18_ReadUInt64.methodPtr);
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v40 = sub_1BCAA2C(UserMissionProgressInfo_TypeInfo, v37, v38, v39);
        System_Object___ctor((Il2CppObject *)v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        *(_DWORD *)(v40 + 16) = v30;
        *(_DWORD *)(v40 + 20) = v31;
        *(_DWORD *)(v40 + 24) = v32;
        *(_DWORD *)(v40 + 28) = v33;
        *(_QWORD *)(v40 + 32) = v34;
        *(_QWORD *)(v40 + 40) = v35;
        *(_DWORD *)(v40 + 48) = v36;
        v49 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v42);
          v49 = UserMissionProgressManager_TypeInfo;
        }
        missionProgList = (System_Collections_Generic_List_object__o *)v49->static_fields->missionProgList;
        if ( !missionProgList )
          sub_1BCAA3C(0LL, v42);
        items = missionProgList->fields._items;
        v52 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++missionProgList->fields._version;
        if ( !items )
          sub_1BCAA3C(missionProgList, v42);
        size = missionProgList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionProgList,
            (Il2CppObject *)v40,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          missionProgList->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
        }
        --v29;
      }
      while ( v29 );
    }
    v25 = 7;
  }
  klass = v19->klass;
  v56 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_30;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_30:
    v58 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v19, *(_QWORD *)(v58 + 8));
  return v25 == 7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserMissionProgressManager_c *v13; // x0
  System_Collections_Generic_List_object__o *missionProgList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UserMissionProgressManager_c *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B17497 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__,
      *(_QWORD *)&progStatus,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v11, v12);
    byte_4B17497 = 1;
  }
  v13 = UserMissionProgressManager_TypeInfo;
  memset(&v18, 0, sizeof(v18));
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, *(_QWORD *)&progStatus);
    v13 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_object__o *)v13->static_fields->missionProgList;
  if ( !missionProgList )
    sub_1BCAA3C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    missionProgList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v15 )
      break;
    if ( !v18.fields._current )
      sub_1BCAA3C(v15, v16);
    if ( HIDWORD(v18.fields._current[1].klass) == missionId && LODWORD(v18.fields._current[1].monitor) == 4 )
    {
      if ( HIDWORD(v18.fields._current[1].monitor) == progStatus )
        break;
      HIDWORD(v18.fields._current[1].monitor) = progStatus;
      v17 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v16);
        v17 = UserMissionProgressManager_TypeInfo;
      }
      v17->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventMissionEntity_array *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int max_length; // w8
  EventMissionEntity_array *v17; // x20
  __int64 v18; // x22
  EventMissionEntity_o *v19; // x8
  int32_t id; // w27
  int64_t v21; // x21
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UserMissionProgressManager_c *v29; // x0
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppArrayBounds *v33; // x8

  if ( (byte_4B17495 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&UserMissionProgressInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v10, v11);
    byte_4B17495 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    max_length = Instance->max_length;
    v17 = Instance;
    if ( max_length >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
          sub_1BCAA44(Instance, v13);
        v19 = v17->m_Items[v18];
        if ( !v19 )
          break;
        id = v19->fields.id;
        v21 = sub_1BCAA2C(UserMissionProgressInfo_TypeInfo, v13, v14, v15);
        System_Object___ctor((Il2CppObject *)v21, 0LL);
        *(_DWORD *)(v21 + 16) = eventId;
        *(_DWORD *)(v21 + 20) = id;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v21, v22);
        v29 = UserMissionProgressManager_TypeInfo;
        if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v13);
          v29 = UserMissionProgressManager_TypeInfo;
        }
        Instance = (EventMissionEntity_array *)v29->static_fields->missionProgList;
        if ( !Instance )
          break;
        bounds = Instance->bounds;
        v31 = Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__;
        ++*(&Instance->max_length + 1);
        if ( !bounds )
          break;
        v32 = (int)Instance->max_length;
        if ( (unsigned int)v32 >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v21,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &bounds[v32];
          Instance->max_length = v32 + 1;
          v33[4] = (Il2CppArrayBounds)v21;
          sub_1BCA784((PartyOrganizationUtility_o *)&v33[4], v21, v23, v24, v25, v26, v27, v28);
        }
        max_length = v17->max_length;
        if ( (int)++v18 >= max_length )
          return;
      }
LABEL_19:
      sub_1BCAA3C(Instance, v13);
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserMissionProgressManager_c *v13; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  UserMissionProgressManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x19
  __int64 v24; // x1
  UserMissionProgressManager_c *v25; // x0
  struct UserMissionProgressManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v29; // x1
  int32_t i; // w21
  UserMissionProgressManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B17496 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v11, v12);
    byte_4B17496 = 1;
  }
  v13 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
    v13 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = UserMissionProgressManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v17 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v24);
    v25 = UserMissionProgressManager_TypeInfo;
  }
  v26 = v25->static_fields;
  missionProgList = v26->missionProgList;
  if ( !missionProgList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = UserMissionProgressManager_TypeInfo;
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v29);
        v31 = UserMissionProgressManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->missionProgList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
      v35 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(Item[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        HIDWORD(v35[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(v35[1].monitor),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        HIDWORD(v35[1].monitor),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppClass *, Il2CppMethodPointer))v23->klass->vtable._19_Write.method)(
        v23,
        v35[2].klass,
        v23->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v23->klass->vtable._19_Write.method)(
        v23,
        v35[2].monitor,
        v23->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(v35[3].klass),
        v23->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v23->klass;
  v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *DatFileSavePath; // x0
  __int64 v6; // x1
  UserMissionProgressManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4B1748F & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v3, v4);
    byte_4B1748F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v7 = UserMissionProgressManager_TypeInfo;
  v8 = DatFileSavePath;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v6);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_62401220(v8, v7->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_38395452; // x2

  if ( (byte_4B1748D & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B1748D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v8);
  FileName_38395452 = DatFileName__getFileName_38395452(23, eventId, 0, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_41290436(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_38395452; // x2

  if ( (byte_4B1748E & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, *(_QWORD *)&slot, method);
    sub_1BCA7E0(&DatFileName_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v7, v8);
    byte_4B1748E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, *(_QWORD *)&slot);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v9);
  FileName_38395452 = DatFileName__getFileName_38395452(24, eventId, slot, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *FileName_38395452; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UserMissionProgressManager_c *v17; // x8
  int64_t v18; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4B1748B & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, method, v2);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B1748B = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
  FileName_38395452 = DatFileName__getFileName_38395452(23, eventId, 0, 0LL);
  v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
  v17 = UserMissionProgressManager_TypeInfo;
  v18 = (int64_t)v9;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v10);
    v17 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->saveName = (struct System_String_o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->saveName, v18, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__setSaveFileName_41290036(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *FileName_38395452; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UserMissionProgressManager_c *v18; // x8
  int64_t v19; // x19
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4B1748C & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, *(_QWORD *)&slot, method);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v7, v8);
    byte_4B1748C = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, *(_QWORD *)&slot);
  FileName_38395452 = DatFileName__getFileName_38395452(24, eventId, slot, 0LL);
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
  v18 = UserMissionProgressManager_TypeInfo;
  v19 = (int64_t)v10;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v11);
    v18 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v18->static_fields;
  static_fields->saveName = (struct System_String_o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->saveName, v19, v12, v13, v14, v15, v16, v17);
}