void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct ServantCommentManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ServantCommentManager_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct ServantCommentManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct ServantCommentManager_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x19
  struct ServantCommentManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5C314 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4417/*"ChapterProgress"*/);
    sub_1B885B0(&StringLiteral_6777/*"ForceReadNewProfiles"*/);
    sub_1B885B0(&StringLiteral_10113/*"OverwriteUIVersion"*/);
    sub_1B885B0(&StringLiteral_6634/*"Fgo_20150511_1"*/);
    sub_1B885B0(&StringLiteral_6638/*"Fgo_20160620_1"*/);
    sub_1B885B0(&StringLiteral_14712/*"UIChangeType"*/);
    byte_4A5C314 = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6634/*"Fgo_20150511_1"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6634/*"Fgo_20150511_1"*/,
    v1,
    v2);
  v3 = StringLiteral_6638/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6638/*"Fgo_20160620_1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_DATA_VERSION, v3, v5, v6);
  v7 = StringLiteral_4417/*"ChapterProgress"*/;
  v8 = ServantCommentManager_TypeInfo->static_fields;
  v8->SAVE_KEY = (struct System_String_o *)StringLiteral_4417/*"ChapterProgress"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SAVE_KEY, v7, v9, v10);
  v11 = StringLiteral_14712/*"UIChangeType"*/;
  v12 = ServantCommentManager_TypeInfo->static_fields;
  v12->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14712/*"UIChangeType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->UI_CHANGE_TYPE_KEY, v11, v13, v14);
  v15 = StringLiteral_10113/*"OverwriteUIVersion"*/;
  v16 = ServantCommentManager_TypeInfo->static_fields;
  v16->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10113/*"OverwriteUIVersion"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->OVERWIRTE_UI_VERSION_KEY, v15, v17, v18);
  v19 = StringLiteral_6777/*"ForceReadNewProfiles"*/;
  v20 = ServantCommentManager_TypeInfo->static_fields;
  v20->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6777/*"ForceReadNewProfiles"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->FORCE_READ_NEW_COMMENTS_KEY, v19, v21, v22);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v24 = ServantCommentManager_TypeInfo->static_fields;
  v24->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->openList, (int32_t)v23, v25, v26);
}


void __fastcall ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5C2FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C2FF = 1;
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
      sub_1B8880C(v2, v1);
  }
  size = openList->fields._size;
  v5 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
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


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  _BOOL8 v4; // x0

  if ( (byte_4A5C2FD & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C2FD = 1;
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


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C2FB & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C2FB = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0LL);
}


void __fastcall ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A5C2FC & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C2FC = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x0
  __int64 v3; // x0
  System_Object_array *Entitys_object; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *v9; // x19
  __int64 v10; // x8
  System_Object_array *v11; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v13; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v16; // x21
  void *v17; // x22
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x21
  System_Int32_array *v21; // x22
  int32_t v22; // w23
  ServantCommentManager_c *v23; // x0
  System_Int32_array *v24; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A5C30A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5C30A = 1;
  }
  v24 = 0LL;
  idList = 0LL;
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1BDA48C(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  Entitys_object = **(System_Object_array ***)(v3 + 184);
  if ( !Entitys_object )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v6 = (DataMasterBase_o *)MasterData_object;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  Entitys_object = **(System_Object_array ***)(v8 + 184);
  if ( !Entitys_object
    || (v9 = DataManager__GetMasterData_object_(
               (DataManager_o *)Entitys_object,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_object = DataMasterBase__getEntitys_object_(
                            v6,
                            (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_34:
    sub_1B8880C(Entitys_object, v1);
  }
  v10 = *(_QWORD *)&Entitys_object->max_length;
  v11 = Entitys_object;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
        sub_1B88814(Entitys_object, v1);
      v13 = v11->m_Items[i];
      if ( v13 )
      {
        monitor = v13[1].monitor;
        klass = v13[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v26.fields.fakeValue = klass;
        Entitys_object = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v26,
                                                  0LL);
        if ( !v9 )
          goto LABEL_34;
        Entitys_object = (System_Object_array *)ServantCommentMaster__GetNewList(
                                                  (ServantCommentMaster_o *)v9,
                                                  &idList,
                                                  &v24,
                                                  (int32_t)Entitys_object,
                                                  0LL);
        if ( ((unsigned __int8)Entitys_object & 1) != 0 )
        {
          v17 = v13[1].monitor;
          v16 = v13[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v17;
          *(_QWORD *)&v27.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
          v20 = v24;
          v21 = idList;
          v22 = v18;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_40480624(v22, v21, v20, v19);
        }
      }
      LODWORD(v10) = v11->max_length;
    }
  }
  v23 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v23);
}


System_Int32_array *__fastcall ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *String; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_4A5C301 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25141/*"{}"*/);
    byte_4A5C301 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v1->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25141/*"{}"*/,
                             0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v5 = v3;
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  System_Array__Sort_int_(
    (System_Int32_array *)v3[1].klass,
    (const MethodInfo_2E4D514 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v5[1].klass;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
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

  if ( (byte_4A5C30B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76044504);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C30B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                0LL);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B8880C(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76044504);
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
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1B8880C(v15, v16);
          if ( !v19.fields._current )
            sub_1B8880C(v15, v16);
          if ( *((_DWORD *)&v14->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v13 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
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

  if ( (byte_4A5C30E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76044504);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C30E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityListWithImageList(
                                (ServantCommentMaster_o *)Instance,
                                svtId,
                                imageLimit,
                                9,
                                1,
                                0LL);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v7,
          v10,
          (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v10 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B8880C(Instance, v9);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76044504);
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
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v11 )
          goto LABEL_31;
        v14 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          v11,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v19 = v18;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v15 )
            break;
          if ( !v14 )
            sub_1B8880C(v15, v16);
          if ( !v19.fields._current )
            sub_1B8880C(v15, v16);
          if ( *((_DWORD *)&v14->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v19.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v7,
              v13,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v13 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C313 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C313 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0LL);
}


int32_t __fastcall ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C312 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C312 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C311 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C311 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->UI_CHANGE_TYPE_KEY, 0, 0LL);
}


void __fastcall ServantCommentManager__Initialize(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C2FE & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C2FE = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4A5C309 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C309 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0LL) == 1;
}


