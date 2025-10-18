void ServantCommentManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantCommentManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantCommentManager_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ServantCommentManager_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct ServantCommentManager_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  struct ServantCommentManager_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C44387 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&StringLiteral_4373/*"ChapterProgress"*/);
    sub_1C37058(&StringLiteral_6814/*"ForceReadNewProfiles"*/);
    sub_1C37058(&StringLiteral_10088/*"OverwriteUIVersion"*/);
    sub_1C37058(&StringLiteral_6670/*"Fgo_20150511_1"*/);
    sub_1C37058(&StringLiteral_6674/*"Fgo_20160620_1"*/);
    sub_1C37058(&StringLiteral_14729/*"UIChangeType"*/);
    byte_4C44387 = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6670/*"Fgo_20150511_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantCommentManager_TypeInfo->static_fields, StringLiteral_6670/*"Fgo_20150511_1"*/, v1, v2);
  v3 = StringLiteral_6674/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6674/*"Fgo_20160620_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SAVE_DATA_VERSION, v3, v5, v6);
  v7 = StringLiteral_4373/*"ChapterProgress"*/;
  v8 = ServantCommentManager_TypeInfo->static_fields;
  v8->SAVE_KEY = (struct System_String_o *)StringLiteral_4373/*"ChapterProgress"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->SAVE_KEY, v7, v9, v10);
  v11 = StringLiteral_14729/*"UIChangeType"*/;
  v12 = ServantCommentManager_TypeInfo->static_fields;
  v12->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14729/*"UIChangeType"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->UI_CHANGE_TYPE_KEY, v11, v13, v14);
  v15 = StringLiteral_10088/*"OverwriteUIVersion"*/;
  v16 = ServantCommentManager_TypeInfo->static_fields;
  v16->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10088/*"OverwriteUIVersion"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->OVERWIRTE_UI_VERSION_KEY, v15, v17, v18);
  v19 = StringLiteral_6814/*"ForceReadNewProfiles"*/;
  v20 = ServantCommentManager_TypeInfo->static_fields;
  v20->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6814/*"ForceReadNewProfiles"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->FORCE_READ_NEW_COMMENTS_KEY, v19, v21, v22);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v24 = ServantCommentManager_TypeInfo->static_fields;
  v24->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->openList, (int32_t)v23, v25, v26);
}


void ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C44372 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44372 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  openList = v1->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantCommentManager_TypeInfo;
    openList = ServantCommentManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1C372B4(v1);
  }
  size = openList->fields._size;
  v4 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0);
    v1 = ServantCommentManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantCommentManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModfiy = 1;
}


void ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  _BOOL8 v4; // x0

  if ( (byte_4C44370 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44370 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v1);
  ServantCommentManager__ClearSaveDataList(v2);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 257;
  v4 = ServantCommentManager__WriteData(v3);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v4);
}


void ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C4436E & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4436E = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0);
}


void ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C4436F & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4436F = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  System_Object_array *Entitys; // x0
  Il2CppObject *MasterData_object; // x0
  long double v6; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *v10; // x19
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v12; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v14; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v17; // x21
  void *v18; // x22
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x21
  System_Int32_array *v22; // x22
  int32_t v23; // w23
  ServantCommentManager_c *v24; // x0
  System_Int32_array *v25; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C4437D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C4437D = 1;
  }
  v25 = 0;
  idList = 0;
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C8776C(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C(v1);
  Entitys = **(System_Object_array ***)(v3 + 184);
  if ( !Entitys )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C(v6);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(v6);
  Entitys = **(System_Object_array ***)(v9 + 184);
  if ( !Entitys
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys = DataMasterBase_object__object__object___getEntitys(
                     v7,
                     (const MethodInfo_33A4DDC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__)) == 0) )
  {
LABEL_34:
    sub_1C372B4(Entitys);
  }
  max_length = Entitys->max_length;
  v12 = Entitys;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C372BC(Entitys);
      v14 = v12->m_Items[i];
      if ( v14 )
      {
        monitor = v14[1].monitor;
        klass = v14[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v27.fields.fakeValue = klass;
        Entitys = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0);
        if ( !v10 )
          goto LABEL_34;
        Entitys = (System_Object_array *)ServantCommentMaster__GetNewList(
                                           (ServantCommentMaster_o *)v10,
                                           &idList,
                                           &v25,
                                           (int32_t)Entitys,
                                           0);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
        {
          v18 = v14[1].monitor;
          v17 = v14[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = v18;
          *(_QWORD *)&v28.fields.fakeValue = v17;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0);
          v21 = v25;
          v22 = idList;
          v23 = v19;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_43471008(v23, v22, v21, v20);
        }
      }
      LODWORD(max_length) = v12->max_length;
    }
  }
  v24 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v24);
}


System_Int32_array *ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *String; // x19
  Il2CppObject *v3; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4C44374 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_int___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&StringLiteral_25245/*"{}"*/);
    byte_4C44374 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v1->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25245/*"{}"*/,
                             0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v4 = v3;
  if ( !v3 )
    sub_1C372B4(0);
  System_Array__Sort_int_(
    (System_Int32_array *)v3[1].klass,
    (const MethodInfo_30B408C *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v4[1].klass;
}


System_Collections_Generic_List_ServantCommentEntity__o *ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  DataManager_o *Instance; // x0
  int32_t v9; // w23
  System_Collections_Generic_List_object__o *v10; // x22
  const MethodInfo *v11; // x3
  int32_t v12; // w20
  DataManager_o *v13; // x21
  _BOOL8 v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C4437E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78064360);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4437E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                0);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_31;
  }
  v9 = v7->fields._size - 1;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    v9,
                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v9,
          (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v9 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C372B4(Instance);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78064360);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v11);
    if ( !Instance )
      goto LABEL_31;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v12 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v12,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v10 )
          goto LABEL_31;
        v13 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          v10,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v17 = v16;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v14 )
            break;
          if ( !v13 )
            sub_1C372B4(v14);
          if ( !v17.fields._current )
            sub_1C372B4(v14);
          if ( HIDWORD(v13->fields.m_CachedPtr) == HIDWORD(v17.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v12,
              (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v12 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


System_Collections_Generic_List_ServantCommentEntity__o *ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
        int32_t svtId,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  DataManager_o *Instance; // x0
  int32_t v9; // w23
  System_Collections_Generic_List_object__o *v10; // x22
  const MethodInfo *v11; // x3
  int32_t v12; // w20
  DataManager_o *v13; // x21
  _BOOL8 v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C44381 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78064360);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C44381 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityListWithImageList(
                                (ServantCommentMaster_o *)Instance,
                                svtId,
                                imageLimit,
                                9,
                                1,
                                0);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_31;
  }
  v9 = v7->fields._size - 1;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    v9,
                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v9,
          (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v9 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C372B4(Instance);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78064360);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v11);
    if ( !Instance )
      goto LABEL_31;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v12 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v12,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v10 )
          goto LABEL_31;
        v13 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          v10,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v17 = v16;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v14 )
            break;
          if ( !v13 )
            sub_1C372B4(v14);
          if ( !v17.fields._current )
            sub_1C372B4(v14);
          if ( HIDWORD(v13->fields.m_CachedPtr) == HIDWORD(v17.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v12,
              (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v12 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


int32_t ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C44386 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44386 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0);
}


int32_t ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C44385 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44385 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1);
}


