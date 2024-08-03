void __fastcall ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD5D9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__,
      v1);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v4);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6616/*"Fgo_20191115"*/, v6);
    byte_49FD5D9 = 1;
  }
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6616/*"Fgo_20191115"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    StringLiteral_6616/*"Fgo_20191115"*/,
    v2,
    v3);
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12);
}


void __fastcall ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantProfileEventJoinManager_c *v4; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FD5D2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__,
      v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v2);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v3);
    byte_49FD5D2 = 1;
  }
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v4->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_1B64324(v4);
  }
  size = infoList->fields._size;
  v7 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD5D1 & 1) == 0 )
  {
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_49FD5D1 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  ServantProfileEntity_array *Instance; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantProfileEntity_array **v15; // x20
  __int64 v16; // x1
  int max_length; // w8
  ServantProfileEntity_array *v18; // x21
  unsigned int v19; // w24
  ServantProfileEntity_o *v20; // x8
  ServantProfileEntity_array *v21; // x9
  int32_t svtId; // w26
  __int64 v23; // x22
  Il2CppArrayBounds *bounds; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  ServantProfileEventJoinManager_c *v28; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v30; // x21
  Il2CppObject *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_49FD5D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantProfileMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v6);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__, v9);
    sub_1B640C8(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v10);
    byte_49FD5D5 = 1;
  }
  v11 = sub_1B64314(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_27;
  *(_QWORD *)(v11 + 16) = servantEntity;
  v15 = (ServantProfileEntity_array **)(v11 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)servantEntity, v13, v14);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0LL);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v18 = Instance;
  if ( max_length < 1 )
    return 0;
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= max_length )
      sub_1B6432C(Instance, v16);
    v20 = v18->m_Items[v19];
    if ( !v20 )
      goto LABEL_27;
    v21 = *v15;
    if ( !*v15 )
      goto LABEL_27;
    svtId = v20->fields.svtId;
    bounds = v21->bounds;
    v23 = *(_QWORD *)&v21->max_length;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v32.fields.fakeValue = v23;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v32,
                                               0LL);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v18->max_length;
    if ( (int)++v19 >= max_length )
      return 0;
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = *v15;
    if ( *v15 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_27:
    sub_1B64324(Instance);
  }
  v28 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v28 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v28->static_fields->infoList;
  v30 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                        v26,
                                        v27);
  System_Predicate_object____ctor(
    v30,
    (Il2CppObject *)v11,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_27;
  v31 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v31 || BYTE4(v31[1].klass) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD5D0 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD5D0 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_49FD5D3 & 1) == 0 )
  {
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_49FD5D3 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileEventJoinManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  ServantProfileEventJoinManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  ServantProfileEventJoinManager_c *v16; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v18; // x1
  int v19; // w21
  char v20; // w20
  ServantProfileEventJoinManager_c *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w20
  ServantProfileEventJoinManager_c *v25; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  __int64 v27; // x22
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_49FD5D7 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v5);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v6);
    byte_49FD5D7 = 1;
  }
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  v7->static_fields->isModified = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v10);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v15 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v13, v14);
  System_IO_BinaryReader___ctor(v15, v12, 0LL);
  v16 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v16 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v15 )
    sub_1B64324(v16);
  SAVE_DATA_VERSION = v16->static_fields->SAVE_DATA_VERSION;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                             v15,
                             v15->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v18, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
            v15,
            v15->klass->vtable._10_ReadByte.methodPtr);
    v21 = ServantProfileEventJoinManager_TypeInfo;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v21 = ServantProfileEventJoinManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
            v15,
            v15->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v24 >= 1 )
    {
      do
      {
        v25 = ServantProfileEventJoinManager_TypeInfo;
        if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v25 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v25->static_fields->infoList;
        v27 = sub_1B64314(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v22, v23);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v27 )
          sub_1B64324(v28);
        *(_DWORD *)(v27 + 16) = v28;
        v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
                v15,
                v15->klass->vtable._10_ReadByte.methodPtr);
        *(_BYTE *)(v27 + 20) = v29 & 1;
        if ( !infoList )
          sub_1B64324(v29);
        items = infoList->fields._items;
        v33 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1B64324(v29);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v27,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v27, v30, v31);
        }
        --v24;
      }
      while ( v24 );
    }
    v19 = 8;
  }
  klass = v15->klass;
  v37 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v39 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v15, *(_QWORD *)(v39 + 8));
  return (v19 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  ServantProfileEventJoinManager_c *v15; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v18; // x22
  bool v19; // w24
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  ServantProfileEventJoinManager_c *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_49FD5D6 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v5);
    sub_1B640C8(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v6);
    sub_1B640C8(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v7);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v8);
    sub_1B640C8(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v9);
    sub_1B640C8(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v10);
    byte_49FD5D6 = 1;
  }
  v11 = sub_1B64314(
          ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo,
          isNeedToChecEventJoinNameExist,
          method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_DWORD *)(v11 + 16) = servantId;
  v15 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v15 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  v18 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                        v13,
                                        v14);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_17;
  v19 = isNeedToChecEventJoinNameExist;
  v20 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v20 )
  {
    BYTE4(v20[1].klass) = v19;
    return;
  }
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v23 = ServantProfileEventJoinManager_TypeInfo;
  }
  v24 = (System_Collections_Generic_List_object__o *)v23->static_fields->infoList;
  v25 = sub_1B64314(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v21, v22);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25
    || (v28 = *(_DWORD *)(v11 + 16), *(_BYTE *)(v25 + 20) = v19, *(_DWORD *)(v25 + 16) = v28, !v24)
    || (items = v24->fields._items,
        v30 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v24->fields._version,
        !items) )
  {
LABEL_17:
    sub_1B64324(v12);
  }
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), v25, v26, v27);
  }
}