bool __fastcall ServantCommentManager__IsOpen(
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

  if ( (byte_4A5C303 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C303 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
    sub_1B8880C(Master_object, v11);
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
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v16[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v19,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
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
                                  (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v13 )
          goto LABEL_37;
        if ( ServantCommentMaster__TryGetEntity(v13, &entity, svtId, svtCommentId, (int32_t)Master_object, 0LL) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_37;
          if ( ServantCommentEntity__GetReadJudgeKey(entity, 0LL) == readJudgeKey )
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


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5C30C & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C30C = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_40482932(svt_id, oldFriendShipRank, -1, v3);
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v8; // x1

  if ( (byte_4A5C30F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C30F = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1B8880C(0LL, v8);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_40482932(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C30D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C30D = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
LABEL_18:
      sub_1B8880C(Instance, v8);
    Instance = UserServantCollectionMaster__TryGetEntity(
                 (UserServantCollectionMaster_o *)MasterData_object,
                 &entity,
                 Instance,
                 svt_id,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_18;
      maxLimitCount = entity->fields.maxLimitCount;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_18;
      limitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                     (ServantLimitImageMaster_o *)Instance,
                     svt_id,
                     maxLimitCount,
                     0LL);
    }
    else
    {
      limitCount = -1;
    }
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  Instance = (int64_t)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                        svt_id,
                        oldFriendShipRank,
                        limitCount,
                        method);
  if ( !Instance )
    goto LABEL_18;
  return *(_DWORD *)(Instance + 24) > 0;
}


void __fastcall ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0
  ServantCommentManager_c *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5C300 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C300 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v3);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
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


bool __fastcall ServantCommentManager__ReadData(const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v25; // x24
  System_Collections_Generic_List_int__o **v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
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
  int32_t v60; // w3
  System_Collections_Generic_List_int__c **v61; // x27
  System_Collections_Generic_List_int__o *v62; // x24
  System_Collections_Generic_List_int__o **v63; // x23
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
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

  if ( (byte_4A5C306 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4A5C306 = 1;
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
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
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
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v12 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v12->static_fields->SAVE_DATA_OLD_VERSION, v11, 0LL) )
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v14 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v14 = ServantCommentManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = sub_1B887FC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( !v18 )
          sub_1B8880C(v19, v20);
        *(_DWORD *)(v18 + 16) = v17;
        v21 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 24) = v21;
        v22 = (System_Collections_Generic_List_int__o **)(v18 + 24);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v21, v23, v24);
        v25 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 32) = v25;
        v26 = (System_Collections_Generic_List_int__o **)(v18 + 32);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v25, v27, v28);
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v32 >= 1 )
        {
          do
          {
            v29 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v33 = *v22;
            if ( !*v22 )
              sub_1B8880C(0LL, v29);
            items = v33->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v33->fields._version;
            if ( !items )
              sub_1B8880C(v33, v29);
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v33,
                v29,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v33->fields._size = size + 1;
              items->m_Items[size + 1] = v29;
            }
            v37 = *v26;
            if ( !*v26 )
              sub_1B8880C(0LL, v29);
            v38 = v37->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !v38 )
              sub_1B8880C(v37, v29);
            v40 = v37->fields._size;
            if ( (unsigned int)v40 >= v38->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                0,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v37->fields._size = v40 + 1;
              v38->m_Items[v40 + 1] = 0;
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
          sub_1B8880C(0LL, v29);
        v43 = openList->fields._items;
        v44 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v43 )
          sub_1B8880C(openList, v29);
        v45 = openList->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          openList->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), v18, v30, v31);
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
    if ( !System_String__op_Equality(v47->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v3 = 0;
      goto LABEL_74;
    }
    v48 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v49 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v49 = ServantCommentManager_TypeInfo;
    }
    v49->static_fields->isContinueDevice = v48 & 1;
    v50 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v50 >= 1 )
    {
      v51 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v50; ++j )
      {
        v53 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v54 = sub_1B887FC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v54, 0LL);
        if ( !v54 )
          sub_1B8880C(v55, v56);
        *(_DWORD *)(v54 + 16) = v53;
        v57 = (System_Collections_Generic_List_int__o *)sub_1B887FC(*v51);
        System_Collections_Generic_List_int____ctor(
          v57,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v54 + 24) = v57;
        v58 = (System_Collections_Generic_List_int__o **)(v54 + 24);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 24), (int32_t)v57, v59, v60);
        v61 = v51;
        v62 = (System_Collections_Generic_List_int__o *)sub_1B887FC(*v51);
        System_Collections_Generic_List_int____ctor(
          v62,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v54 + 32) = v62;
        v63 = (System_Collections_Generic_List_int__o **)(v54 + 32);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v62, v64, v65);
        v69 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v69 >= 1 )
        {
          do
          {
            v70 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v71 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v72 = *v58;
            if ( !*v58 )
              sub_1B8880C(0LL, v66);
            v73 = v72->fields._items;
            v74 = Method_System_Collections_Generic_List_int__Add__;
            ++v72->fields._version;
            if ( !v73 )
              sub_1B8880C(v72, v66);
            v75 = v72->fields._size;
            if ( (unsigned int)v75 >= v73->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v72,
                v70,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v72->fields._size = v75 + 1;
              v73->m_Items[v75 + 1] = v70;
            }
            v76 = *v63;
            if ( !*v63 )
              sub_1B8880C(0LL, v66);
            v77 = v76->fields._items;
            v78 = Method_System_Collections_Generic_List_int__Add__;
            ++v76->fields._version;
            if ( !v77 )
              sub_1B8880C(v76, v66);
            v79 = v76->fields._size;
            if ( (unsigned int)v79 >= v77->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v76,
                v71,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v76->fields._size = v79 + 1;
              v77->m_Items[v79 + 1] = v71;
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
          sub_1B8880C(0LL, v66);
        v82 = v81->fields._items;
        v83 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v81->fields._version;
        if ( !v82 )
          sub_1B8880C(v81, v66);
        v84 = v81->fields._size;
        if ( (unsigned int)v84 >= v82->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            (Il2CppObject *)v54,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v81->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v54;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v85 + 4), v54, v67, v68);
        }
      }
    }
  }
  v3 = 1;
