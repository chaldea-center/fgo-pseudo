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

  if ( (byte_4CB76BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_4363/*"ChapterProgress"*/);
    sub_1C6BA08(&StringLiteral_6807/*"ForceReadNewProfiles"*/);
    sub_1C6BA08(&StringLiteral_10086/*"OverwriteUIVersion"*/);
    sub_1C6BA08(&StringLiteral_6662/*"Fgo_20150511_1"*/);
    sub_1C6BA08(&StringLiteral_6666/*"Fgo_20160620_1"*/);
    sub_1C6BA08(&StringLiteral_14730/*"UIChangeType"*/);
    byte_4CB76BE = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6662/*"Fgo_20150511_1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantCommentManager_TypeInfo->static_fields, StringLiteral_6662/*"Fgo_20150511_1"*/, v1, v2);
  v3 = StringLiteral_6666/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6666/*"Fgo_20160620_1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SAVE_DATA_VERSION, v3, v5, v6);
  v7 = StringLiteral_4363/*"ChapterProgress"*/;
  v8 = ServantCommentManager_TypeInfo->static_fields;
  v8->SAVE_KEY = (struct System_String_o *)StringLiteral_4363/*"ChapterProgress"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SAVE_KEY, v7, v9, v10);
  v11 = StringLiteral_14730/*"UIChangeType"*/;
  v12 = ServantCommentManager_TypeInfo->static_fields;
  v12->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14730/*"UIChangeType"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->UI_CHANGE_TYPE_KEY, v11, v13, v14);
  v15 = StringLiteral_10086/*"OverwriteUIVersion"*/;
  v16 = ServantCommentManager_TypeInfo->static_fields;
  v16->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10086/*"OverwriteUIVersion"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->OVERWIRTE_UI_VERSION_KEY, v15, v17, v18);
  v19 = StringLiteral_6807/*"ForceReadNewProfiles"*/;
  v20 = ServantCommentManager_TypeInfo->static_fields;
  v20->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6807/*"ForceReadNewProfiles"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->FORCE_READ_NEW_COMMENTS_KEY, v19, v21, v22);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v24 = ServantCommentManager_TypeInfo->static_fields;
  v24->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->openList, (int32_t)v23, v25, v26);
}


void ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CB76A9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76A9 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  openList = v2->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantCommentManager_TypeInfo;
    openList = ServantCommentManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1C6BC60(v2, v1);
  }
  size = openList->fields._size;
  v5 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0);
    v2 = ServantCommentManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantCommentManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  _BOOL8 v4; // x0

  if ( (byte_4CB76A7 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76A7 = 1;
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

  if ( (byte_4CB76A5 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76A5 = 1;
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

  if ( (byte_4CB76A6 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76A6 = 1;
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
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  System_Object_array *Entitys; // x0
  Il2CppObject *MasterData_object; // x0
  long double v7; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *v11; // x19
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v13; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v15; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v18; // x21
  void *v19; // x22
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x21
  System_Int32_array *v23; // x22
  int32_t v24; // w23
  ServantCommentManager_c *v25; // x0
  System_Int32_array *v26; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4CB76B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB76B4 = 1;
  }
  v26 = 0;
  idList = 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C41A9C(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  Entitys = **(System_Object_array ***)(v4 + 184);
  if ( !Entitys )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(v7);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(v7);
  Entitys = **(System_Object_array ***)(v10 + 184);
  if ( !Entitys
    || (v11 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys = DataMasterBase_object__object__object___getEntitys(
                     v8,
                     (const MethodInfo_33FCE18 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__)) == 0) )
  {
LABEL_34:
    sub_1C6BC60(Entitys, v1);
  }
  max_length = Entitys->max_length;
  v13 = Entitys;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C6BC68(Entitys);
      v15 = v13->m_Items[i];
      if ( v15 )
      {
        monitor = v15[1].monitor;
        klass = v15[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v28.fields.fakeValue = klass;
        Entitys = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v28, 0);
        if ( !v11 )
          goto LABEL_34;
        Entitys = (System_Object_array *)ServantCommentMaster__GetNewList(
                                           (ServantCommentMaster_o *)v11,
                                           &idList,
                                           &v26,
                                           (int32_t)Entitys,
                                           0);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
        {
          v19 = v15[1].monitor;
          v18 = v15[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = v19;
          *(_QWORD *)&v29.fields.fakeValue = v18;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v29, 0);
          v22 = v26;
          v23 = idList;
          v24 = v20;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_43716668(v24, v23, v22, v21);
        }
      }
      LODWORD(max_length) = v13->max_length;
    }
  }
  v25 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v25);
}


System_Int32_array *ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *String; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4CB76AB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Sort_int___);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25355/*"{}"*/);
    byte_4CB76AB = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v1->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25355/*"{}"*/,
                             0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v5 = v3;
  if ( !v3 )
    sub_1C6BC60(0, v4);
  System_Array__Sort_int_(
    (System_Int32_array *)v3[1].klass,
    (const MethodInfo_31072D4 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v5[1].klass;
}


System_Collections_Generic_List_ServantCommentEntity__o *ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x3
  int32_t v13; // w20
  DataManager_o *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB76B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78527208);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76B5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_31;
  }
  v10 = v7->fields._size - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    v10,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C6BC60(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78527208);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v12);
    if ( !Instance )
      goto LABEL_31;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v13 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v13 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v13,
                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1C6BC60(v15, v16);
          if ( !v19.fields._current )
            sub_1C6BC60(v15, v16);
          if ( HIDWORD(v14->fields.m_CachedPtr) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v13 < 0 )
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
  __int64 v9; // x1
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x3
  int32_t v13; // w20
  DataManager_o *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB76B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78527208);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76B8 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_31;
  }
  v10 = v7->fields._size - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    v10,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C6BC60(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___78527208);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v12);
    if ( !Instance )
      goto LABEL_31;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v13 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v13 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v13,
                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1C6BC60(v15, v16);
          if ( !v19.fields._current )
            sub_1C6BC60(v15, v16);
          if ( HIDWORD(v14->fields.m_CachedPtr) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v13 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


int32_t ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4CB76BD & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76BD = 1;
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

  if ( (byte_4CB76BC & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76BC = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1);
}


int32_t ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4CB76BB & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76BB = 1;
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

  if ( (byte_4CB76A8 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76A8 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ReadData((const MethodInfo *)v1);
}


bool ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4CB76B3 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76B3 = 1;
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
  __int64 v11; // x1
  ServantCommentManager_c *v12; // x8
  ServantCommentMaster_o *v13; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int32_t v15; // w25
  _QWORD *v16; // x26
  int v17; // w8
  int v18; // w19
  int32_t v19; // w27
  int size; // [xsp+0h] [xbp-70h]
  ServantCommentEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB76AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76AD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  v12 = ServantCommentManager_TypeInfo;
  v13 = (ServantCommentMaster_o *)Master_object;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v12 = ServantCommentManager_TypeInfo;
  }
  openList = v12->static_fields->openList;
  if ( !openList )
LABEL_37:
    sub_1C6BC60(Master_object, v11);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ServantCommentManager_TypeInfo;
    }
    Master_object = v12->static_fields->openList;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Master_object,
                      v15,
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !Master_object )
      goto LABEL_37;
    v16 = Master_object;
    if ( *((_DWORD *)Master_object + 4) == svtId )
    {
      Master_object = (void *)*((_QWORD *)Master_object + 3);
      if ( !Master_object )
        goto LABEL_37;
      v17 = *((_DWORD *)Master_object + 6);
      v18 = v17 - 1;
      if ( v17 >= 1 )
        break;
    }
