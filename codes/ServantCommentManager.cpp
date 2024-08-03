void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct ServantCommentManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct ServantCommentManager_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct ServantCommentManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct ServantCommentManager_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x19
  struct ServantCommentManager_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_49FD58E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v4);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_4395/*"ChapterProgress"*/, v6);
    sub_1B640C8(&StringLiteral_6749/*"ForceReadNewProfiles"*/, v7);
    sub_1B640C8(&StringLiteral_10064/*"OverwriteUIVersion"*/, v8);
    sub_1B640C8(&StringLiteral_6608/*"Fgo_20150511_1"*/, v9);
    sub_1B640C8(&StringLiteral_6612/*"Fgo_20160620_1"*/, v10);
    sub_1B640C8(&StringLiteral_14641/*"UIChangeType"*/, v11);
    byte_49FD58E = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6608/*"Fgo_20150511_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6608/*"Fgo_20150511_1"*/,
    v2,
    v3);
  v12 = StringLiteral_6612/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6612/*"Fgo_20160620_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_DATA_VERSION, v12, v14, v15);
  v16 = StringLiteral_4395/*"ChapterProgress"*/;
  v17 = ServantCommentManager_TypeInfo->static_fields;
  v17->SAVE_KEY = (struct System_String_o *)StringLiteral_4395/*"ChapterProgress"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->SAVE_KEY, v16, v18, v19);
  v20 = StringLiteral_14641/*"UIChangeType"*/;
  v21 = ServantCommentManager_TypeInfo->static_fields;
  v21->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14641/*"UIChangeType"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->UI_CHANGE_TYPE_KEY, v20, v22, v23);
  v24 = StringLiteral_10064/*"OverwriteUIVersion"*/;
  v25 = ServantCommentManager_TypeInfo->static_fields;
  v25->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10064/*"OverwriteUIVersion"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->OVERWIRTE_UI_VERSION_KEY, v24, v26, v27);
  v28 = StringLiteral_6749/*"ForceReadNewProfiles"*/;
  v29 = ServantCommentManager_TypeInfo->static_fields;
  v29->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6749/*"ForceReadNewProfiles"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->FORCE_READ_NEW_COMMENTS_KEY, v28, v30, v31);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v35 = ServantCommentManager_TypeInfo->static_fields;
  v35->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->openList, (int32_t)v34, v36, v37);
}


void __fastcall ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FD579 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__, v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v2);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v3);
    byte_49FD579 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  openList = v4->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantCommentManager_TypeInfo;
    openList = ServantCommentManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1B64324(v4);
  }
  size = openList->fields._size;
  v7 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
    v4 = ServantCommentManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantCommentManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0
  _BOOL8 v5; // x0

  if ( (byte_49FD577 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD577 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v2);
  ServantCommentManager__ClearSaveDataList(v3);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 257;
  v5 = ServantCommentManager__WriteData(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v5);
}


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD575 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD575 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0LL);
}


void __fastcall ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD576 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD576 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  System_Object_array *Entitys_object; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x8
  System_Object_array *v17; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v19; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v22; // x21
  void *v23; // x22
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x21
  System_Int32_array *v27; // x22
  int32_t v28; // w23
  ServantCommentManager_c *v29; // x0
  System_Int32_array *v30; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FD584 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v2);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_49FD584 = 1;
  }
  v30 = 0LL;
  idList = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  Entitys_object = **(System_Object_array ***)(v8 + 184);
  if ( !Entitys_object )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v11 = (DataMasterBase_o *)MasterData_object;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  Entitys_object = **(System_Object_array ***)(v13 + 184);
  if ( !Entitys_object
    || (v14 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys_object,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_object = DataMasterBase__getEntitys_object_(
                            v11,
                            (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_34:
    sub_1B64324(Entitys_object);
  }
  v16 = *(_QWORD *)&Entitys_object->max_length;
  v17 = Entitys_object;
  if ( (int)v16 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v16; ++i )
    {
      if ( i >= (unsigned int)v16 )
        sub_1B6432C(Entitys_object, v15);
      v19 = v17->m_Items[i];
      if ( v19 )
      {
        monitor = v19[1].monitor;
        klass = v19[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v32.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v32.fields.fakeValue = klass;
        Entitys_object = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                  v32,
                                                  0LL);
        if ( !v14 )
          goto LABEL_34;
        Entitys_object = (System_Object_array *)ServantCommentMaster__GetNewList(
                                                  (ServantCommentMaster_o *)v14,
                                                  &idList,
                                                  &v30,
                                                  (int32_t)Entitys_object,
                                                  0LL);
        if ( ((unsigned __int8)Entitys_object & 1) != 0 )
        {
          v23 = v19[1].monitor;
          v22 = v19[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v33.fields.currentCryptoKey = v23;
          *(_QWORD *)&v33.fields.fakeValue = v22;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
          v26 = v30;
          v27 = idList;
          v28 = v24;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_40145556(v28, v27, v26, v25);
        }
      }
      LODWORD(v16) = v17->max_length;
    }
  }
  v29 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v29);
}


System_Int32_array *__fastcall ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantCommentManager_c *v7; // x0
  Il2CppObject *String; // x19
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x19

  if ( (byte_49FD57B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int___, v1);
    sub_1B640C8(&int___TypeInfo, v2);
    sub_1B640C8(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v3);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_25039/*"{}"*/, v6);
    byte_49FD57B = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v7->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25039/*"{}"*/,
                             0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v10 = v9;
  if ( !v9 )
    sub_1B64324(0LL);
  System_Array__Sort_int_(
    (System_Int32_array *)v9[1].klass,
    (const MethodInfo_2E072A4 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v10[1].klass;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x19
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  System_Collections_Generic_List_object__o *v25; // x22
  const MethodInfo *v26; // x3
  int32_t v27; // w20
  DataManager_o *v28; // x21
  _BOOL8 v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FD585 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75665136, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49FD585 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&oldFriendShipRank,
                                                       *(_QWORD *)&limitCount);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList_39296992(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                0LL);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_31;
  }
  v24 = v20->fields._size - 1;
  if ( v24 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v20,
                                    v24,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v24,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v24 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                         v22,
                                                         v23);
    System_Collections_Generic_List_object____ctor_55234504(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75665136);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v26);
    if ( !Instance )
      goto LABEL_31;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    v27 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v27 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v20,
                                      v27,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v25 )
          goto LABEL_31;
        v28 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v25,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v29 )
            break;
          if ( !v28 )
            sub_1B64324(v29);
          if ( !v32.fields._current )
            sub_1B64324(v29);
          if ( *((_DWORD *)&v28->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v27,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v27 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
        int32_t svtId,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x19
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  System_Collections_Generic_List_object__o *v25; // x22
  const MethodInfo *v26; // x3
  int32_t v27; // w20
  DataManager_o *v28; // x21
  _BOOL8 v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FD588 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&imageLimit);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75665136, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49FD588 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&imageLimit,
                                                       *(_QWORD *)&oldFriendShipRank);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
    if ( !v20 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_31;
  }
  v24 = v20->fields._size - 1;
  if ( v24 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v20,
                                    v24,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v24,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v24 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                         v22,
                                                         v23);
    System_Collections_Generic_List_object____ctor_55234504(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75665136);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v26);
    if ( !Instance )
      goto LABEL_31;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    v27 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v27 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v20,
                                      v27,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v25 )
          goto LABEL_31;
        v28 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v25,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v29 )
            break;
          if ( !v28 )
            sub_1B64324(v29);
          if ( !v32.fields._current )
            sub_1B64324(v29);
          if ( *((_DWORD *)&v28->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v27,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v27 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD58D & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD58D = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0LL);
}