LABEL_74:
  klass = v8->klass;
  v87 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v87;
      p_offset += 4;
      if ( !v87 )
        goto LABEL_78;
    }
    v89 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_78:
    v89 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v89)(v8, *(_QWORD *)(v89 + 8));
  return v3;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4A5C308 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C308 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v3 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->FORCE_READ_NEW_COMMENTS_KEY, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentManager__SetOpen(
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
  int32_t v16; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
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

  if ( (byte_4A5C304 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4A5C304 = 1;
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
    v13 = sub_1B887FC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = svtId;
      v14 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v14,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v13 + 24) = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)v14, v15, v16);
      openList = *(System_Collections_Generic_List_int__o **)(v13 + 24);
      if ( openList )
      {
        items = openList->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              openList,
              svtCommentId,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size + 1] = svtCommentId;
          }
          v20 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v20,
            (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v13 + 32) = v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v20, v21, v22);
          openList = *(System_Collections_Generic_List_int__o **)(v13 + 32);
          if ( openList )
          {
            v25 = openList->fields._items;
            v26 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v25 )
            {
              v27 = openList->fields._size;
              if ( (unsigned int)v27 >= v25->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v27 + 1;
                v25->m_Items[v27 + 1] = svtCommentPriority;
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
                  if ( (unsigned int)v31 >= v29->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v13,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = (__int64)v29 + 8 * v31;
                    openList->fields._size = v31 + 1;
                    *(_QWORD *)(v32 + 32) = v13;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), v13, v23, v24);
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
    sub_1B8880C(openList, *(_QWORD *)&svtCommentId);
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
                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v12->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v34,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
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
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v38 + 1;
    v36->m_Items[v38 + 1] = svtCommentId;
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
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v41 + 1;
    v39->m_Items[v41 + 1] = svtCommentPriority;
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


void __fastcall ServantCommentManager__SetOpen_40480624(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
  __int64 v7; // x21
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
  System_Collections_Generic_List_int__o *v20; // x24
  void **v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
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
  if ( (byte_4A5C305 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4A5C305 = 1;
  }
  if ( v5 )
  {
    v7 = *(_QWORD *)&v5->max_length;
    if ( (int)v7 >= 1 )
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
      v11 = (unsigned int)v7;
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
          v40 = 0LL;
          while ( 1 )
          {
            if ( v40 >= v5->max_length )
LABEL_73:
              sub_1B88814(Item, svtCommentIdList);
            v41 = v5->m_Items[v40 + 1];
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v41,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v41;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v40 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v40 + 1];
              v46 = Item->fields._items;
              v47 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v46 )
                goto LABEL_72;
              v48 = Item->fields._size;
              if ( (unsigned int)v48 >= v46->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
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
                                                                  (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v41 )
            {
              Item = (System_Collections_Generic_List_object__o *)v14->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v42,
                                                                    (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v40 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v40 + 1] )
                return;
            }
            if ( v39 == ++v42 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1B8880C(Item, svtCommentIdList);
      }
LABEL_17:
      v15 = sub_1B887FC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v15 )
        goto LABEL_72;
      *(_DWORD *)(v15 + 16) = svtId;
      v16 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v16,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 24) = v16;
      v17 = (void **)(v15 + 24);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)v16, v18, v19);
      v20 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v20,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v15 + 32) = v20;
      v21 = (void **)(v15 + 32);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v20, v22, v23);
      for ( j = 0LL; j != v11; ++j )
      {
        if ( j >= v5->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v17;
        if ( !*v17 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j + 1];
        v27 = Item->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v27 )
          goto LABEL_72;
        v29 = Item->fields._size;
        if ( (unsigned int)v29 >= v27->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v29 + 1;
          *((_DWORD *)v27->m_Items + v29) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= svtCommentPriorityList->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v21;
        if ( !*v21 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j + 1];
        v30 = Item->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v30 )
          goto LABEL_72;
        v32 = Item->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
      if ( (unsigned int)v36 >= v34->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = (__int64)v34 + 8 * v36;
        Item->fields._size = v36 + 1;
        *(_QWORD *)(v37 + 32) = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 32), v15, v24, v25);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void __fastcall ServantCommentManager__UpdateChapter(const MethodInfo *method)
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

  if ( (byte_4A5C302 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_25141/*"{}"*/);
    byte_4A5C302 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_19;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v4 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v4->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_25141/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_19:
      sub_1B8880C(SelfUserGame, v3);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v7 = (ServantCommentManager_ClearWarInfo_o *)sub_1B887FC(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_40478360(v7, ClearWarIdList, v8);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v9, 0LL) )
    {
      v10 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v10 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v10->static_fields->SAVE_KEY, v9, 0LL);
      ServantCommentManager__checkUIChange(0, v11);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