int32_t ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C44384 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44384 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->UI_CHANGE_TYPE_KEY, 0, 0);
}


void ServantCommentManager__Initialize(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C44371 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44371 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ReadData((const MethodInfo *)v1);
}


bool ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4C4437C & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4437C = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0) == 1;
}


bool ServantCommentManager__IsOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t readJudgeKey,
        bool isImageLimit,
        const MethodInfo *method)
{
  void *Master_object; // x0
  ServantCommentManager_c *v11; // x8
  ServantCommentMaster_o *v12; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int32_t v14; // w25
  _QWORD *v15; // x26
  int v16; // w8
  int v17; // w19
  int32_t v18; // w27
  int size; // [xsp+0h] [xbp-70h]
  ServantCommentEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C44376 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44376 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  v11 = ServantCommentManager_TypeInfo;
  v12 = (ServantCommentMaster_o *)Master_object;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v11 = ServantCommentManager_TypeInfo;
  }
  openList = v11->static_fields->openList;
  if ( !openList )
LABEL_37:
    sub_1C372B4(Master_object);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantCommentManager_TypeInfo;
    }
    Master_object = v11->static_fields->openList;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Master_object,
                      v14,
                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !Master_object )
      goto LABEL_37;
    v15 = Master_object;
    if ( *((_DWORD *)Master_object + 4) == svtId )
    {
      Master_object = (void *)*((_QWORD *)Master_object + 3);
      if ( !Master_object )
        goto LABEL_37;
      v16 = *((_DWORD *)Master_object + 6);
      v17 = v16 - 1;
      if ( v16 >= 1 )
        break;
    }
