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
  System_Collections_Generic_List_object__o *v32; // x19
  struct ServantCommentManager_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_4A20C6D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__, v1);
    sub_1B715CC(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v4);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_4399/*"ChapterProgress"*/, v6);
    sub_1B715CC(&StringLiteral_6754/*"ForceReadNewProfiles"*/, v7);
    sub_1B715CC(&StringLiteral_10076/*"OverwriteUIVersion"*/, v8);
    sub_1B715CC(&StringLiteral_6613/*"Fgo_20150511_1"*/, v9);
    sub_1B715CC(&StringLiteral_6617/*"Fgo_20160620_1"*/, v10);
    sub_1B715CC(&StringLiteral_14663/*"UIChangeType"*/, v11);
    byte_4A20C6D = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6613/*"Fgo_20150511_1"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6613/*"Fgo_20150511_1"*/,
    v2,
    v3);
  v12 = StringLiteral_6617/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6617/*"Fgo_20160620_1"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_DATA_VERSION, v12, v14, v15);
  v16 = StringLiteral_4399/*"ChapterProgress"*/;
  v17 = ServantCommentManager_TypeInfo->static_fields;
  v17->SAVE_KEY = (struct System_String_o *)StringLiteral_4399/*"ChapterProgress"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v17->SAVE_KEY, v16, v18, v19);
  v20 = StringLiteral_14663/*"UIChangeType"*/;
  v21 = ServantCommentManager_TypeInfo->static_fields;
  v21->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14663/*"UIChangeType"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v21->UI_CHANGE_TYPE_KEY, v20, v22, v23);
  v24 = StringLiteral_10076/*"OverwriteUIVersion"*/;
  v25 = ServantCommentManager_TypeInfo->static_fields;
  v25->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10076/*"OverwriteUIVersion"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->OVERWIRTE_UI_VERSION_KEY, v24, v26, v27);
  v28 = StringLiteral_6754/*"ForceReadNewProfiles"*/;
  v29 = ServantCommentManager_TypeInfo->static_fields;
  v29->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6754/*"ForceReadNewProfiles"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v29->FORCE_READ_NEW_COMMENTS_KEY, v28, v30, v31);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v32 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v33 = ServantCommentManager_TypeInfo->static_fields;
  v33->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v32;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v33->openList, (int32_t)v32, v34, v35);
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

  if ( (byte_4A20C58 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__, v1);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v2);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v3);
    byte_4A20C58 = 1;
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
      sub_1B71828(v4, v1);
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

  if ( (byte_4A20C56 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C56 = 1;
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

  if ( (byte_4A20C54 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C54 = 1;
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

  if ( (byte_4A20C55 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C55 = 1;
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
  __int64 v15; // x8
  System_Object_array *v16; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v18; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v21; // x21
  void *v22; // x22
  int32_t v23; // w0
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x21
  System_Int32_array *v26; // x22
  int32_t v27; // w23
  ServantCommentManager_c *v28; // x0
  System_Int32_array *v29; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A20C63 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v2);
    sub_1B715CC(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v3);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4A20C63 = 1;
  }
  v29 = 0LL;
  idList = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BC34A8(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BC34A8(v8);
  Entitys_object = **(System_Object_array ***)(v8 + 184);
  if ( !Entitys_object )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys_object,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v11 = (DataMasterBase_o *)MasterData_object;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BC34A8(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BC34A8(v13);
  Entitys_object = **(System_Object_array ***)(v13 + 184);
  if ( !Entitys_object
    || (v14 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys_object,
                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_object = DataMasterBase__getEntitys_object_(
                            v11,
                            (const MethodInfo_2E5BC7C *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_34:
    sub_1B71828(Entitys_object, v1);
  }
  v15 = *(_QWORD *)&Entitys_object->max_length;
  v16 = Entitys_object;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1B71830(Entitys_object, v1);
      v18 = v16->m_Items[i];
      if ( v18 )
      {
        monitor = v18[1].monitor;
        klass = v18[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v31.fields.fakeValue = klass;
        Entitys_object = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(
                                                  v31,
                                                  0LL);
        if ( !v14 )
          goto LABEL_34;
        Entitys_object = (System_Object_array *)ServantCommentMaster__GetNewList(
                                                  (ServantCommentMaster_o *)v14,
                                                  &idList,
                                                  &v29,
                                                  (int32_t)Entitys_object,
                                                  0LL);
        if ( ((unsigned __int8)Entitys_object & 1) != 0 )
        {
          v22 = v18[1].monitor;
          v21 = v18[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v32.fields.currentCryptoKey = v22;
          *(_QWORD *)&v32.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v32, 0LL);
          v25 = v29;
          v26 = idList;
          v27 = v23;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_40267992(v27, v26, v25, v24);
        }
      }
      LODWORD(v15) = v16->max_length;
    }
  }
  v28 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v28);
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
  __int64 v10; // x1
  Il2CppObject *v11; // x19

  if ( (byte_4A20C5A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Sort_int___, v1);
    sub_1B715CC(&int___TypeInfo, v2);
    sub_1B715CC(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v3);
    sub_1B715CC(&JsonManager_TypeInfo, v4);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_25082/*"{}"*/, v6);
    byte_4A20C5A = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v7->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25082/*"{}"*/,
                             0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_2EC1840 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v11 = v9;
  if ( !v9 )
    sub_1B71828(0LL, v10);
  System_Array__Sort_int_(
    (System_Int32_array *)v9[1].klass,
    (const MethodInfo_2E291E4 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v11[1].klass;
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
  int32_t v23; // w23
  System_Collections_Generic_List_object__o *v24; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w20
  DataManager_o *v27; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A20C64 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75806120, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v18);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A20C64 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList_39414100(
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
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_31;
  }
  v23 = v20->fields._size - 1;
  if ( v23 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v20,
                                    v23,
                                    (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v23,
          (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v23 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B71828(Instance, v22);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55376724(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_34CFB54 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75806120);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v25);
    if ( !Instance )
      goto LABEL_31;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    v26 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v26 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v20,
                                      v26,
                                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v24 )
          goto LABEL_31;
        v27 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v24,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v27 )
            sub_1B71828(v28, v29);
          if ( !v32.fields._current )
            sub_1B71828(v28, v29);
          if ( *((_DWORD *)&v27->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v26,
              (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v26 < 0 )
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
  int32_t v23; // w23
  System_Collections_Generic_List_object__o *v24; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w20
  DataManager_o *v27; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A20C67 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&imageLimit);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75806120, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v18);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A20C67 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_31;
  }
  v23 = v20->fields._size - 1;
  if ( v23 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v20,
                                    v23,
                                    (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v23,
          (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v23 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1B71828(Instance, v22);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55376724(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_34CFB54 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___75806120);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v25);
    if ( !Instance )
      goto LABEL_31;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    v26 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v26 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v20,
                                      v26,
                                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v24 )
          goto LABEL_31;
        v27 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v24,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v27 )
            sub_1B71828(v28, v29);
          if ( !v32.fields._current )
            sub_1B71828(v28, v29);
          if ( *((_DWORD *)&v27->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v26,
              (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v26 < 0 )
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

  if ( (byte_4A20C6C & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C6C = 1;
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

  if ( (byte_4A20C6B & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C6B = 1;
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

  if ( (byte_4A20C6A & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C6A = 1;
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

  if ( (byte_4A20C57 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C57 = 1;
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

  if ( (byte_4A20C62 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, v1);
    byte_4A20C62 = 1;
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
        int32_t readJudgeKey,
        bool isImageLimit,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Master_object; // x0
  __int64 v17; // x1
  ServantCommentManager_c *v18; // x8
  ServantCommentMaster_o *v19; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int32_t v21; // w25
  _QWORD *v22; // x26
  int v23; // w8
  int v24; // w19
  int32_t v25; // w27
  int size; // [xsp+0h] [xbp-70h]
  ServantCommentEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A20C5C & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtCommentId);
    sub_1B715CC(&DataManager_TypeInfo, v10);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v15);
    byte_4A20C5C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  v18 = ServantCommentManager_TypeInfo;
  v19 = (ServantCommentMaster_o *)Master_object;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v18 = ServantCommentManager_TypeInfo;
  }
  openList = v18->static_fields->openList;
  if ( !openList )
LABEL_37:
    sub_1B71828(Master_object, v17);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  v21 = 0;
  while ( 1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ServantCommentManager_TypeInfo;
    }
    Master_object = v18->static_fields->openList;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Master_object,
                      v21,
                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !Master_object )
      goto LABEL_37;
    v22 = Master_object;
    if ( *((_DWORD *)Master_object + 4) == svtId )
    {
      Master_object = (void *)*((_QWORD *)Master_object + 3);
      if ( !Master_object )
        goto LABEL_37;
      v23 = *((_DWORD *)Master_object + 6);
      v24 = v23 - 1;
      if ( v23 >= 1 )
        break;
    }
LABEL_33:
    if ( ++v21 == size )
      return 0;
    v18 = ServantCommentManager_TypeInfo;
  }
  v25 = 0;
  while ( 1 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Master_object,
           v25,
           (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v22[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v25,
             (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v22[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v25,
             (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
        && !isImageLimit )
      {
        return 1;
      }
      if ( (readJudgeKey & 0x80000000) == 0 )
      {
        Master_object = (void *)v22[4];
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)Master_object,
                                  v25,
                                  (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v19 )
          goto LABEL_37;
        if ( ServantCommentMaster__TryGetEntity(v19, &entity, svtId, svtCommentId, (int32_t)Master_object, 0LL) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_37;
          if ( ServantCommentEntity__GetReadJudgeKey(entity, 0LL) == readJudgeKey )
            return 1;
        }
      }
    }
    if ( v24 == v25 )
      goto LABEL_33;
    Master_object = (void *)v22[3];
    ++v25;
    if ( !Master_object )
      goto LABEL_37;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A20C65 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    byte_4A20C65 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_40270300(svt_id, oldFriendShipRank, -1, v3);
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
  __int64 v9; // x1

  if ( (byte_4A20C68 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, *(_QWORD *)&imageLimit);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v7);
    byte_4A20C68 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1B71828(0LL, v9);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_40270300(
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
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A20C66 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v10);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A20C66 = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
LABEL_18:
      sub_1B71828(Instance, v13);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x0
  const MethodInfo *v8; // x0
  ServantCommentManager_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4A20C59 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v2);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A20C59 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1B71828(Instance, v6);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
    v7 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v7 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v7[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v7);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v4);
  if ( ServantCommentManager__IsForceReadNewComments(v8) )
  {
    v9 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v9);
    ServantCommentManager__SetForceReadNewComments(0, v10);
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
  System_IO_BinaryReader_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  ServantCommentManager_c *v21; // x0
  char v22; // w20
  ServantCommentManager_c *v23; // x0
  int v24; // w20
  int i; // w25
  int v26; // w22
  __int64 v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_int__o *v30; // x23
  System_Collections_Generic_List_int__o **v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_int__o *v34; // x24
  System_Collections_Generic_List_int__o **v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  int v41; // w24
  System_Collections_Generic_List_int__o *v42; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v46; // x0
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  ServantCommentManager_c *v50; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x8
  ServantCommentManager_c *v56; // x0
  char v57; // w20
  ServantCommentManager_c *v58; // x0
  int v59; // w20
  System_Collections_Generic_List_int__c **v60; // x24
  int j; // w28
  int v62; // w22
  __int64 v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  System_Collections_Generic_List_int__o *v66; // x23
  System_Collections_Generic_List_int__o **v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_List_int__c **v70; // x27
  System_Collections_Generic_List_int__o *v71; // x24
  System_Collections_Generic_List_int__o **v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  int v78; // w24
  int32_t v79; // w26
  int32_t v80; // w25
  System_Collections_Generic_List_int__o *v81; // x0
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  System_Collections_Generic_List_int__o *v85; // x0
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  ServantCommentManager_c *v89; // x0
  System_Collections_Generic_List_object__o *v90; // x0
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v96; // x9
  int32_t *p_offset; // x10
  __int64 v98; // x0
  ServantCommentManager_c *v99; // x0

  if ( (byte_4A20C5F & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B715CC(&System_IDisposable_TypeInfo, v2);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B715CC(&ManagerConfig_TypeInfo, v7);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v8);
    sub_1B715CC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v9);
    byte_4A20C5F = 1;
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
    v99 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v99);
    return 0;
  }
  v15 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v15);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v17 = (System_IO_BinaryReader_o *)sub_1B71818(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v17, v16, 0LL);
  if ( !v17 )
    sub_1B71828(v18, v19);
  v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                             v17,
                             v17->klass->vtable._23_ReadChars.methodPtr);
  v21 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v21 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v21->static_fields->SAVE_DATA_OLD_VERSION, v20, 0LL) )
  {
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._9_ReadBoolean.method)(
            v17,
            v17->klass->vtable._10_ReadByte.methodPtr);
    v23 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v23 = ServantCommentManager_TypeInfo;
    }
    v23->static_fields->isContinueDevice = v22 & 1;
    v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
            v17,
            v17->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v24 >= 1 )
    {
      for ( i = 0; i != v24; ++i )
      {
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        v27 = sub_1B71818(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        if ( !v27 )
          sub_1B71828(v28, v29);
        *(_DWORD *)(v27 + 16) = v26;
        v30 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v30,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v27 + 24) = v30;
        v31 = (System_Collections_Generic_List_int__o **)(v27 + 24);
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)v30, v32, v33);
        v34 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v34,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v27 + 32) = v34;
        v35 = (System_Collections_Generic_List_int__o **)(v27 + 32);
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v34, v36, v37);
        v41 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v41 >= 1 )
        {
          do
          {
            v38 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            v42 = *v31;
            if ( !*v31 )
              sub_1B71828(0LL, v38);
            items = v42->fields._items;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++v42->fields._version;
            if ( !items )
              sub_1B71828(v42, v38);
            size = v42->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v42,
                v38,
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v42->fields._size = size + 1;
              items->m_Items[size + 1] = v38;
            }
            v46 = *v35;
            if ( !*v35 )
              sub_1B71828(0LL, v38);
            v47 = v46->fields._items;
            v48 = Method_System_Collections_Generic_List_int__Add__;
            ++v46->fields._version;
            if ( !v47 )
              sub_1B71828(v46, v38);
            v49 = v46->fields._size;
            if ( (unsigned int)v49 >= v47->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v46,
                0,
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v46->fields._size = v49 + 1;
              v47->m_Items[v49 + 1] = 0;
            }
            --v41;
          }
          while ( v41 );
        }
        v50 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v50 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v50->static_fields->openList;
        if ( !openList )
          sub_1B71828(0LL, v38);
        v52 = openList->fields._items;
        v53 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v52 )
          sub_1B71828(openList, v38);
        v54 = openList->fields._size;
        if ( (unsigned int)v54 >= v52->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v27,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          openList->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)v27;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v55 + 4), v27, v39, v40);
        }
      }
    }
  }
  else
  {
    v56 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v56 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v56->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
    {
      v12 = 0;
      goto LABEL_74;
    }
    v57 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._9_ReadBoolean.method)(
            v17,
            v17->klass->vtable._10_ReadByte.methodPtr);
    v58 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v58 = ServantCommentManager_TypeInfo;
    }
    v58->static_fields->isContinueDevice = v57 & 1;
    v59 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
            v17,
            v17->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v59 >= 1 )
    {
      v60 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v59; ++j )
      {
        v62 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        v63 = sub_1B71818(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v63, 0LL);
        if ( !v63 )
          sub_1B71828(v64, v65);
        *(_DWORD *)(v63 + 16) = v62;
        v66 = (System_Collections_Generic_List_int__o *)sub_1B71818(*v60);
        System_Collections_Generic_List_int____ctor(
          v66,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v63 + 24) = v66;
        v67 = (System_Collections_Generic_List_int__o **)(v63 + 24);
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v63 + 24), (int32_t)v66, v68, v69);
        v70 = v60;
        v71 = (System_Collections_Generic_List_int__o *)sub_1B71818(*v60);
        System_Collections_Generic_List_int____ctor(
          v71,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v63 + 32) = v71;
        v72 = (System_Collections_Generic_List_int__o **)(v63 + 32);
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v63 + 32), (int32_t)v71, v73, v74);
        v78 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v78 >= 1 )
        {
          do
          {
            v79 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            v80 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            v81 = *v67;
            if ( !*v67 )
              sub_1B71828(0LL, v75);
            v82 = v81->fields._items;
            v83 = Method_System_Collections_Generic_List_int__Add__;
            ++v81->fields._version;
            if ( !v82 )
              sub_1B71828(v81, v75);
            v84 = v81->fields._size;
            if ( (unsigned int)v84 >= v82->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v81,
                v79,
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v81->fields._size = v84 + 1;
              v82->m_Items[v84 + 1] = v79;
            }
            v85 = *v72;
            if ( !*v72 )
              sub_1B71828(0LL, v75);
            v86 = v85->fields._items;
            v87 = Method_System_Collections_Generic_List_int__Add__;
            ++v85->fields._version;
            if ( !v86 )
              sub_1B71828(v85, v75);
            v88 = v85->fields._size;
            if ( (unsigned int)v88 >= v86->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v85,
                v80,
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v85->fields._size = v88 + 1;
              v86->m_Items[v88 + 1] = v80;
            }
            --v78;
          }
          while ( v78 );
        }
        v89 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v89 = ServantCommentManager_TypeInfo;
        }
        v60 = v70;
        v90 = (System_Collections_Generic_List_object__o *)v89->static_fields->openList;
        if ( !v90 )
          sub_1B71828(0LL, v75);
        v91 = v90->fields._items;
        v92 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v90->fields._version;
        if ( !v91 )
          sub_1B71828(v90, v75);
        v93 = v90->fields._size;
        if ( (unsigned int)v93 >= v91->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v90,
            (Il2CppObject *)v63,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v91->obj.klass + v93;
          v90->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)v63;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v94 + 4), v63, v76, v77);
        }
      }
    }
  }
  v12 = 1;