int32_t __fastcall ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD58C & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD58C = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v2);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD58B & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD58B = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->UI_CHANGE_TYPE_KEY, 0, 0LL);
}


void __fastcall ServantCommentManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD578 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD578 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_49FD583 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, v1);
    byte_49FD583 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0LL) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  ServantCommentManager_c **v4; // x25
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v13; // x8
  int v14; // w27
  const MethodInfo_34AD404 **v15; // x24
  char v16; // w26
  int32_t v17; // w22
  System_Collections_Generic_List_object__o *v18; // x23
  int size; // w8
  int v20; // w28
  ServantCommentManager_c **v21; // x21
  const MethodInfo_34AD404 **v22; // x25
  int32_t v23; // w24
  int32_t v25; // [xsp+Ch] [xbp-64h]

  v4 = &ServantCommentManager_TypeInfo;
  if ( (byte_49FD57D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      *(_QWORD *)&svtCommentId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v11);
    byte_49FD57D = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
  }
  v13 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 56LL);
  if ( !v13 )
LABEL_30:
    sub_1B64324(Item);
  v14 = *(_DWORD *)(v13 + 24);
  if ( v14 < 1 )
  {
    v16 = 0;
    return v16 & 1;
  }
  v15 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__;
  v16 = 0;
  v17 = 0;
  v25 = svtId;
  while ( 1 )
  {
    if ( !Item[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = (System_Collections_Generic_List_object__o *)*v4;
    }
    Item = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&Item[4].fields._size + 56LL);
    if ( !Item )
      goto LABEL_30;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v17,
                                                          *v15);
    if ( !Item )
      goto LABEL_30;
    v18 = Item;
    if ( LODWORD(Item->fields._items) == svtId )
    {
      Item = *(System_Collections_Generic_List_object__o **)&Item->fields._size;
      if ( !Item )
        goto LABEL_30;
      size = Item->fields._size;
      v20 = size - 1;
      if ( size >= 1 )
      {
        v21 = v4;
        v22 = v15;
        v23 = 0;
        while ( 1 )
        {
          if ( System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Item,
                 v23,
                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
          {
            Item = (System_Collections_Generic_List_object__o *)v18->fields._syncRoot;
            if ( !Item )
              goto LABEL_30;
            if ( System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Item,
                   v23,
                   (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
            {
              v16 = 1;
              return v16 & 1;
            }
            Item = (System_Collections_Generic_List_object__o *)v18->fields._syncRoot;
            if ( !Item )
              goto LABEL_30;
            v16 |= System_Collections_Generic_List_int___get_Item(
                     (System_Collections_Generic_List_int__o *)Item,
                     v23,
                     (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority;
          }
          if ( v20 == v23 )
            break;
          Item = *(System_Collections_Generic_List_object__o **)&v18->fields._size;
          ++v23;
          if ( !Item )
            goto LABEL_30;
        }
        v15 = v22;
        v4 = v21;
        svtId = v25;
      }
    }
    if ( ++v17 == v14 )
      return v16 & 1;
    Item = (System_Collections_Generic_List_object__o *)*v4;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FD586 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    byte_49FD586 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_40147864(svt_id, oldFriendShipRank, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0

  if ( (byte_49FD589 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, *(_QWORD *)&imageLimit);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v7);
    byte_49FD589 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1B64324(0LL);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_40147864(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD587 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FD587 = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
LABEL_18:
      sub_1B64324(Instance);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x0
  const MethodInfo *v7; // x0
  ServantCommentManager_c *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49FD57A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FD57A = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
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
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
    v6 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v6 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v6);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v4);
  if ( ServantCommentManager__IsForceReadNewComments(v7) )
  {
    v8 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v8);
    ServantCommentManager__SetForceReadNewComments(0, v9);
  }
}


bool __fastcall ServantCommentManager__ReadData(const MethodInfo *method)
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
  ServantCommentManager_c *v10; // x0
  ManagerConfig_c *v11; // x0
  bool v12; // w21
  ServantCommentManager_c *v13; // x0
  System_String_o *SaveFileName; // x19
  ServantCommentManager_c *v15; // x0
  System_IO_Stream_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_IO_BinaryReader_o *v19; // x19
  __int64 v20; // x0
  System_String_o *v21; // x20
  ServantCommentManager_c *v22; // x0
  char v23; // w20
  ServantCommentManager_c *v24; // x0
  int v25; // w20
  int i; // w25
  int v27; // w22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_int__o *v34; // x23
  System_Collections_Generic_List_int__o **v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_int__o *v40; // x24
  System_Collections_Generic_List_int__o **v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int v46; // w24
  int32_t v47; // w1
  System_Collections_Generic_List_int__o *v48; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v52; // x0
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  ServantCommentManager_c *v56; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x8
  ServantCommentManager_c *v62; // x0
  char v63; // w20
  ServantCommentManager_c *v64; // x0
  int v65; // w20
  System_Collections_Generic_List_int__c **v66; // x24
  int j; // w28
  int v68; // w22
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x21
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_List_int__o *v75; // x23
  System_Collections_Generic_List_int__o **v76; // x22
  int32_t v77; // w2
  int32_t v78; // w3
  System_Collections_Generic_List_int__c **v79; // x27
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_Generic_List_int__o *v82; // x24
  System_Collections_Generic_List_int__o **v83; // x23
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  int v88; // w24
  int32_t v89; // w26
  int32_t v90; // w25
  System_Collections_Generic_List_int__o *v91; // x0
  struct System_Int32_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  System_Collections_Generic_List_int__o *v95; // x0
  struct System_Int32_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  ServantCommentManager_c *v99; // x0
  System_Collections_Generic_List_object__o *v100; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v106; // x9
  int32_t *p_offset; // x10
  __int64 v108; // x0
  ServantCommentManager_c *v109; // x0

  if ( (byte_49FD580 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&ManagerConfig_TypeInfo, v7);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v8);
    sub_1B640C8(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v9);
    byte_49FD580 = 1;
  }
  v10 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  v10->static_fields->isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 1;
  v13 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v13);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v109 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v109);
    return 0;
  }
  v15 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v15);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v19 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v17, v18);
  System_IO_BinaryReader___ctor(v19, v16, 0LL);
  if ( !v19 )
    sub_1B64324(v20);
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._22_ReadString.method)(
                             v19,
                             v19->klass->vtable._23_ReadChars.methodPtr);
  v22 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v22 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v22->static_fields->SAVE_DATA_OLD_VERSION, v21, 0LL) )
  {
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._9_ReadBoolean.method)(
            v19,
            v19->klass->vtable._10_ReadByte.methodPtr);
    v24 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v24 = ServantCommentManager_TypeInfo;
    }
    v24->static_fields->isContinueDevice = v23 & 1;
    v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
            v19,
            v19->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v25 >= 1 )
    {
      for ( i = 0; i != v25; ++i )
      {
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v30 = sub_1B64314(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v28, v29);
        System_Object___ctor((Il2CppObject *)v30, 0LL);
        if ( !v30 )
          sub_1B64324(v31);
        *(_DWORD *)(v30 + 16) = v27;
        v34 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v32,
                                                          v33);
        System_Collections_Generic_List_int____ctor(
          v34,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v30 + 24) = v34;
        v35 = (System_Collections_Generic_List_int__o **)(v30 + 24);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)v34, v36, v37);
        v40 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v38,
                                                          v39);
        System_Collections_Generic_List_int____ctor(
          v40,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v30 + 32) = v40;
        v41 = (System_Collections_Generic_List_int__o **)(v30 + 32);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v40, v42, v43);
        v46 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v46 >= 1 )
        {
          do
          {
            v47 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                    v19,
                    v19->klass->vtable._16_ReadUInt32.methodPtr);
            v48 = *v35;
            if ( !*v35 )
              sub_1B64324(0LL);
            items = v48->fields._items;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v48->fields._version;
            if ( !items )
              sub_1B64324(v48);
            size = v48->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v48,
                v47,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v48->fields._size = size + 1;
              items->m_Items[size + 1] = v47;
            }
            v52 = *v41;
            if ( !*v41 )
              sub_1B64324(0LL);
            v53 = v52->fields._items;
            v54 = Method_System_Collections_Generic_List_int__Add__;
            ++v52->fields._version;
            if ( !v53 )
              sub_1B64324(v52);
            v55 = v52->fields._size;
            if ( (unsigned int)v55 >= v53->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v52,
                0,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            }
            else
            {
              v52->fields._size = v55 + 1;
              v53->m_Items[v55 + 1] = 0;
            }
            --v46;
          }
          while ( v46 );
        }
        v56 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v56 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v56->static_fields->openList;
        if ( !openList )
          sub_1B64324(0LL);
        v58 = openList->fields._items;
        v59 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v58 )
          sub_1B64324(openList);
        v60 = openList->fields._size;
        if ( (unsigned int)v60 >= v58->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v30,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &v58->obj.klass + v60;
          openList->fields._size = v60 + 1;
          v61[4] = (Il2CppClass *)v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), v30, v44, v45);
        }
      }
    }
  }
  else
  {
    v62 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v62 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v62->static_fields->SAVE_DATA_VERSION, v21, 0LL) )
    {
      v12 = 0;
      goto LABEL_74;
    }
    v63 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._9_ReadBoolean.method)(
            v19,
            v19->klass->vtable._10_ReadByte.methodPtr);
    v64 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v64 = ServantCommentManager_TypeInfo;
    }
    v64->static_fields->isContinueDevice = v63 & 1;
    v65 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
            v19,
            v19->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v65 >= 1 )
    {
      v66 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v65; ++j )
      {
        v68 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        v71 = sub_1B64314(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v69, v70);
        System_Object___ctor((Il2CppObject *)v71, 0LL);
        if ( !v71 )
          sub_1B64324(v72);
        *(_DWORD *)(v71 + 16) = v68;
        v75 = (System_Collections_Generic_List_int__o *)sub_1B64314(*v66, v73, v74);
        System_Collections_Generic_List_int____ctor(
          v75,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v71 + 24) = v75;
        v76 = (System_Collections_Generic_List_int__o **)(v71 + 24);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 24), (int32_t)v75, v77, v78);
        v79 = v66;
        v82 = (System_Collections_Generic_List_int__o *)sub_1B64314(*v66, v80, v81);
        System_Collections_Generic_List_int____ctor(
          v82,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v71 + 32) = v82;
        v83 = (System_Collections_Generic_List_int__o **)(v71 + 32);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 32), (int32_t)v82, v84, v85);
        v88 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                v19,
                v19->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v88 >= 1 )
        {
          do
          {
            v89 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                    v19,
                    v19->klass->vtable._16_ReadUInt32.methodPtr);
            v90 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                    v19,
                    v19->klass->vtable._16_ReadUInt32.methodPtr);
            v91 = *v76;
            if ( !*v76 )
              sub_1B64324(0LL);
            v92 = v91->fields._items;
            v93 = Method_System_Collections_Generic_List_int__Add__;
            ++v91->fields._version;
            if ( !v92 )
              sub_1B64324(v91);
            v94 = v91->fields._size;
            if ( (unsigned int)v94 >= v92->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v91,
                v89,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
            }
            else
            {
              v91->fields._size = v94 + 1;
              v92->m_Items[v94 + 1] = v89;
            }
            v95 = *v83;
            if ( !*v83 )
              sub_1B64324(0LL);
            v96 = v95->fields._items;
            v97 = Method_System_Collections_Generic_List_int__Add__;
            ++v95->fields._version;
            if ( !v96 )
              sub_1B64324(v95);
            v98 = v95->fields._size;
            if ( (unsigned int)v98 >= v96->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v95,
                v90,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
            }
            else
            {
              v95->fields._size = v98 + 1;
              v96->m_Items[v98 + 1] = v90;
            }
            --v88;
          }
          while ( v88 );
        }
        v99 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v99 = ServantCommentManager_TypeInfo;
        }
        v66 = v79;
        v100 = (System_Collections_Generic_List_object__o *)v99->static_fields->openList;
        if ( !v100 )
          sub_1B64324(0LL);
        v101 = v100->fields._items;
        v102 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v100->fields._version;
        if ( !v101 )
          sub_1B64324(v100);
        v103 = v100->fields._size;
        if ( (unsigned int)v103 >= v101->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v100,
            (Il2CppObject *)v71,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
        }
        else
        {
          v104 = &v101->obj.klass + v103;
          v100->fields._size = v103 + 1;
          v104[4] = (Il2CppClass *)v71;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 4), v71, v86, v87);
        }
      }
    }
  }
  v12 = 1;
