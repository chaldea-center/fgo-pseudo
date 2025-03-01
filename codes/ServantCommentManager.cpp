void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct ServantCommentManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct ServantCommentManager_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct ServantCommentManager_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct ServantCommentManager_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct ServantCommentManager_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x19
  struct ServantCommentManager_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4BFE9D9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__, v1);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v8);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_4499/*"ChapterProgress"*/, v10);
    sub_1C2E12C(&StringLiteral_6941/*"ForceReadNewProfiles"*/, v11);
    sub_1C2E12C(&StringLiteral_10305/*"OverwriteUIVersion"*/, v12);
    sub_1C2E12C(&StringLiteral_6795/*"Fgo_20150511_1"*/, v13);
    sub_1C2E12C(&StringLiteral_6799/*"Fgo_20160620_1"*/, v14);
    sub_1C2E12C(&StringLiteral_14983/*"UIChangeType"*/, v15);
    byte_4BFE9D9 = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6795/*"Fgo_20150511_1"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6795/*"Fgo_20150511_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_6799/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6799/*"Fgo_20160620_1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->SAVE_DATA_VERSION, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_4499/*"ChapterProgress"*/;
  v25 = ServantCommentManager_TypeInfo->static_fields;
  v25->SAVE_KEY = (struct System_String_o *)StringLiteral_4499/*"ChapterProgress"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->SAVE_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_14983/*"UIChangeType"*/;
  v33 = ServantCommentManager_TypeInfo->static_fields;
  v33->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14983/*"UIChangeType"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v33->UI_CHANGE_TYPE_KEY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_10305/*"OverwriteUIVersion"*/;
  v41 = ServantCommentManager_TypeInfo->static_fields;
  v41->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10305/*"OverwriteUIVersion"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v41->OVERWIRTE_UI_VERSION_KEY, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_6941/*"ForceReadNewProfiles"*/;
  v49 = ServantCommentManager_TypeInfo->static_fields;
  v49->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6941/*"ForceReadNewProfiles"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v49->FORCE_READ_NEW_COMMENTS_KEY, v48, v50, v51, v52, v53, v54, v55);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v56 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v57 = ServantCommentManager_TypeInfo->static_fields;
  v57->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v56;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v57->openList, (int64_t)v56, v58, v59, v60, v61, v62, v63);
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

  if ( (byte_4BFE9C4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__, v1);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v2);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v3);
    byte_4BFE9C4 = 1;
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
      sub_1C2E388(v4, v1);
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

  if ( (byte_4BFE9C2 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9C2 = 1;
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

  if ( (byte_4BFE9C0 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9C0 = 1;
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

  if ( (byte_4BFE9C1 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9C1 = 1;
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
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *NewList; // x0
  Il2CppObject *MasterData_object; // x0
  long double v12; // q0
  Il2CppObject *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x0
  Il2CppObject *v16; // x19
  __int64 v17; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v19; // x20
  unsigned __int64 i; // x25
  __int64 v21; // x23
  __int64 v22; // x21
  __int64 v23; // x22
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  System_Int32_array *v28; // x21
  System_Int32_array *v29; // x22
  int32_t v30; // w23
  ServantCommentManager_c *v31; // x0
  System_Int32_array *v32; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4BFE9CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1C2E12C(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys_UserServantCollectionEntity___,
      v4);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4BFE9CF = 1;
  }
  v32 = 0LL;
  idList = 0LL;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C80008(v2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C80008(v2);
  NewList = **(DataManager_o ***)(v9 + 184);
  if ( !NewList )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        NewList,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v13 = MasterData_object;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C80008(v12);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C80008(v12);
  NewList = **(DataManager_o ***)(v15 + 184);
  if ( !NewList
    || (v16 = DataManager__GetMasterData_object_(
                NewList,
                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        v17 = sub_1C2E260(v13->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__getEntitys_UserServantCollectionEntity___
                                             + 40)
                                           + 1].methodPtr),
        (NewList = (DataManager_o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v17 + 8))(v13, v17)) == 0LL) )
  {
LABEL_34:
    sub_1C2E388(NewList, v1);
  }
  m_CancellationTokenSource = NewList->fields.m_CancellationTokenSource;
  v19 = NewList;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2E390(NewList, v1);
      v21 = *((_QWORD *)&v19->fields._DispLog + i);
      if ( v21 )
      {
        v23 = *(_QWORD *)(v21 + 24);
        v22 = *(_QWORD *)(v21 + 32);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v23;
        *(_QWORD *)&v34.fields.fakeValue = v22;
        NewList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v34, 0LL);
        if ( !v16 )
          goto LABEL_34;
        NewList = (DataManager_o *)ServantCommentMaster__GetNewList(
                                     (ServantCommentMaster_o *)v16,
                                     &idList,
                                     &v32,
                                     (int32_t)NewList,
                                     0LL);
        if ( ((unsigned __int8)NewList & 1) != 0 )
        {
          v25 = *(_QWORD *)(v21 + 24);
          v24 = *(_QWORD *)(v21 + 32);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v35.fields.currentCryptoKey = v25;
          *(_QWORD *)&v35.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v35, 0LL);
          v28 = v32;
          v29 = idList;
          v30 = v26;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_41848424(v30, v29, v28, v27);
        }
      }
      LODWORD(m_CancellationTokenSource) = v19->fields.m_CancellationTokenSource;
    }
  }
  v31 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__WriteData((const MethodInfo *)v31);
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

  if ( (byte_4BFE9C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Sort_int___, v1);
    sub_1C2E12C(&int___TypeInfo, v2);
    sub_1C2E12C(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v3);
    sub_1C2E12C(&JsonManager_TypeInfo, v4);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_25616/*"{}"*/, v6);
    byte_4BFE9C6 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v7->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25616/*"{}"*/,
                             0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_object_(
         String,
         (const MethodInfo_3039C8C *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v11 = v9;
  if ( !v9 )
    sub_1C2E388(0LL, v10);
  System_Array__Sort_int_(
    (System_Int32_array *)v9[1].klass,
    (const MethodInfo_2F9EC1C *)Method_System_Array_Sort_int___);
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

  if ( (byte_4BFE9D0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___77715688, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v18);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BFE9D0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
    if ( !v20 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v23,
          (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v23 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C2E388(Instance, v22);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_57061792(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___77715688);
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
                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v24 )
          goto LABEL_31;
        v27 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v24,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v27 )
            sub_1C2E388(v28, v29);
          if ( !v32.fields._current )
            sub_1C2E388(v28, v29);
          if ( *((_DWORD *)&v27->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v26,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
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

  if ( (byte_4BFE9D3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&imageLimit);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___77715688, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v18);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BFE9D3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
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
                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v23,
          (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v23 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1C2E388(Instance, v22);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_57061792(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___77715688);
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
                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v24 )
          goto LABEL_31;
        v27 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          v24,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v27 )
            sub_1C2E388(v28, v29);
          if ( !v32.fields._current )
            sub_1C2E388(v28, v29);
          if ( *((_DWORD *)&v27->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v32.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v26,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
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

  if ( (byte_4BFE9D8 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9D8 = 1;
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

  if ( (byte_4BFE9D7 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9D7 = 1;
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

  if ( (byte_4BFE9D6 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9D6 = 1;
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

  if ( (byte_4BFE9C3 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9C3 = 1;
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

  if ( (byte_4BFE9CE & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v1);
    byte_4BFE9CE = 1;
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

  if ( (byte_4BFE9C8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtCommentId);
    sub_1C2E12C(&DataManager_TypeInfo, v10);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v15);
    byte_4BFE9C8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
    sub_1C2E388(Master_object, v17);
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
                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v22[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v25,
             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v22[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v25,
             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
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
                                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4BFE9D1 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    byte_4BFE9D1 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__IsOpenByServantFriendShip_41850732(svt_id, oldFriendShipRank, -1, v3);
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

  if ( (byte_4BFE9D4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, *(_QWORD *)&imageLimit);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v7);
    byte_4BFE9D4 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1C2E388(0LL, v9);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_41850732(
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFE9D2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BFE9D2 = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v13);
      byte_4BF81D5 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
LABEL_22:
      sub_1C2E388(Instance, v13);
    Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  svt_id,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_22;
      maxLimitCount = entity->fields.maxLimitCount;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_22;
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
  Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                svt_id,
                                oldFriendShipRank,
                                limitCount,
                                method);
  if ( !Instance )
    goto LABEL_22;
  return SLODWORD(Instance->fields.m_CancellationTokenSource) > 0;
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

  if ( (byte_4BFE9C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v2);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFE9C5 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1C2E388(Instance, v6);
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
  int64_t v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_int__o *v30; // x23
  System_Collections_Generic_List_int__o **v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_int__o *v38; // x24
  System_Collections_Generic_List_int__o **v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int v53; // w24
  System_Collections_Generic_List_int__o *v54; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v58; // x0
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  ServantCommentManager_c *v62; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x8
  ServantCommentManager_c *v68; // x0
  char v69; // w20
  ServantCommentManager_c *v70; // x0
  int v71; // w20
  System_Collections_Generic_List_int__c **v72; // x24
  int j; // w28
  int v74; // w22
  int64_t v75; // x21
  __int64 v76; // x0
  __int64 v77; // x1
  System_Collections_Generic_List_int__o *v78; // x23
  System_Collections_Generic_List_int__o **v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_int__c **v86; // x27
  System_Collections_Generic_List_int__o *v87; // x24
  System_Collections_Generic_List_int__o **v88; // x23
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int v102; // w24
  int32_t v103; // w26
  int32_t v104; // w25
  System_Collections_Generic_List_int__o *v105; // x0
  struct System_Int32_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  System_Collections_Generic_List_int__o *v109; // x0
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  ServantCommentManager_c *v113; // x0
  System_Collections_Generic_List_object__o *v114; // x0
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v120; // x9
  int32_t *p_offset; // x10
  __int64 v122; // x0
  ServantCommentManager_c *v123; // x0

  if ( (byte_4BFE9CB & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v2);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v7);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v8);
    sub_1C2E12C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v9);
    byte_4BFE9CB = 1;
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
    v123 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v123);
    return 0;
  }
  v15 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v15);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v17 = (System_IO_BinaryReader_o *)sub_1C2E378(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v17, v16, 0LL);
  if ( !v17 )
    sub_1C2E388(v18, v19);
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
        v27 = sub_1C2E378(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0LL);
        if ( !v27 )
          sub_1C2E388(v28, v29);
        *(_DWORD *)(v27 + 16) = v26;
        v30 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v30,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v27 + 24) = v30;
        v31 = (System_Collections_Generic_List_int__o **)(v27 + 24);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)v30, v32, v33, v34, v35, v36, v37);
        v38 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v38,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v27 + 32) = v38;
        v39 = (System_Collections_Generic_List_int__o **)(v27 + 32);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v38, v40, v41, v42, v43, v44, v45);
        v53 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v53 >= 1 )
        {
          do
          {
            v46 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            v54 = *v31;
            if ( !*v31 )
              sub_1C2E388(0LL, v46);
            items = v54->fields._items;
            v56 = Method_System_Collections_Generic_List_int__Add__;
            ++v54->fields._version;
            if ( !items )
              sub_1C2E388(v54, v46);
            size = v54->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v54,
                v46,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v54->fields._size = size + 1;
              items->m_Items[size + 1] = v46;
            }
            v58 = *v39;
            if ( !*v39 )
              sub_1C2E388(0LL, v46);
            v59 = v58->fields._items;
            v60 = Method_System_Collections_Generic_List_int__Add__;
            ++v58->fields._version;
            if ( !v59 )
              sub_1C2E388(v58, v46);
            v61 = v58->fields._size;
            if ( (unsigned int)v61 >= v59->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v58,
                0,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v58->fields._size = v61 + 1;
              v59->m_Items[v61 + 1] = 0;
            }
            --v53;
          }
          while ( v53 );
        }
        v62 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v62 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v62->static_fields->openList;
        if ( !openList )
          sub_1C2E388(0LL, v46);
        v64 = openList->fields._items;
        v65 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v64 )
          sub_1C2E388(openList, v46);
        v66 = openList->fields._size;
        if ( (unsigned int)v66 >= v64->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v27,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &v64->obj.klass + v66;
          openList->fields._size = v66 + 1;
          v67[4] = (Il2CppClass *)v27;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v67 + 4), v27, v47, v48, v49, v50, v51, v52);
        }
      }
    }
  }
  else
  {
    v68 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v68 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v68->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
    {
      v12 = 0;
      goto LABEL_74;
    }
    v69 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._9_ReadBoolean.method)(
            v17,
            v17->klass->vtable._10_ReadByte.methodPtr);
    v70 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v70 = ServantCommentManager_TypeInfo;
    }
    v70->static_fields->isContinueDevice = v69 & 1;
    v71 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
            v17,
            v17->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v71 >= 1 )
    {
      v72 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v71; ++j )
      {
        v74 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        v75 = sub_1C2E378(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v75, 0LL);
        if ( !v75 )
          sub_1C2E388(v76, v77);
        *(_DWORD *)(v75 + 16) = v74;
        v78 = (System_Collections_Generic_List_int__o *)sub_1C2E378(*v72);
        System_Collections_Generic_List_int____ctor(
          v78,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v75 + 24) = v78;
        v79 = (System_Collections_Generic_List_int__o **)(v75 + 24);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v75 + 24), (int64_t)v78, v80, v81, v82, v83, v84, v85);
        v86 = v72;
        v87 = (System_Collections_Generic_List_int__o *)sub_1C2E378(*v72);
        System_Collections_Generic_List_int____ctor(
          v87,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v75 + 32) = v87;
        v88 = (System_Collections_Generic_List_int__o **)(v75 + 32);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v75 + 32), (int64_t)v87, v89, v90, v91, v92, v93, v94);
        v102 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                 v17,
                 v17->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v102 >= 1 )
        {
          do
          {
            v103 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                     v17,
                     v17->klass->vtable._16_ReadUInt32.methodPtr);
            v104 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                     v17,
                     v17->klass->vtable._16_ReadUInt32.methodPtr);
            v105 = *v79;
            if ( !*v79 )
              sub_1C2E388(0LL, v95);
            v106 = v105->fields._items;
            v107 = Method_System_Collections_Generic_List_int__Add__;
            ++v105->fields._version;
            if ( !v106 )
              sub_1C2E388(v105, v95);
            v108 = v105->fields._size;
            if ( (unsigned int)v108 >= v106->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v105,
                v103,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
            }
            else
            {
              v105->fields._size = v108 + 1;
              v106->m_Items[v108 + 1] = v103;
            }
            v109 = *v88;
            if ( !*v88 )
              sub_1C2E388(0LL, v95);
            v110 = v109->fields._items;
            v111 = Method_System_Collections_Generic_List_int__Add__;
            ++v109->fields._version;
            if ( !v110 )
              sub_1C2E388(v109, v95);
            v112 = v109->fields._size;
            if ( (unsigned int)v112 >= v110->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v109,
                v104,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
            }
            else
            {
              v109->fields._size = v112 + 1;
              v110->m_Items[v112 + 1] = v104;
            }
            --v102;
          }
          while ( v102 );
        }
        v113 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v113 = ServantCommentManager_TypeInfo;
        }
        v72 = v86;
        v114 = (System_Collections_Generic_List_object__o *)v113->static_fields->openList;
        if ( !v114 )
          sub_1C2E388(0LL, v95);
        v115 = v114->fields._items;
        v116 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v114->fields._version;
        if ( !v115 )
          sub_1C2E388(v114, v95);
        v117 = v114->fields._size;
        if ( (unsigned int)v117 >= v115->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v114,
            (Il2CppObject *)v75,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
        }
        else
        {
          v118 = &v115->obj.klass + v117;
          v114->fields._size = v117 + 1;
          v118[4] = (Il2CppClass *)v75;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v118 + 4), v75, v96, v97, v98, v99, v100, v101);
        }
      }
    }
  }
  v12 = 1;