bool __fastcall ServantCommentManager__WriteData(const MethodInfo *method)
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

  if ( (byte_4A5C307 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C307 = 1;
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
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v8, v7, 0LL);
  v10 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  v11 = v10->static_fields;
  openList = v11->openList;
  if ( !openList )
    sub_1B8880C(v10, v9);
  if ( !v8 )
    sub_1B8880C(v10, v9);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v8->klass->vtable._22_Write.method)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
    v8,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._18_Write.methodPtr);
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
        sub_1B8880C(0LL, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1B8880C(0LL, v19);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1B8880C(Item, v19);
      v22 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        (unsigned int)v22,
        v8->klass->vtable._18_Write.methodPtr);
      if ( v22 >= 1 )
      {
        for ( j = 0; j != v22; ++j )
        {
          v24 = (System_Collections_Generic_List_int__o *)v20[1].monitor;
          if ( !v24 )
            sub_1B8880C(0LL, v14);
          v25 = System_Collections_Generic_List_int___get_Item(
                  v24,
                  j,
                  (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
            v8,
            v25,
            v8->klass->vtable._18_Write.methodPtr);
          klass = (System_Collections_Generic_List_int__o *)v20[2].klass;
          if ( !klass )
            sub_1B8880C(0LL, v26);
          v28 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
            v8,
            v28,
            v8->klass->vtable._18_Write.methodPtr);
        }
      }
    }
  }
  v29 = v8->klass;
  v30 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_35;
    }
    v32 = (__int64)(&v29->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v32 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v8, *(_QWORD *)(v32 + 8));
  return 1;
}


