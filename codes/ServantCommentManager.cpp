void ServantCommentManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ServantCommentManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ServantCommentManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ServantCommentManager_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct ServantCommentManager_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__c *v48; // x0
  System_Collections_Generic_List_object__o *v49; // x19
  struct ServantCommentManager_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7

  if ( (byte_5971D7F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&StringLiteral_4544/*"ChapterProgress"*/);
    sub_2213A60(&StringLiteral_7099/*"ForceReadNewProfiles"*/);
    sub_2213A60(&StringLiteral_10493/*"OverwriteUIVersion"*/);
    sub_2213A60(&StringLiteral_6954/*"Fgo_20150511_1"*/);
    sub_2213A60(&StringLiteral_6957/*"Fgo_20160620_1"*/);
    sub_2213A60(&StringLiteral_15334/*"UIChangeType"*/);
    byte_5971D7F = 1;
  }
  v7 = StringLiteral_6954/*"Fgo_20150511_1"*/;
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6954/*"Fgo_20150511_1"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCommentManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_6957/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6957/*"Fgo_20160620_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_DATA_VERSION, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_4544/*"ChapterProgress"*/;
  v17 = ServantCommentManager_TypeInfo->static_fields;
  v17->SAVE_KEY = (struct System_String_o *)StringLiteral_4544/*"ChapterProgress"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SAVE_KEY, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_15334/*"UIChangeType"*/;
  v25 = ServantCommentManager_TypeInfo->static_fields;
  v25->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_15334/*"UIChangeType"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->UI_CHANGE_TYPE_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_10493/*"OverwriteUIVersion"*/;
  v33 = ServantCommentManager_TypeInfo->static_fields;
  v33->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10493/*"OverwriteUIVersion"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->OVERWIRTE_UI_VERSION_KEY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_7099/*"ForceReadNewProfiles"*/;
  v41 = ServantCommentManager_TypeInfo->static_fields;
  v41->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_7099/*"ForceReadNewProfiles"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->FORCE_READ_NEW_COMMENTS_KEY, v40, v42, v43, v44, v45, v46, v47);
  v48 = System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo;
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v49 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v50 = ServantCommentManager_TypeInfo->static_fields;
  v50->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->openList, (int32_t)v49, v51, v52, v53, v54, v55, v56);
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

  if ( (byte_5971D68 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D68 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  openList = v2->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantCommentManager_TypeInfo;
    openList = ServantCommentManager_TypeInfo->static_fields->openList;
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
    v2 = ServantCommentManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5971D66 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D66 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v2);
  ServantCommentManager__ClearSaveDataList(v3);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 257;
  v5 = ServantCommentManager__WriteData(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v5);
  ServantCommentManager__checkUIChange(0, v6);
}


void ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D64 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D64 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0);
}


void ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5971D65 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D65 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v2);
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
  void *monitor; // x21
  Il2CppClass *klass; // x22
  void *v18; // x21
  Il2CppClass *v19; // x22
  int32_t v20; // w0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  System_Int32_array *v23; // x21
  System_Int32_array *v24; // x22
  int32_t v25; // w23
  ServantCommentManager_c *v26; // x0
  System_Int32_array *v27; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5971D74 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5971D74 = 1;
  }
  v27 = 0;
  idList = 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  Entitys = **(System_Object_array ***)(v4 + 184);
  if ( !Entitys )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v7);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v7);
  Entitys = **(System_Object_array ***)(v10 + 184);
  if ( !Entitys
    || (v11 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys = DataMasterBase_object__object__object___getEntitys(
                     v8,
                     (const MethodInfo_3F14B68 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys__)) == 0) )
  {
LABEL_34:
    sub_2213CDC(Entitys, v1);
  }
  max_length = Entitys->max_length;
  v13 = Entitys;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_2213CE4(Entitys);
      v15 = v13->m_Items[i];
      if ( v15 )
      {
        monitor = v15[1].monitor;
        klass = v15[2].klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v1);
        *(_QWORD *)&v29.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v29.fields.fakeValue = klass;
        Entitys = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
        if ( !v11 )
          goto LABEL_34;
        Entitys = (System_Object_array *)ServantCommentMaster__GetNewList(
                                           (ServantCommentMaster_o *)v11,
                                           &idList,
                                           &v27,
                                           (int32_t)Entitys,
                                           0);
        if ( ((unsigned __int8)Entitys & 1) != 0 )
        {
          v18 = v15[1].monitor;
          v19 = v15[2].klass;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v1);
          *(_QWORD *)&v30.fields.currentCryptoKey = v18;
          *(_QWORD *)&v30.fields.fakeValue = v19;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30, 0);
          v24 = v27;
          v23 = idList;
          v25 = v20;
          if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v21);
          ServantCommentManager__SetOpen(v25, v23, v24, v22);
        }
      }
      LODWORD(max_length) = v13->max_length;
    }
  }
  v26 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__WriteData((const MethodInfo *)v26);
}


System_Int32_array *ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  __int64 v3; // x1
  Il2CppObject *String; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19

  if ( (byte_5971D6C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_int___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&StringLiteral_26646/*"{}"*/);
    byte_5971D6C = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v2->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_26646/*"{}"*/,
                             0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3);
  v5 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v7 = v5;
  if ( !v5 )
    sub_2213CDC(0, v6);
  System_Array__Sort_int_(
    (System_Int32_array *)v5[1].klass,
    (const MethodInfo_37B9790 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v7[1].klass;
}


int32_t ServantCommentManager__GetIndexByChangeType(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D7C & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D7C = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v2) == 1;
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
  int32_t size; // w23
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w20
  DataManager_o *v15; // x21
  __int128 v16; // q0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5971D75 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___91662136);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D75 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_32;
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
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_32;
  }
  size = v7->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    --size,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          size,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( size <= 0 )
        goto LABEL_14;
    }