LABEL_33:
    if ( ++v15 == size )
      return 0;
    v12 = ServantCommentManager_TypeInfo;
  }
  v19 = 0;
  while ( 1 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Master_object,
           v19,
           (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
        && !isImageLimit )
      {
        return 1;
      }
      if ( (readJudgeKey & 0x80000000) == 0 )
      {
        Master_object = (void *)v16[4];
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)Master_object,
                                  v19,
                                  (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v13 )
          goto LABEL_37;
        if ( ServantCommentMaster__TryGetEntity(v13, &entity, svtId, svtCommentId, (int32_t)Master_object, 0) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_37;
          if ( ServantCommentEntity__GetReadJudgeKey(entity, 0) == readJudgeKey )
            return 1;
        }
      }
    }
    if ( v18 == v19 )
      goto LABEL_33;
    Master_object = (void *)v16[3];
    ++v19;
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

  if ( (byte_4CB76B6 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76B6 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_43718976(svt_id, oldFriendShipRank, -1, v3);
}


bool ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v8; // x1

  if ( (byte_4CB76B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76B9 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1C6BC60(0, v8);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool ServantCommentManager__IsOpenByServantFriendShip_43718976(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB76B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76B7 = 1;
  }
  entity = 0;
  if ( limitCount == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
LABEL_22:
      sub_1C6BC60(Instance, v8);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  __int64 v3; // x1
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0
  ServantCommentManager_c *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CB76AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76AA = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
    {
      sub_1C6BC60(Instance, v3);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0);
    v4 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v4[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v4);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v1);
  if ( ServantCommentManager__IsForceReadNewComments(v5) )
  {
    v6 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v6);
    ServantCommentManager__SetForceReadNewComments(0, v7);
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
  __int64 v10; // x1
  System_String_o *v11; // x20
  ServantCommentManager_c *v12; // x0
  char v13; // w20
  ServantCommentManager_c *v14; // x0
  int v15; // w20
  int i; // w25
  int v17; // w22
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_int__o *v21; // x23
  System_Collections_Generic_List_int__o **v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_int__o *v25; // x24
  System_Collections_Generic_List_int__o **v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w24
  System_Collections_Generic_List_int__o *v33; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v37; // x0
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  ServantCommentManager_c *v41; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x8
  ServantCommentManager_c *v47; // x0
  char v48; // w20
  ServantCommentManager_c *v49; // x0
  int v50; // w20
  System_Collections_Generic_List_int__c **v51; // x24
  int j; // w28
  int v53; // w22
  __int64 v54; // x21
  __int64 v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_List_int__o *v57; // x23
  System_Collections_Generic_List_int__o **v58; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_int__c **v61; // x27
  System_Collections_Generic_List_int__o *v62; // x24
  System_Collections_Generic_List_int__o **v63; // x23
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int v69; // w24
  int32_t v70; // w26
  int32_t v71; // w25
  System_Collections_Generic_List_int__o *v72; // x0
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  System_Collections_Generic_List_int__o *v76; // x0
  struct System_Int32_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  ServantCommentManager_c *v80; // x0
  System_Collections_Generic_List_object__o *v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v87; // x9
  int32_t *p_offset; // x10
  __int64 v89; // x0
  ServantCommentManager_c *v90; // x0

  if ( (byte_4CB76B0 & 1) == 0 )
  {
    sub_1C6BA08(&System_IO_BinaryReader_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4CB76B0 = 1;
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
    v90 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v90);
    return 0;
  }
  v6 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C6BC54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C6BC60(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v12 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v12 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v12->static_fields->SAVE_DATA_OLD_VERSION, v11, 0) )
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v14 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v14 = ServantCommentManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v18 = sub_1C6BC54(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        if ( !v18 )
          sub_1C6BC60(v19, v20);
        *(_DWORD *)(v18 + 16) = v17;
        v21 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 24) = v21;
        v22 = (System_Collections_Generic_List_int__o **)(v18 + 24);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)v21, v23, v24);
        v25 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 32) = v25;
        v26 = (System_Collections_Generic_List_int__o **)(v18 + 32);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v25, v27, v28);
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v32 >= 1 )
        {
          do
          {
            v29 = ((unsigned int (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v33 = *v22;
            if ( !*v22 )
              sub_1C6BC60(0, v29);
            items = v33->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v33->fields._version;
            if ( !items )
              sub_1C6BC60(v33, v29);
            size = v33->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v33,
                v29,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v33->fields._size = size + 1;
              items->m_Items[size] = v29;
            }
            v37 = *v26;
            if ( !*v26 )
              sub_1C6BC60(0, v29);
            v38 = v37->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !v38 )
              sub_1C6BC60(v37, v29);
            v40 = v37->fields._size;
            if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                0,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v37->fields._size = v40 + 1;
              v38->m_Items[v40] = 0;
            }
            --v32;
          }
          while ( v32 );
        }
        v41 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v41 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v41->static_fields->openList;
        if ( !openList )
          sub_1C6BC60(0, v29);
        v43 = openList->fields._items;
        v44 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v43 )
          sub_1C6BC60(openList, v29);
        v45 = openList->fields._size;
        if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v18,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          openList->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), v18, v30, v31);
        }
      }
    }
  }
  else
  {
    v47 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v47 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v47->static_fields->SAVE_DATA_VERSION, v11, 0) )
    {
      v3 = 0;
      goto LABEL_74;
    }
    v48 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v49 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v49 = ServantCommentManager_TypeInfo;
    }
    v49->static_fields->isContinueDevice = v48 & 1;
    v50 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v50 >= 1 )
    {
      v51 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v50; ++j )
      {
        v53 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v54 = sub_1C6BC54(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v54, 0);
        if ( !v54 )
          sub_1C6BC60(v55, v56);
        *(_DWORD *)(v54 + 16) = v53;
        v57 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(*v51);
        System_Collections_Generic_List_int____ctor(
          v57,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v54 + 24) = v57;
        v58 = (System_Collections_Generic_List_int__o **)(v54 + 24);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 24), (int32_t)v57, v59, v60);
        v61 = v51;
        v62 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(*v51);
        System_Collections_Generic_List_int____ctor(
          v62,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v54 + 32) = v62;
        v63 = (System_Collections_Generic_List_int__o **)(v54 + 32);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v62, v64, v65);
        v69 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v69 >= 1 )
        {
          do
          {
            v70 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v71 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v72 = *v58;
            if ( !*v58 )
              sub_1C6BC60(0, v66);
            v73 = v72->fields._items;
            v74 = Method_System_Collections_Generic_List_int__Add__;
            ++v72->fields._version;
            if ( !v73 )
              sub_1C6BC60(v72, v66);
            v75 = v72->fields._size;
            if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v72,
                v70,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v72->fields._size = v75 + 1;
              v73->m_Items[v75] = v70;
            }
            v76 = *v63;
            if ( !*v63 )
              sub_1C6BC60(0, v66);
            v77 = v76->fields._items;
            v78 = Method_System_Collections_Generic_List_int__Add__;
            ++v76->fields._version;
            if ( !v77 )
              sub_1C6BC60(v76, v66);
            v79 = v76->fields._size;
            if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v76,
                v71,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v76->fields._size = v79 + 1;
              v77->m_Items[v79] = v71;
            }
            --v69;
          }
          while ( v69 );
        }
        v80 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v80 = ServantCommentManager_TypeInfo;
        }
        v51 = v61;
        v81 = (System_Collections_Generic_List_object__o *)v80->static_fields->openList;
        if ( !v81 )
          sub_1C6BC60(0, v66);
        v82 = v81->fields._items;
        v83 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v81->fields._version;
        if ( !v82 )
          sub_1C6BC60(v81, v66);
        v84 = v81->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            (Il2CppObject *)v54,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v81->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v54;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v85 + 4), v54, v67, v68);
        }
      }
    }
  }
  v3 = 1;
