void ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971DBF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&StringLiteral_6961/*"Fgo_20191115"*/);
    byte_5971DBF = 1;
  }
  v7 = StringLiteral_6961/*"Fgo_20191115"*/;
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6961/*"Fgo_20191115"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo;
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5971DB8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    byte_5971DB8 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v2->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_2213CDC(v2, v1);
  }
  size = infoList->fields._size;
  v5 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModified = 1;
}


void ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5971DB7 & 1) == 0 )
  {
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    byte_5971DB7 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


bool ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x19
  ServantProfileEntity_array *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ServantProfileEntity_array **v12; // x20
  int max_length; // w8
  ServantProfileEntity_array *v14; // x21
  unsigned int v15; // w25
  ServantProfileEntity_o *v16; // x8
  ServantProfileEntity_array *v17; // x9
  Il2CppArrayBounds *bounds; // x22
  il2cpp_array_size_t v19; // x23
  int32_t svtId; // w26
  ServantProfileEventJoinManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5971DBB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__);
    sub_2213A60(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
    byte_5971DBB = 1;
  }
  v3 = sub_2213CCC(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 16) = servantEntity;
  v12 = (ServantProfileEntity_array **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)servantEntity, v6, v7, v8, v9, v10, v11);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
      sub_2213CE4(Instance);
    v16 = v14->m_Items[v15];
    if ( !v16 )
      goto LABEL_27;
    v17 = *v12;
    if ( !*v12 )
      goto LABEL_27;
    bounds = v17->bounds;
    v19 = v17->max_length;
    svtId = v16->fields.svtId;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v26.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v26.fields.fakeValue = v19;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v14->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  Instance = *v12;
  if ( !*v12 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0) )
  {
    Instance = *v12;
    if ( *v12 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0);
LABEL_27:
    sub_2213CDC(Instance, v5);
  }
  v22 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v5);
    v22 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
  v24 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0);
  if ( !infoList )
    goto LABEL_27;
  v25 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v25 || BYTE4(v25[1].klass) != 0;
}


System_String_o *ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971DB6 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971DB6 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(28, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_5971DB9 & 1) == 0 )
  {
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    byte_5971DB9 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v2);
}


bool ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  ServantProfileEventJoinManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x1
  ServantProfileEventJoinManager_c *v11; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v13; // x1
  __int64 v14; // x1
  char v15; // w19
  ServantProfileEventJoinManager_c *v16; // x0
  __int64 v17; // x1
  int v18; // w19
  ServantProfileEventJoinManager_c *v19; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int *p_offset; // x10
  __int64 v39; // x0
  System_IO_BinaryReader_o *v41; // [xsp+28h] [xbp-38h]

  if ( (byte_5971DBD & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    byte_5971DBD = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModified = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v6 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v6);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v9 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0);
  v11 = ServantProfileEventJoinManager_TypeInfo;
  v41 = v9;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v10);
    v11 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v9 )
    sub_2213CDC(v11, v10);
  SAVE_DATA_VERSION = v11->static_fields->SAVE_DATA_VERSION;
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                             v9,
                             v9->klass->vtable._22_ReadString.method);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v13, 0) )
  {
    v5 = 0;
  }
  else
  {
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._9_ReadBoolean.methodPtr)(
            v9,
            v9->klass->vtable._9_ReadBoolean.method);
    v16 = ServantProfileEventJoinManager_TypeInfo;
    if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v14);
      v16 = ServantProfileEventJoinManager_TypeInfo;
    }
    v16->static_fields->isContinueDevice = v15 & 1;
    if ( !v41 )
      sub_2213CDC(0, v14);
    v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v41->klass->vtable._15_ReadInt32.methodPtr)(
            v41,
            v41->klass->vtable._15_ReadInt32.method);
    if ( v18 >= 1 )
    {
      do
      {
        v19 = ServantProfileEventJoinManager_TypeInfo;
        if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v17);
          v19 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v19->static_fields->infoList;
        v21 = sub_2213CCC(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v41->klass->vtable._15_ReadInt32.methodPtr)(
                v41,
                v41->klass->vtable._15_ReadInt32.method);
        if ( !v21 )
          sub_2213CDC(v22, v23);
        *(_DWORD *)(v21 + 16) = v22;
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v41->klass->vtable._9_ReadBoolean.methodPtr)(
                v41,
                v41->klass->vtable._9_ReadBoolean.method);
        *(_BYTE *)(v21 + 20) = v24 & 1;
        if ( !infoList
          || (items = infoList->fields._items,
              v33 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
              ++infoList->fields._version,
              !items) )
        {
          sub_2213CDC(v24, v25);
        }
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v21,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), v21, v26, v27, v28, v29, v30, v31);
        }
        --v18;
      }
      while ( v18 );
    }
    v5 = 1;
  }
  if ( v41 )
  {
    klass = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_37;
      }
      v39 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_37:
      v39 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return v5;
}


void ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  ServantProfileEventJoinManager_c *v8; // x0
  int v9; // w8
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__c *v11; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v13; // x22
  bool v14; // w24
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  ServantProfileEventJoinManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int v26; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_5971DBC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_2213A60(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__);
    sub_2213A60(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
    byte_5971DBC = 1;
  }
  v5 = sub_2213CCC(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  v8 = ServantProfileEventJoinManager_TypeInfo;
  v9 = *(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v5 + 16) = servantId;
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  static_fields->isModified = 1;
  v13 = (System_Predicate_object__o *)sub_2213CCC(v11);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0);
  if ( !infoList )
    goto LABEL_17;
  v14 = isNeedToChecEventJoinNameExist;
  v15 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v15 )
  {
    BYTE4(v15[1].klass) = v14;
    return;
  }
  v17 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v16);
    v17 = ServantProfileEventJoinManager_TypeInfo;
  }
  v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
  v19 = sub_2213CCC(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19
    || (v26 = *(_DWORD *)(v5 + 16), *(_BYTE *)(v19 + 20) = v14, *(_DWORD *)(v19 + 16) = v26, !v18)
    || (items = v18->fields._items,
        v28 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v18->fields._version,
        !items) )
  {
LABEL_17:
    sub_2213CDC(v6, v7);
  }
  size = v18->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v19,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v19, v20, v21, v22, v23, v24, v25);
  }
}


void ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v4; // x19
  UserServantCollectionMaster_o *v5; // x20
  DataManager_o *v6; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v8; // x29
  const MethodInfo *v9; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v11; // x27
  int v12; // w8
  __int64 v13; // x21
  unsigned int v14; // w22
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  int max_length; // w8
  int v19; // w22
  char v20; // w25
  UserServantCollectionEntity_o *v21; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w23
  int32_t v25; // w23
  int v26; // w8
  DataManager_o *v27; // x24
  bool v28; // w22
  int v29; // w29
  EventServantEntity_o *v30; // x25
  int32_t v31; // w24
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  bool IsEventJoin; // w23
  ServantProfileEventJoinManager_c *v35; // x0
  EventServantMaster_o *v36; // [xsp+0h] [xbp-70h]
  DataManager_o *v37; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_5971DBA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&EventServantEntity_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971DBA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v4 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v4 )
    goto LABEL_59;
  v5 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v4, 0);
  if ( !v5
    || (v6 = Instance,
        List = UserServantCollectionMaster__getList(v5, 2, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v8 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0)) == 0) )
  {
LABEL_59:
    sub_2213CDC(Instance, v2);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    v36 = v8;
    v37 = Instance;
    do
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_60;
      if ( !v6 )
        goto LABEL_59;
      v12 = (int)v6->fields.m_CancellationTokenSource;
      v13 = *((_QWORD *)&Instance->fields._DispLog + v11);
      if ( v12 < 1 )
      {
LABEL_24:
        if ( !List )
          goto LABEL_59;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_38;
        v19 = 0;
        v20 = 0;
        do
        {
          if ( v19 >= (unsigned int)max_length )
            goto LABEL_60;
          v21 = List->m_Items[v19];
          if ( !v21 )
            goto LABEL_59;
          v22 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v2);
          *(_QWORD *)&v39.fields.currentCryptoKey = v22;
          *(_QWORD *)&v39.fields.fakeValue = v23;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0);
          if ( !v13 )
            goto LABEL_59;
          v24 = *(_DWORD *)(v13 + 16);
          if ( (_DWORD)Instance != v24 )
          {
            if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v2);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v24, 0, v9);
            v20 = 1;
          }
          max_length = List->max_length;
          ++v19;
        }
        while ( v19 < max_length );
        if ( (v20 & 1) == 0 )
        {
LABEL_38:
          if ( !v13 )
            goto LABEL_59;
          v25 = *(_DWORD *)(v13 + 16);
          if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v2);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v25, 1, v9);
        }
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= v12 )
            goto LABEL_60;
          v15 = *((_QWORD *)&v6->fields._DispLog + (int)v14);
          if ( !v15 )
            goto LABEL_59;
          v16 = *(_QWORD *)(v15 + 80);
          v17 = *(_QWORD *)(v15 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v2);
          *(_QWORD *)&v38.fields.currentCryptoKey = v16;
          *(_QWORD *)&v38.fields.fakeValue = v17;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
          if ( !v13 )
            goto LABEL_59;
          v2 = (unsigned int)Instance;
          if ( (_DWORD)Instance == *(_DWORD *)(v13 + 16) )
            break;
          v12 = (int)v6->fields.m_CancellationTokenSource;
          if ( (int)++v14 >= v12 )
            goto LABEL_24;
        }
        if ( !v8 )
          goto LABEL_59;
        Instance = (DataManager_o *)EventServantMaster__GetEntities(v8, (int32_t)Instance, 0);
        if ( !Instance )
          goto LABEL_59;
        v26 = (int)Instance->fields.m_CancellationTokenSource;
        v27 = Instance;
        v28 = v26 < 1;
        if ( v26 >= 1 )
        {
          v29 = 0;
          while ( v29 < (unsigned int)v26 )
          {
            Instance = (DataManager_o *)EventServantEntity_TypeInfo;
            v30 = (EventServantEntity_o *)*((_QWORD *)&v27->fields._DispLog + v29);
            if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v2);
            if ( !v30 )
              goto LABEL_59;
            Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                          v30,
                                          EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                          0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v26 = (int)v27->fields.m_CancellationTokenSource;
              v28 = ++v29 >= v26;
              if ( v29 < v26 )
                continue;
            }
            goto LABEL_52;
          }
LABEL_60:
          sub_2213CE4(Instance);
        }
LABEL_52:
        v31 = *(_DWORD *)(v13 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v15, 0);
        if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v32);
        ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v31, v28 && IsEventJoin, v33);
        v8 = v36;
      }
      Instance = v37;
      ++v11;
      LODWORD(m_CancellationTokenSource) = v37->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v11 < (int)m_CancellationTokenSource );
  }
  v35 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v2);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v35);
}


bool ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  int v3; // w8
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v5; // x0
  ServantProfileEventJoinManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  long double v12; // q0
  ServantProfileEventJoinManager_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_IO_BinaryWriter_o *v22; // x19
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  __int64 v28; // [xsp+20h] [xbp-60h]
  System_IO_BinaryWriter_o **v29; // [xsp+28h] [xbp-58h]
  int v30; // [xsp+38h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+40h] [xbp-40h] BYREF
  System_IO_BinaryWriter_o *v32; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_5971DBE & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    byte_5971DBE = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  v32 = 0;
  memset(&v31, 0, sizeof(v31));
  v3 = *(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1);
  v30 = 0;
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModified )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  }
  v5 = ManagerConfig_TypeInfo;
  static_fields->isModified = 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v10 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v10, v9, 0);
  v13 = ServantProfileEventJoinManager_TypeInfo;
  v32 = v10;
  v28 = 0;
  v29 = &v32;
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v11);
  if ( !v10 )
    sub_2213CDC(v13, v11);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v10->klass->vtable._22_Write.methodPtr)(
    v10,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v10->klass->vtable._22_Write.method,
    v12);
  if ( !v32 )
    sub_2213CDC(0, v14);
  v15 = ((__int64 (*)(void))v32->klass->vtable._8_Write.methodPtr)();
  if ( !ServantProfileEventJoinManager_TypeInfo->static_fields->infoList )
    sub_2213CDC(v15, v16);
  if ( !v32 )
    sub_2213CDC(0, v16);
  v32->klass->vtable._17_Write.methodPtr();
  infoList = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_2213CDC(0, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    infoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v31 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v31;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v19 )
      break;
    if ( !v31.fields._current )
      sub_2213CDC(v19, v20);
    if ( !v32 )
      sub_2213CDC(0, v20);
    v32->klass->vtable._17_Write.methodPtr();
    if ( !v32 )
      sub_2213CDC(0, v21);
    v32->klass->vtable._8_Write.methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  v22 = *v29;
  if ( *v29 )
  {
    klass = v22->klass;
    v24 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_32;
      }
      v26 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_32:
      v26 = sub_224BC3C(*v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
  }
  if ( v28 )
    sub_2213CD4(v28);
  return 1;
}


void ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileEventJoinManager___c__DisplayClass10_0___GetIsNeedToCheckEventJoinName_b__0(
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
  if ( (byte_5971DC0 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DC0 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0 )
    sub_2213CDC(this, i);
  servantId = i->fields.servantId;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, i);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
}


void ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileEventJoinManager___c__DisplayClass11_0___SetIsNeedToCheckEventJoinNameExist_b__0(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  if ( !i )
    sub_2213CDC(this, 0);
  return i->fields.servantId == this->fields.servantId;
}