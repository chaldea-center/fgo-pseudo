void __fastcall UserServantCollectionManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  System_Collections_Generic_List_int__o *v7; // x19
  struct UserServantCollectionManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDD872 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6804/*"Fgo_20150511_1"*/);
    byte_4BDD872 = 1;
  }
  UserServantCollectionManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6804/*"Fgo_20150511_1"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)UserServantCollectionManager_TypeInfo->static_fields,
    StringLiteral_6804/*"Fgo_20150511_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  static_fields->oldList = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int v4; // w9

  if ( (byte_4BDD86B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86B = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantCollectionManager_TypeInfo;
    oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1C22094(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4BDD869 & 1) == 0 )
  {
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD869 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v1);
  UserServantCollectionManager__ClearSaveDataList(v2);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantCollectionManager__WriteData(v3);
}


void __fastcall UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BDD868 & 1) == 0 )
  {
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD868 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0

  if ( (byte_4BDD86A & 1) == 0 )
  {
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86A = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v6; // w24
  bool v7; // w23

  if ( (byte_4BDD86D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86D = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v3 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v6 = 1;
    v7 = 1;
    while ( 1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UserServantCollectionManager_TypeInfo;
      }
      v3 = (UserServantCollectionManager_c *)v3->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v3,
             v6 - 1,
             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
        return !v7;
      v7 = v6 < size;
      if ( size == v6 )
        return !v7;
      v3 = UserServantCollectionManager_TypeInfo;
      ++v6;
    }
LABEL_16:
    sub_1C22094(v3, method);
  }
  v7 = 0;
  return !v7;
}


void __fastcall UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4BDD86C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86C = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1C22094(Instance, v3);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, 0LL);
    v4 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v4 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    *((_WORD *)v4[2].virtualMethodPointer + 4) = 1;
    UserServantCollectionManager__WriteData(v4);
  }
}


bool __fastcall UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserServantCollectionManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserServantCollectionManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserServantCollectionManager_c *v12; // x0
  int v13; // w21
  char v14; // w20
  UserServantCollectionManager_c *v15; // x0
  int v16; // w20
  __int64 v17; // x1
  int32_t v18; // w21
  UserServantCollectionManager_c *v19; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  UserServantCollectionManager_c *v28; // x0

  if ( (byte_4BDD870 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD870 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v4 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v6 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v8 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0LL);
      if ( !v8 )
        sub_1C22094(v9, v10);
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                                 v8,
                                 v8->klass->vtable._23_ReadChars.methodPtr);
      v12 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v12 = UserServantCollectionManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
      {
        v13 = 5;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
                v8,
                v8->klass->vtable._10_ReadByte.methodPtr);
        v15 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v15 = UserServantCollectionManager_TypeInfo;
        }
        v15->static_fields->isContinueDevice = v14 & 1;
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v16 >= 1 )
        {
          do
          {
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v19 = UserServantCollectionManager_TypeInfo;
            if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              v19 = UserServantCollectionManager_TypeInfo;
            }
            oldList = v19->static_fields->oldList;
            if ( !oldList )
              sub_1C22094(0LL, v17);
            items = oldList->fields._items;
            v22 = Method_System_Collections_Generic_List_int__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1C22094(oldList, v17);
            size = oldList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                oldList,
                v18,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size + 1] = v18;
            }
            --v16;
          }
          while ( v16 );
        }
        v13 = 8;
      }
      klass = v8->klass;
      v25 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_35;
        }
        v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_35:
        v27 = sub_1C73E18(v8, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v8, *(_QWORD *)(v27 + 8));
      if ( (v13 | 8) == 8 )
        return 1;
    }
    else
    {
      v28 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v28);
    }
    return 0;
  }
  return 1;
}


void __fastcall UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int32_t v5; // w20
  int v6; // w24
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v9; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4BDD86E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86E = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v3 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_19;
  v5 = 0;
  v6 = oldList->fields._size & ~(oldList->fields._size >> 31);
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserServantCollectionManager_TypeInfo;
    }
    static_fields = v3->static_fields;
    v3 = (UserServantCollectionManager_c *)static_fields->oldList;
    if ( !v3 )
      goto LABEL_19;
    if ( v6 == v5 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v3,
           v5,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
      return;
    v3 = UserServantCollectionManager_TypeInfo;
    ++v5;
  }
  name = v3->_1.name;
  v9 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v3->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1C22094(v3, method);
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v3,
      svtId,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = svtId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__SetOld_41847064(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x22
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Collections_Generic_List_int__o *v5; // x8
  int size; // w23
  int32_t v7; // w20
  int v8; // w9
  char *v9; // x10
  _DWORD *v10; // x10
  int v11; // t1
  unsigned __int64 v12; // x20
  int32_t *v13; // x23
  unsigned __int64 max_length; // x8
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *items; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_4BDD86F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD86F = 1;
  }
  if ( svtIdList )
  {
    v3 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v3 >= 1 )
    {
      oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      }
      v5 = *(struct System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
      if ( v5 )
      {
        size = v5->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          v12 = 0LL;
          v13 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v12 >= max_length )
              break;
            if ( v13[v12] >= 1 )
            {
              oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
              if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v12 >= max_length )
                break;
              static_fields = *(struct UserServantCollectionManager_StaticFields **)&oldList[4].fields._size;
              oldList = static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)(unsigned int)v13[v12];
              items = (const char *)oldList->fields._items;
              v17 = Method_System_Collections_Generic_List_int__Add__;
              ++oldList->fields._version;
              if ( !items )
                goto LABEL_36;
              v18 = oldList->fields._size;
              if ( (unsigned int)v18 >= *((_DWORD *)items + 6) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  oldList,
                  (int32_t)method,
                  *(const MethodInfo_3632090 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                static_fields = UserServantCollectionManager_TypeInfo->static_fields;
              }
              else
              {
                oldList->fields._size = v18 + 1;
                *(_DWORD *)&items[4 * v18 + 32] = (_DWORD)method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v3 == ++v12 )
              return;
          }
LABEL_35:
          sub_1C2209C(oldList, method);
        }
        v7 = 0;
        while ( 1 )
        {
          if ( !oldList[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(oldList);
            oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
          }
          oldList = *(System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
          if ( !oldList )
            break;
          oldList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                oldList,
                                                                v7,
                                                                (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
          v8 = 0;
          while ( 1 )
          {
            if ( svtIdList->max_length == v8 )
              goto LABEL_35;
            v9 = (char *)svtIdList + 4 * v8;
            v11 = *((_DWORD *)v9 + 8);
            v10 = v9 + 32;
            if ( (_DWORD)oldList == v11 )
              break;
            if ( (_DWORD)v3 == ++v8 )
              goto LABEL_19;
          }
          *v10 = 0;
LABEL_19:
          if ( ++v7 == size )
            goto LABEL_21;
          oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1C22094(oldList, method);
    }
  }
}


bool __fastcall UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserServantCollectionManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  UserServantCollectionManager_c *v9; // x0
  struct UserServantCollectionManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  UserServantCollectionManager_c *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4BDD871 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD871 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v4);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v7 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63353968(v7, v6, 0LL);
    v9 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v9 = UserServantCollectionManager_TypeInfo;
    }
    v10 = v9->static_fields;
    oldList = v10->oldList;
    if ( !oldList )
      sub_1C22094(v9, v8);
    if ( !v7 )
      sub_1C22094(v9, v8);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
      v7,
      v10->SAVE_DATA_VERSION,
      v7->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
      v7,
      UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v7->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
      v7,
      (unsigned int)size,
      v7->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v15 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v15 = UserServantCollectionManager_TypeInfo;
        }
        v16 = v15->static_fields->oldList;
        if ( !v16 )
          sub_1C22094(0LL, v13);
        Item = System_Collections_Generic_List_int___get_Item(
                 v16,
                 i,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
          v7,
          Item,
          v7->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v7->klass;
    v19 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_27;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v21 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v7, *(_QWORD *)(v21 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDD867 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDD867 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(7, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}