LABEL_74:
  klass = v17->klass;
  v120 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v120;
      p_offset += 4;
      if ( !v120 )
        goto LABEL_78;
    }
    v122 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_78:
    v122 = sub_1C8010C(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v122)(v17, *(_QWORD *)(v122 + 8));
  return v12;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  ServantCommentManager_c *v3; // x0

  if ( (byte_4BFE9CD & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_TypeInfo, method);
    byte_4BFE9CD = 1;
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
  int64_t v22; // x21
  System_Collections_Generic_List_int__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  ServantCommentManager_c *v49; // x0
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  ServantCommentManager_c *v54; // x0
  int32_t v55; // w22
  int v56; // w23
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10

  if ( (byte_4BFE9C9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtCommentId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v14);
    sub_1C2E12C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4BFE9C9 = 1;
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
    v22 = sub_1C2E378(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 16) = svtId;
      v23 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v22 + 24) = v23;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)v23, v24, v25, v26, v27, v28, v29);
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
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size + 1] = svtCommentId;
          }
          v33 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v33,
            (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v22 + 32) = v33;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
          openList = *(System_Collections_Generic_List_int__o **)(v22 + 32);
          if ( openList )
          {
            v46 = openList->fields._items;
            v47 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v46 )
            {
              v48 = openList->fields._size;
              if ( (unsigned int)v48 >= v46->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_364E888 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v48 + 1;
                v46->m_Items[v48 + 1] = svtCommentPriority;
              }
              v49 = ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v49 = ServantCommentManager_TypeInfo;
              }
              openList = (System_Collections_Generic_List_int__o *)v49->static_fields->openList;
              if ( openList )
              {
                v50 = openList->fields._items;
                v51 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
                ++openList->fields._version;
                if ( v50 )
                {
                  v52 = openList->fields._size;
                  if ( (unsigned int)v52 >= v50->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v53 = (__int64)v50 + 8 * v52;
                    openList->fields._size = v52 + 1;
                    *(_QWORD *)(v53 + 32) = v22;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v53 + 32), v22, v40, v41, v42, v43, v44, v45);
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
    sub_1C2E388(openList, *(_QWORD *)&svtCommentId);
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
                                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
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
  v55 = 0;
  v56 = openList->fields._size & ~(openList->fields._size >> 31);
  while ( v56 != v55 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           openList,
           v55,
           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v55,
             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return;
    }
    openList = *(System_Collections_Generic_List_int__o **)&v21->fields._size;
    ++v55;
    if ( !openList )
      goto LABEL_55;
  }
  v57 = openList->fields._items;
  v58 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v57 )
    goto LABEL_55;
  v59 = openList->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_364E888 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v59 + 1;
    v57->m_Items[v59 + 1] = svtCommentId;
  }
  openList = (System_Collections_Generic_List_int__o *)v21->fields._syncRoot;
  if ( !openList )
    goto LABEL_55;
  v60 = openList->fields._items;
  v61 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v60 )
    goto LABEL_55;
  v62 = openList->fields._size;
  if ( (unsigned int)v62 >= v60->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_364E888 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v62 + 1;
    v60->m_Items[v62 + 1] = svtCommentPriority;
  }
  v54 = ServantCommentManager_TypeInfo;
  if ( ServantCommentManager_TypeInfo->_2.cctor_finished )
    goto LABEL_34;
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_33:
  v54 = ServantCommentManager_TypeInfo;