LABEL_33:
    if ( ++v14 == size )
      return 0;
    v11 = ServantCommentManager_TypeInfo;
  }
  v18 = 0;
  while ( 1 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Master_object,
           v18,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v15[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v18,
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v15[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v18,
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
        && !isImageLimit )
      {
        return 1;
      }
      if ( (readJudgeKey & 0x80000000) == 0 )
      {
        Master_object = (void *)v15[4];
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)Master_object,
                                  v18,
                                  (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v12 )
          goto LABEL_37;
        if ( ServantCommentMaster__TryGetEntity(v12, &entity, svtId, svtCommentId, (int32_t)Master_object, 0) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_37;
          if ( ServantCommentEntity__GetReadJudgeKey(entity, 0) == readJudgeKey )
            return 1;
        }
      }
    }
    if ( v17 == v18 )
      goto LABEL_33;
    Master_object = (void *)v15[3];
    ++v18;
    if ( !Master_object )
      goto LABEL_37;
  }
}


bool ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C4437F & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4437F = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_43473316(svt_id, oldFriendShipRank, -1, v3);
}


bool ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0

  if ( (byte_4C44382 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C44382 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1C372B4(0);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool ServantCommentManager__IsOpenByServantFriendShip_43473316(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C44380 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C44380 = 1;
  }
  entity = 0;
  if ( limitCount == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
LABEL_22:
      sub_1C372B4(Instance);
    Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  svt_id,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_22;
      maxLimitCount = entity->fields.maxLimitCount;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_22;
      limitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                     (ServantLimitImageMaster_o *)Instance,
                     svt_id,
                     maxLimitCount,
                     0);
    }
    else
    {
      limitCount = -1;
    }
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                svt_id,
                                oldFriendShipRank,
                                limitCount,
                                method);
  if ( !Instance )
    goto LABEL_22;
  return SLODWORD(Instance->fields.m_CancellationTokenSource) > 0;
}


void ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0
  ServantCommentManager_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C44373 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C44373 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
    {
      sub_1C372B4(Instance);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0);
    v3 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v3 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v3[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v3);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v1);
  if ( ServantCommentManager__IsForceReadNewComments(v4) )
  {
    v5 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v5);
    ServantCommentManager__SetForceReadNewComments(0, v6);
  }
}