LABEL_32:
    sub_2213CDC(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___91662136);
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v12);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v13);
    if ( !Instance )
      goto LABEL_32;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v14 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v14,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_32;
        v15 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          &v21,
          v11,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v16 = *(_OWORD *)&v21.fields._list;
        v21.fields._list = 0;
        *(_QWORD *)&v21.fields._index = &v22;
        *(_OWORD *)&v22.fields._list = v16;
        v22.fields._current = v21.fields._current;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v17 )
            break;
          if ( !v15 )
            sub_2213CDC(v17, v18);
          if ( !v22.fields._current )
            sub_2213CDC(v17, v18);
          if ( HIDWORD(v15->fields.m_CachedPtr) == HIDWORD(v22.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v14,
              (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v14-- <= 0 )
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
  int32_t size; // w23
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w20
  DataManager_o *v15; // x21
  __int128 v16; // q0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5971D78 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___91662136);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D78 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_32;
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
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_32;
  }
  size = v7->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v7,
                                    --size,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          size,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( size <= 0 )
        goto LABEL_14;
    }
LABEL_32:
    sub_2213CDC(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___91662136);
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v12);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v13);
    if ( !Instance )
      goto LABEL_32;
    v7 = (System_Collections_Generic_List_object__o *)Instance;
    v14 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v7,
                                      v14,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_32;
        v15 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          &v21,
          v11,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v16 = *(_OWORD *)&v21.fields._list;
        v21.fields._list = 0;
        *(_QWORD *)&v21.fields._index = &v22;
        *(_OWORD *)&v22.fields._list = v16;
        v22.fields._current = v21.fields._current;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v17 )
            break;
          if ( !v15 )
            sub_2213CDC(v17, v18);
          if ( !v22.fields._current )
            sub_2213CDC(v17, v18);
          if ( HIDWORD(v15->fields.m_CachedPtr) == HIDWORD(v22.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v14,
              (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v14-- <= 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


int32_t ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D7E & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D7E = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0);
}


System_String_o *ServantCommentManager__GetSavedClearWarIdInfoString(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D6A & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&StringLiteral_26646/*"{}"*/);
    byte_5971D6A = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetString(v2->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_26646/*"{}"*/, 0);
}


int32_t ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D7D & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D7D = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v2);
}


int32_t ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D7B & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D7B = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->UI_CHANGE_TYPE_KEY, 0, 0);
}


void ServantCommentManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D67 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D67 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__ReadData((const MethodInfo *)v2);
}