void __fastcall ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v11; // x19
  UserServantCollectionMaster_o *v12; // x20
  DataManager_o *v13; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v15; // x26
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v19; // x27
  int v20; // w8
  __int64 v21; // x21
  bool v22; // w22
  int v23; // w29
  __int64 v24; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  int v27; // w8
  DataManager_o *v28; // x24
  bool v29; // w29
  int v30; // w26
  EventServantEntity_o *v31; // x25
  int32_t v32; // w24
  const MethodInfo *v33; // x2
  bool IsEventJoin; // w23
  int max_length; // w8
  int v36; // w22
  char v37; // w25
  UserServantCollectionEntity_o *v38; // x8
  __int64 v39; // x23
  __int64 v40; // x24
  int32_t v41; // w23
  int32_t v42; // w23
  ServantProfileEventJoinManager_c *v43; // x0
  EventServantMaster_o *v44; // [xsp+0h] [xbp-70h]
  DataManager_o *v45; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_49FD5D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantProfileMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&EventServantEntity_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD5D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v11 )
    goto LABEL_60;
  v12 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v11, 0LL);
  if ( !v12
    || (v13 = Instance,
        List = UserServantCollectionMaster__getList(v12, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v15 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0LL)) == 0LL) )
  {
LABEL_60:
    sub_1B64324(Instance);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v19 = 0LL;
    v44 = v15;
    v45 = Instance;
    do
    {
      if ( v19 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_61;
      if ( !v13 )
        goto LABEL_60;
      v20 = (int)v13->fields.m_CancellationTokenSource;
      v21 = *((_QWORD *)&Instance->fields._DispLog + v19);
      v22 = v20 > 0;
      if ( v20 < 1 )
        goto LABEL_38;
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v20 )
          goto LABEL_61;
        v24 = *((_QWORD *)&v13->fields._DispLog + v23);
        if ( !v24 )
          goto LABEL_60;
        v26 = *(_QWORD *)(v24 + 80);
        v25 = *(_QWORD *)(v24 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v26;
        *(_QWORD *)&v46.fields.fakeValue = v25;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
        if ( !v21 )
          goto LABEL_60;
        v16 = (unsigned int)Instance;
        if ( (_DWORD)Instance == *(_DWORD *)(v21 + 16) )
          break;
        v20 = (int)v13->fields.m_CancellationTokenSource;
        v22 = ++v23 < v20;
        if ( v23 >= v20 )
          goto LABEL_38;
      }
      if ( !v15 )
        goto LABEL_60;
      Instance = (DataManager_o *)EventServantMaster__GetEntities(v15, (int32_t)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      v27 = (int)Instance->fields.m_CancellationTokenSource;
      v28 = Instance;
      v29 = v27 > 0;
      if ( v27 >= 1 )
      {
        v30 = 0;
        while ( v30 < (unsigned int)v27 )
        {
          Instance = (DataManager_o *)EventServantEntity_TypeInfo;
          v31 = (EventServantEntity_o *)*((_QWORD *)&v28->fields._DispLog + v30);
          if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
          if ( !v31 )
            goto LABEL_60;
          Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                        v31,
                                        EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v27 = (int)v28->fields.m_CancellationTokenSource;
            v29 = ++v30 < v27;
            if ( v30 < v27 )
              continue;
          }
          goto LABEL_35;
        }
LABEL_61:
        sub_1B6432C(Instance, v16);
      }
LABEL_35:
      v32 = *(_DWORD *)(v21 + 16);
      IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v24, 0LL);
      if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v32, IsEventJoin && !v29, v33);
      v15 = v44;
      if ( !v22 )
      {
LABEL_38:
        if ( !List )
          goto LABEL_60;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_52;
        v36 = 0;
        v37 = 0;
        do
        {
          if ( v36 >= (unsigned int)max_length )
            goto LABEL_61;
          v38 = List->m_Items[v36];
          if ( !v38 )
            goto LABEL_60;
          v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
          v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v40;
          *(_QWORD *)&v47.fields.fakeValue = v39;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
          if ( !v21 )
            goto LABEL_60;
          v41 = *(_DWORD *)(v21 + 16);
          if ( (_DWORD)Instance != v41 )
          {
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v41, 0, v17);
            v37 = 1;
          }
          max_length = List->max_length;
          ++v36;
        }
        while ( v36 < max_length );
        if ( (v37 & 1) == 0 )
        {
LABEL_52:
          if ( !v21 )
            goto LABEL_60;
          v42 = *(_DWORD *)(v21 + 16);
          if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v42, 1, v17);
        }
      }
      Instance = v45;
      ++v19;
      LODWORD(m_CancellationTokenSource) = v45->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v19 < (int)m_CancellationTokenSource );
  }
  v43 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v43);
}