void __fastcall ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  int32_t Value; // w0
  int32_t v4; // w21
  ServantCommentManager_c *v5; // x0
  System_Int32_array *ClearWarIdList; // x0
  __int64 v7; // x1
  System_Int32_array *v8; // x23
  int32_t v9; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  int max_length; // w8
  __int64 v13; // x9
  int32_t v14; // w20
  int32_t v15; // w11
  int32_t v16; // w21
  ServantCommentManager_c *v17; // x0

  if ( (byte_4A5C310 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Reverse_int___);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3445/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1B885B0(&StringLiteral_3446/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4A5C310 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3446/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v4 = Value;
    v5 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v5);
    if ( !ClearWarIdList )
      sub_1B8880C(0LL, v7);
    v8 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v9 = ConstantMaster__getValue((System_String_o *)StringLiteral_3445/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse_int_(v8, (const MethodInfo_2E414CC *)Method_System_Array_Reverse_int___),
          max_length = v8->max_length,
          max_length >= 1) )
    {
      v13 = 0LL;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1B88814(v10, v11);
        v15 = v8->m_Items[v13 + 1];
        if ( v15 == v9 )
          v14 = 1;
        if ( v15 == v4 )
          break;
        if ( (int)++v13 >= max_length )
          goto LABEL_17;
      }
      v16 = 1;
    }
    else
    {
      v14 = 0;
LABEL_17:
      v16 = 0;
    }
    v17 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v17 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v17->static_fields->UI_CHANGE_TYPE_KEY, v16, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v14, 0LL);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_String_o *__fastcall ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C2FA & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C2FA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C315 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C315 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.warIdList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_40478360(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C316 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C316 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
    warIdList = v5;
  }
  if ( !this )
    sub_1B8880C(v5, v6);
  this->fields.warIdList = warIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)warIdList, v7, v8);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}