bool ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_5971D73 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D73 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentManager__IsOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t readJudgeKey,
        bool isImageLimit,
        const MethodInfo *method)
{
  int v9; // w8
  ServantCommentMaster_o *Master_object; // x0
  __int64 v11; // x1
  ServantCommentManager_c *v12; // x8
  ServantCommentMaster_o *v13; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t v15; // w25
  bool v16; // w28
  ServantCommentManager_c *v17; // x0
  ServantCommentMaster_o *v18; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  int klass; // w29
  int32_t v21; // w27
  int size; // [xsp+Ch] [xbp-74h]
  ServantCommentEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5971D6E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D6E = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCommentId);
  Master_object = (ServantCommentMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  v12 = ServantCommentManager_TypeInfo;
  v13 = Master_object;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v11);
    v12 = ServantCommentManager_TypeInfo;
  }
  openList = v12->static_fields->openList;
  if ( !openList )
    goto LABEL_36;
  size = openList->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      v17 = ServantCommentManager_TypeInfo;
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v11);
        v17 = ServantCommentManager_TypeInfo;
      }
      Master_object = (ServantCommentMaster_o *)v17->static_fields->openList;
      if ( !Master_object )
        goto LABEL_36;
      Master_object = (ServantCommentMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)Master_object,
                                                  v15,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      if ( !Master_object )
        goto LABEL_36;
      v18 = Master_object;
      if ( Master_object->fields._MasterKind_k__BackingField == svtId )
      {
        MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
        if ( !MasterName_k__BackingField )
          goto LABEL_36;
        klass = (int)MasterName_k__BackingField[1].klass;
        if ( klass >= 1 )
          break;
      }
LABEL_32:
      v16 = ++v15 < size;
      if ( v15 == size )
        return v16;
    }
    v21 = 0;
    while ( 1 )
    {
      Master_object = (ServantCommentMaster_o *)v18->fields._MasterName_k__BackingField;
      if ( !Master_object )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v21,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
      {
        Master_object = *(ServantCommentMaster_o **)&v18->fields.revision;
        if ( !Master_object )
          break;
        if ( System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)Master_object,
               v21,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
          return v16;
        Master_object = *(ServantCommentMaster_o **)&v18->fields.revision;
        if ( !Master_object )
          break;
        if ( System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)Master_object,
               v21,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
          && !isImageLimit )
        {
          return v16;
        }
        if ( (readJudgeKey & 0x80000000) == 0 )
        {
          Master_object = *(ServantCommentMaster_o **)&v18->fields.revision;
          if ( !Master_object )
            break;
          Master_object = (ServantCommentMaster_o *)System_Collections_Generic_List_int___get_Item(
                                                      (System_Collections_Generic_List_int__o *)Master_object,
                                                      v21,
                                                      (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v13 )
            break;
          if ( ServantCommentMaster__TryGetEntity(v13, &entity, svtId, svtCommentId, (int32_t)Master_object, 0) )
          {
            Master_object = (ServantCommentMaster_o *)entity;
            if ( !entity )
              break;
            if ( ServantCommentEntity__GetReadJudgeKey(entity, 0) == readJudgeKey )
              return v16;
          }
        }
      }
      if ( klass == ++v21 )
        goto LABEL_32;
    }
LABEL_36:
    sub_2213CDC(Master_object, v11);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5971D76 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D76 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
  return ServantCommentManager__IsOpenByServantFriendShip_50579704(svt_id, oldFriendShipRank, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v8; // x1

  if ( (byte_5971D79 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D79 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&imageLimit);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_2213CDC(0, v8);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentManager__IsOpenByServantFriendShip_50579704(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971D77 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D77 = 1;
  }
  entity = 0;
  if ( limitCount == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
LABEL_22:
      sub_2213CDC(Instance, *(_QWORD *)&oldFriendShipRank);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
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
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x0
  __int64 v9; // x1
  ServantCommentManager_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5971D69 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D69 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  if ( v2->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v4);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0);
    v6 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v5);
      v6 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v6);
    v2 = ServantCommentManager_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, v1);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v2);
  ServantCommentManager__checkUIChange(0, v7);
  if ( ServantCommentManager__IsForceReadNewComments(v8) )
  {
    v10 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v9);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v10);
    ServantCommentManager__SetForceReadNewComments(0, v11);
  }
}