bool ServantCommentManager__ReadData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  bool v3; // w21
  ServantCommentManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  ServantCommentManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  System_String_o *v10; // x20
  ServantCommentManager_c *v11; // x0
  char v12; // w20
  ServantCommentManager_c *v13; // x0
  int v14; // w20
  int i; // w25
  int v16; // w22
  __int64 v17; // x21
  __int64 v18; // x0
  System_Collections_Generic_List_int__o *v19; // x23
  System_Collections_Generic_List_int__o **v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_int__o *v23; // x24
  System_Collections_Generic_List_int__o **v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // w24
  int32_t v30; // w1
  System_Collections_Generic_List_int__o *v31; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v35; // x0
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  ServantCommentManager_c *v39; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8
  ServantCommentManager_c *v45; // x0
  char v46; // w20
  ServantCommentManager_c *v47; // x0
  int v48; // w20
  System_Collections_Generic_List_int__c **v49; // x24
  int j; // w28
  int v51; // w22
  __int64 v52; // x21
  __int64 v53; // x0
  System_Collections_Generic_List_int__o *v54; // x23
  System_Collections_Generic_List_int__o **v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_List_int__c **v58; // x27
  System_Collections_Generic_List_int__o *v59; // x24
  System_Collections_Generic_List_int__o **v60; // x23
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int v65; // w24
  int32_t v66; // w26
  int32_t v67; // w25
  System_Collections_Generic_List_int__o *v68; // x0
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  System_Collections_Generic_List_int__o *v72; // x0
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  ServantCommentManager_c *v76; // x0
  System_Collections_Generic_List_object__o *v77; // x0
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v83; // x9
  int32_t *p_offset; // x10
  __int64 v85; // x0
  ServantCommentManager_c *v86; // x0

  if ( (byte_4C44379 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4C44379 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v86 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v86);
    return 0;
  }
  v6 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C372B4(v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v11 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v11 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v11->static_fields->SAVE_DATA_OLD_VERSION, v10, 0) )
  {
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v13 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v13 = ServantCommentManager_TypeInfo;
    }
    v13->static_fields->isContinueDevice = v12 & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v14 >= 1 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v17 = sub_1C372A4(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0);
        if ( !v17 )
          sub_1C372B4(v18);
        *(_DWORD *)(v17 + 16) = v16;
        v19 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v17 + 24) = v19;
        v20 = (System_Collections_Generic_List_int__o **)(v17 + 24);
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v19, v21, v22);
        v23 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v23,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v17 + 32) = v23;
        v24 = (System_Collections_Generic_List_int__o **)(v17 + 32);
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v23, v25, v26);
        v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v29 >= 1 )
        {
          do
          {
            v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v31 = *v20;
            if ( !*v20 )
              sub_1C372B4(0);
            items = v31->fields._items;
            v33 = Method_System_Collections_Generic_List_int__Add__;
            ++v31->fields._version;
            if ( !items )
              sub_1C372B4(v31);
            size = v31->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v31,
                v30,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v31->fields._size = size + 1;
              items->m_Items[size] = v30;
            }
            v35 = *v24;
            if ( !*v24 )
              sub_1C372B4(0);
            v36 = v35->fields._items;
            v37 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !v36 )
              sub_1C372B4(v35);
            v38 = v35->fields._size;
            if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                0,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = v38 + 1;
              v36->m_Items[v38] = 0;
            }
            --v29;
          }
          while ( v29 );
        }
        v39 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v39 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v39->static_fields->openList;
        if ( !openList )
          sub_1C372B4(0);
        v41 = openList->fields._items;
        v42 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v41 )
          sub_1C372B4(openList);
        v43 = openList->fields._size;
        if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v17,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v41->obj.klass + v43;
          openList->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v17;
          sub_1C36FFC((CGThumbnailListItem_o *)(v44 + 4), v17, v27, v28);
        }
      }
    }
  }
  else
  {
    v45 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v45 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v45->static_fields->SAVE_DATA_VERSION, v10, 0) )
    {
      v3 = 0;
      goto LABEL_74;
    }
    v46 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v47 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v47 = ServantCommentManager_TypeInfo;
    }
    v47->static_fields->isContinueDevice = v46 & 1;
    v48 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v48 >= 1 )
    {
      v49 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v48; ++j )
      {
        v51 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v52 = sub_1C372A4(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v52, 0);
        if ( !v52 )
          sub_1C372B4(v53);
        *(_DWORD *)(v52 + 16) = v51;
        v54 = (System_Collections_Generic_List_int__o *)sub_1C372A4(*v49);
        System_Collections_Generic_List_int____ctor(
          v54,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v52 + 24) = v54;
        v55 = (System_Collections_Generic_List_int__o **)(v52 + 24);
        sub_1C36FFC((CGThumbnailListItem_o *)(v52 + 24), (int32_t)v54, v56, v57);
        v58 = v49;
        v59 = (System_Collections_Generic_List_int__o *)sub_1C372A4(*v49);
        System_Collections_Generic_List_int____ctor(
          v59,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v52 + 32) = v59;
        v60 = (System_Collections_Generic_List_int__o **)(v52 + 32);
        sub_1C36FFC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v59, v61, v62);
        v65 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v65 >= 1 )
        {
          do
          {
            v66 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v67 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v68 = *v55;
            if ( !*v55 )
              sub_1C372B4(0);
            v69 = v68->fields._items;
            v70 = Method_System_Collections_Generic_List_int__Add__;
            ++v68->fields._version;
            if ( !v69 )
              sub_1C372B4(v68);
            v71 = v68->fields._size;
            if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v68,
                v66,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v68->fields._size = v71 + 1;
              v69->m_Items[v71] = v66;
            }
            v72 = *v60;
            if ( !*v60 )
              sub_1C372B4(0);
            v73 = v72->fields._items;
            v74 = Method_System_Collections_Generic_List_int__Add__;
            ++v72->fields._version;
            if ( !v73 )
              sub_1C372B4(v72);
            v75 = v72->fields._size;
            if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v72,
                v67,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v72->fields._size = v75 + 1;
              v73->m_Items[v75] = v67;
            }
            --v65;
          }
          while ( v65 );
        }
        v76 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v76 = ServantCommentManager_TypeInfo;
        }
        v49 = v58;
        v77 = (System_Collections_Generic_List_object__o *)v76->static_fields->openList;
        if ( !v77 )
          sub_1C372B4(0);
        v78 = v77->fields._items;
        v79 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v77->fields._version;
        if ( !v78 )
          sub_1C372B4(v77);
        v80 = v77->fields._size;
        if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v77,
            (Il2CppObject *)v52,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v78->obj.klass + v80;
          v77->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)v52;
          sub_1C36FFC((CGThumbnailListItem_o *)(v81 + 4), v52, v63, v64);
        }
      }
    }
  }
  v3 = 1;
