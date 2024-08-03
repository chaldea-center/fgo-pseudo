void __fastcall UserServantCollectionManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *v9; // x19
  struct UserServantCollectionManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD663 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6608/*"Fgo_20150511_1"*/, v6);
    byte_49FD663 = 1;
  }
  UserServantCollectionManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6608/*"Fgo_20150511_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserServantCollectionManager_TypeInfo->static_fields,
    StringLiteral_6608/*"Fgo_20150511_1"*/,
    v2,
    v3);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v7, v8);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  static_fields->oldList = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->oldList, (int32_t)v9, v11, v12);
}


void __fastcall UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int v6; // w9

  if ( (byte_49FD65C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v3);
    byte_49FD65C = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantCollectionManager_TypeInfo;
    oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1B64324(v4);
  }
  v6 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v6;
LABEL_10:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_49FD65A & 1) == 0 )
  {
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v1);
    byte_49FD65A = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v2);
  UserServantCollectionManager__ClearSaveDataList(v3);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantCollectionManager__WriteData(v4);
}


void __fastcall UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD659 & 1) == 0 )
  {
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v1);
    byte_49FD659 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0

  if ( (byte_49FD65B & 1) == 0 )
  {
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v1);
    byte_49FD65B = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantCollectionManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v8; // w24
  bool v9; // w23

  if ( (byte_49FD65E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v4);
    byte_49FD65E = 1;
  }
  v5 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v5 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v5->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = UserServantCollectionManager_TypeInfo;
      }
      v5 = (UserServantCollectionManager_c *)v5->static_fields->oldList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v5,
             v8 - 1,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
        return !v9;
      v9 = v8 < size;
      if ( size == v8 )
        return !v9;
      v5 = UserServantCollectionManager_TypeInfo;
      ++v8;
    }
LABEL_16:
    sub_1B64324(v5);
  }
  v9 = 0;
  return !v9;
}


void __fastcall UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x0

  if ( (byte_49FD65D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v3);
    byte_49FD65D = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, 0LL);
    v6 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v6 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserServantCollectionManager__WriteData(v6);
  }
}


bool __fastcall UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserServantCollectionManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserServantCollectionManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  System_String_o *v17; // x20
  UserServantCollectionManager_c *v18; // x0
  int v19; // w21
  char v20; // w20
  UserServantCollectionManager_c *v21; // x0
  int v22; // w20
  int32_t v23; // w21
  UserServantCollectionManager_c *v24; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  UserServantCollectionManager_c *v33; // x0

  if ( (byte_49FD661 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v5);
    byte_49FD661 = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
  }
  v6->static_fields->isModfiy = 0;
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v9 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v11 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v11);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v15 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v13, v14);
      System_IO_BinaryReader___ctor(v15, v12, 0LL);
      if ( !v15 )
        sub_1B64324(v16);
      v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                                 v15,
                                 v15->klass->vtable._23_ReadChars.methodPtr);
      v18 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v18 = UserServantCollectionManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
      {
        v19 = 5;
      }
      else
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
                v15,
                v15->klass->vtable._10_ReadByte.methodPtr);
        v21 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v21 = UserServantCollectionManager_TypeInfo;
        }
        v21->static_fields->isContinueDevice = v20 & 1;
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v22 >= 1 )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                    v15,
                    v15->klass->vtable._16_ReadUInt32.methodPtr);
            v24 = UserServantCollectionManager_TypeInfo;
            if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              v24 = UserServantCollectionManager_TypeInfo;
            }
            oldList = v24->static_fields->oldList;
            if ( !oldList )
              sub_1B64324(0LL);
            items = oldList->fields._items;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1B64324(oldList);
            size = oldList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                oldList,
                v23,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size + 1] = v23;
            }
            --v22;
          }
          while ( v22 );
        }
        v19 = 8;
      }
      klass = v15->klass;
      v30 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_35;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_35:
        v32 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v15, *(_QWORD *)(v32 + 8));
      if ( (v19 | 8) == 8 )
        return 1;
    }
    else
    {
      v33 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v33);
    }
    return 0;
  }
  return 1;
}