LABEL_74:
  klass = v19->klass;
  v106 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v106;
      p_offset += 4;
      if ( !v106 )
        goto LABEL_78;
    }
    v108 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_78:
    v108 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v108)(v19, *(_QWORD *)(v108 + 8));
  return v12;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_49FD582 & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, method);
    byte_49FD582 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *openList; // x0
  __int64 v17; // x8
  int v18; // w8
  int v19; // w26
  int32_t i; // w23
  System_Collections_Generic_List_int__o *v21; // x21
  __int64 v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  ServantCommentManager_c *v41; // x0
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  ServantCommentManager_c *v46; // x0
  int32_t v47; // w22
  int v48; // w23
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10

  if ( (byte_49FD57E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtCommentId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v14);
    sub_1B640C8(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_49FD57E = 1;
  }
  openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  v17 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 56LL);
  if ( !v17 )
    goto LABEL_55;
  v18 = *(_DWORD *)(v17 + 24);
  v19 = v18 - 1;
  if ( v18 < 1 )
  {
LABEL_15:
    v22 = sub_1B64314(
            ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
            *(_QWORD *)&svtCommentId,
            *(_QWORD *)&svtCommentPriority);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 16) = svtId;
      v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v23,
                                                        v24);
      System_Collections_Generic_List_int____ctor(
        v25,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v22 + 24) = v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)v25, v26, v27);
      openList = *(System_Collections_Generic_List_int__o **)(v22 + 24);
      if ( openList )
      {
        items = openList->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              openList,
              svtCommentId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size + 1] = svtCommentId;
          }
          v33 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v28,
                                                            v29);
          System_Collections_Generic_List_int____ctor(
            v33,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v22 + 32) = v33;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v33, v34, v35);
          openList = *(System_Collections_Generic_List_int__o **)(v22 + 32);
          if ( openList )
          {
            v38 = openList->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v38 )
            {
              v40 = openList->fields._size;
              if ( (unsigned int)v40 >= v38->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v40 + 1;
                v38->m_Items[v40 + 1] = svtCommentPriority;
              }
              v41 = ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v41 = ServantCommentManager_TypeInfo;
              }
              openList = (System_Collections_Generic_List_int__o *)v41->static_fields->openList;
              if ( openList )
              {
                v42 = openList->fields._items;
                v43 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
                ++openList->fields._version;
                if ( v42 )
                {
                  v44 = openList->fields._size;
                  if ( (unsigned int)v44 >= v42->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v45 = (__int64)v42 + 8 * v44;
                    openList->fields._size = v44 + 1;
                    *(_QWORD *)(v45 + 32) = v22;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 32), v22, v36, v37);
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
    sub_1B64324(openList);
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
                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !openList )
      goto LABEL_55;
    v21 = openList;
    if ( LODWORD(openList->fields._items) == svtId )
      break;
    if ( v19 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  openList = *(System_Collections_Generic_List_int__o **)&openList->fields._size;
  if ( !openList )
    goto LABEL_55;
  v47 = 0;
  v48 = openList->fields._size & ~(openList->fields._size >> 31);
  while ( v48 != v47 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           openList,
           v47,
           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v47,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return;
    }
    openList = *(System_Collections_Generic_List_int__o **)&v21->fields._size;
    ++v47;
    if ( !openList )
      goto LABEL_55;
  }
  v49 = openList->fields._items;
  v50 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v49 )
    goto LABEL_55;
  v51 = openList->fields._size;
  if ( (unsigned int)v51 >= v49->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v51 + 1;
    v49->m_Items[v51 + 1] = svtCommentId;
  }
  openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
  if ( !openList )
    goto LABEL_55;
  v52 = openList->fields._items;
  v53 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v52 )
    goto LABEL_55;
  v54 = openList->fields._size;
  if ( (unsigned int)v54 >= v52->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v54 + 1;
    v52->m_Items[v54 + 1] = svtCommentPriority;
  }
  v46 = ServantCommentManager_TypeInfo;
  if ( ServantCommentManager_TypeInfo->_2.cctor_finished )
    goto LABEL_34;
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_33:
  v46 = ServantCommentManager_TypeInfo;