bool ServantCommentManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w19
  ServantCommentManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  ServantCommentManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  ServantCommentManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  ServantCommentManager_c *v20; // x0
  int v21; // w19
  int i; // w29
  int v23; // w21
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_int__c *v27; // x0
  System_Collections_Generic_List_int__o *v28; // x22
  System_Collections_Generic_List_int__o **v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_int__o *v36; // x23
  System_Collections_Generic_List_int__o **v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int v51; // w23
  System_Collections_Generic_List_int__o *v52; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v56; // x0
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  ServantCommentManager_c *v60; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x8
  ServantCommentManager_c *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x1
  char v69; // w19
  ServantCommentManager_c *v70; // x0
  int v71; // w19
  int j; // w26
  int v73; // w21
  __int64 v74; // x20
  __int64 v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_List_int__c *v77; // x0
  System_Collections_Generic_List_int__o *v78; // x22
  System_Collections_Generic_List_int__o **v79; // x21
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_Collections_Generic_List_int__o *v86; // x23
  System_Collections_Generic_List_int__o **v87; // x22
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  int v101; // w23
  int32_t v102; // w25
  int32_t v103; // w24
  System_Collections_Generic_List_int__o *v104; // x0
  struct System_Int32_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  System_Collections_Generic_List_int__o *v108; // x0
  struct System_Int32_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  ServantCommentManager_c *v112; // x0
  System_Collections_Generic_List_object__o *v113; // x0
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v119; // x9
  int *p_offset; // x10
  __int64 v121; // x0
  ServantCommentManager_c *v122; // x0
  System_IO_BinaryReader_o *v124; // [xsp+28h] [xbp-68h]

  if ( (byte_5971D70 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_5971D70 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
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
  v6 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v122 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v8);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v122);
    return 0;
  }
  v9 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v8);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v9);
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0);
  v124 = v11;
  if ( !v11 )
    sub_2213CDC(v12, v13);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                             v11,
                             v11->klass->vtable._22_ReadString.method);
  v16 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v14);
    v16 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v16->static_fields->SAVE_DATA_OLD_VERSION, v15, 0) )
  {
    if ( !v124 )
      sub_2213CDC(0, v17);
    v19 = ((__int64 (*)(void))v124->klass->vtable._9_ReadBoolean.methodPtr)();
    v20 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v18);
      v20 = ServantCommentManager_TypeInfo;
    }
    v20->static_fields->isContinueDevice = v19 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v124->klass->vtable._15_ReadInt32.methodPtr)(
            v124,
            v124->klass->vtable._15_ReadInt32.method);
    if ( v21 >= 1 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
        v24 = sub_2213CCC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0);
        if ( !v24 )
          sub_2213CDC(v25, v26);
        v27 = System_Collections_Generic_List_int__TypeInfo;
        *(_DWORD *)(v24 + 16) = v23;
        v28 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v27);
        System_Collections_Generic_List_int____ctor(
          v28,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v24 + 24) = v28;
        v29 = (System_Collections_Generic_List_int__o **)(v24 + 24);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 24), (int32_t)v28, v30, v31, v32, v33, v34, v35);
        v36 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v36,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v24 + 32) = v36;
        v37 = (System_Collections_Generic_List_int__o **)(v24 + 32);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), (int32_t)v36, v38, v39, v40, v41, v42, v43);
        v51 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
        if ( v51 >= 1 )
        {
          do
          {
            v44 = ((unsigned int (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
            v52 = *v29;
            if ( !*v29
              || (items = v52->fields._items,
                  v54 = Method_System_Collections_Generic_List_int__Add__,
                  ++v52->fields._version,
                  !items) )
            {
              sub_2213CDC(v52, v44);
            }
            size = v52->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v52,
                v44,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            }
            else
            {
              v52->fields._size = size + 1;
              items->m_Items[size] = v44;
            }
            v56 = *v37;
            if ( !*v37
              || (v57 = v56->fields._items,
                  v58 = Method_System_Collections_Generic_List_int__Add__,
                  ++v56->fields._version,
                  !v57) )
            {
              sub_2213CDC(v56, v44);
            }
            v59 = v56->fields._size;
            if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v56,
                0,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v56->fields._size = v59 + 1;
              v57->m_Items[v59] = 0;
            }
            --v51;
          }
          while ( v51 );
        }
        v60 = ServantCommentManager_TypeInfo;
        if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v44);
          v60 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v60->static_fields->openList;
        if ( !openList
          || (v62 = openList->fields._items,
              v63 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
              ++openList->fields._version,
              !v62) )
        {
          sub_2213CDC(openList, v44);
        }
        v64 = openList->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          openList->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), v24, v45, v46, v47, v48, v49, v50);
        }
      }
    }
