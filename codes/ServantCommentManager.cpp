void ServantCommentManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantCommentManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ServantCommentManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct ServantCommentManager_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct ServantCommentManager_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x19
  struct ServantCommentManager_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7

  if ( (byte_4D31D9B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_4393/*"ChapterProgress"*/);
    sub_1C93AD4(&StringLiteral_6844/*"ForceReadNewProfiles"*/);
    sub_1C93AD4(&StringLiteral_10144/*"OverwriteUIVersion"*/);
    sub_1C93AD4(&StringLiteral_6700/*"Fgo_20150511_1"*/);
    sub_1C93AD4(&StringLiteral_6703/*"Fgo_20160620_1"*/);
    sub_1C93AD4(&StringLiteral_14828/*"UIChangeType"*/);
    byte_4D31D9B = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6700/*"Fgo_20150511_1"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6700/*"Fgo_20150511_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_6703/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6703/*"Fgo_20160620_1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_DATA_VERSION, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_4393/*"ChapterProgress"*/;
  v16 = ServantCommentManager_TypeInfo->static_fields;
  v16->SAVE_KEY = (struct System_String_o *)StringLiteral_4393/*"ChapterProgress"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->SAVE_KEY, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_14828/*"UIChangeType"*/;
  v24 = ServantCommentManager_TypeInfo->static_fields;
  v24->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14828/*"UIChangeType"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->UI_CHANGE_TYPE_KEY, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_10144/*"OverwriteUIVersion"*/;
  v32 = ServantCommentManager_TypeInfo->static_fields;
  v32->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10144/*"OverwriteUIVersion"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->OVERWIRTE_UI_VERSION_KEY, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_6844/*"ForceReadNewProfiles"*/;
  v40 = ServantCommentManager_TypeInfo->static_fields;
  v40->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6844/*"ForceReadNewProfiles"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->FORCE_READ_NEW_COMMENTS_KEY, v39, v41, v42, v43, v44, v45, v46);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v47 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v48 = ServantCommentManager_TypeInfo->static_fields;
  v48->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v47;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->openList, (int32_t)v47, v49, v50, v51, v52, v53, v54);
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

  if ( (byte_4D31D86 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D86 = 1;
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
      sub_1C93D2C(v2, v1);
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
  const MethodInfo *v5; // x1

  if ( (byte_4D31D84 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D84 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v1);
  ServantCommentManager__ClearSaveDataList(v2);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 257;
  v4 = ServantCommentManager__WriteData(v3);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v4);
  ServantCommentManager__checkUIChange(0, v5);
}


void ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4D31D82 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D82 = 1;
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

  if ( (byte_4D31D83 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D83 = 1;
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

  if ( (byte_4D31D90 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D31D90 = 1;
  }
  v26 = 0;
  idList = 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C69B68(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  Entitys = **(System_Object_array ***)(v4 + 184);
  if ( !Entitys )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(v7);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C69B68(v7);
  Entitys = **(System_Object_array ***)(v10 + 184);
  if ( !Entitys
    || (v11 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys = DataMasterBase_object__object__object___getEntitys(
                     v8,
                     (const MethodInfo_3467458 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__)) == 0) )
  {
LABEL_34:
    sub_1C93D2C(Entitys, v1);
  }
  max_length = Entitys->max_length;
  v13 = Entitys;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C93D34(Entitys);
      v15 = v13->m_Items[i];
      if ( v15 )
      {
        monitor = v15[1].monitor;
        klass = v15[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v28.fields.fakeValue = klass;
        Entitys = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v28, 0);
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
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v29, 0);
          v22 = v26;
          v23 = idList;
          v24 = v20;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen(v24, v23, v22, v21);
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

  if ( (byte_4D31D88 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Sort_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25571/*"{}"*/);
    byte_4D31D88 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v1->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25571/*"{}"*/,
                             0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v5 = v3;
  if ( !v3 )
    sub_1C93D2C(0, v4);
  System_Array__Sort_int_(
    (System_Int32_array *)v3[1].klass,
    (const MethodInfo_3170970 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v5[1].klass;
}


int32_t ServantCommentManager__GetIndexByChangeType(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4D31D98 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D98 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1) == 1;
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

  if ( (byte_4D31D91 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___79016976);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31D91 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C93D2C(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_59216528(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___79016976);
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
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1C93D2C(v15, v16);
          if ( !v19.fields._current )
            sub_1C93D2C(v15, v16);
          if ( HIDWORD(v14->fields.m_CachedPtr) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
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

  if ( (byte_4D31D94 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___79016976);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31D94 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C93D2C(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_59216528(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___79016976);
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
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1C93D2C(v15, v16);
          if ( !v19.fields._current )
            sub_1C93D2C(v15, v16);
          if ( HIDWORD(v14->fields.m_CachedPtr) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
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

  if ( (byte_4D31D9A & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D9A = 1;
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

  if ( (byte_4D31D99 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D99 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1);
}


int32_t ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4D31D97 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D97 = 1;
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

  if ( (byte_4D31D85 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D85 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ReadData((const MethodInfo *)v1);
}


bool ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4D31D8F & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D8F = 1;
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

  if ( (byte_4D31D8A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D8A = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
    sub_1C93D2C(Master_object, v11);
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
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
           (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
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
                                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4D31D92 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D92 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_44168936(svt_id, oldFriendShipRank, -1, v3);
}


bool ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v8; // x1

  if ( (byte_4D31D95 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D95 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1C93D2C(0, v8);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool ServantCommentManager__IsOpenByServantFriendShip_44168936(
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

  if ( (byte_4D31D93 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31D93 = 1;
  }
  entity = 0;
  if ( limitCount == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
LABEL_22:
      sub_1C93D2C(Instance, v8);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x0
  ServantCommentManager_c *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4D31D87 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31D87 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
    {
      sub_1C93D2C(Instance, v3);
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
  ServantCommentManager__checkUIChange(0, v5);
  if ( ServantCommentManager__IsForceReadNewComments(v6) )
  {
    v7 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v7);
    ServantCommentManager__SetForceReadNewComments(0, v8);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x24
  System_Collections_Generic_List_int__o **v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int v44; // w24
  System_Collections_Generic_List_int__o *v45; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v49; // x0
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  ServantCommentManager_c *v53; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x8
  ServantCommentManager_c *v59; // x0
  char v60; // w20
  ServantCommentManager_c *v61; // x0
  int v62; // w20
  System_Collections_Generic_List_int__c **v63; // x24
  int j; // w28
  int v65; // w22
  __int64 v66; // x21
  __int64 v67; // x0
  __int64 v68; // x1
  System_Collections_Generic_List_int__o *v69; // x23
  System_Collections_Generic_List_int__o **v70; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_List_int__c **v77; // x27
  System_Collections_Generic_List_int__o *v78; // x24
  System_Collections_Generic_List_int__o **v79; // x23
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int v93; // w24
  int32_t v94; // w26
  int32_t v95; // w25
  System_Collections_Generic_List_int__o *v96; // x0
  struct System_Int32_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  System_Collections_Generic_List_int__o *v100; // x0
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  ServantCommentManager_c *v104; // x0
  System_Collections_Generic_List_object__o *v105; // x0
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v111; // x9
  int32_t *p_offset; // x10
  __int64 v113; // x0
  ServantCommentManager_c *v114; // x0

  if ( (byte_4D31D8C & 1) == 0 )
  {
    sub_1C93AD4(&System_IO_BinaryReader_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4D31D8C = 1;
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
    v114 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v114);
    return 0;
  }
  v6 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C93D20(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C93D2C(v9, v10);
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
        v18 = sub_1C93D20(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        ServantCommentManager_UserServantCommentOpenInfo___ctor(
          (ServantCommentManager_UserServantCommentOpenInfo_o *)v18,
          0);
        if ( !v18 )
          sub_1C93D2C(v19, v20);
        *(_DWORD *)(v18 + 16) = v17;
        v21 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 24) = v21;
        v22 = (System_Collections_Generic_List_int__o **)(v18 + 24);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 24), (int32_t)v21, v23, v24, v25, v26, v27, v28);
        v29 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v29,
          (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 32) = v29;
        v30 = (System_Collections_Generic_List_int__o **)(v18 + 32);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v29, v31, v32, v33, v34, v35, v36);
        v44 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v44 >= 1 )
        {
          do
          {
            v37 = ((unsigned int (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v45 = *v22;
            if ( !*v22 )
              sub_1C93D2C(0, v37);
            items = v45->fields._items;
            v47 = Method_System_Collections_Generic_List_int__Add__;
            ++v45->fields._version;
            if ( !items )
              sub_1C93D2C(v45, v37);
            size = v45->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v45,
                v37,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v45->fields._size = size + 1;
              items->m_Items[size] = v37;
            }
            v49 = *v30;
            if ( !*v30 )
              sub_1C93D2C(0, v37);
            v50 = v49->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v49->fields._version;
            if ( !v50 )
              sub_1C93D2C(v49, v37);
            v52 = v49->fields._size;
            if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v49,
                0,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v49->fields._size = v52 + 1;
              v50->m_Items[v52] = 0;
            }
            --v44;
          }
          while ( v44 );
        }
        v53 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v53 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v53->static_fields->openList;
        if ( !openList )
          sub_1C93D2C(0, v37);
        v55 = openList->fields._items;
        v56 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v55 )
          sub_1C93D2C(openList, v37);
        v57 = openList->fields._size;
        if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v18,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          openList->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v18;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v58 + 4), v18, v38, v39, v40, v41, v42, v43);
        }
      }
    }
  }
  else
  {
    v59 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v59 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v59->static_fields->SAVE_DATA_VERSION, v11, 0) )
    {
      v3 = 0;
      goto LABEL_74;
    }
    v60 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v61 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v61 = ServantCommentManager_TypeInfo;
    }
    v61->static_fields->isContinueDevice = v60 & 1;
    v62 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v62 >= 1 )
    {
      v63 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v62; ++j )
      {
        v65 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v66 = sub_1C93D20(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        ServantCommentManager_UserServantCommentOpenInfo___ctor(
          (ServantCommentManager_UserServantCommentOpenInfo_o *)v66,
          0);
        if ( !v66 )
          sub_1C93D2C(v67, v68);
        *(_DWORD *)(v66 + 16) = v65;
        v69 = (System_Collections_Generic_List_int__o *)sub_1C93D20(*v63);
        System_Collections_Generic_List_int____ctor(
          v69,
          (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v66 + 24) = v69;
        v70 = (System_Collections_Generic_List_int__o **)(v66 + 24);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 24), (int32_t)v69, v71, v72, v73, v74, v75, v76);
        v77 = v63;
        v78 = (System_Collections_Generic_List_int__o *)sub_1C93D20(*v63);
        System_Collections_Generic_List_int____ctor(
          v78,
          (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v66 + 32) = v78;
        v79 = (System_Collections_Generic_List_int__o **)(v66 + 32);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v78, v80, v81, v82, v83, v84, v85);
        v93 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v93 >= 1 )
        {
          do
          {
            v94 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v95 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v96 = *v70;
            if ( !*v70 )
              sub_1C93D2C(0, v86);
            v97 = v96->fields._items;
            v98 = Method_System_Collections_Generic_List_int__Add__;
            ++v96->fields._version;
            if ( !v97 )
              sub_1C93D2C(v96, v86);
            v99 = v96->fields._size;
            if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v96,
                v94,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v96->fields._size = v99 + 1;
              v97->m_Items[v99] = v94;
            }
            v100 = *v79;
            if ( !*v79 )
              sub_1C93D2C(0, v86);
            v101 = v100->fields._items;
            v102 = Method_System_Collections_Generic_List_int__Add__;
            ++v100->fields._version;
            if ( !v101 )
              sub_1C93D2C(v100, v86);
            v103 = v100->fields._size;
            if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v100,
                v95,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
            }
            else
            {
              v100->fields._size = v103 + 1;
              v101->m_Items[v103] = v95;
            }
            --v93;
          }
          while ( v93 );
        }
        v104 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v104 = ServantCommentManager_TypeInfo;
        }
        v63 = v77;
        v105 = (System_Collections_Generic_List_object__o *)v104->static_fields->openList;
        if ( !v105 )
          sub_1C93D2C(0, v86);
        v106 = v105->fields._items;
        v107 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v105->fields._version;
        if ( !v106 )
          sub_1C93D2C(v105, v86);
        v108 = v105->fields._size;
        if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v105,
            (Il2CppObject *)v66,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v109 = &v106->obj.klass + v108;
          v105->fields._size = v108 + 1;
          v109[4] = (Il2CppClass *)v66;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v109 + 4), v66, v87, v88, v89, v90, v91, v92);
        }
      }
    }
  }
  v3 = 1;