LABEL_34:
  v46->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_40145556(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v18; // x8
  int v19; // w8
  __int64 v20; // x26
  int v21; // w24
  int32_t i; // w23
  System_Collections_Generic_List_object__o *v23; // x21
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x23
  void **v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_int__o *v33; // x24
  void **v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  unsigned __int64 j; // x24
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  ServantCommentManager_c *v46; // x0
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  __int64 v51; // x8
  int v52; // w27
  unsigned __int64 v53; // x24
  int32_t v54; // w22
  int32_t v55; // w23
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10

  v5 = svtCommentIdList;
  if ( (byte_49FD57F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, svtCommentIdList);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v14);
    sub_1B640C8(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_49FD57F = 1;
  }
  if ( v5 )
  {
    v16 = *(_QWORD *)&v5->max_length;
    if ( (int)v16 >= 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      }
      v18 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 56LL);
      if ( !v18 )
        goto LABEL_72;
      v19 = *(_DWORD *)(v18 + 24);
      v20 = (unsigned int)v16;
      v21 = v19 - 1;
      if ( v19 >= 1 )
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v23 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v21 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v51 = *(_QWORD *)&Item->fields._size;
        if ( v51 )
        {
          v52 = *(_DWORD *)(v51 + 24);
          v53 = 0LL;
          while ( 1 )
          {
            if ( v53 >= v5->max_length )
LABEL_73:
              sub_1B6432C(Item, svtCommentIdList);
            v54 = v5->m_Items[v53 + 1];
            if ( v52 >= 1 )
              break;
LABEL_54:
            if ( v54 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v57 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v54,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v54;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v53 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v53 + 1];
              v59 = Item->fields._items;
              v60 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v59 )
                goto LABEL_72;
              v61 = Item->fields._size;
              if ( (unsigned int)v61 >= v59->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v61 + 1;
                *((_DWORD *)v59->m_Items + v61) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v53 == v20 )
              return;
          }
          v55 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v55,
                                                                  (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v54 )
            {
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v55,
                                                                    (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v53 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v53 + 1] )
                return;
            }
            if ( v52 == ++v55 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1B64324(Item);
      }