LABEL_74:
  klass = v17->klass;
  v96 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v96;
      p_offset += 4;
      if ( !v96 )
        goto LABEL_78;
    }
    v98 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_78:
    v98 = sub_1BC35AC(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v98)(v17, *(_QWORD *)(v98 + 8));
  return v12;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4A20C61 & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_TypeInfo, method);
    byte_4A20C61 = 1;
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
  System_Collections_Generic_List_int__o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  ServantCommentManager_c *v37; // x0
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  ServantCommentManager_c *v42; // x0
  int32_t v43; // w22
  int v44; // w23
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10

  if ( (byte_4A20C5D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtCommentId);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v14);
    sub_1B715CC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4A20C5D = 1;
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
    v22 = sub_1B71818(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 16) = svtId;
      v23 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v22 + 24) = v23;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)v23, v24, v25);
      openList = *(System_Collections_Generic_List_int__o **)(v22 + 24);
      if ( openList )
      {
        items = openList->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              openList,
              svtCommentId,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size + 1] = svtCommentId;
          }
          v29 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v29,
            (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v22 + 32) = v29;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v29, v30, v31);
          openList = *(System_Collections_Generic_List_int__o **)(v22 + 32);
          if ( openList )
          {
            v34 = openList->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v34 )
            {
              v36 = openList->fields._size;
              if ( (unsigned int)v36 >= v34->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_34B323C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v36 + 1;
                v34->m_Items[v36 + 1] = svtCommentPriority;
              }
              v37 = ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v37 = ServantCommentManager_TypeInfo;
              }
              openList = (System_Collections_Generic_List_int__o *)v37->static_fields->openList;
              if ( openList )
              {
                v38 = openList->fields._items;
                v39 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
                ++openList->fields._version;
                if ( v38 )
                {
                  v40 = openList->fields._size;
                  if ( (unsigned int)v40 >= v38->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v41 = (__int64)v38 + 8 * v40;
                    openList->fields._size = v40 + 1;
                    *(_QWORD *)(v41 + 32) = v22;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v41 + 32), v22, v32, v33);
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
    sub_1B71828(openList, *(_QWORD *)&svtCommentId);
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
                                                           (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
  v43 = 0;
  v44 = openList->fields._size & ~(openList->fields._size >> 31);
  while ( v44 != v43 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           openList,
           v43,
           (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v43,
             (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return;
    }
    openList = *(System_Collections_Generic_List_int__o **)&v21->fields._size;
    ++v43;
    if ( !openList )
      goto LABEL_55;
  }
  v45 = openList->fields._items;
  v46 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v45 )
    goto LABEL_55;
  v47 = openList->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_34B323C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v47 + 1;
    v45->m_Items[v47 + 1] = svtCommentId;
  }
  openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
  if ( !openList )
    goto LABEL_55;
  v48 = openList->fields._items;
  v49 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v48 )
    goto LABEL_55;
  v50 = openList->fields._size;
  if ( (unsigned int)v50 >= v48->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_34B323C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v50 + 1;
    v48->m_Items[v50 + 1] = svtCommentPriority;
  }
  v42 = ServantCommentManager_TypeInfo;
  if ( ServantCommentManager_TypeInfo->_2.cctor_finished )
    goto LABEL_34;
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_33:
  v42 = ServantCommentManager_TypeInfo;