void __fastcall UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int32_t v8; // w20
  int v9; // w24
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v12; // x10
  __int64 namespaze_low; // x11

  if ( (byte_49FD65F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v5);
    byte_49FD65F = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v6->static_fields->oldList;
  if ( !oldList )
    goto LABEL_19;
  v8 = 0;
  v9 = oldList->fields._size & ~(oldList->fields._size >> 31);
  while ( 1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UserServantCollectionManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    v6 = (UserServantCollectionManager_c *)static_fields->oldList;
    if ( !v6 )
      goto LABEL_19;
    if ( v9 == v8 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v6,
           v8,
           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
      return;
    v6 = UserServantCollectionManager_TypeInfo;
    ++v8;
  }
  name = v6->_1.name;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v6->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1B64324(v6);
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v6,
      svtId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = svtId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__SetOld_40227900(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x22
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Collections_Generic_List_int__o *v8; // x8
  int size; // w23
  int32_t v10; // w20
  int v11; // w9
  char *v12; // x10
  _DWORD *v13; // x10
  int v14; // t1
  unsigned __int64 v15; // x20
  int32_t *v16; // x23
  unsigned __int64 max_length; // x8
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *items; // x9
  _QWORD *v20; // x10
  __int64 v21; // x11

  if ( (byte_49FD660 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v5);
    byte_49FD660 = 1;
  }
  if ( svtIdList )
  {
    v6 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v6 >= 1 )
    {
      oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      }
      v8 = *(struct System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
      if ( v8 )
      {
        size = v8->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          v15 = 0LL;
          v16 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v15 >= max_length )
              break;
            if ( v16[v15] >= 1 )
            {
              oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
              if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v15 >= max_length )
                break;
              static_fields = *(struct UserServantCollectionManager_StaticFields **)&oldList[4].fields._size;
              oldList = static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)(unsigned int)v16[v15];
              items = (const char *)oldList->fields._items;
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++oldList->fields._version;
              if ( !items )
                goto LABEL_36;
              v21 = oldList->fields._size;
              if ( (unsigned int)v21 >= *((_DWORD *)items + 6) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  oldList,
                  (int32_t)method,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                static_fields = UserServantCollectionManager_TypeInfo->static_fields;
              }
              else
              {
                oldList->fields._size = v21 + 1;
                *(_DWORD *)&items[4 * v21 + 32] = (_DWORD)method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v6 == ++v15 )
              return;
          }
LABEL_35:
          sub_1B6432C(oldList, method);
        }
        v10 = 0;
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
                                                                v10,
                                                                (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
          v11 = 0;
          while ( 1 )
          {
            if ( svtIdList->max_length == v11 )
              goto LABEL_35;
            v12 = (char *)svtIdList + 4 * v11;
            v14 = *((_DWORD *)v12 + 8);
            v13 = v12 + 32;
            if ( (_DWORD)oldList == v14 )
              break;
            if ( (_DWORD)v6 == ++v11 )
              goto LABEL_19;
          }
          *v13 = 0;
LABEL_19:
          if ( ++v10 == size )
            goto LABEL_21;
          oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1B64324(oldList);
    }
  }
}


bool __fastcall UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantCollectionManager_c *v7; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserServantCollectionManager_c *v10; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryWriter_o *v15; // x19
  UserServantCollectionManager_c *v16; // x0
  struct UserServantCollectionManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  int size; // w20
  int32_t i; // w21
  UserServantCollectionManager_c *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_49FD662 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v6);
    byte_49FD662 = 1;
  }
  v7 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v7 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( !v9->static_fields->UseMock )
  {
    v10 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v10);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v15 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v13, v14);
    System_IO_BinaryWriter___ctor_61613552(v15, v12, 0LL);
    v16 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v16 = UserServantCollectionManager_TypeInfo;
    }
    v17 = v16->static_fields;
    oldList = v17->oldList;
    if ( !oldList )
      sub_1B64324(v16);
    if ( !v15 )
      sub_1B64324(v16);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v15->klass->vtable._22_Write.method)(
      v15,
      v17->SAVE_DATA_VERSION,
      v15->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v15->klass->vtable._8_Write.method)(
      v15,
      UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v15->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
      v15,
      (unsigned int)size,
      v15->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v21 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v21 = UserServantCollectionManager_TypeInfo;
        }
        v22 = v21->static_fields->oldList;
        if ( !v22 )
          sub_1B64324(0LL);
        Item = System_Collections_Generic_List_int___get_Item(
                 v22,
                 i,
                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
          v15,
          Item,
          v15->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v15->klass;
    v25 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_27;
      }
      v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v27 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v15, *(_QWORD *)(v27 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD658 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD658 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(7, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}