LABEL_17:
      v24 = sub_1B64314(
              ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
              svtCommentIdList,
              svtCommentPriorityList);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( !v24 )
        goto LABEL_72;
      *(_DWORD *)(v24 + 16) = svtId;
      v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v25,
                                                        v26);
      System_Collections_Generic_List_int____ctor(
        v27,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 24) = v27;
      v28 = (void **)(v24 + 24);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v27, v29, v30);
      v33 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v31,
                                                        v32);
      System_Collections_Generic_List_int____ctor(
        v33,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 32) = v33;
      v34 = (void **)(v24 + 32);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v33, v35, v36);
      for ( j = 0LL; j != v20; ++j )
      {
        if ( j >= v5->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v28;
        if ( !*v28 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j + 1];
        v40 = Item->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v40 )
          goto LABEL_72;
        v42 = Item->fields._size;
        if ( (unsigned int)v42 >= v40->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v42 + 1;
          *((_DWORD *)v40->m_Items + v42) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= svtCommentPriorityList->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v34;
        if ( !*v34 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j + 1];
        v43 = Item->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v43 )
          goto LABEL_72;
        v45 = Item->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v45 + 1;
          *((_DWORD *)v43->m_Items + v45) = (_DWORD)svtCommentIdList;
        }
      }
      v46 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v46 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v46->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v47 = Item->fields._items;
      v48 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v47 )
        goto LABEL_72;
      v49 = Item->fields._size;
      if ( (unsigned int)v49 >= v47->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (__int64)v47 + 8 * v49;
        Item->fields._size = v49 + 1;
        *(_QWORD *)(v50 + 32) = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), v24, v37, v38);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void __fastcall ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ManagerConfig_c *v8; // x0
  UserGameEntity_o *SelfUserGame; // x0
  ServantCommentManager_c *v10; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  ServantCommentManager_ClearWarInfo_o *v15; // x20
  const MethodInfo *v16; // x2
  System_String_o *v17; // x20
  ServantCommentManager_c *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_49FD57C & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_ClearWarInfo_TypeInfo, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1B640C8(&JsonManager_TypeInfo, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_25039/*"{}"*/, v7);
    byte_49FD57C = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_19;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v10 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v10 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v10->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_25039/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_19:
      sub_1B64324(SelfUserGame);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v15 = (ServantCommentManager_ClearWarInfo_o *)sub_1B64314(ServantCommentManager_ClearWarInfo_TypeInfo, v13, v14);
    ServantCommentManager_ClearWarInfo___ctor_40143444(v15, ClearWarIdList, v16);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)v15, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v17, 0LL) )
    {
      v18 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v18 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v18->static_fields->SAVE_KEY, v17, 0LL);
      ServantCommentManager__checkUIChange(0, v19);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