LABEL_34:
  v54->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_41848424(
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
  int64_t v24; // x21
  System_Collections_Generic_List_int__o *v25; // x23
  void **v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x24
  void **v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  unsigned __int64 j; // x24
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  ServantCommentManager_c *v54; // x0
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  __int64 v59; // x8
  int v60; // w27
  unsigned __int64 v61; // x24
  int32_t v62; // w22
  int32_t v63; // w23
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10

  v5 = svtCommentIdList;
  if ( (byte_4BFE9CA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, svtCommentIdList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v14);
    sub_1C2E12C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4BFE9CA = 1;
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
                                                                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v23 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v21 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v59 = *(_QWORD *)&Item->fields._size;
        if ( v59 )
        {
          v60 = *(_DWORD *)(v59 + 24);
          v61 = 0LL;
          while ( 1 )
          {
            if ( v61 >= v5->max_length )
LABEL_73:
              sub_1C2E390(Item, svtCommentIdList);
            v62 = v5->m_Items[v61 + 1];
            if ( v60 >= 1 )
              break;
LABEL_54:
            if ( v62 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v65 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v62,
                  *(const MethodInfo_364E888 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v62;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v61 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v61 + 1];
              v67 = Item->fields._items;
              v68 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v67 )
                goto LABEL_72;
              v69 = Item->fields._size;
              if ( (unsigned int)v69 >= v67->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_364E888 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v69 + 1;
                *((_DWORD *)v67->m_Items + v69) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v61 == v20 )
              return;
          }
          v63 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v23->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v63,
                                                                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v62 )
            {
              Item = (System_Collections_Generic_List_object__o *)v23->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v63,
                                                                    (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v61 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v61 + 1] )
                return;
            }
            if ( v60 == ++v63 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1C2E388(Item, svtCommentIdList);
      }
LABEL_17:
      v24 = sub_1C2E378(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( !v24 )
        goto LABEL_72;
      *(_DWORD *)(v24 + 16) = svtId;
      v25 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v25,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 24) = v25;
      v26 = (void **)(v24 + 24);
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)v25, v27, v28, v29, v30, v31, v32);
      v33 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v33,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v24 + 32) = v33;
      v34 = (void **)(v24 + 32);
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v33, v35, v36, v37, v38, v39, v40);
      for ( j = 0LL; j != v20; ++j )
      {
        if ( j >= v5->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v26;
        if ( !*v26 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j + 1];
        v48 = Item->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v48 )
          goto LABEL_72;
        v50 = Item->fields._size;
        if ( (unsigned int)v50 >= v48->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v50 + 1;
          *((_DWORD *)v48->m_Items + v50) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= svtCommentPriorityList->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v34;
        if ( !*v34 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j + 1];
        v51 = Item->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v51 )
          goto LABEL_72;
        v53 = Item->fields._size;
        if ( (unsigned int)v53 >= v51->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v53 + 1;
          *((_DWORD *)v51->m_Items + v53) = (_DWORD)svtCommentIdList;
        }
      }
      v54 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v54 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v54->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v55 = Item->fields._items;
      v56 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v55 )
        goto LABEL_72;
      v57 = Item->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v24,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = (__int64)v55 + 8 * v57;
        Item->fields._size = v57 + 1;
        *(_QWORD *)(v58 + 32) = v24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v58 + 32), v24, v41, v42, v43, v44, v45, v46);
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

  if ( (byte_4BFE9C7 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCommentManager_ClearWarInfo_TypeInfo, v1);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1C2E12C(&JsonManager_TypeInfo, v3);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v4);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C2E12C(&StringLiteral_25616/*"{}"*/, v7);
    byte_4BFE9C7 = 1;
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
               (System_String_o *)StringLiteral_25616/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_19:
      sub_1C2E388(SelfUserGame, v10);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v14 = (ServantCommentManager_ClearWarInfo_o *)sub_1C2E378(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_41846160(v14, ClearWarIdList, v15);
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

  if ( (byte_4BFE9CC & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v2);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v7);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v8);
    byte_4BFE9CC = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1C2E378(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63474076(v16, v15, 0LL);
  v18 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v18 = ServantCommentManager_TypeInfo;
  }
  v19 = v18->static_fields;
  openList = v19->openList;
  if ( !openList )
    sub_1C2E388(v18, v17);
  if ( !v16 )
    sub_1C2E388(v18, v17);
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
        sub_1C2E388(0LL, v22);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v28 = Item;
      if ( !Item )
        sub_1C2E388(0LL, v27);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C2E388(Item, v27);
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
            sub_1C2E388(0LL, v22);
          v33 = System_Collections_Generic_List_int___get_Item(
                  v32,
                  j,
                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
            v16,
            v33,
            v16->klass->vtable._18_Write.methodPtr);
          klass = (System_Collections_Generic_List_int__o *)v28[2].klass;
          if ( !klass )
            sub_1C2E388(0LL, v34);
          v36 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    v40 = sub_1C8010C(v16, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4BFE9D5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Reverse_int___, method);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_3482/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v4);
    sub_1C2E12C(&StringLiteral_3483/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v5);
    byte_4BFE9D5 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3483/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v7 = Value;
    v8 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v8);
    if ( !ClearWarIdList )
      sub_1C2E388(0LL, v10);
    v11 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_3482/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse_int_(v11, (const MethodInfo_2F92D3C *)Method_System_Array_Reverse_int___),
          max_length = v11->max_length,
          max_length >= 1) )
    {
      v16 = 0LL;
      v17 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1C2E390(v13, v14);
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

  if ( (byte_4BFE9BF & 1) == 0 )
  {
    sub_1C2E12C(&AndroidUtil_TypeInfo, v1);
    sub_1C2E12C(&DatFileName_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFE9BF = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_63246844(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BFE9DA & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, method);
    byte_4BFE9DA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.warIdList = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_41846160(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = warIdList;
  if ( (byte_4BFE9DB & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, warIdList);
    byte_4BFE9DB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v5 = sub_1C2E1D4(int___TypeInfo, 0LL);
    v3 = (struct System_Int32_array *)v5;
  }
  if ( !this )
    sub_1C2E388(v5, v6);
  this->fields.warIdList = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}