LABEL_74:
    v5 = 1;
    goto LABEL_76;
  }
  v66 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v17);
    v66 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v66->static_fields->SAVE_DATA_VERSION, v15, 0) )
  {
    if ( !v124 )
      sub_2213CDC(0, v67);
    v69 = ((__int64 (*)(void))v124->klass->vtable._9_ReadBoolean.methodPtr)();
    v70 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v68);
      v70 = ServantCommentManager_TypeInfo;
    }
    v70->static_fields->isContinueDevice = v69 & 1;
    v71 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v124->klass->vtable._15_ReadInt32.methodPtr)(
            v124,
            v124->klass->vtable._15_ReadInt32.method);
    if ( v71 >= 1 )
    {
      for ( j = 0; j != v71; ++j )
      {
        v73 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
        v74 = sub_2213CCC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v74, 0);
        if ( !v74 )
          sub_2213CDC(v75, v76);
        v77 = System_Collections_Generic_List_int__TypeInfo;
        *(_DWORD *)(v74 + 16) = v73;
        v78 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v77);
        System_Collections_Generic_List_int____ctor(
          v78,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v74 + 24) = v78;
        v79 = (System_Collections_Generic_List_int__o **)(v74 + 24);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 24), (int32_t)v78, v80, v81, v82, v83, v84, v85);
        v86 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v86,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v74 + 32) = v86;
        v87 = (System_Collections_Generic_List_int__o **)(v74 + 32);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 32), (int32_t)v86, v88, v89, v90, v91, v92, v93);
        v101 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
        if ( v101 >= 1 )
        {
          do
          {
            v102 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
            v103 = ((__int64 (*)(void))v124->klass->vtable._15_ReadInt32.methodPtr)();
            v104 = *v79;
            if ( !*v79
              || (v105 = v104->fields._items,
                  v106 = Method_System_Collections_Generic_List_int__Add__,
                  ++v104->fields._version,
                  !v105) )
            {
              sub_2213CDC(v104, v94);
            }
            v107 = v104->fields._size;
            if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v104,
                v102,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
            }
            else
            {
              v104->fields._size = v107 + 1;
              v105->m_Items[v107] = v102;
            }
            v108 = *v87;
            if ( !*v87
              || (v109 = v108->fields._items,
                  v110 = Method_System_Collections_Generic_List_int__Add__,
                  ++v108->fields._version,
                  !v109) )
            {
              sub_2213CDC(v108, v94);
            }
            v111 = v108->fields._size;
            if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v108,
                v103,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
            }
            else
            {
              v108->fields._size = v111 + 1;
              v109->m_Items[v111] = v103;
            }
            --v101;
          }
          while ( v101 );
        }
        v112 = ServantCommentManager_TypeInfo;
        if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v94);
          v112 = ServantCommentManager_TypeInfo;
        }
        v113 = (System_Collections_Generic_List_object__o *)v112->static_fields->openList;
        if ( !v113
          || (v114 = v113->fields._items,
              v115 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
              ++v113->fields._version,
              !v114) )
        {
          sub_2213CDC(v113, v94);
        }
        v116 = v113->fields._size;
        if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v113,
            (Il2CppObject *)v74,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &v114->obj.klass + v116;
          v113->fields._size = v116 + 1;
          v117[4] = (Il2CppClass *)v74;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v117 + 4), v74, v95, v96, v97, v98, v99, v100);
        }
      }
    }
    goto LABEL_74;
  }
  v5 = 0;
LABEL_76:
  if ( v124 )
  {
    klass = v124->klass;
    v119 = *(unsigned __int16 *)&v124->klass->_2.rank;
    if ( *(_WORD *)&v124->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v119;
        p_offset += 4;
        if ( !v119 )
          goto LABEL_81;
      }
      v121 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_81:
      v121 = sub_224BC3C(v124, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v121)(v124, *(_QWORD *)(v121 + 8));
  }
  return v5;
}