bool __fastcall ServantCommentManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantCommentManager_c *v9; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v11; // x0
  ServantCommentManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  ServantCommentManager_c *v19; // x0
  struct ServantCommentManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  int32_t i; // w21
  ServantCommentManager_c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x22
  _DWORD *monitor; // x8
  int v29; // w23
  int32_t j; // w24
  System_Collections_Generic_List_int__o *v31; // x0
  unsigned int v32; // w0
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v34; // w0
  System_IO_BinaryWriter_c *v35; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0

  if ( (byte_49FD581 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_1B640C8(&ManagerConfig_TypeInfo, v7);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v8);
    byte_49FD581 = 1;
  }
  v9 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v9 = ServantCommentManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    static_fields = ServantCommentManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 0;
  v13 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v18 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_61613552(v18, v15, 0LL);
  v19 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v19 = ServantCommentManager_TypeInfo;
  }
  v20 = v19->static_fields;
  openList = v20->openList;
  if ( !openList )
    sub_1B64324(v19);
  if ( !v18 )
    sub_1B64324(v19);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v20->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v24 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v24 = ServantCommentManager_TypeInfo;
      }
      v25 = (System_Collections_Generic_List_object__o *)v24->static_fields->openList;
      if ( !v25 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v27 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1B64324(Item);
      v29 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        LODWORD(Item[1].klass),
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v29,
        v18->klass->vtable._18_Write.methodPtr);
      if ( v29 >= 1 )
      {
        for ( j = 0; j != v29; ++j )
        {
          v31 = (System_Collections_Generic_List_int__o *)v27[1].monitor;
          if ( !v31 )
            sub_1B64324(0LL);
          v32 = System_Collections_Generic_List_int___get_Item(
                  v31,
                  j,
                  (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
            v18,
            v32,
            v18->klass->vtable._18_Write.methodPtr);
          klass = (System_Collections_Generic_List_int__o *)v27[2].klass;
          if ( !klass )
            sub_1B64324(0LL);
          v34 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
            v18,
            v34,
            v18->klass->vtable._18_Write.methodPtr);
        }
      }
    }
  }
  v35 = v18->klass;
  v36 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_35;
    }
    v38 = (__int64)(&v35->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v38 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  return 1;
}


