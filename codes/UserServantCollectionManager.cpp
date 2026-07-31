void UserServantCollectionManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_int__c *v8; // x0
  System_Collections_Generic_List_int__o *v9; // x19
  struct UserServantCollectionManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939C67 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6942/*"Fgo_20150511_1"*/);
    byte_5939C67 = 1;
  }
  v7 = StringLiteral_6942/*"Fgo_20150511_1"*/;
  UserServantCollectionManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6942/*"Fgo_20150511_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserServantCollectionManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_int__TypeInfo;
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  static_fields->oldList = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->oldList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int v4; // w9

  if ( (byte_5939C60 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C60 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserServantCollectionManager_TypeInfo;
    oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_21FFECC(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_5939C5E & 1) == 0 )
  {
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C5E = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v2);
  UserServantCollectionManager__ClearSaveDataList(v3);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantCollectionManager__WriteData(v4);
}


void UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5939C5D & 1) == 0 )
  {
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C5D = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0

  if ( (byte_5939C5F & 1) == 0 )
  {
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C5F = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
  UserServantCollectionManager__ReadData((const MethodInfo *)v2);
}


bool UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w22
  bool v6; // w23
  int32_t v7; // w20
  UserServantCollectionManager_c *v8; // x0

  if ( (byte_5939C62 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C62 = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
    v3 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = UserServantCollectionManager_TypeInfo;
      if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
        v8 = UserServantCollectionManager_TypeInfo;
      }
      v3 = (UserServantCollectionManager_c *)v8->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v3,
             v7,
             (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__) != svtId )
      {
        v6 = ++v7 >= size;
        if ( size != v7 )
          continue;
      }
      return v6;
    }
LABEL_16:
    sub_21FFECC(v3, method);
  }
  return 1;
}


void UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0

  if ( (byte_5939C61 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C61 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  if ( v2->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
    {
      sub_21FFECC(Instance, v4);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, 0);
    v6 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v5);
      v6 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserServantCollectionManager__WriteData(v6);
  }
}


bool UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  UserServantCollectionManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  UserServantCollectionManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  UserServantCollectionManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  UserServantCollectionManager_c *v20; // x0
  int v21; // w19
  __int64 v22; // x1
  int32_t v23; // w20
  UserServantCollectionManager_c *v24; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int *p_offset; // x10
  __int64 v32; // x0
  UserServantCollectionManager_c *v33; // x0
  System_IO_BinaryReader_o *v35; // [xsp+28h] [xbp-28h]

  if ( (byte_5939C65 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C65 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
    v2 = UserServantCollectionManager_TypeInfo;
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
  v6 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = UserServantCollectionManager_TypeInfo;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v8);
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v35 = v11;
    if ( !v11 )
      sub_21FFECC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = UserServantCollectionManager_TypeInfo;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v14);
      v16 = UserServantCollectionManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v35 )
        sub_21FFECC(0, v17);
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._9_ReadBoolean.methodPtr)(
              v35,
              v35->klass->vtable._9_ReadBoolean.method);
      v20 = UserServantCollectionManager_TypeInfo;
      if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v18);
        v20 = UserServantCollectionManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._15_ReadInt32.methodPtr)(
              v35,
              v35->klass->vtable._15_ReadInt32.method);
      if ( v21 >= 1 )
      {
        do
        {
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._15_ReadInt32.methodPtr)(
                  v35,
                  v35->klass->vtable._15_ReadInt32.method);
          v24 = UserServantCollectionManager_TypeInfo;
          if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v22);
            v24 = UserServantCollectionManager_TypeInfo;
          }
          oldList = v24->static_fields->oldList;
          if ( !oldList
            || (items = oldList->fields._items,
                v27 = Method_System_Collections_Generic_List_int__Add__,
                ++oldList->fields._version,
                !items) )
          {
            sub_21FFECC(oldList, v22);
          }
          size = oldList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              oldList,
              v23,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            oldList->fields._size = size + 1;
            items->m_Items[size] = v23;
          }
          --v21;
        }
        while ( v21 );
      }
      v5 = 1;
    }
    if ( v35 )
    {
      klass = v35->klass;
      v30 = *(unsigned __int16 *)&v35->klass->_2.rank;
      if ( *(_WORD *)&v35->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_37;
        }
        v32 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_37:
        v32 = sub_2237E2C(v35, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v35, *(_QWORD *)(v32 + 8));
    }
  }
  else
  {
    v33 = UserServantCollectionManager_TypeInfo;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v8);
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v33);
    return 0;
  }
  return v5;
}


void UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w22
  int32_t i; // w20
  UserServantCollectionManager_c *v7; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v10; // x10
  __int64 namespaze_low; // x11

  if ( (byte_5939C63 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C63 = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
    v3 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v7 = UserServantCollectionManager_TypeInfo;
      if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
        v7 = UserServantCollectionManager_TypeInfo;
      }
      v3 = (UserServantCollectionManager_c *)v7->static_fields->oldList;
      if ( !v3 )
        goto LABEL_23;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v3,
             i,
             (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
        return;
    }
    v3 = UserServantCollectionManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v3 = (UserServantCollectionManager_c *)static_fields->oldList;
  if ( !v3
    || (name = v3->_1.name, v10 = Method_System_Collections_Generic_List_int__Add__, ++HIDWORD(v3->_1.namespaze), !name) )
  {
LABEL_23:
    sub_21FFECC(v3, method);
  }
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v3,
      svtId,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = svtId;
  }
  static_fields->isModfiy = 1;
}


void UserServantCollectionManager__SetOld_50586324(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x22
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Collections_Generic_List_int__o *v5; // x8
  int size; // w23
  int32_t v7; // w20
  UserServantCollectionManager_c *v8; // x0
  int max_length; // w8
  int v10; // w10
  int32_t *v11; // x9
  unsigned __int64 v12; // x20
  int32_t *m_Items; // x24
  unsigned __int64 max_length_low; // x8
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *items; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_5939C64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C64 = 1;
  }
  if ( svtIdList )
  {
    LODWORD(v3) = svtIdList->max_length;
    if ( (int)v3 >= 1 )
    {
      oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
        oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      }
      v5 = *(struct System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
      if ( v5 )
      {
        size = v5->fields._size;
        if ( size < 1 )
        {
LABEL_20:
          v12 = 0;
          if ( (int)v3 <= 1 )
            v3 = 1;
          else
            v3 = (unsigned int)v3;
          m_Items = svtIdList->m_Items;
          while ( 1 )
          {
            max_length_low = LODWORD(svtIdList->max_length);
            if ( v12 >= max_length_low )
              break;
            if ( m_Items[v12] >= 1 )
            {
              oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
              if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
                oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
                max_length_low = LODWORD(svtIdList->max_length);
              }
              if ( v12 >= max_length_low )
                break;
              static_fields = *(struct UserServantCollectionManager_StaticFields **)&oldList[4].fields._size;
              oldList = static_fields->oldList;
              if ( !oldList )
                goto LABEL_38;
              items = (const char *)oldList->fields._items;
              method = (const MethodInfo *)(unsigned int)m_Items[v12];
              v17 = Method_System_Collections_Generic_List_int__Add__;
              ++oldList->fields._version;
              if ( !items )
                goto LABEL_38;
              v18 = oldList->fields._size;
              if ( (unsigned int)v18 >= *((_DWORD *)items + 6) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  oldList,
                  (int32_t)method,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                static_fields = UserServantCollectionManager_TypeInfo->static_fields;
              }
              else
              {
                oldList->fields._size = v18 + 1;
                *(_DWORD *)&items[4 * v18 + 32] = (_DWORD)method;
              }
              static_fields->isModfiy = 1;
            }
            if ( v3 == ++v12 )
              return;
          }
LABEL_37:
          sub_21FFED4(oldList);
        }
        v7 = 0;
        while ( 1 )
        {
          v8 = UserServantCollectionManager_TypeInfo;
          if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, method);
            v8 = UserServantCollectionManager_TypeInfo;
          }
          oldList = v8->static_fields->oldList;
          if ( !oldList )
            break;
          oldList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                oldList,
                                                                v7,
                                                                (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
          max_length = svtIdList->max_length;
          v10 = v3;
          v11 = svtIdList->m_Items;
          while ( 1 )
          {
            if ( !max_length )
              goto LABEL_37;
            if ( (_DWORD)oldList == *v11 )
              break;
            --v10;
            ++v11;
            --max_length;
            if ( !v10 )
              goto LABEL_19;
          }
          *v11 = 0;
LABEL_19:
          if ( ++v7 == size )
            goto LABEL_20;
        }
      }
LABEL_38:
      sub_21FFECC(oldList, method);
    }
  }
}


bool UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  UserServantCollectionManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  UserServantCollectionManager_c *v10; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x9
  int size; // w19
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t i; // w20
  UserServantCollectionManager_c *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5939C66 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939C66 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModfiy = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = UserServantCollectionManager_TypeInfo;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v1);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v5);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v8 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_76739708(v8, v7, 0);
    v10 = UserServantCollectionManager_TypeInfo;
    v24 = v8;
    if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v9);
      v10 = UserServantCollectionManager_TypeInfo;
    }
    oldList = v10->static_fields->oldList;
    if ( !oldList )
      sub_21FFECC(v10, v9);
    if ( !v8 )
      sub_21FFECC(0, v9);
    size = oldList->fields._size;
    v24->klass->vtable._22_Write.methodPtr();
    v24->klass->vtable._8_Write.methodPtr();
    if ( !v24 )
      sub_21FFECC(0, v13);
    v24->klass->vtable._17_Write.methodPtr();
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v16 = UserServantCollectionManager_TypeInfo;
        if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v14);
          v16 = UserServantCollectionManager_TypeInfo;
        }
        v17 = v16->static_fields->oldList;
        if ( !v17 )
          sub_21FFECC(0, v14);
        Item = System_Collections_Generic_List_int___get_Item(
                 v17,
                 i,
                 (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v24->klass->vtable._17_Write.methodPtr)(
          v24,
          Item,
          v24->klass->vtable._17_Write.method);
      }
    }
    klass = v24->klass;
    v20 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_28;
      }
      v22 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v22 = sub_2237E2C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v24, *(_QWORD *)(v22 + 8));
  }
  return 1;
}


System_String_o *UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939C5C & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939C5C = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(7, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}