LABEL_74:
  klass = v8->klass;
  v87 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v87;
      p_offset += 4;
      if ( !v87 )
        goto LABEL_78;
    }
    v89 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_78:
    v89 = sub_1C41D90(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v89)(v8, *(_QWORD *)(v89 + 8));
  return v3;
}


void ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4CB76B2 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76B2 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v3 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->FORCE_READ_NEW_COMMENTS_KEY, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB76AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4CB76AE = 1;
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
    v13 = sub_1C6BC54(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = svtId;
      v14 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v14,
        (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v13 + 24) = v14;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v14, v15, v16);
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
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size] = svtCommentId;
          }
          v20 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v20,
            (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v13 + 32) = v20;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v20, v21, v22);
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
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = (__int64)v29 + 8 * v31;
                    openList->fields._size = v31 + 1;
                    *(_QWORD *)(v32 + 32) = v13;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), v13, v23, v24);
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
    sub_1C6BC60(openList, *(_QWORD *)&svtCommentId);
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
                                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
           (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v12->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v34,
             (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
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
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
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


void ServantCommentManager__SetOpen_43716668(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
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
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  ServantCommentManager_c *v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  __int64 v38; // x8
  int v39; // w27
  unsigned __int64 v40; // x24
  int32_t v41; // w22
  int32_t v42; // w23
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10

  v5 = svtCommentIdList;
  if ( (byte_4CB76AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4CB76AF = 1;
  }
  if ( v5 )
  {
    max_length = v5->max_length;
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
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v14 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v12 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v38 = *(_QWORD *)&Item->fields._size;
        if ( v38 )
        {
          v39 = *(_DWORD *)(v38 + 24);
          v40 = 0;
          while ( 1 )
          {
            if ( v40 >= LODWORD(v5->max_length) )
LABEL_73:
              sub_1C6BC68(Item);
            v41 = v5->m_Items[v40];
            if ( v39 >= 1 )
              break;
LABEL_54:
            if ( v41 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v44 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v41,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v41;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v40 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v40];
              v46 = Item->fields._items;
              v47 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v46 )
                goto LABEL_72;
              v48 = Item->fields._size;
              if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v48 + 1;
                *((_DWORD *)v46->m_Items + v48) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v40 == v11 )
              return;
          }
          v42 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v42,
                                                                  (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v41 )
            {
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v42,
                                                                    (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v40 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v40] )
                return;
            }
            if ( v39 == ++v42 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1C6BC60(Item, svtCommentIdList);
      }
LABEL_17:
      v15 = sub_1C6BC54(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !v15 )
        goto LABEL_72;
      *(_DWORD *)(v15 + 16) = svtId;
      v16 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v16,
        (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 24) = v16;
      v17 = (void **)(v15 + 24);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v16, v18, v19);
      v20 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v20,
        (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 32) = v20;
      v21 = (void **)(v15 + 32);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v20, v22, v23);
      for ( j = 0; j != v11; ++j )
      {
        if ( j >= LODWORD(v5->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v17;
        if ( !*v17 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j];
        v27 = Item->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v27 )
          goto LABEL_72;
        v29 = Item->fields._size;
        if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v29 + 1;
          *((_DWORD *)v27->m_Items + v29) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= LODWORD(svtCommentPriorityList->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v21;
        if ( !*v21 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j];
        v30 = Item->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v30 )
          goto LABEL_72;
        v32 = Item->fields._size;
        if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v32 + 1;
          *((_DWORD *)v30->m_Items + v32) = (_DWORD)svtCommentIdList;
        }
      }
      v33 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v33 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v33->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v34 = Item->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v34 )
        goto LABEL_72;
      v36 = Item->fields._size;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v15,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = (__int64)v34 + 8 * v36;
        Item->fields._size = v36 + 1;
        *(_QWORD *)(v37 + 32) = v15;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 32), v15, v24, v25);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v7; // x20
  const MethodInfo *v8; // x2
  System_String_o *v9; // x20
  ServantCommentManager_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB76AC & 1) == 0 )
  {
    sub_1C6BA08(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_25355/*"{}"*/);
    byte_4CB76AC = 1;
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
    v4 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_25355/*"{}"*/, 0);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
    {
LABEL_19:
      sub_1C6BC60(SelfUserGame, v3);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0);
    v7 = (ServantCommentManager_ClearWarInfo_o *)sub_1C6BC54(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_43714404(v7, ClearWarIdList, v8);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
    if ( System_String__op_Inequality(String, v9, 0) )
    {
      v10 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v10 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v10->static_fields->SAVE_KEY, v9, 0);
      ServantCommentManager__checkUIChange(0, v11);
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
  __int64 v9; // x1
  ServantCommentManager_c *v10; // x0
  struct ServantCommentManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  ServantCommentManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  _DWORD *monitor; // x8
  int v22; // w23
  int32_t j; // w24
  System_Collections_Generic_List_int__o *v24; // x0
  unsigned int v25; // w0
  __int64 v26; // x1
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v28; // w0
  System_IO_BinaryWriter_c *v29; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0

  if ( (byte_4CB76B1 & 1) == 0 )
  {
    sub_1C6BA08(&System_IO_BinaryWriter_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    byte_4CB76B1 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C6BC54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64876120(v8, v7, 0);
  v10 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  v11 = v10->static_fields;
  openList = v11->openList;
  if ( !openList )
    sub_1C6BC60(v10, v9);
  if ( !v8 )
    sub_1C6BC60(v10, v9);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
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
      v16 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v16 = ServantCommentManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->openList;
      if ( !v17 )
        sub_1C6BC60(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C6BC60(0, v19);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C6BC60(Item, v19);
      v22 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        (unsigned int)v22,
        v8->klass->vtable._17_Write.method);
      if ( v22 >= 1 )
      {
        for ( j = 0; j != v22; ++j )
        {
          v24 = (System_Collections_Generic_List_int__o *)v20[1].monitor;
          if ( !v24 )
            sub_1C6BC60(0, v14);
          v25 = System_Collections_Generic_List_int___get_Item(
                  v24,
                  j,
                  (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
            v8,
            v25,
            v8->klass->vtable._17_Write.method);
          klass = (System_Collections_Generic_List_int__o *)v20[2].klass;
          if ( !klass )
            sub_1C6BC60(0, v26);
          v28 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
            v8,
            v28,
            v8->klass->vtable._17_Write.method);
        }
      }
    }
  }
  v29 = v8->klass;
  v30 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_35;
    }
    v32 = (__int64)&v29->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_35:
    v32 = sub_1C41D90(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v8, *(_QWORD *)(v32 + 8));
  return 1;
}


void ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  int32_t Value; // w0
  int32_t v4; // w21
  ServantCommentManager_c *v5; // x0
  System_Int32_array *ClearWarIdList; // x0
  __int64 v7; // x1
  System_Int32_array *v8; // x23
  int32_t v9; // w22
  __int64 v10; // x0
  int max_length; // w8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w11
  int32_t v15; // w21
  ServantCommentManager_c *v16; // x0

  if ( (byte_4CB76BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Reverse_int___);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3326/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1C6BA08(&StringLiteral_3327/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4CB76BA = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3327/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  if ( (Value & 0x80000000) == 0 )
  {
    v4 = Value;
    v5 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v5);
    if ( !ClearWarIdList )
      sub_1C6BC60(0, v7);
    v8 = ClearWarIdList;
    if ( ClearWarIdList->max_length
      && (v9 = ConstantMaster__getValue((System_String_o *)StringLiteral_3326/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0),
          System_Array__Reverse_int_(v8, (const MethodInfo_30FB72C *)Method_System_Array_Reverse_int___),
          max_length = v8->max_length,
          max_length >= 1) )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1C6BC68(v10);
        v14 = v8->m_Items[v12];
        if ( v14 == v9 )
          v13 = 1;
        if ( v14 == v4 )
          break;
        if ( (int)++v12 >= max_length )
          goto LABEL_17;
      }
      v15 = 1;
    }
    else
    {
      v13 = 0;
LABEL_17:
      v15 = 0;
    }
    v16 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v16 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v16->static_fields->UI_CHANGE_TYPE_KEY, v15, 0);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v13, 0);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0);
  }
}


System_String_o *ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CB76A4 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&DatFileName_TypeInfo);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB76A4 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0);
  return System_String__Concat_64005056(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


void ServantCommentManager_ClearWarInfo___ctor(ServantCommentManager_ClearWarInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB76BF & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB76BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  this->fields.warIdList = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


void ServantCommentManager_ClearWarInfo___ctor_43714404(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB76C0 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB76C0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
    warIdList = v5;
  }
  if ( !this )
    sub_1C6BC60(v5, v6);
  this->fields.warIdList = warIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)warIdList, v7, v8);
}


void ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}