void __fastcall ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t Value; // w0
  int32_t v7; // w21
  ServantCommentManager_c *v8; // x0
  System_Int32_array *ClearWarIdList; // x0
  System_Int32_array *v10; // x23
  int32_t v11; // w22
  __int64 v12; // x0
  __int64 v13; // x1
  int max_length; // w8
  __int64 v15; // x9
  int32_t v16; // w20
  int32_t v17; // w11
  int32_t v18; // w21
  ServantCommentManager_c *v19; // x0

  if ( (byte_49FD58A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Reverse_int___, method);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_3423/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v4);
    sub_1B640C8(&StringLiteral_3424/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v5);
    byte_49FD58A = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3424/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v7 = Value;
    v8 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v8);
    if ( !ClearWarIdList )
      sub_1B64324(0LL);
    v10 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_3423/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse_int_(v10, (const MethodInfo_2DFB3C4 *)Method_System_Array_Reverse_int___),
          max_length = v10->max_length,
          max_length >= 1) )
    {
      v15 = 0LL;
      v16 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1B6432C(v12, v13);
        v17 = v10->m_Items[v15 + 1];
        if ( v17 == v11 )
          v16 = 1;
        if ( v17 == v7 )
          break;
        if ( (int)++v15 >= max_length )
          goto LABEL_17;
      }
      v18 = 1;
    }
    else
    {
      v16 = 0;
LABEL_17:
      v18 = 0;
    }
    v19 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v19 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v19->static_fields->UI_CHANGE_TYPE_KEY, v18, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v16, 0LL);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_String_o *__fastcall ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD574 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD574 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD58F & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FD58F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.warIdList = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_40143444(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = warIdList;
  if ( (byte_49FD590 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, warIdList);
    byte_49FD590 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v5 = sub_1B64170(int___TypeInfo, 0LL);
    v3 = (struct System_Int32_array *)v5;
  }
  if ( !this )
    sub_1B64324(v5);
  this->fields.warIdList = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v6, v7);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}