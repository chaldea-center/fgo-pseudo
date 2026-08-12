void UserEquipNewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct UserEquipNewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971E0D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    sub_2213A60(&StringLiteral_6954/*"Fgo_20150511_1"*/);
    byte_5971E0D = 1;
  }
  v7 = StringLiteral_6954/*"Fgo_20150511_1"*/;
  UserEquipNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6954/*"Fgo_20150511_1"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserEquipNewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo;
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  static_fields = UserEquipNewManager_TypeInfo->static_fields;
  static_fields->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->openList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5971E07 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E07 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v2 = UserEquipNewManager_TypeInfo;
  }
  openList = v2->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserEquipNewManager_TypeInfo;
    openList = UserEquipNewManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_2213CDC(v2, v1);
  }
  size = openList->fields._size;
  v5 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0);
    v2 = UserEquipNewManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserEquipNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_5971E05 & 1) == 0 )
  {
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E05 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserEquipNewManager__ClearSaveDataList(v3);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserEquipNewManager__WriteData(v4);
}


void UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5971E04 & 1) == 0 )
  {
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E04 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void UserEquipNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0

  if ( (byte_5971E06 & 1) == 0 )
  {
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E06 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  UserEquipNewManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v6; // x8
  int v7; // w23
  int32_t v8; // w21
  bool v9; // w25
  UserEquipNewManager_c *v10; // x0

  if ( (byte_5971E09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E09 = 1;
  }
  openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_18;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = UserEquipNewManager_TypeInfo;
      if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
        v10 = UserEquipNewManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v10->static_fields->openList;
      if ( !openList )
        break;
      openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                openList,
                                                                v8,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      if ( !openList )
        break;
      if ( LODWORD(openList->fields._items) != equipId || SHIDWORD(openList->fields._items) >= lv )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_18:
    sub_2213CDC(openList, *(_QWORD *)&lv);
  }
  return 0;
}


void UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0

  if ( (byte_5971E08 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E08 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v2 = UserEquipNewManager_TypeInfo;
  }
  if ( v2->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v4);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, 0);
    v6 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v5);
      v6 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserEquipNewManager__WriteData(v6);
  }
}


bool UserEquipNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  UserEquipNewManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  UserEquipNewManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  UserEquipNewManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  UserEquipNewManager_c *v20; // x0
  int v21; // w19
  int v22; // w21
  int v23; // w22
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UserEquipNewManager_c *v33; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int *p_offset; // x10
  __int64 v42; // x0
  UserEquipNewManager_c *v43; // x0
  System_IO_BinaryReader_o *v45; // [xsp+28h] [xbp-48h]

  if ( (byte_5971E0B & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E0B = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v2 = UserEquipNewManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModfiy = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v6 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = UserEquipNewManager_TypeInfo;
    if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v8);
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v45 = v11;
    if ( !v11 )
      sub_2213CDC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = UserEquipNewManager_TypeInfo;
    if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v14);
      v16 = UserEquipNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v45 )
        sub_2213CDC(0, v17);
      v19 = ((__int64 (*)(void))v45->klass->vtable._9_ReadBoolean.methodPtr)();
      v20 = UserEquipNewManager_TypeInfo;
      if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v18);
        v20 = UserEquipNewManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v45->klass->vtable._15_ReadInt32.methodPtr)(
              v45,
              v45->klass->vtable._15_ReadInt32.method);
      if ( v21 >= 1 )
      {
        do
        {
          v22 = ((__int64 (*)(void))v45->klass->vtable._15_ReadInt32.methodPtr)();
          v23 = ((__int64 (*)(void))v45->klass->vtable._15_ReadInt32.methodPtr)();
          v24 = sub_2213CCC(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v24, 0);
          if ( !v24 )
            sub_2213CDC(v25, v26);
          v33 = UserEquipNewManager_TypeInfo;
          *(_DWORD *)(v24 + 16) = v22;
          *(_DWORD *)(v24 + 20) = v23;
          if ( !*(&v33->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v33, v26);
            v33 = UserEquipNewManager_TypeInfo;
          }
          openList = (System_Collections_Generic_List_object__o *)v33->static_fields->openList;
          if ( !openList
            || (items = openList->fields._items,
                v36 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__,
                ++openList->fields._version,
                !items) )
          {
            sub_2213CDC(openList, v26);
          }
          size = openList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v24,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            openList->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v24;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), v24, v27, v28, v29, v30, v31, v32);
          }
          --v21;
        }
        while ( v21 );
      }
      v5 = 1;
    }
    if ( v45 )
    {
      klass = v45->klass;
      v40 = *(unsigned __int16 *)&v45->klass->_2.rank;
      if ( *(_WORD *)&v45->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_38;
        }
        v42 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_38:
        v42 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v45, *(_QWORD *)(v42 + 8));
    }
  }
  else
  {
    v43 = UserEquipNewManager_TypeInfo;
    if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v8);
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v43);
    return 0;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v6; // x8
  int v7; // w23
  int32_t v8; // w21
  UserEquipNewManager_c *v9; // x0
  __int64 v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UserEquipNewManager_c *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 v21; // x8
  UserEquipNewManager_c *v22; // x8

  if ( (byte_5971E0A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_2213A60(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E0A = 1;
  }
  openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_28;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 < 1 )
  {
LABEL_14:
    v10 = sub_2213CCC(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      v17 = UserEquipNewManager_TypeInfo;
      *(_DWORD *)(v10 + 16) = equipId;
      *(_DWORD *)(v10 + 20) = lv;
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, *(_QWORD *)&lv);
        v17 = UserEquipNewManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v17->static_fields->openList;
      if ( openList )
      {
        items = openList->fields._items;
        v19 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (__int64)items + 8 * size;
            openList->fields._size = size + 1;
            *(_QWORD *)(v21 + 32) = v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), v10, v11, v12, v13, v14, v15, v16);
          }
          goto LABEL_22;
        }
      }
    }
LABEL_28:
    sub_2213CDC(openList, *(_QWORD *)&lv);
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = UserEquipNewManager_TypeInfo;
    if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
      v9 = UserEquipNewManager_TypeInfo;
    }
    openList = (System_Collections_Generic_List_object__o *)v9->static_fields->openList;
    if ( !openList )
      goto LABEL_28;
    openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              openList,
                                                              v8,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    if ( !openList )
      goto LABEL_28;
    if ( LODWORD(openList->fields._items) == equipId )
      break;
    if ( v7 == ++v8 )
      goto LABEL_14;
  }
  if ( HIDWORD(openList->fields._items) != lv )
  {
    v22 = UserEquipNewManager_TypeInfo;
    HIDWORD(openList->fields._items) = lv;
    if ( *(&v22->_2.cctor_finished + 1) )
      goto LABEL_23;
    j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&lv);
LABEL_22:
    v22 = UserEquipNewManager_TypeInfo;
LABEL_23:
    v22->static_fields->isModfiy = 1;
  }
}


bool UserEquipNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  UserEquipNewManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  UserEquipNewManager_c *v11; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t i; // w20
  UserEquipNewManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5971E0C & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971E0C = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v2 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = UserEquipNewManager_TypeInfo->static_fields;
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
  v6 = UserEquipNewManager_TypeInfo;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v9, v8, 0);
  v11 = UserEquipNewManager_TypeInfo;
  v24 = v9;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v10);
    v11 = UserEquipNewManager_TypeInfo;
  }
  openList = v11->static_fields->openList;
  if ( !openList )
    sub_2213CDC(v11, v10);
  if ( !v9 )
    sub_2213CDC(0, v10);
  size = openList->fields._size;
  v24->klass->vtable._22_Write.methodPtr();
  v24->klass->vtable._8_Write.methodPtr();
  if ( !v24 )
    sub_2213CDC(0, v14);
  v24->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = UserEquipNewManager_TypeInfo;
      if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v15);
        v17 = UserEquipNewManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->openList;
      if ( !v18 )
        sub_2213CDC(0, v15);
      if ( !System_Collections_Generic_List_object___get_Item(
              v18,
              i,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__) )
        sub_2213CDC(0, v19);
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._17_Write.methodPtr();
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
    v23 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v24, *(_QWORD *)(v23 + 8));
  return 1;
}


System_String_o *UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971E03 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971E03 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(8, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void UserEquipNewManager_UserEquipLvInfo___ctor(UserEquipNewManager_UserEquipLvInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}