void ServantCommentManager__SaveClearWarIdInfoString(System_String_o *info, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_5971D6B & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D6B = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method);
    v3 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v3->static_fields->SAVE_KEY, info, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_5971D72 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D72 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method);
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
  __int64 v7; // x29
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v9; // x8
  int v10; // w24
  int32_t v11; // w23
  ServantCommentManager_c *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  __int64 v14; // x21
  System_Collections_Generic_List_int__o *v15; // x23
  void **v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_int__o *v23; // x24
  void **v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  unsigned __int64 v37; // x24
  __int64 v38; // x27
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
  int v51; // w26
  unsigned __int64 v52; // x24
  char *v53; // x28
  int32_t v54; // w22
  int32_t v55; // w23
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10

  v5 = svtCommentIdList;
  if ( (byte_5971D6F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_5971D6F = 1;
  }
  if ( v5 )
  {
    LODWORD(v7) = v5->max_length;
    if ( (int)v7 >= 1 )
    {
      openList = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
        openList = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      }
      v9 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 56LL);
      if ( !v9 )
        goto LABEL_75;
      v10 = *(_DWORD *)(v9 + 24);
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = ServantCommentManager_TypeInfo;
          if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
            v12 = ServantCommentManager_TypeInfo;
          }
          openList = (System_Collections_Generic_List_object__o *)v12->static_fields->openList;
          if ( !openList )
            goto LABEL_75;
          openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    openList,
                                                                    v11,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !openList )
            goto LABEL_75;
          v13 = openList;
          if ( LODWORD(openList->fields._items) == svtId )
            break;
          if ( v10 == ++v11 )
            goto LABEL_16;
        }
        v50 = *(_QWORD *)&openList->fields._size;
        if ( v50 )
        {
          v51 = *(_DWORD *)(v50 + 24);
          v52 = 0;
          if ( (int)v7 <= 1 )
            v7 = 1;
          else
            v7 = (unsigned int)v7;
          while ( 1 )
          {
            if ( v52 >= LODWORD(v5->max_length) )
LABEL_76:
              sub_2213CE4(openList);
            v53 = (char *)svtCommentPriorityList + 4 * v52;
            v54 = v5->m_Items[v52];
            if ( v51 >= 1 )
              break;
LABEL_57:
            if ( v54 >= 1 )
            {
              openList = *(System_Collections_Generic_List_object__o **)&v13->fields._size;
              if ( !openList )
                goto LABEL_75;
              items = openList->fields._items;
              v57 = Method_System_Collections_Generic_List_int__Add__;
              ++openList->fields._version;
              if ( !items )
                goto LABEL_75;
              size = openList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)openList,
                  v54,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v54;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_75;
              if ( v52 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_76;
              openList = (System_Collections_Generic_List_object__o *)v13->fields._syncRoot;
              if ( !openList )
                goto LABEL_75;
              v59 = openList->fields._items;
              svtCommentIdList = (System_Int32_array *)*((unsigned int *)v53 + 8);
              v60 = Method_System_Collections_Generic_List_int__Add__;
              ++openList->fields._version;
              if ( !v59 )
                goto LABEL_75;
              v61 = openList->fields._size;
              if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)openList,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v61 + 1;
                *((_DWORD *)v59->m_Items + v61) = (_DWORD)svtCommentIdList;
              }
              openList = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
                openList = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&openList[4].fields._size + 48LL) = 1;
            }
            if ( ++v52 == v7 )
              return;
          }
          v55 = 0;
          while ( 1 )
          {
            openList = *(System_Collections_Generic_List_object__o **)&v13->fields._size;
            if ( !openList )
              break;
            openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                      (System_Collections_Generic_List_int__o *)openList,
                                                                      v55,
                                                                      (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)openList == v54 )
            {
              openList = (System_Collections_Generic_List_object__o *)v13->fields._syncRoot;
              if ( !openList )
                break;
              openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                        (System_Collections_Generic_List_int__o *)openList,
                                                                        v55,
                                                                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v52 >= LODWORD(svtCommentPriorityList->max_length) )
                goto LABEL_76;
              if ( (_DWORD)openList == *((_DWORD *)v53 + 8) )
                return;
            }
            if ( v51 == ++v55 )
              goto LABEL_57;
          }
        }
LABEL_75:
        sub_2213CDC(openList, svtCommentIdList);
      }
