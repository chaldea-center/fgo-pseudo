void OtherUserNewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_long__c *v8; // x0
  System_Collections_Generic_List_long__o *v9; // x19
  struct OtherUserNewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971BF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    sub_2213A60(&StringLiteral_6955/*"Fgo_20151127_1"*/);
    byte_5971BF9 = 1;
  }
  v7 = StringLiteral_6955/*"Fgo_20151127_1"*/;
  OtherUserNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6955/*"Fgo_20151127_1"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)OtherUserNewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_long__TypeInfo;
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_long__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = OtherUserNewManager_TypeInfo->static_fields;
  static_fields->oldList = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->oldList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void OtherUserNewManager___ctor(OtherUserNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OtherUserNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v4; // w9

  if ( (byte_5971BF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF2 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v2 = OtherUserNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = OtherUserNewManager_TypeInfo;
    oldList = OtherUserNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_2213CDC(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = OtherUserNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_5971BF0 & 1) == 0 )
  {
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF0 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v2);
  OtherUserNewManager__ClearSaveDataList(v3);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 257;
  OtherUserNewManager__WriteData(v4);
}


void OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5971BEF & 1) == 0 )
  {
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BEF = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void OtherUserNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0

  if ( (byte_5971BF1 & 1) == 0 )
  {
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF1 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  OtherUserNewManager__ReadData((const MethodInfo *)v2);
}


bool OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w22
  bool v6; // w23
  int32_t v7; // w20
  OtherUserNewManager_c *v8; // x0

  if ( (byte_5971BF4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF4 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
    v3 = OtherUserNewManager_TypeInfo;
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
      v8 = OtherUserNewManager_TypeInfo;
      if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
        v8 = OtherUserNewManager_TypeInfo;
      }
      v3 = (OtherUserNewManager_c *)v8->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             v7,
             (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__) != userId )
      {
        v6 = ++v7 >= size;
        if ( size != v7 )
          continue;
      }
      return v6;
    }
LABEL_16:
    sub_2213CDC(v3, method);
  }
  return 1;
}


void OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0

  if ( (byte_5971BF3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971BF3 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v2 = OtherUserNewManager_TypeInfo;
  }
  if ( v2->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v4);
    }
    OtherUserGameMaster__continueDeviceOtherUser((OtherUserGameMaster_o *)Instance, 0);
    v6 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v5);
      v6 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    OtherUserNewManager__WriteData(v6);
  }
}


bool OtherUserNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  OtherUserNewManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  OtherUserNewManager_c *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  char v17; // w19
  OtherUserNewManager_c *v18; // x0
  int v19; // w19
  __int64 v20; // x1
  int64_t v21; // x20
  OtherUserNewManager_c *v22; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  System_IO_BinaryReader_o *v32; // [xsp+28h] [xbp-28h]

  if ( (byte_5971BF7 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF7 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v2 = OtherUserNewManager_TypeInfo;
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
  v6 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v6);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v9 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0);
  v32 = v9;
  if ( !v9 )
    sub_2213CDC(v10, v11);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                             v9,
                             v9->klass->vtable._22_ReadString.method);
  v14 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v12);
    v14 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
  {
    v5 = 0;
  }
  else
  {
    if ( !v32 )
      sub_2213CDC(0, v15);
    v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v32->klass->vtable._9_ReadBoolean.methodPtr)(
            v32,
            v32->klass->vtable._9_ReadBoolean.method);
    v18 = OtherUserNewManager_TypeInfo;
    if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v16);
      v18 = OtherUserNewManager_TypeInfo;
    }
    v18->static_fields->isContinueDevice = v17 & 1;
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v32->klass->vtable._15_ReadInt32.methodPtr)(
            v32,
            v32->klass->vtable._15_ReadInt32.method);
    if ( v19 >= 1 )
    {
      do
      {
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v32->klass->vtable._17_ReadInt64.methodPtr)(
                v32,
                v32->klass->vtable._17_ReadInt64.method);
        v22 = OtherUserNewManager_TypeInfo;
        if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v20);
          v22 = OtherUserNewManager_TypeInfo;
        }
        oldList = v22->static_fields->oldList;
        if ( !oldList
          || (items = oldList->fields._items,
              v25 = Method_System_Collections_Generic_List_long__Add__,
              ++oldList->fields._version,
              !items) )
        {
          sub_2213CDC(oldList, v20);
        }
        size = oldList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            oldList,
            v21,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          oldList->fields._size = size + 1;
          items->m_Items[size] = v21;
        }
        --v19;
      }
      while ( v19 );
    }
    v5 = 1;
  }
  if ( v32 )
  {
    klass = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_36:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  return v5;
}


void OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w22
  int32_t i; // w20
  OtherUserNewManager_c *v7; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v10; // x10
  __int64 namespaze_low; // x11

  if ( (byte_5971BF5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF5 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
    v3 = OtherUserNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v7 = OtherUserNewManager_TypeInfo;
      if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
        v7 = OtherUserNewManager_TypeInfo;
      }
      v3 = (OtherUserNewManager_c *)v7->static_fields->oldList;
      if ( !v3 )
        goto LABEL_23;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             i,
             (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
        return;
    }
    v3 = OtherUserNewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v3 = (OtherUserNewManager_c *)static_fields->oldList;
  if ( !v3
    || (name = v3->_1.name, v10 = Method_System_Collections_Generic_List_long__Add__, ++HIDWORD(v3->_1.namespaze), !name) )
  {
LABEL_23:
    sub_2213CDC(v3, method);
  }
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v3,
      userId,
      *(const MethodInfo_446C29C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userId;
  }
  static_fields->isModfiy = 1;
}


void OtherUserNewManager__SetOld_50403824(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v3; // x22
  int64_t oldList; // x0
  __int64 v5; // x8
  int v6; // w23
  int32_t v7; // w20
  OtherUserNewManager_c *v8; // x0
  int max_length; // w8
  int v10; // w10
  int64_t *v11; // x9
  unsigned __int64 v12; // x20
  int64_t *m_Items; // x24
  unsigned __int64 max_length_low; // x8
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  __int64 v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_5971BF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF6 = 1;
  }
  if ( userList )
  {
    LODWORD(v3) = userList->max_length;
    if ( (int)v3 >= 1 )
    {
      oldList = (int64_t)OtherUserNewManager_TypeInfo;
      if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
        oldList = (int64_t)OtherUserNewManager_TypeInfo;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 24);
        if ( v6 < 1 )
        {
LABEL_20:
          v12 = 0;
          if ( (int)v3 <= 1 )
            v3 = 1;
          else
            v3 = (unsigned int)v3;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length_low = LODWORD(userList->max_length);
            if ( v12 >= max_length_low )
              break;
            if ( m_Items[v12] >= 1 )
            {
              oldList = (int64_t)OtherUserNewManager_TypeInfo;
              if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
                oldList = (int64_t)OtherUserNewManager_TypeInfo;
                max_length_low = LODWORD(userList->max_length);
              }
              if ( v12 >= max_length_low )
                break;
              static_fields = *(struct OtherUserNewManager_StaticFields **)(oldList + 184);
              oldList = (int64_t)static_fields->oldList;
              if ( !oldList )
                goto LABEL_38;
              v16 = *(_QWORD *)(oldList + 16);
              method = (const MethodInfo *)m_Items[v12];
              v17 = Method_System_Collections_Generic_List_long__Add__;
              ++*(_DWORD *)(oldList + 28);
              if ( !v16 )
                goto LABEL_38;
              v18 = *(int *)(oldList + 24);
              if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  (System_Collections_Generic_List_long__o *)oldList,
                  (int64_t)method,
                  *(const MethodInfo_446C29C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                static_fields = OtherUserNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v18 + 1;
                *(_QWORD *)(v16 + 8 * v18 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( v3 == ++v12 )
              return;
          }
LABEL_37:
          sub_2213CE4(oldList);
        }
        v7 = 0;
        while ( 1 )
        {
          v8 = OtherUserNewManager_TypeInfo;
          if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
            v8 = OtherUserNewManager_TypeInfo;
          }
          oldList = (int64_t)v8->static_fields->oldList;
          if ( !oldList )
            break;
          oldList = System_Collections_Generic_List_long___get_Item(
                      (System_Collections_Generic_List_long__o *)oldList,
                      v7,
                      (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
          max_length = userList->max_length;
          v10 = v3;
          v11 = userList->m_Items;
          while ( 1 )
          {
            if ( !max_length )
              goto LABEL_37;
            if ( oldList == *v11 )
              break;
            --v10;
            ++v11;
            --max_length;
            if ( !v10 )
              goto LABEL_19;
          }
          *v11 = 0;
LABEL_19:
          if ( ++v7 == v6 )
            goto LABEL_20;
        }
      }
LABEL_38:
      sub_2213CDC(oldList, method);
    }
  }
}


bool OtherUserNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  OtherUserNewManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  OtherUserNewManager_c *v10; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w19
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t i; // w20
  OtherUserNewManager_c *v16; // x0
  System_Collections_Generic_List_long__o *v17; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5971BF8 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5971BF8 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v2 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
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
    v5 = OtherUserNewManager_TypeInfo;
    if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v5);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v8 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_76953012(v8, v7, 0);
    v10 = OtherUserNewManager_TypeInfo;
    v24 = v8;
    if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v9);
      v10 = OtherUserNewManager_TypeInfo;
    }
    oldList = v10->static_fields->oldList;
    if ( !oldList )
      sub_2213CDC(v10, v9);
    if ( !v8 )
      sub_2213CDC(0, v9);
    size = oldList->fields._size;
    v24->klass->vtable._22_Write.methodPtr();
    v24->klass->vtable._8_Write.methodPtr();
    if ( !v24 )
      sub_2213CDC(0, v13);
    v24->klass->vtable._17_Write.methodPtr();
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v16 = OtherUserNewManager_TypeInfo;
        if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v14);
          v16 = OtherUserNewManager_TypeInfo;
        }
        v17 = v16->static_fields->oldList;
        if ( !v17 )
          sub_2213CDC(0, v14);
        Item = System_Collections_Generic_List_long___get_Item(
                 v17,
                 i,
                 (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, const MethodInfo *))v24->klass->vtable._19_Write.methodPtr)(
          v24,
          Item,
          v24->klass->vtable._19_Write.method);
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
      v22 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v24, *(_QWORD *)(v22 + 8));
  }
  return 1;
}


System_String_o *OtherUserNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971BEE & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971BEE = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(12, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}