LABEL_74:
  klass = v8->klass;
  v111 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v111;
      p_offset += 4;
      if ( !v111 )
        goto LABEL_78;
    }
    v113 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_78:
    v113 = sub_1C69E5C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v113)(v8, *(_QWORD *)(v113 + 8));
  return v3;
}


void ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4D31D8E & 1) == 0 )
  {
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D8E = 1;
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x24
  void **v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  unsigned __int64 j; // x24
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  ServantCommentManager_c *v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  __int64 v50; // x8
  int v51; // w27
  unsigned __int64 v52; // x24
  int32_t v53; // w22
  int32_t v54; // w23
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10

  v5 = svtCommentIdList;
  if ( (byte_4D31D8B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4D31D8B = 1;
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
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v14 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v12 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v50 = *(_QWORD *)&Item->fields._size;
        if ( v50 )
        {
          v51 = *(_DWORD *)(v50 + 24);
          v52 = 0;
          while ( 1 )
          {
            if ( v52 >= LODWORD(v5->max_length) )
LABEL_73:
              sub_1C93D34(Item);
            v53 = v5->m_Items[v52];
            if ( v51 >= 1 )
              break;
LABEL_54:
            if ( v53 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v56 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v53,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v53;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v52 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v52];
              v58 = Item->fields._items;
              v59 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v58 )
                goto LABEL_72;
              v60 = Item->fields._size;
              if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v60 + 1;
                *((_DWORD *)v58->m_Items + v60) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v52 == v11 )
              return;
          }
          v54 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v14->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v54,
                                                                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v53 )
            {
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v54,
                                                                    (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v52 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v52] )
                return;
            }
            if ( v51 == ++v54 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1C93D2C(Item, svtCommentIdList);
      }