LABEL_16:
      v14 = sub_2213CCC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( !v14 )
        goto LABEL_75;
      *(_DWORD *)(v14 + 16) = svtId;
      v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v15,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v14 + 24) = v15;
      v16 = (void **)(v14 + 24);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v15, v17, v18, v19, v20, v21, v22);
      v23 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v14 + 32) = v23;
      v24 = (void **)(v14 + 32);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)v23, v25, v26, v27, v28, v29, v30);
      v37 = 0;
      v38 = (int)v7 <= 1 ? 1LL : (unsigned int)v7;
      do
      {
        if ( v37 >= LODWORD(v5->max_length) )
          goto LABEL_76;
        openList = (System_Collections_Generic_List_object__o *)*v16;
        if ( !*v16 )
          goto LABEL_75;
        v39 = openList->fields._items;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[v37];
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( !v39 )
          goto LABEL_75;
        v41 = openList->fields._size;
        if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)openList,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          openList->fields._size = v41 + 1;
          *((_DWORD *)v39->m_Items + v41) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_75;
        if ( v37 >= LODWORD(svtCommentPriorityList->max_length) )
          goto LABEL_76;
        openList = (System_Collections_Generic_List_object__o *)*v24;
        if ( !*v24 )
          goto LABEL_75;
        v42 = openList->fields._items;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v37];
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( !v42 )
          goto LABEL_75;
        v44 = openList->fields._size;
        if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)openList,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          openList->fields._size = v44 + 1;
          *((_DWORD *)v42->m_Items + v44) = (_DWORD)svtCommentIdList;
        }
        ++v37;
      }
      while ( v38 != v37 );
      v45 = ServantCommentManager_TypeInfo;
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
        v45 = ServantCommentManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v45->static_fields->openList;
      if ( !openList )
        goto LABEL_75;
      v46 = openList->fields._items;
      v47 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++openList->fields._version;
      if ( !v46 )
        goto LABEL_75;
      v48 = openList->fields._size;
      if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          openList,
          (Il2CppObject *)v14,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = (__int64)v46 + 8 * v48;
        openList->fields._size = v48 + 1;
        *(_QWORD *)(v49 + 32) = v14;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), v14, v31, v32, v33, v34, v35, v36);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  void *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  ServantCommentManager_c *v6; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v9; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  System_String_o *v12; // x20
  __int64 v13; // x1
  ServantCommentManager_c *v14; // x0
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  int32_t Part2FinalChapterCommonReleaseId_k__BackingField; // w19
  __int64 v18; // x1
  bool IsCommonRelease; // w19
  TerminalPramsManager_c *v20; // x0

  if ( (byte_5971D6D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__getEntityList__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_26646/*"{}"*/);
    byte_5971D6D = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_38;
    if ( UserGameEntity__IsAccountDelete((UserGameEntity_o *)SelfUserGame, 0) )
      return;
    v6 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v5);
      v6 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v6->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_26646/*"{}"*/, 0);
    SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_38;
    SelfUserGame = DataManager__GetMasterData_object_(
                     (DataManager_o *)SelfUserGame,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !SelfUserGame )
      goto LABEL_38;
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0);
    v9 = (ServantCommentManager_ClearWarInfo_o *)sub_2213CCC(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_50576640(v9, ClearWarIdList, v10);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v12 = JsonManager__toJson((Il2CppObject *)v9, 0, 0, 0);
    if ( System_String__op_Inequality(String, v12, 0) )
    {
      v14 = ServantCommentManager_TypeInfo;
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v13);
        v14 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v14->static_fields->SAVE_KEY, v12, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
    SelfUserGame = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
    if ( !SelfUserGame )
LABEL_38:
      sub_2213CDC(SelfUserGame, v4);
    if ( !BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)SelfUserGame + 5), 0) )
    {
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      if ( !byte_5971E64 )
      {
        sub_2213A60(&BalanceConfig_TypeInfo);
        byte_5971E64 = 1;
      }
      v16 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
        v16 = BalanceConfig_TypeInfo;
      }
      Part2FinalChapterCommonReleaseId_k__BackingField = v16->static_fields->_Part2FinalChapterCommonReleaseId_k__BackingField;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
      IsCommonRelease = CondType__IsCommonRelease(Part2FinalChapterCommonReleaseId_k__BackingField, 0, 0);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      if ( !byte_596DB48 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB48 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v20->static_fields->_IsPart2FinalChapter_k__BackingField = IsCommonRelease;
      TerminalPramsManager__SaveIsPart2FinalChapter(0);
    }
  }
}


bool ServantCommentManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  ServantCommentManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  ServantCommentManager_c *v11; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t i; // w20
  ServantCommentManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  _DWORD *monitor; // x8
  int v23; // w22
  int32_t j; // w23
  System_Collections_Generic_List_int__o *v25; // x0
  unsigned int v26; // w0
  __int64 v27; // x1
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v29; // w0
  System_IO_BinaryWriter_c *v30; // x8
  __int64 v31; // x9
  int *p_offset; // x10
  __int64 v33; // x0
  System_IO_BinaryWriter_o *v34; // [xsp+28h] [xbp-58h]

  if ( (byte_5971D71 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971D71 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v2 = ServantCommentManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = ServantCommentManager_TypeInfo->static_fields;
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
  v6 = ServantCommentManager_TypeInfo;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v9, v8, 0);
  v11 = ServantCommentManager_TypeInfo;
  v34 = v9;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v10);
    v11 = ServantCommentManager_TypeInfo;
  }
  openList = v11->static_fields->openList;
  if ( !openList )
    sub_2213CDC(v11, v10);
  if ( !v9 )
    sub_2213CDC(0, v10);
  size = openList->fields._size;
  v34->klass->vtable._22_Write.methodPtr();
  v34->klass->vtable._8_Write.methodPtr();
  if ( !v34 )
    sub_2213CDC(0, v14);
  v34->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = ServantCommentManager_TypeInfo;
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v15);
        v17 = ServantCommentManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->openList;
      if ( !v18 )
        sub_2213CDC(0, v15);
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v21 = Item;
      if ( !Item )
        sub_2213CDC(0, v20);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_2213CDC(Item, v20);
      v23 = monitor[6];
      v34->klass->vtable._17_Write.methodPtr();
      v34->klass->vtable._17_Write.methodPtr();
      if ( v23 >= 1 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v25 = (System_Collections_Generic_List_int__o *)v21[1].monitor;
          if ( !v25 )
            sub_2213CDC(0, v15);
          v26 = System_Collections_Generic_List_int___get_Item(
                  v25,
                  j,
                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v34->klass->vtable._17_Write.methodPtr)(
            v34,
            v26,
            v34->klass->vtable._17_Write.method);
          klass = (System_Collections_Generic_List_int__o *)v21[2].klass;
          if ( !klass )
            sub_2213CDC(0, v27);
          v29 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v34->klass->vtable._17_Write.methodPtr)(
            v34,
            v29,
            v34->klass->vtable._17_Write.method);
        }
      }
    }
  }
  v30 = v34->klass;
  v31 = *(unsigned __int16 *)&v34->klass->_2.rank;
  if ( *(_WORD *)&v34->klass->_2.rank )
  {
    p_offset = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v33 = sub_224BC3C(v34, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v33)(v34, *(_QWORD *)(v33 + 8));
  return 1;
}


void ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  int32_t Value; // w0
  __int64 v4; // x1
  int32_t v5; // w21
  ServantCommentManager_c *v6; // x0
  System_Int32_array *ClearWarIdList; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x22
  int32_t v10; // w23
  int32_t v11; // w24
  _BOOL8 IsResumeFgo20251220WarIdLastQuest; // x0
  int max_length; // w8
  __int64 v14; // x26
  int32_t v15; // w20
  int32_t v16; // w29
  int32_t v17; // w21
  ServantCommentManager_c *v18; // x0

  if ( (byte_5971D7A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Reverse_int___);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_2213A60(&StringLiteral_3471/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_2213A60(&StringLiteral_3472/*"CHAPTER2_LAST_WAR_ID"*/);
    sub_2213A60(&StringLiteral_3473/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_5971D7A = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3473/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  if ( (Value & 0x80000000) == 0 )
  {
    v5 = Value;
    v6 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v4);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v6);
    if ( !ClearWarIdList )
LABEL_29:
      sub_2213CDC(ClearWarIdList, v8);
    v9 = ClearWarIdList;
    if ( ClearWarIdList->max_length
      && (v10 = ConstantMaster__getValue((System_String_o *)StringLiteral_3471/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0),
          v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_3472/*"CHAPTER2_LAST_WAR_ID"*/, 0),
          System_Array__Reverse_int_(v9, (const MethodInfo_37AA9F4 *)Method_System_Array_Reverse_int___),
          max_length = v9->max_length,
          max_length >= 1) )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
          sub_2213CE4(IsResumeFgo20251220WarIdLastQuest);
        v16 = v9->m_Items[v14];
        if ( v16 == v11 )
        {
          ClearWarIdList = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
          if ( !ClearWarIdList )
            goto LABEL_29;
          IsResumeFgo20251220WarIdLastQuest = ManagementManager__IsResumeFgo20251220WarIdLastQuest(
                                                (ManagementManager_o *)ClearWarIdList,
                                                0);
          if ( !IsResumeFgo20251220WarIdLastQuest )
            break;
        }
        if ( v16 == v10 )
          v15 = 1;
        if ( v16 == v5 )
        {
          v17 = 1;
          goto LABEL_21;
        }
        max_length = v9->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_20;
      }
      v15 = 0;
      v17 = 2;
    }
    else
    {
      v15 = 0;
LABEL_20:
      v17 = 0;
    }
LABEL_21:
    v18 = ServantCommentManager_TypeInfo;
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v8);
      v18 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v18->static_fields->UI_CHANGE_TYPE_KEY, v17, 0);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v15, 0);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0);
  }
}


System_String_o *ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971D63 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971D63 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(11, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void ServantCommentManager_ClearWarInfo___ctor(ServantCommentManager_ClearWarInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971D80 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5971D80 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  this->fields.warIdList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void ServantCommentManager_ClearWarInfo___ctor_50576640(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5971D81 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5971D81 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    warIdList = v5;
  }
  if ( !this )
    sub_2213CDC(v5, v6);
  this->fields.warIdList = warIdList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)warIdList, v7, v8, v9, v10, v11, v12);
}


void ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}