LABEL_34:
  v42->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_40267992(
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
  System_Collections_Generic_List_int__o *v25; // x23
  void **v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_int__o *v29; // x24
  void **v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  unsigned __int64 j; // x24
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  ServantCommentManager_c *v42; // x0
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  __int64 v47; // x8
  int v48; // w27
  unsigned __int64 v49; // x24
  int32_t v50; // w22
  int32_t v51; // w23
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10

  v5 = svtCommentIdList;
  if ( (byte_4A20C5E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, svtCommentIdList);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v14);
    sub_1B715CC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4A20C5E = 1;
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
                                                                (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v23 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v21 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v47 = *(_QWORD *)&Item->fields._size;
        if ( v47 )
        {
          v48 = *(_DWORD *)(v47 + 24);
          v49 = 0LL;
          while ( 1 )
          {
            if ( v49 >= v5->max_length )
LABEL_73:
              sub_1B71830(Item, svtCommentIdList);
            v50 = v5->m_Items[v49 + 1];
            if ( v48 >= 1 )
              break;
LABEL_54:
            if ( v50 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v53 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v50,
                  *(const MethodInfo_34B323C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v50;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v49 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v49 + 1];
              v55 = Item->fields._items;
              v56 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v55 )
                goto LABEL_72;
              v57 = Item->fields._size;
              if ( (unsigned int)v57 >= v55->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_34B323C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v57 + 1;
                *((_DWORD *)v55->m_Items + v57) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v49 == v20 )
              return;
          }
          v51 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v51,
                                                                  (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v50 )
            {
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v51,
                                                                    (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v49 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v49 + 1] )
                return;
            }
            if ( v48 == ++v51 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1B71828(Item, svtCommentIdList);
      }
LABEL_17:
      v24 = sub_1B71818(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( !v24 )
        goto LABEL_72;
      *(_DWORD *)(v24 + 16) = svtId;
      v25 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v25,
        (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 24) = v25;
      v26 = (void **)(v24 + 24);
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v25, v27, v28);
      v29 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v29,
        (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 32) = v29;
      v30 = (void **)(v24 + 32);
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v29, v31, v32);
      for ( j = 0LL; j != v20; ++j )
      {
        if ( j >= v5->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v26;
        if ( !*v26 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j + 1];
        v36 = Item->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v36 )
          goto LABEL_72;
        v38 = Item->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v38 + 1;
          *((_DWORD *)v36->m_Items + v38) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= svtCommentPriorityList->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v30;
        if ( !*v30 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j + 1];
        v39 = Item->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v39 )
          goto LABEL_72;
        v41 = Item->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v41 + 1;
          *((_DWORD *)v39->m_Items + v41) = (_DWORD)svtCommentIdList;
        }
      }
      v42 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v42 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v42->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v43 = Item->fields._items;
      v44 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v43 )
        goto LABEL_72;
      v45 = Item->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v24,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = (__int64)v43 + 8 * v45;
        Item->fields._size = v45 + 1;
        *(_QWORD *)(v46 + 32) = v24;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v46 + 32), v24, v33, v34);
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
  __int64 v10; // x1
  ServantCommentManager_c *v11; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v14; // x20
  const MethodInfo *v15; // x2
  System_String_o *v16; // x20
  ServantCommentManager_c *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4A20C5B & 1) == 0 )
  {
    sub_1B715CC(&ServantCommentManager_ClearWarInfo_TypeInfo, v1);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1B715CC(&JsonManager_TypeInfo, v3);
    sub_1B715CC(&ManagerConfig_TypeInfo, v4);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B715CC(&StringLiteral_25082/*"{}"*/, v7);
    byte_4A20C5B = 1;
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
    v11 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v11 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v11->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_25082/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_19:
      sub_1B71828(SelfUserGame, v10);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v14 = (ServantCommentManager_ClearWarInfo_o *)sub_1B71818(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_40265728(v14, ClearWarIdList, v15);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)v14, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v16, 0LL) )
    {
      v17 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v17 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v17->static_fields->SAVE_KEY, v16, 0LL);
      ServantCommentManager__checkUIChange(0, v18);
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
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  ServantCommentManager_c *v18; // x0
  struct ServantCommentManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v22; // x1
  int32_t i; // w21
  ServantCommentManager_c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x0
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  _DWORD *monitor; // x8
  int v30; // w23
  int32_t j; // w24
  System_Collections_Generic_List_int__o *v32; // x0
  unsigned int v33; // w0
  __int64 v34; // x1
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v36; // w0
  System_IO_BinaryWriter_c *v37; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0

  if ( (byte_4A20C60 & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B715CC(&System_IDisposable_TypeInfo, v2);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_1B715CC(&ManagerConfig_TypeInfo, v7);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v8);
    byte_4A20C60 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1B71818(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61743668(v16, v15, 0LL);
  v18 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v18 = ServantCommentManager_TypeInfo;
  }
  v19 = v18->static_fields;
  openList = v19->openList;
  if ( !openList )
    sub_1B71828(v18, v17);
  if ( !v16 )
    sub_1B71828(v18, v17);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
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
        sub_1B71828(0LL, v22);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v28 = Item;
      if ( !Item )
        sub_1B71828(0LL, v27);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1B71828(Item, v27);
      v30 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v30,
        v16->klass->vtable._18_Write.methodPtr);
      if ( v30 >= 1 )
      {
        for ( j = 0; j != v30; ++j )
        {
          v32 = (System_Collections_Generic_List_int__o *)v28[1].monitor;
          if ( !v32 )
            sub_1B71828(0LL, v22);
          v33 = System_Collections_Generic_List_int___get_Item(
                  v32,
                  j,
                  (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
            v16,
            v33,
            v16->klass->vtable._18_Write.methodPtr);
          klass = (System_Collections_Generic_List_int__o *)v28[2].klass;
          if ( !klass )
            sub_1B71828(0LL, v34);
          v36 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
            v16,
            v36,
            v16->klass->vtable._18_Write.methodPtr);
        }
      }
    }
  }
  v37 = v16->klass;
  v38 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_35;
    }
    v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v40 = sub_1BC35AC(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v16, *(_QWORD *)(v40 + 8));
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
  __int64 v10; // x1
  System_Int32_array *v11; // x23
  int32_t v12; // w22
  __int64 v13; // x0
  __int64 v14; // x1
  int max_length; // w8
  __int64 v16; // x9
  int32_t v17; // w20
  int32_t v18; // w11
  int32_t v19; // w21
  ServantCommentManager_c *v20; // x0

  if ( (byte_4A20C69 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Reverse_int___, method);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_3427/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v4);
    sub_1B715CC(&StringLiteral_3428/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v5);
    byte_4A20C69 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3428/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v7 = Value;
    v8 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v8);
    if ( !ClearWarIdList )
      sub_1B71828(0LL, v10);
    v11 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_3427/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse_int_(v11, (const MethodInfo_2E1D304 *)Method_System_Array_Reverse_int___),
          max_length = v11->max_length,
          max_length >= 1) )
    {
      v16 = 0LL;
      v17 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1B71830(v13, v14);
        v18 = v11->m_Items[v16 + 1];
        if ( v18 == v12 )
          v17 = 1;
        if ( v18 == v7 )
          break;
        if ( (int)++v16 >= max_length )
          goto LABEL_17;
      }
      v19 = 1;
    }
    else
    {
      v17 = 0;
LABEL_17:
      v19 = 0;
    }
    v20 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v20 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v20->static_fields->UI_CHANGE_TYPE_KEY, v19, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v17, 0LL);
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

  if ( (byte_4A20C53 & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, v1);
    sub_1B715CC(&DatFileName_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A20C53 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_61516764(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A20C6E & 1) == 0 )
  {
    sub_1B715CC(&int___TypeInfo, method);
    byte_4A20C6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (struct System_Int32_array *)sub_1B71674(int___TypeInfo, 0LL);
  this->fields.warIdList = v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_40265728(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = warIdList;
  if ( (byte_4A20C6F & 1) == 0 )
  {
    sub_1B715CC(&int___TypeInfo, warIdList);
    byte_4A20C6F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v5 = sub_1B71674(int___TypeInfo, 0LL);
    v3 = (struct System_Int32_array *)v5;
  }
  if ( !this )
    sub_1B71828(v5, v6);
  this->fields.warIdList = v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v7, v8);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}