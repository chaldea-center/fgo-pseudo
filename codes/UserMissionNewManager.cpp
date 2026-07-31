void UserMissionNewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct UserMissionNewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x19
  struct UserMissionNewManager_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5939C53 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6944/*"Fgo_20160323_1"*/);
    byte_5939C53 = 1;
  }
  v7 = StringLiteral_6944/*"Fgo_20160323_1"*/;
  UserMissionNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6944/*"Fgo_20160323_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserMissionNewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo;
  *(_WORD *)&UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  static_fields = UserMissionNewManager_TypeInfo->static_fields;
  static_fields->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->missionNewInfoList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v18 = UserMissionNewManager_TypeInfo->static_fields;
  v18->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->oldNewInfoList, (int32_t)v17, v19, v20, v21, v22, v23, v24);
}


void UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5939C4E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C4E = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_14;
  if ( missionNewInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserMissionNewManager_TypeInfo;
    missionNewInfoList = UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList;
    if ( !missionNewInfoList )
LABEL_14:
      sub_21FFECC(v2, v1);
  }
  size = missionNewInfoList->fields._size;
  v5 = missionNewInfoList->fields._version + 1;
  missionNewInfoList->fields._size = 0;
  missionNewInfoList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)missionNewInfoList->fields._items, 0, size, 0);
    v2 = UserMissionNewManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserMissionNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *EventIdsByMission; // x19
  UserMissionNewManager_c *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  void *monitor; // x8
  unsigned __int64 v8; // x22
  int32_t v9; // w21
  System_String_o *SaveFileNameByEvent; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x8
  int32_t size; // w2
  int v13; // w9
  struct UserMissionNewManager_StaticFields *static_fields; // x8

  if ( (byte_5939C4D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C4D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  if ( DataManager__HasMaster(0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( Master_object )
    {
      EventIdsByMission = (System_Collections_ICollection_o *)EventDetailMaster__GetEventIdsByMission(
                                                                (EventDetailMaster_o *)Master_object,
                                                                0);
      IsNullOrEmpty = (UserMissionNewManager_c *)BasicHelper__IsNullOrEmpty(EventIdsByMission, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !EventIdsByMission )
          goto LABEL_32;
        monitor = EventIdsByMission[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v8 = 0;
          do
          {
            if ( v8 >= (unsigned int)monitor )
              sub_21FFED4(IsNullOrEmpty);
            v9 = *((_DWORD *)&EventIdsByMission[2].klass + v8);
            if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v6);
            SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v9, v6);
            System_IO_File__Delete(SaveFileNameByEvent, 0);
            LODWORD(monitor) = EventIdsByMission[1].monitor;
            ++v8;
          }
          while ( (__int64)v8 < (int)monitor );
        }
      }
    }
    else
    {
      IsNullOrEmpty = (UserMissionNewManager_c *)BasicHelper__IsNullOrEmpty(0, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        goto LABEL_32;
    }
    IsNullOrEmpty = UserMissionNewManager_TypeInfo;
    if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v6);
      IsNullOrEmpty = UserMissionNewManager_TypeInfo;
    }
    missionNewInfoList = IsNullOrEmpty->static_fields->missionNewInfoList;
    if ( missionNewInfoList )
    {
      if ( missionNewInfoList->fields._size < 1 )
      {
LABEL_27:
        if ( !*(&IsNullOrEmpty->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v6);
          IsNullOrEmpty = UserMissionNewManager_TypeInfo;
        }
        static_fields = IsNullOrEmpty->static_fields;
        static_fields->currentEventId = 0;
        *(_WORD *)&static_fields->isModfiy = 0;
        return;
      }
      if ( *(&IsNullOrEmpty->_2.cctor_finished + 1)
        || (j_il2cpp_runtime_class_init_0(IsNullOrEmpty, v6),
            IsNullOrEmpty = UserMissionNewManager_TypeInfo,
            (missionNewInfoList = UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList) != 0) )
      {
        size = missionNewInfoList->fields._size;
        v13 = missionNewInfoList->fields._version + 1;
        missionNewInfoList->fields._size = 0;
        missionNewInfoList->fields._version = v13;
        if ( size >= 1 )
        {
          System_Array__Clear((System_Array_o *)missionNewInfoList->fields._items, 0, size, 0);
          IsNullOrEmpty = UserMissionNewManager_TypeInfo;
        }
        goto LABEL_27;
      }
    }
LABEL_32:
    sub_21FFECC(IsNullOrEmpty, v6);
  }
}


bool UserMissionNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  UserMissionNewManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x19
  UserMissionNewManager_c *v12; // x0
  __int64 v13; // x1
  bool v14; // w21
  __int64 v15; // x1
  char v16; // w19
  UserMissionNewManager_c *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int v25; // w19
  int v26; // w21
  int v27; // w22
  char v28; // w23
  __int64 v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  UserMissionNewManager_c *v38; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  UserMissionNewManager_c *v44; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v46; // x1
  System_IO_BinaryReader_c *klass; // x8
  __int64 v48; // x9
  int *p_offset; // x10
  __int64 v50; // x0
  UserMissionNewManager_c *v52; // x0
  System_IO_BinaryReader_o *v53; // [xsp+28h] [xbp-48h]

  if ( (byte_5939C4F & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_21FFC50(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C4F = 1;
  }
  v2 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v2 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  *((_BYTE *)v2[2].virtualMethodPointer + 8) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v5 = UserMissionNewManager_TypeInfo;
    if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v4);
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v7 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    v53 = v7;
    if ( !v7 )
      sub_21FFECC(v8, v9);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                               v7,
                               v7->klass->vtable._22_ReadString.method);
    v12 = UserMissionNewManager_TypeInfo;
    if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v10);
      v12 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
    {
      v14 = 0;
    }
    else
    {
      if ( !v53 )
        sub_21FFECC(0, v13);
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v53->klass->vtable._9_ReadBoolean.methodPtr)(
              v53,
              v53->klass->vtable._9_ReadBoolean.method);
      v17 = UserMissionNewManager_TypeInfo;
      if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v15);
        v17 = UserMissionNewManager_TypeInfo;
      }
      v17->static_fields->isContinueDevice = v16 & 1;
      v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v53->klass->vtable._15_ReadInt32.methodPtr)(
              v53,
              v53->klass->vtable._15_ReadInt32.method);
      if ( v25 >= 1 )
      {
        do
        {
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v53->klass->vtable._15_ReadInt32.methodPtr)(
                  v53,
                  v53->klass->vtable._15_ReadInt32.method);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v53->klass->vtable._15_ReadInt32.methodPtr)(
                  v53,
                  v53->klass->vtable._15_ReadInt32.method);
          v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v53->klass->vtable._9_ReadBoolean.methodPtr)(
                  v53,
                  v53->klass->vtable._9_ReadBoolean.method);
          v29 = sub_21FFEBC(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v29, 0);
          if ( !v29 )
            sub_21FFECC(v30, v31);
          v38 = UserMissionNewManager_TypeInfo;
          *(_DWORD *)(v29 + 16) = v26;
          *(_DWORD *)(v29 + 20) = v27;
          *(_BYTE *)(v29 + 24) = v28 & 1;
          if ( !*(&v38->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v38, v31);
            v38 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_object__o *)v38->static_fields->missionNewInfoList;
          if ( !missionNewInfoList
            || (items = missionNewInfoList->fields._items,
                v41 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__,
                ++missionNewInfoList->fields._version,
                !items) )
          {
            sub_21FFECC(missionNewInfoList, v31);
          }
          size = missionNewInfoList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              missionNewInfoList,
              (Il2CppObject *)v29,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            missionNewInfoList->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v29;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), v29, v32, v33, v34, v35, v36, v37);
          }
          --v25;
        }
        while ( v25 );
      }
      v44 = UserMissionNewManager_TypeInfo;
      if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v18);
        v44 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v44->static_fields;
      v46 = static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = v46;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&static_fields->oldNewInfoList,
        (int32_t)v46,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v14 = 1;
    }
    if ( v53 )
    {
      klass = v53->klass;
      v48 = *(unsigned __int16 *)&v53->klass->_2.rank;
      if ( *(_WORD *)&v53->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          p_offset += 4;
          if ( !v48 )
            goto LABEL_34;
        }
        v50 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_34:
        v50 = sub_2237E2C(v53, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v50)(v53, *(_QWORD *)(v50 + 8));
    }
    return v14;
  }
  else
  {
    v52 = UserMissionNewManager_TypeInfo;
    if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v4);
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v52);
    return 0;
  }
}


void UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_Collections_Generic_List_object__o *missionNewInfoList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UserMissionNewManager_c *v6; // x0
  __int64 v7; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5939C52 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C52 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  memset(&v9, 0, sizeof(v9));
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_object__o *)v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_21FFECC(0, v1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    missionNewInfoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current )
      sub_21FFECC(v4, v5);
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)off_18) )
    {
      v6 = UserMissionNewManager_TypeInfo;
      *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)off_18) = 0;
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v5);
        v6 = UserMissionNewManager_TypeInfo;
      }
      v6->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_object__o *oldNewInfoList; // x9
  _BOOL8 v5; // x0
  __int64 v6; // x1
  char v7; // w19
  __int64 v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  const char *name; // x8
  _QWORD *v17; // x9
  __int64 namespaze_low; // x10
  const char *v19; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_5939C51 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_21FFC50(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C51 = 1;
  }
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, method);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  oldNewInfoList = (System_Collections_Generic_List_object__o *)missionNewInfoList->static_fields->oldNewInfoList;
  if ( !oldNewInfoList )
    goto LABEL_26;
  if ( oldNewInfoList->fields._size >= 1 )
  {
    if ( !*(&missionNewInfoList->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(missionNewInfoList, method);
      oldNewInfoList = (System_Collections_Generic_List_object__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
      if ( !oldNewInfoList )
        goto LABEL_26;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      oldNewInfoList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    v22 = v21;
    v21.fields._list = 0;
    *(_QWORD *)&v21.fields._index = &v22;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v22,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
      if ( !v5 )
        break;
      if ( !v22.fields._current )
        sub_21FFECC(v5, v6);
      if ( HIDWORD(v22.fields._current[1].klass) == targetMissionId )
      {
        v7 = LOBYTE(v22.fields._current[1].monitor) != 0;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
        return v7;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  }
  v8 = sub_21FFEBC(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, method);
  if ( !v8 )
    goto LABEL_26;
  static_fields = UserMissionNewManager_TypeInfo->static_fields;
  *(_DWORD *)(v8 + 16) = static_fields->currentEventId;
  *(_DWORD *)(v8 + 20) = targetMissionId;
  *(_BYTE *)(v8 + 24) = 1;
  missionNewInfoList = (UserMissionNewManager_c *)static_fields->missionNewInfoList;
  if ( !missionNewInfoList
    || (name = missionNewInfoList->_1.name,
        v17 = Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__,
        ++HIDWORD(missionNewInfoList->_1.namespaze),
        !name) )
  {
LABEL_26:
    sub_21FFECC(missionNewInfoList, method);
  }
  namespaze_low = SLODWORD(missionNewInfoList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)missionNewInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &name[8 * namespaze_low];
    LODWORD(missionNewInfoList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v19 + 4) = v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 32), v8, v9, v10, v11, v12, v13, v14);
  }
  v7 = 1;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
  return v7;
}


bool UserMissionNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  UserMissionNewManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  UserMissionNewManager_c *v11; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t i; // w20
  UserMissionNewManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5939C50 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C50 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
    v2 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = UserMissionNewManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModfiy = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 0;
  v6 = UserMissionNewManager_TypeInfo;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v1);
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v9, v8, 0);
  v11 = UserMissionNewManager_TypeInfo;
  v24 = v9;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v10);
    v11 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = v11->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_21FFECC(v11, v10);
  if ( !v9 )
    sub_21FFECC(0, v10);
  size = missionNewInfoList->fields._size;
  v24->klass->vtable._22_Write.methodPtr();
  v24->klass->vtable._8_Write.methodPtr();
  if ( !v24 )
    sub_21FFECC(0, v14);
  v24->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = UserMissionNewManager_TypeInfo;
      if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v15);
        v17 = UserMissionNewManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->missionNewInfoList;
      if ( !v18 )
        sub_21FFECC(0, v15);
      if ( !System_Collections_Generic_List_object___get_Item(
              v18,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__) )
        sub_21FFECC(0, v19);
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._8_Write.methodPtr();
    }
  }
  klass = v24->klass;
  v21 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_30;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_30:
    v23 = sub_2237E2C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v24, *(_QWORD *)(v23 + 8));
  return 1;
}


System_String_o *UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *DatFileSavePath; // x0
  __int64 v3; // x1
  UserMissionNewManager_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_5939C4C & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    byte_5939C4C = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  v4 = UserMissionNewManager_TypeInfo;
  v5 = DatFileSavePath;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v3);
    v4 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_75438412(v5, v4->static_fields->saveName, 0);
}


System_String_o *UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_47352800; // x2

  if ( (byte_5939C4B & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939C4B = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v3);
  FileName_47352800 = DatFileName__getFileName_47352800(25, eventId, 0, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_47352800, 0);
}


void UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_47352800; // x0
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UserMissionNewManager_c *v12; // x8
  System_String_o *v13; // x20
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_5939C4A & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939C4A = 1;
  }
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
  FileName_47352800 = DatFileName__getFileName_47352800(25, eventId, 0, 0);
  v4 = System_String__Concat_75438412((System_String_o *)StringLiteral_1123/*"/"*/, FileName_47352800, 0);
  v12 = UserMissionNewManager_TypeInfo;
  v13 = v4;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v5);
    v12 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->saveName = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->saveName, (int32_t)v13, v6, v7, v8, v9, v10, v11);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}