LABEL_74:
  klass = v8->klass;
  v83 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v83;
      p_offset += 4;
      if ( !v83 )
        goto LABEL_78;
    }
    v85 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_78:
    v85 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v85)(v8, *(_QWORD *)(v85 + 8));
  return v3;
}


void ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4C4437B & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4437B = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v3 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->FORCE_READ_NEW_COMMENTS_KEY, flag, 0);
}


void ServantCommentManager__SetOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *openList; // x0
  __int64 v8; // x8
  int v9; // w8
  int v10; // w26
  int32_t i; // w23
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x21
  System_Collections_Generic_List_int__o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  ServantCommentManager_c *v28; // x0
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  ServantCommentManager_c *v33; // x0
  int32_t v34; // w22
  int v35; // w23
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10

  if ( (byte_4C44377 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4C44377 = 1;
  }
  openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  v8 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 56LL);
  if ( !v8 )
    goto LABEL_55;
  v9 = *(_DWORD *)(v8 + 24);
  v10 = v9 - 1;
  if ( v9 < 1 )
  {
LABEL_15:
    v13 = sub_1C372A4(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = svtId;
      v14 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v14,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v13 + 24) = v14;
      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v14, v15, v16);
      openList = *(System_Collections_Generic_List_int__o **)(v13 + 24);
      if ( openList )
      {
        items = openList->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              openList,
              svtCommentId,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size] = svtCommentId;
          }
          v20 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v20,
            (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v13 + 32) = v20;
          sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v20, v21, v22);
          openList = *(System_Collections_Generic_List_int__o **)(v13 + 32);
          if ( openList )
          {
            v25 = openList->fields._items;
            v26 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v25 )
            {
              v27 = openList->fields._size;
              if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v27 + 1;
                v25->m_Items[v27] = svtCommentPriority;
              }
              v28 = ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v28 = ServantCommentManager_TypeInfo;
              }
              openList = (System_Collections_Generic_List_int__o *)v28->static_fields->openList;
              if ( openList )
              {
                v29 = openList->fields._items;
                v30 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
                ++openList->fields._version;
                if ( v29 )
                {
                  v31 = openList->fields._size;
                  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v13,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = (__int64)v29 + 8 * v31;
                    openList->fields._size = v31 + 1;
                    *(_QWORD *)(v32 + 32) = v13;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 32), v13, v23, v24);
                  }
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C372B4(openList);
  }
  for ( i = 0; ; ++i )
  {
    if ( !openList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(openList);
      openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
    }
    openList = *(System_Collections_Generic_List_int__o **)(*(_QWORD *)&openList[4].fields._size + 56LL);
    if ( !openList )
      goto LABEL_55;
    openList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)openList,
                                                           i,
                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !openList )
      goto LABEL_55;
    v12 = openList;
    if ( LODWORD(openList->fields._items) == svtId )
      break;
    if ( v10 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  openList = *(System_Collections_Generic_List_int__o **)&openList->fields._size;
  if ( !openList )
    goto LABEL_55;
  v34 = 0;
  v35 = openList->fields._size & ~(openList->fields._size >> 31);
  while ( v35 != v34 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           openList,
           v34,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v12->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v34,
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return;
    }
    openList = *(System_Collections_Generic_List_int__o **)&v12->fields._size;
    ++v34;
    if ( !openList )
      goto LABEL_55;
  }
  v36 = openList->fields._items;
  v37 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v36 )
    goto LABEL_55;
  v38 = openList->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v38 + 1;
    v36->m_Items[v38] = svtCommentId;
  }
  openList = (System_Collections_Generic_List_int__o *)v12->fields._syncRoot;
  if ( !openList )
    goto LABEL_55;
  v39 = openList->fields._items;
  v40 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v39 )
    goto LABEL_55;
  v41 = openList->fields._size;
  if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v41 + 1;
    v39->m_Items[v41] = svtCommentPriority;
  }
  v33 = ServantCommentManager_TypeInfo;
  if ( ServantCommentManager_TypeInfo->_2.cctor_finished )
    goto LABEL_34;
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_33:
  v33 = ServantCommentManager_TypeInfo;