LABEL_17:
      v15 = sub_1C93D20(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      ServantCommentManager_UserServantCommentOpenInfo___ctor(
        (ServantCommentManager_UserServantCommentOpenInfo_o *)v15,
        0);
      if ( !v15 )
        goto LABEL_72;
      *(_DWORD *)(v15 + 16) = svtId;
      v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v16,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 24) = v16;
      v17 = (void **)(v15 + 24);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v16, v18, v19, v20, v21, v22, v23);
      v24 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v24,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 32) = v24;
      v25 = (void **)(v15 + 32);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)v24, v26, v27, v28, v29, v30, v31);
      for ( j = 0; j != v11; ++j )
      {
        if ( j >= LODWORD(v5->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v17;
        if ( !*v17 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j];
        v39 = Item->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v39 )
          goto LABEL_72;
        v41 = Item->fields._size;
        if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v41 + 1;
          *((_DWORD *)v39->m_Items + v41) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= LODWORD(svtCommentPriorityList->max_length) )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v25;
        if ( !*v25 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j];
        v42 = Item->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v42 )
          goto LABEL_72;
        v44 = Item->fields._size;
        if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v44 + 1;
          *((_DWORD *)v42->m_Items + v44) = (_DWORD)svtCommentIdList;
        }
      }
      v45 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v45 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v45->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v46 = Item->fields._items;
      v47 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v46 )
        goto LABEL_72;
      v48 = Item->fields._size;
      if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v15,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = (__int64)v46 + 8 * v48;
        Item->fields._size = v48 + 1;
        *(_QWORD *)(v49 + 32) = v15;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v49 + 32), v15, v32, v33, v34, v35, v36, v37);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  void *SelfUserGame; // x0
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v7; // x20
  System_String_o *v8; // x20
  ServantCommentManager_c *v9; // x0
  BalanceConfig_c *v10; // x0
  int32_t Part2FinalChapterCommonReleaseId_k__BackingField; // w19
  bool IsCommonRelease; // w19
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4D31D89 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__getEntityList__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25571/*"{}"*/);
    byte_4D31D89 = 1;
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
      goto LABEL_38;
    if ( UserGameEntity__IsAccountDelete((UserGameEntity_o *)SelfUserGame, 0) )
      return;
    v4 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_25571/*"{}"*/, 0);
    SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_38;
    SelfUserGame = DataManager__GetMasterData_object_(
                     (DataManager_o *)SelfUserGame,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !SelfUserGame )
      goto LABEL_38;
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0);
    v7 = (ServantCommentManager_ClearWarInfo_o *)sub_1C93D20(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_44253576(v7, ClearWarIdList, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
    if ( System_String__op_Inequality(String, v8, 0) )
    {
      v9 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v9 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v9->static_fields->SAVE_KEY, v8, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
    if ( !SelfUserGame )
LABEL_38:
      sub_1C93D2C(SelfUserGame, v3);
    if ( !BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)SelfUserGame + 5), 0) )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !byte_4D31D9D )
      {
        sub_1C93AD4(&BalanceConfig_TypeInfo);
        byte_4D31D9D = 1;
      }
      v10 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      Part2FinalChapterCommonReleaseId_k__BackingField = v10->static_fields->_Part2FinalChapterCommonReleaseId_k__BackingField;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCommonRelease = CondType__IsCommonRelease(Part2FinalChapterCommonReleaseId_k__BackingField, 0, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2DDE8 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2DDE8 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      v13->static_fields->_IsPart2FinalChapter_k__BackingField = IsCommonRelease;
      TerminalPramsManager__SaveIsPart2FinalChapter(0);
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

  if ( (byte_4D31D8D & 1) == 0 )
  {
    sub_1C93AD4(&System_IO_BinaryWriter_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D31D8D = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C93D20(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65335052(v8, v7, 0);
  v10 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  v11 = v10->static_fields;
  openList = v11->openList;
  if ( !openList )
    sub_1C93D2C(v10, v9);
  if ( !v8 )
    sub_1C93D2C(v10, v9);
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
        sub_1C93D2C(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C93D2C(0, v19);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C93D2C(Item, v19);
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
            sub_1C93D2C(0, v14);
          v25 = System_Collections_Generic_List_int___get_Item(
                  v24,
                  j,
                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
            v8,
            v25,
            v8->klass->vtable._17_Write.method);
          klass = (System_Collections_Generic_List_int__o *)v20[2].klass;
          if ( !klass )
            sub_1C93D2C(0, v26);
          v28 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    v32 = sub_1C69E5C(v8, System_IDisposable_TypeInfo, 0);
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
  System_Int32_array *v8; // x22
  int32_t v9; // w23
  int32_t v10; // w24
  _BOOL8 IsResumeFgo20251220WarIdLastQuest; // x0
  int max_length; // w8
  __int64 v13; // x26
  int32_t v14; // w20
  int32_t v15; // w29
  int32_t v16; // w21
  ServantCommentManager_c *v17; // x0

  if ( (byte_4D31D96 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Reverse_int___);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_3352/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1C93AD4(&StringLiteral_3354/*"CHAPTER2_LAST_WAR_ID"*/);
    sub_1C93AD4(&StringLiteral_3355/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4D31D96 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3355/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  if ( (Value & 0x80000000) == 0 )
  {
    v4 = Value;
    v5 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v5);
    if ( !ClearWarIdList )
LABEL_29:
      sub_1C93D2C(ClearWarIdList, v7);
    v8 = ClearWarIdList;
    if ( ClearWarIdList->max_length
      && (v9 = ConstantMaster__getValue((System_String_o *)StringLiteral_3352/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0),
          v10 = ConstantMaster__getValue((System_String_o *)StringLiteral_3354/*"CHAPTER2_LAST_WAR_ID"*/, 0),
          System_Array__Reverse_int_(v8, (const MethodInfo_3164DD8 *)Method_System_Array_Reverse_int___),
          max_length = v8->max_length,
          max_length >= 1) )
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C93D34(IsResumeFgo20251220WarIdLastQuest);
        v15 = v8->m_Items[v13];
        if ( v15 == v10 )
        {
          ClearWarIdList = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
          if ( !ClearWarIdList )
            goto LABEL_29;
          IsResumeFgo20251220WarIdLastQuest = ManagementManager__IsResumeFgo20251220WarIdLastQuest(
                                                (ManagementManager_o *)ClearWarIdList,
                                                0);
          if ( !IsResumeFgo20251220WarIdLastQuest )
            break;
        }
        if ( v15 == v9 )
          v14 = 1;
        if ( v15 == v4 )
        {
          v16 = 1;
          goto LABEL_21;
        }
        max_length = v8->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_20;
      }
      v14 = 0;
      v16 = 2;
    }
    else
    {
      v14 = 0;
LABEL_20:
      v16 = 0;
    }
LABEL_21:
    v17 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v17 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v17->static_fields->UI_CHANGE_TYPE_KEY, v16, 0);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v14, 0);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0);
  }
}


System_String_o *ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D31D81 & 1) == 0 )
  {
    sub_1C93AD4(&AndroidUtil_TypeInfo);
    sub_1C93AD4(&DatFileName_TypeInfo);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D31D81 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0);
  return System_String__Concat_64463988(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


void ServantCommentManager_ClearWarInfo___ctor(ServantCommentManager_ClearWarInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D31E6D & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31E6D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.warIdList = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void ServantCommentManager_ClearWarInfo___ctor_44253576(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D31E6E & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31E6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
    warIdList = v5;
  }
  if ( !this )
    sub_1C93D2C(v5, v6);
  this->fields.warIdList = warIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)warIdList, v7, v8, v9, v10, v11, v12);
}


void ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}