bool __fastcall ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantProfileEventJoinManager_c *v10; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v12; // x0
  ServantProfileEventJoinManager_c *v14; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_IO_BinaryWriter_o *v19; // x19
  long double inited; // q0
  ServantProfileEventJoinManager_c *v21; // x0
  __int64 v22; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  System_Collections_Generic_List_object__o *v24; // x0
  _BOOL8 v25; // x0
  Il2CppObject *current; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FD5D8 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v9);
    byte_49FD5D8 = 1;
  }
  v10 = ServantProfileEventJoinManager_TypeInfo;
  memset(&v32, 0, sizeof(v32));
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( !static_fields->isModified )
    return 0;
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  }
  static_fields->isModified = 0;
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( v12->static_fields->UseMock )
    return 0;
  v14 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v14);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v19 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v17, v18);
  System_IO_BinaryWriter___ctor_61613552(v19, v16, 0LL);
  v21 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  if ( !v19 )
    sub_1B64324(v21);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v19->klass->vtable._22_Write.method)(
    v19,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v19->klass[1]._1.image,
    inited);
  v22 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v19->klass->vtable._8_Write.method)(
          v19,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v19->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_1B64324(v22);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
    v19,
    (unsigned int)infoList->fields._size,
    v19->klass->vtable._18_Write.methodPtr);
  v24 = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v24 )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v24,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v25 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B64324(v25);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
      v19,
      LODWORD(v32.fields._current[1].klass),
      v19->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._8_Write.method)(
      v19,
      BYTE4(current[1].klass),
      v19->klass->vtable._9_Write.methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  klass = v19->klass;
  v28 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_27;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v30 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v19, *(_QWORD *)(v30 + 8));
  return 1;
}


void __fastcall ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileEventJoinManager___c__DisplayClass10_0___GetIsNeedToCheckEventJoinName_b__0(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  ServantProfileEventJoinManager___c__DisplayClass10_0_o *v4; // x20
  struct ServantEntity_o *servantEntity; // x8
  int32_t servantId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_49FD5DA & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_1B640C8(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       i);
    byte_49FD5DA = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_1B64324(this);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
}


void __fastcall ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileEventJoinManager___c__DisplayClass11_0___SetIsNeedToCheckEventJoinNameExist_b__0(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  if ( !i )
    sub_1B64324(this);
  return i->fields.servantId == this->fields.servantId;
}