LABEL_34:
  v33->static_fields->isModfiy = 1;
}


void ServantCommentManager__SetOpen_43471008(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x21
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v9; // x8
  int v10; // w8
  __int64 v11; // x26
  int v12; // w24
  int32_t i; // w23
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x21
  System_Collections_Generic_List_int__o *v16; // x23
  void **v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_int__o *v20; // x24
  void **v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned __int64 j; // x24
  int32_t v27; // w1
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  int32_t v31; // w1
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  ServantCommentManager_c *v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  __int64 v40; // x8
  int v41; // w27
  unsigned __int64 v42; // x24
  int32_t v43; // w22
  int32_t v44; // w23
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int32_t v48; // w1
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10

  if ( (byte_4C44378 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4C44378 = 1;
  }
  if ( svtCommentIdList )
  {
    max_length = svtCommentIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      }
      v9 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 56LL);
      if ( !v9 )
        goto LABEL_72;
      v10 = *(_DWORD *)(v9 + 24);
      v11 = (unsigned int)max_length;
      v12 = v10 - 1;
      if ( v10 >= 1 )
      {
        for ( i = 0; ; ++i )
        {
          if ( !Item[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(Item);
            Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
          }
          Item = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&Item[4].fields._size + 56LL);
          if ( !Item )
            goto LABEL_72;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                i,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v14 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v12 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v40 = *(_QWORD *)&Item->fields._size;
        if ( v40 )
        {
          v41 = *(_DWORD *)(v40 + 24);
          v42 = 0;
          while ( 1 )
          {
            if ( v42 >= LODWORD(svtCommentIdList->max_length) )
LABEL_73:
              sub_1C372BC(Item);
            v43 = svtCommentIdList->m_Items[v42];
            if ( v41 >= 1 )
              break;
LABEL_54:
            if ( v43 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v46 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v43,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v43;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v42 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              v48 = svtCommentPriorityList->m_Items[v42];
              v49 = Item->fields._items;
              v50 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v49 )
                goto LABEL_72;
              v51 = Item->fields._size;
              if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v48,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v51 + 1;
                *((_DWORD *)v49->m_Items + v51) = v48;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v42 == v11 )
              return;
          }
          v44 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v44,
                                                                  (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v43 )
            {
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v44,
                                                                    (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v42 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v42] )
                return;
            }
            if ( v41 == ++v44 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1C372B4(Item);
      }
LABEL_17:
      v15 = sub_1C372A4(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !v15 )
        goto LABEL_72;
      *(_DWORD *)(v15 + 16) = svtId;
      v16 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v16,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 24) = v16;
      v17 = (void **)(v15 + 24);
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v16, v18, v19);
      v20 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v20,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 32) = v20;
      v21 = (void **)(v15 + 32);
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v20, v22, v23);
      for ( j = 0; j != v11; ++j )
      {
        if ( j >= LODWORD(svtCommentIdList->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v17;
        if ( !*v17 )
          goto LABEL_72;
        v27 = svtCommentIdList->m_Items[j];
        v28 = Item->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v28 )
          goto LABEL_72;
        v30 = Item->fields._size;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            v27,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v30 + 1;
          *((_DWORD *)v28->m_Items + v30) = v27;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= LODWORD(svtCommentPriorityList->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v21;
        if ( !*v21 )
          goto LABEL_72;
        v31 = svtCommentPriorityList->m_Items[j];
        v32 = Item->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v32 )
          goto LABEL_72;
        v34 = Item->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            v31,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v34 + 1;
          *((_DWORD *)v32->m_Items + v34) = v31;
        }
      }
      v35 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v35 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v35->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v36 = Item->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v36 )
        goto LABEL_72;
      v38 = Item->fields._size;
      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v15,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = (__int64)v36 + 8 * v38;
        Item->fields._size = v38 + 1;
        *(_QWORD *)(v39 + 32) = v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 32), v15, v24, v25);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  UserGameEntity_o *SelfUserGame; // x0
  ServantCommentManager_c *v3; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v6; // x20
  const MethodInfo *v7; // x2
  System_String_o *v8; // x20
  ServantCommentManager_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4C44375 & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25245/*"{}"*/);
    byte_4C44375 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_19;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0) )
      return;
    v3 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v3 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v3->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_25245/*"{}"*/, 0);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
    {
LABEL_19:
      sub_1C372B4(SelfUserGame);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0);
    v6 = (ServantCommentManager_ClearWarInfo_o *)sub_1C372A4(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_43468744(v6, ClearWarIdList, v7);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson((Il2CppObject *)v6, 0, 0, 0);
    if ( System_String__op_Inequality(String, v8, 0) )
    {
      v9 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v9 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v9->static_fields->SAVE_KEY, v8, 0);
      ServantCommentManager__checkUIChange(0, v10);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


bool ServantCommentManager__WriteData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  ServantCommentManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  ServantCommentManager_c *v9; // x0
  struct ServantCommentManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  int32_t i; // w21
  ServantCommentManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x22
  _DWORD *monitor; // x8
  int v19; // w23
  int32_t j; // w24
  System_Collections_Generic_List_int__o *v21; // x0
  unsigned int v22; // w0
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v24; // w0
  System_IO_BinaryWriter_c *v25; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_4C4437A & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    byte_4C4437A = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = ServantCommentManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v8, v7, 0);
  v9 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v9 = ServantCommentManager_TypeInfo;
  }
  v10 = v9->static_fields;
  openList = v10->openList;
  if ( !openList )
    sub_1C372B4(v9);
  if ( !v8 )
    sub_1C372B4(v9);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v14 = ServantCommentManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->openList;
      if ( !v15 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C372B4(0);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C372B4(Item);
      v19 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        (unsigned int)v19,
        v8->klass->vtable._17_Write.method);
      if ( v19 >= 1 )
      {
        for ( j = 0; j != v19; ++j )
        {
          v21 = (System_Collections_Generic_List_int__o *)v17[1].monitor;
          if ( !v21 )
            sub_1C372B4(0);
          v22 = System_Collections_Generic_List_int___get_Item(
                  v21,
                  j,
                  (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
            v8,
            v22,
            v8->klass->vtable._17_Write.method);
          klass = (System_Collections_Generic_List_int__o *)v17[2].klass;
          if ( !klass )
            sub_1C372B4(0);
          v24 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
            v8,
            v24,
            v8->klass->vtable._17_Write.method);
        }
      }
    }
  }
  v25 = v8->klass;
  v26 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_35;
    }
    v28 = (__int64)&v25->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_35:
    v28 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v8, *(_QWORD *)(v28 + 8));
  return 1;
}


void ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  int32_t Value; // w0
  int32_t v4; // w21
  ServantCommentManager_c *v5; // x0
  System_Int32_array *ClearWarIdList; // x0
  System_Int32_array *v7; // x23
  int32_t v8; // w22
  __int64 v9; // x0
  int max_length; // w8
  __int64 v11; // x9
  int32_t v12; // w20
  int32_t v13; // w11
  int32_t v14; // w21
  ServantCommentManager_c *v15; // x0

  if ( (byte_4C44383 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Reverse_int___);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&StringLiteral_3334/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1C37058(&StringLiteral_3335/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4C44383 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3335/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  if ( (Value & 0x80000000) == 0 )
  {
    v4 = Value;
    v5 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v5);
    if ( !ClearWarIdList )
      sub_1C372B4(0);
    v7 = ClearWarIdList;
    if ( ClearWarIdList->max_length
      && (v8 = ConstantMaster__getValue((System_String_o *)StringLiteral_3334/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0),
          System_Array__Reverse_int_(v7, (const MethodInfo_30A8664 *)Method_System_Array_Reverse_int___),
          max_length = v7->max_length,
          max_length >= 1) )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1C372BC(v9);
        v13 = v7->m_Items[v11];
        if ( v13 == v8 )
          v12 = 1;
        if ( v13 == v4 )
          break;
        if ( (int)++v11 >= max_length )
          goto LABEL_17;
      }
      v14 = 1;
    }
    else
    {
      v12 = 0;
LABEL_17:
      v14 = 0;
    }
    v15 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v15 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v15->static_fields->UI_CHANGE_TYPE_KEY, v14, 0);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v12, 0);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0);
  }
}


System_String_o *ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C4436D & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C4436D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void ServantCommentManager_ClearWarInfo___ctor(ServantCommentManager_ClearWarInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C44388 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C44388 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  this->fields.warIdList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


void ServantCommentManager_ClearWarInfo___ctor_43468744(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C44389 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C44389 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
    warIdList = v5;
  }
  if ( !this )
    sub_1C372B4(v5);
  this->fields.warIdList = warIdList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)warIdList, v6, v7);
}


void ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}