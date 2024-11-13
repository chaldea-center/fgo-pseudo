void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
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
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x19
  struct UserMissionNewManager_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x19
  struct UserMissionNewManager_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B17488 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6757/*"Fgo_20160323_1"*/, v12, v13);
    byte_4B17488 = 1;
  }
  UserMissionNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6757/*"Fgo_20160323_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserMissionNewManager_TypeInfo->static_fields,
    StringLiteral_6757/*"Fgo_20160323_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = UserMissionNewManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isModfiy = 0;
  static_fields->isNew = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v19 = UserMissionNewManager_TypeInfo->static_fields;
  v19->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->missionNewInfoList, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v30 = UserMissionNewManager_TypeInfo->static_fields;
  v30->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->oldNewInfoList, (int64_t)v29, v31, v32, v33, v34, v35, v36);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserMissionNewManager_c *v7; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B17483 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v3, v4);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v5, v6);
    byte_4B17483 = 1;
  }
  v7 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v7 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = v7->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_14;
  if ( missionNewInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserMissionNewManager_TypeInfo;
    missionNewInfoList = UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList;
    if ( !missionNewInfoList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = missionNewInfoList->fields._size;
  v10 = missionNewInfoList->fields._version + 1;
  missionNewInfoList->fields._size = 0;
  missionNewInfoList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionNewInfoList->fields._items, 0, size, 0LL);
    v7 = UserMissionNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserMissionNewManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionNewManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B17481 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v1, v2);
    byte_4B17481 = 1;
  }
  v3 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v3);
  UserMissionNewManager__ClearSaveDataList(v4);
  *(_WORD *)&UserMissionNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserMissionNewManager__WriteData(v5);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionNewManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B17480 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v1, v2);
    byte_4B17480 = 1;
  }
  v3 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserMissionProgressManager_c *v3; // x0

  if ( (byte_4B17482 & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v1, v2);
    byte_4B17482 = 1;
  }
  v3 = UserMissionProgressManager_TypeInfo;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v1);
  UserMissionProgressManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
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
  UserMissionNewManager_c *v14; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_IO_BinaryReader_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_o *v23; // x20
  UserMissionNewManager_c *v24; // x0
  int v25; // w21
  __int64 v26; // x1
  char v27; // w20
  UserMissionNewManager_c *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w20
  int v37; // w22
  int v38; // w23
  char v39; // w24
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  int64_t v43; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UserMissionNewManager_c *v52; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  UserMissionNewManager_c *v58; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x0
  int64_t v60; // x1
  System_IO_BinaryReader_c *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 v64; // x0
  UserMissionNewManager_c *v66; // x0

  if ( (byte_4B17484 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v5, v6);
    sub_1BCA7E0(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v9, v10);
    byte_4B17484 = 1;
  }
  v11 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v11 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  *((_BYTE *)v11[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v11);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v66 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v13);
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v66);
    return 0;
  }
  v14 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v13);
  UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v14);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v19 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v16, v17, v18);
  System_IO_BinaryReader___ctor(v19, v15, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._22_ReadString.method)(
                             v19,
                             v19->klass->vtable._23_ReadChars.methodPtr);
  v24 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v22);
    v24 = UserMissionNewManager_TypeInfo;
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
    v28 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v26);
      v28 = UserMissionNewManager_TypeInfo;
    }
    v28->static_fields->isContinueDevice = v27 & 1;
    v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
            v19,
            v19->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v36 >= 1 )
    {
      do
      {
        v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v39 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._9_ReadBoolean.method)(
                v19,
                v19->klass->vtable._10_ReadByte.methodPtr);
        v43 = sub_1BCAA2C(UserMissionNewManager_UserMissionNewInfo_TypeInfo, v40, v41, v42);
        System_Object___ctor((Il2CppObject *)v43, 0LL);
        if ( !v43 )
          sub_1BCAA3C(v44, v45);
        *(_DWORD *)(v43 + 16) = v37;
        *(_DWORD *)(v43 + 20) = v38;
        *(_BYTE *)(v43 + 24) = v39 & 1;
        v52 = UserMissionNewManager_TypeInfo;
        if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v45);
          v52 = UserMissionNewManager_TypeInfo;
        }
        missionNewInfoList = (System_Collections_Generic_List_object__o *)v52->static_fields->missionNewInfoList;
        if ( !missionNewInfoList )
          sub_1BCAA3C(0LL, v45);
        items = missionNewInfoList->fields._items;
        v55 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__;
        ++missionNewInfoList->fields._version;
        if ( !items )
          sub_1BCAA3C(missionNewInfoList, v45);
        size = missionNewInfoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            missionNewInfoList,
            (Il2CppObject *)v43,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          missionNewInfoList->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v43, v46, v47, v48, v49, v50, v51);
        }
        --v36;
      }
      while ( v36 );
    }
    v58 = UserMissionNewManager_TypeInfo;
    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v29);
      v58 = UserMissionNewManager_TypeInfo;
    }
    static_fields = v58->static_fields;
    v60 = (int64_t)static_fields->missionNewInfoList;
    static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->oldNewInfoList, v60, v30, v31, v32, v33, v34, v35);
    v25 = 7;
  }
  klass = v19->klass;
  v62 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      p_offset += 4;
      if ( !v62 )
        goto LABEL_32;
    }
    v64 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v64 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v64)(v19, *(_QWORD *)(v64 + 8));
  return v25 == 7;
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
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
  UserMissionNewManager_c *v11; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UserMissionNewManager_c *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B17487 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v3,
      v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__,
      v7,
      v8);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v9, v10);
    byte_4B17487 = 1;
  }
  v11 = UserMissionNewManager_TypeInfo;
  memset(&v16, 0, sizeof(v16));
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v11 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_object__o *)v11->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    missionNewInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields._current )
      sub_1BCAA3C(v13, v14);
    if ( LOBYTE(v16.fields._current[1].monitor) )
    {
      LOBYTE(v16.fields._current[1].monitor) = 0;
      v15 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v14);
        v15 = UserMissionNewManager_TypeInfo;
      }
      v15->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_object__o *oldNewInfoList; // x9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  char v23; // w19
  int64_t v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  int32_t currentEventId; // w9
  const char *name; // x8
  _QWORD *v34; // x9
  __int64 namespaze_low; // x10
  const char *v36; // x8
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B17486 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v13, v14);
    sub_1BCA7E0(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v17, v18);
    byte_4B17486 = 1;
  }
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  memset(&v39, 0, sizeof(v39));
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, method);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  oldNewInfoList = (System_Collections_Generic_List_object__o *)missionNewInfoList->static_fields->oldNewInfoList;
  if ( !oldNewInfoList )
    goto LABEL_26;
  if ( oldNewInfoList->fields._size >= 1 )
  {
    if ( !missionNewInfoList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(missionNewInfoList, method);
      oldNewInfoList = (System_Collections_Generic_List_object__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
      if ( !oldNewInfoList )
        goto LABEL_26;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      oldNewInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
      if ( !v21 )
        break;
      if ( !v39.fields._current )
        sub_1BCAA3C(v21, v22);
      if ( HIDWORD(v39.fields._current[1].klass) == targetMissionId )
      {
        v23 = LOBYTE(v39.fields._current[1].monitor) != 0;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v39,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
        return v23;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  }
  v24 = sub_1BCAA2C(UserMissionNewManager_UserMissionNewInfo_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, method);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_26;
  static_fields = missionNewInfoList->static_fields;
  currentEventId = static_fields->currentEventId;
  *(_BYTE *)(v24 + 24) = 1;
  *(_DWORD *)(v24 + 16) = currentEventId;
  *(_DWORD *)(v24 + 20) = targetMissionId;
  missionNewInfoList = (UserMissionNewManager_c *)static_fields->missionNewInfoList;
  if ( !missionNewInfoList
    || (name = missionNewInfoList->_1.name,
        v34 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__,
        ++HIDWORD(missionNewInfoList->_1.namespaze),
        !name) )
  {
LABEL_26:
    sub_1BCAA3C(missionNewInfoList, method);
  }
  namespaze_low = SLODWORD(missionNewInfoList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)missionNewInfoList,
      (Il2CppObject *)v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &name[8 * namespaze_low];
    LODWORD(missionNewInfoList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v36 + 4) = v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), v24, v25, v26, v27, v28, v29, v30);
  }
  v23 = 1;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
  return v23;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
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
  UserMissionNewManager_c *v13; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  UserMissionNewManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x19
  __int64 v24; // x1
  UserMissionNewManager_c *v25; // x0
  struct UserMissionNewManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v29; // x1
  int32_t i; // w21
  UserMissionNewManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B17485 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v11, v12);
    byte_4B17485 = 1;
  }
  v13 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v13 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = UserMissionNewManager_TypeInfo->static_fields;
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
  v17 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = UserMissionNewManager_TypeInfo;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v24);
    v25 = UserMissionNewManager_TypeInfo;
  }
  v26 = v25->static_fields;
  missionNewInfoList = v26->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = UserMissionNewManager_TypeInfo;
      if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v29);
        v31 = UserMissionNewManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->missionNewInfoList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
        v23,
        LOBYTE(v35[1].monitor),
        v23->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *DatFileSavePath; // x0
  __int64 v6; // x1
  UserMissionNewManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4B1747F & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v3, v4);
    byte_4B1747F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v7 = UserMissionNewManager_TypeInfo;
  v8 = DatFileSavePath;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v6);
    v7 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_62401220(v8, v7->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_38395452; // x2

  if ( (byte_4B1747E & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B1747E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v8);
  FileName_38395452 = DatFileName__getFileName_38395452(25, eventId, 0, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
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
  UserMissionNewManager_c *v17; // x8
  int64_t v18; // x20
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_4B1747D & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, method, v2);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B1747D = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
  FileName_38395452 = DatFileName__getFileName_38395452(25, eventId, 0, 0LL);
  v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395452, 0LL);
  v17 = UserMissionNewManager_TypeInfo;
  v18 = (int64_t)v9;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v10);
    v17 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->saveName = (struct System_String_o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->saveName, v18, v11, v12, v13, v14, v15, v16);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}