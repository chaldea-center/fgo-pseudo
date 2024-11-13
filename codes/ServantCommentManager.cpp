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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct ServantCommentManager_StaticFields *static_fields; // x0
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
  int64_t v56; // x1
  struct ServantCommentManager_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_object__o *v67; // x19
  struct ServantCommentManager_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7

  if ( (byte_4B173DD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__,
      v1,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_4485/*"ChapterProgress"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6899/*"ForceReadNewProfiles"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10246/*"OverwriteUIVersion"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6754/*"Fgo_20150511_1"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6758/*"Fgo_20160620_1"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_14877/*"UIChangeType"*/, v22, v23);
    byte_4B173DD = 1;
  }
  ServantCommentManager_TypeInfo->static_fields->SAVE_DATA_OLD_VERSION = (struct System_String_o *)StringLiteral_6754/*"Fgo_20150511_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCommentManager_TypeInfo->static_fields,
    StringLiteral_6754/*"Fgo_20150511_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_6758/*"Fgo_20160620_1"*/;
  static_fields = ServantCommentManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6758/*"Fgo_20160620_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_DATA_VERSION, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_4485/*"ChapterProgress"*/;
  v33 = ServantCommentManager_TypeInfo->static_fields;
  v33->SAVE_KEY = (struct System_String_o *)StringLiteral_4485/*"ChapterProgress"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->SAVE_KEY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_14877/*"UIChangeType"*/;
  v41 = ServantCommentManager_TypeInfo->static_fields;
  v41->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14877/*"UIChangeType"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->UI_CHANGE_TYPE_KEY, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_10246/*"OverwriteUIVersion"*/;
  v49 = ServantCommentManager_TypeInfo->static_fields;
  v49->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10246/*"OverwriteUIVersion"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->OVERWIRTE_UI_VERSION_KEY, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_6899/*"ForceReadNewProfiles"*/;
  v57 = ServantCommentManager_TypeInfo->static_fields;
  v57->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6899/*"ForceReadNewProfiles"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->FORCE_READ_NEW_COMMENTS_KEY, v56, v58, v59, v60, v61, v62, v63);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v67 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo,
                                                       v64,
                                                       v65,
                                                       v66);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v68 = ServantCommentManager_TypeInfo->static_fields;
  v68->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&v68->openList, (int64_t)v67, v69, v70, v71, v72, v73, v74);
}


void __fastcall ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ServantCommentManager_c *v7; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B173C8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3,
      v4);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v5, v6);
    byte_4B173C8 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v7 = ServantCommentManager_TypeInfo;
  }
  openList = v7->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantCommentManager_TypeInfo;
    openList = ServantCommentManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = openList->fields._size;
  v10 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
    v7 = ServantCommentManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantCommentManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0
  _BOOL8 v6; // x0

  if ( (byte_4B173C6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173C6 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v3);
  ServantCommentManager__ClearSaveDataList(v4);
  *(_WORD *)&ServantCommentManager_TypeInfo->static_fields->isModfiy = 257;
  v6 = ServantCommentManager__WriteData(v5);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v6);
}


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173C4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173C4 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v3 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0LL);
}


void __fastcall ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B173C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173C5 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x0
  System_Object_array *Entitys_object; // x0
  Il2CppObject *MasterData_object; // x0
  long double v18; // q0
  DataMasterBase_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x0
  Il2CppObject *v22; // x19
  __int64 v23; // x8
  System_Object_array *v24; // x20
  unsigned __int64 i; // x25
  Il2CppObject *v26; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppClass *v29; // x21
  void *v30; // x22
  int32_t v31; // w0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  System_Int32_array *v34; // x21
  System_Int32_array *v35; // x22
  int32_t v36; // w23
  ServantCommentManager_c *v37; // x0
  System_Int32_array *v38; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4B173D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13);
    byte_4B173D3 = 1;
  }
  v38 = 0LL;
  idList = 0LL;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v3);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v3);
  Entitys_object = **(System_Object_array ***)(v15 + 184);
  if ( !Entitys_object )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entitys_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_object )
    return;
  v19 = (DataMasterBase_o *)MasterData_object;
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v18);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v18);
  Entitys_object = **(System_Object_array ***)(v21 + 184);
  if ( !Entitys_object
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Entitys_object,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_object = DataMasterBase__getEntitys_object_(
                            v19,
                            (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(Entitys_object, v1);
  }
  v23 = *(_QWORD *)&Entitys_object->max_length;
  v24 = Entitys_object;
  if ( (int)v23 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v23; ++i )
    {
      if ( i >= (unsigned int)v23 )
        sub_1BCAA44(Entitys_object, v1);
      v26 = v24->m_Items[i];
      if ( v26 )
      {
        monitor = v26[1].monitor;
        klass = v26[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v1);
        *(_QWORD *)&v40.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v40.fields.fakeValue = klass;
        Entitys_object = (System_Object_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  v40,
                                                  0LL);
        if ( !v22 )
          goto LABEL_34;
        Entitys_object = (System_Object_array *)ServantCommentMaster__GetNewList(
                                                  (ServantCommentMaster_o *)v22,
                                                  &idList,
                                                  &v38,
                                                  (int32_t)Entitys_object,
                                                  0LL);
        if ( ((unsigned __int8)Entitys_object & 1) != 0 )
        {
          v30 = v26[1].monitor;
          v29 = v26[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v1);
          *(_QWORD *)&v41.fields.currentCryptoKey = v30;
          *(_QWORD *)&v41.fields.fakeValue = v29;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41, 0LL);
          v34 = v38;
          v35 = idList;
          v36 = v31;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v32);
          ServantCommentManager__SetOpen_41219032(v36, v35, v34, v33);
        }
      }
      LODWORD(v23) = v24->max_length;
    }
  }
  v37 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__WriteData((const MethodInfo *)v37);
}


System_Int32_array *__fastcall ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantCommentManager_c *v13; // x0
  __int64 v14; // x1
  Il2CppObject *String; // x19
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x19

  if ( (byte_4B173CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int___, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25396/*"{}"*/, v11, v12);
    byte_4B173CA = 1;
  }
  v13 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v13 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v13->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_25396/*"{}"*/,
                             0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v14);
  v16 = JsonManager__Deserialize_object_(
          String,
          (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v18 = v16;
  if ( !v16 )
    sub_1BCAA3C(0LL, v17);
  System_Array__Sort_int_(
    (System_Int32_array *)v16[1].klass,
    (const MethodInfo_2EE04D8 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v18[1].klass;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int32_t v38; // w23
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  int32_t v42; // w20
  DataManager_o *v43; // x21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B173D4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      *(_QWORD *)&oldFriendShipRank,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76795448, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B173D4 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&oldFriendShipRank,
                                                       *(_QWORD *)&limitCount,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
    if ( !v33 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v33 )
  {
    goto LABEL_31;
  }
  v38 = v33->fields._size - 1;
  if ( v38 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v33,
                                    v38,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v33,
          v38,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v38 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v35);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                         v35,
                                                         v36,
                                                         v37);
    System_Collections_Generic_List_object____ctor_56235344(
      v39,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76795448);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v40);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v41);
    if ( !Instance )
      goto LABEL_31;
    v33 = (System_Collections_Generic_List_object__o *)Instance;
    v42 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v42 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v33,
                                      v42,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v39 )
          goto LABEL_31;
        v43 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          v39,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v48 = v47;
        while ( 1 )
        {
          v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v44 )
            break;
          if ( !v43 )
            sub_1BCAA3C(v44, v45);
          if ( !v48.fields._current )
            sub_1BCAA3C(v44, v45);
          if ( *((_DWORD *)&v43->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v48.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v33,
              v42,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v42 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v33;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v33;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
        int32_t svtId,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int32_t v38; // w23
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  int32_t v42; // w20
  DataManager_o *v43; // x21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B173D7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      *(_QWORD *)&imageLimit,
      *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76795448, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B173D7 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&imageLimit,
                                                       *(_QWORD *)&oldFriendShipRank,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
    if ( !v33 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v33 )
  {
    goto LABEL_31;
  }
  v38 = v33->fields._size - 1;
  if ( v38 >= 0 )
  {
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v33,
                                    v38,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, 0LL) )
        System_Collections_Generic_List_object___RemoveAt(
          v33,
          v38,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( --v38 < 0 )
        goto LABEL_14;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v35);
  }
LABEL_14:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                         v35,
                                                         v36,
                                                         v37);
    System_Collections_Generic_List_object____ctor_56235344(
      v39,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___76795448);
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v40);
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v41);
    if ( !Instance )
      goto LABEL_31;
    v33 = (System_Collections_Generic_List_object__o *)Instance;
    v42 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v42 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v33,
                                      v42,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !v39 )
          goto LABEL_31;
        v43 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          v39,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v48 = v47;
        while ( 1 )
        {
          v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v44 )
            break;
          if ( !v43 )
            sub_1BCAA3C(v44, v45);
          if ( !v48.fields._current )
            sub_1BCAA3C(v44, v45);
          if ( *((_DWORD *)&v43->fields.UnityEngine_Behaviour_Fields + 1) == HIDWORD(v48.fields._current[1].klass) )
          {
            System_Collections_Generic_List_object___RemoveAt(
              v33,
              v42,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( --v42 < 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v33;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v33;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173DC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173DC = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v3 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0LL);
}


int32_t __fastcall ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173DB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173DB = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v3);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173DA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173DA = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v3 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->UI_CHANGE_TYPE_KEY, 0, 0LL);
}


void __fastcall ServantCommentManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173C7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173C7 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  ServantCommentManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCommentManager_c *v3; // x0

  if ( (byte_4B173D2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B173D2 = 1;
  }
  v3 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v3 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0LL) == 1;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *Master_object; // x0
  __int64 v23; // x1
  ServantCommentManager_c *v24; // x8
  ServantCommentMaster_o *v25; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int32_t v27; // w25
  _QWORD *v28; // x26
  int v29; // w8
  int v30; // w19
  int32_t v31; // w27
  int size; // [xsp+0h] [xbp-70h]
  ServantCommentEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B173CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_ServantCommentMaster___,
      *(_QWORD *)&svtCommentId,
      *(_QWORD *)&svtCommentPriority);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v18, v19);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v20, v21);
    byte_4B173CC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCommentId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  v24 = ServantCommentManager_TypeInfo;
  v25 = (ServantCommentMaster_o *)Master_object;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v23);
    v24 = ServantCommentManager_TypeInfo;
  }
  openList = v24->static_fields->openList;
  if ( !openList )
LABEL_37:
    sub_1BCAA3C(Master_object, v23);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      v24 = ServantCommentManager_TypeInfo;
    }
    Master_object = v24->static_fields->openList;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Master_object,
                      v27,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !Master_object )
      goto LABEL_37;
    v28 = Master_object;
    if ( *((_DWORD *)Master_object + 4) == svtId )
    {
      Master_object = (void *)*((_QWORD *)Master_object + 3);
      if ( !Master_object )
        goto LABEL_37;
      v29 = *((_DWORD *)Master_object + 6);
      v30 = v29 - 1;
      if ( v29 >= 1 )
        break;
    }
LABEL_33:
    if ( ++v27 == size )
      return 0;
    v24 = ServantCommentManager_TypeInfo;
  }
  v31 = 0;
  while ( 1 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Master_object,
           v31,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      Master_object = (void *)v28[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v31,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return 1;
      Master_object = (void *)v28[4];
      if ( !Master_object )
        goto LABEL_37;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)Master_object,
             v31,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) >= svtCommentPriority
        && !isImageLimit )
      {
        return 1;
      }
      if ( (readJudgeKey & 0x80000000) == 0 )
      {
        Master_object = (void *)v28[4];
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)Master_object,
                                  v31,
                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v25 )
          goto LABEL_37;
        if ( ServantCommentMaster__TryGetEntity(v25, &entity, svtId, svtCommentId, (int32_t)Master_object, 0LL) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_37;
          if ( ServantCommentEntity__GetReadJudgeKey(entity, 0LL) == readJudgeKey )
            return 1;
        }
      }
    }
    if ( v30 == v31 )
      goto LABEL_33;
    Master_object = (void *)v28[3];
    ++v31;
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

  if ( (byte_4B173D5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank, method);
    byte_4B173D5 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
  return ServantCommentManager__IsOpenByServantFriendShip_41221340(svt_id, oldFriendShipRank, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v10; // x1

  if ( (byte_4B173D8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__,
      *(_QWORD *)&imageLimit,
      *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v7, v8);
    byte_4B173D8 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&imageLimit);
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_1BCAA3C(0LL, v10);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_41221340(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t ServantLimitCountSealAfter; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  ServantLimitCountSealAfter = limitCount;
  if ( (byte_4B173D6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      *(_QWORD *)&oldFriendShipRank,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B173D6 = 1;
  }
  entity = 0LL;
  if ( ServantLimitCountSealAfter == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
LABEL_18:
      sub_1BCAA3C(Instance, *(_QWORD *)&oldFriendShipRank);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_18;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)Instance,
                                     svt_id,
                                     maxLimitCount,
                                     0LL);
    }
    else
    {
      ServantLimitCountSealAfter = -1;
    }
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
  Instance = (int64_t)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                        svt_id,
                        oldFriendShipRank,
                        ServantLimitCountSealAfter,
                        method);
  if ( !Instance )
    goto LABEL_18;
  return *(_DWORD *)(Instance + 24) > 0;
}


void __fastcall ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ServantCommentManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x0
  const MethodInfo *v12; // x0
  __int64 v13; // x1
  ServantCommentManager_c *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B173C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1, v2);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B173C9 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v7 = ServantCommentManager_TypeInfo;
  }
  if ( v7->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
    v11 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v10);
      v11 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    *((_WORD *)v11[2].virtualMethodPointer + 24) = 1;
    ServantCommentManager__WriteData(v11);
    v7 = ServantCommentManager_TypeInfo;
  }
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7, v1);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v7);
  if ( ServantCommentManager__IsForceReadNewComments(v12) )
  {
    v14 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v13);
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v14);
    ServantCommentManager__SetForceReadNewComments(0, v15);
  }
}


bool __fastcall ServantCommentManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ServantCommentManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  bool v21; // w21
  ServantCommentManager_c *v22; // x0
  System_String_o *SaveFileName; // x19
  __int64 v24; // x1
  ServantCommentManager_c *v25; // x0
  System_IO_Stream_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_IO_BinaryReader_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_String_o *v34; // x20
  ServantCommentManager_c *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  char v38; // w20
  ServantCommentManager_c *v39; // x0
  int v40; // w20
  int i; // w25
  int v42; // w22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  int64_t v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_int__o *v51; // x23
  System_Collections_Generic_List_int__o **v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_int__o *v62; // x24
  System_Collections_Generic_List_int__o **v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int v77; // w24
  System_Collections_Generic_List_int__o *v78; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v82; // x0
  struct System_Int32_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  ServantCommentManager_c *v86; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x8
  ServantCommentManager_c *v92; // x0
  __int64 v93; // x1
  char v94; // w20
  ServantCommentManager_c *v95; // x0
  int v96; // w20
  System_Collections_Generic_List_int__c **v97; // x24
  int j; // w28
  int v99; // w22
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  int64_t v103; // x21
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  System_Collections_Generic_List_int__o *v108; // x23
  System_Collections_Generic_List_int__o **v109; // x22
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Collections_Generic_List_int__c **v116; // x27
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Collections_Generic_List_int__o *v120; // x24
  System_Collections_Generic_List_int__o **v121; // x23
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  __int64 v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int v135; // w24
  int32_t v136; // w26
  int32_t v137; // w25
  System_Collections_Generic_List_int__o *v138; // x0
  struct System_Int32_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  System_Collections_Generic_List_int__o *v142; // x0
  struct System_Int32_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  ServantCommentManager_c *v146; // x0
  System_Collections_Generic_List_object__o *v147; // x0
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v153; // x9
  int32_t *p_offset; // x10
  __int64 v155; // x0
  ServantCommentManager_c *v156; // x0

  if ( (byte_4B173CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v17, v18);
    byte_4B173CF = 1;
  }
  v19 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v19 = ServantCommentManager_TypeInfo;
  }
  v19->static_fields->isModfiy = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 1;
  v22 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v156 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v24);
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v156);
    return 0;
  }
  v25 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v24);
  ServantCommentManager__ClearSaveDataList((const MethodInfo *)v25);
  v26 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v30 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v27, v28, v29);
  System_IO_BinaryReader___ctor(v30, v26, 0LL);
  if ( !v30 )
    sub_1BCAA3C(v31, v32);
  v34 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._22_ReadString.method)(
                             v30,
                             v30->klass->vtable._23_ReadChars.methodPtr);
  v35 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v33);
    v35 = ServantCommentManager_TypeInfo;
  }
  if ( System_String__op_Equality(v35->static_fields->SAVE_DATA_OLD_VERSION, v34, 0LL) )
  {
    v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._9_ReadBoolean.method)(
            v30,
            v30->klass->vtable._10_ReadByte.methodPtr);
    v39 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v37);
      v39 = ServantCommentManager_TypeInfo;
    }
    v39->static_fields->isContinueDevice = v38 & 1;
    v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
            v30,
            v30->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v40 >= 1 )
    {
      for ( i = 0; i != v40; ++i )
      {
        v42 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                v30,
                v30->klass->vtable._16_ReadUInt32.methodPtr);
        v46 = sub_1BCAA2C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v43, v44, v45);
        System_Object___ctor((Il2CppObject *)v46, 0LL);
        if ( !v46 )
          sub_1BCAA3C(v47, v48);
        *(_DWORD *)(v46 + 16) = v42;
        v51 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v48,
                                                          v49,
                                                          v50);
        System_Collections_Generic_List_int____ctor(
          v51,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v46 + 24) = v51;
        v52 = (System_Collections_Generic_List_int__o **)(v46 + 24);
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 24), (int64_t)v51, v53, v54, v55, v56, v57, v58);
        v62 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v59,
                                                          v60,
                                                          v61);
        System_Collections_Generic_List_int____ctor(
          v62,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v46 + 32) = v62;
        v63 = (System_Collections_Generic_List_int__o **)(v46 + 32);
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v62, v64, v65, v66, v67, v68, v69);
        v77 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                v30,
                v30->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v77 >= 1 )
        {
          do
          {
            v70 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                    v30,
                    v30->klass->vtable._16_ReadUInt32.methodPtr);
            v78 = *v52;
            if ( !*v52 )
              sub_1BCAA3C(0LL, v70);
            items = v78->fields._items;
            v80 = Method_System_Collections_Generic_List_int__Add__;
            ++v78->fields._version;
            if ( !items )
              sub_1BCAA3C(v78, v70);
            size = v78->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v78,
                v70,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
            }
            else
            {
              v78->fields._size = size + 1;
              items->m_Items[size + 1] = v70;
            }
            v82 = *v63;
            if ( !*v63 )
              sub_1BCAA3C(0LL, v70);
            v83 = v82->fields._items;
            v84 = Method_System_Collections_Generic_List_int__Add__;
            ++v82->fields._version;
            if ( !v83 )
              sub_1BCAA3C(v82, v70);
            v85 = v82->fields._size;
            if ( (unsigned int)v85 >= v83->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v82,
                0,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v82->fields._size = v85 + 1;
              v83->m_Items[v85 + 1] = 0;
            }
            --v77;
          }
          while ( v77 );
        }
        v86 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v70);
          v86 = ServantCommentManager_TypeInfo;
        }
        openList = (System_Collections_Generic_List_object__o *)v86->static_fields->openList;
        if ( !openList )
          sub_1BCAA3C(0LL, v70);
        v88 = openList->fields._items;
        v89 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++openList->fields._version;
        if ( !v88 )
          sub_1BCAA3C(openList, v70);
        v90 = openList->fields._size;
        if ( (unsigned int)v90 >= v88->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            openList,
            (Il2CppObject *)v46,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          openList->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v46;
          sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), v46, v71, v72, v73, v74, v75, v76);
        }
      }
    }
  }
  else
  {
    v92 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v36);
      v92 = ServantCommentManager_TypeInfo;
    }
    if ( !System_String__op_Equality(v92->static_fields->SAVE_DATA_VERSION, v34, 0LL) )
    {
      v21 = 0;
      goto LABEL_74;
    }
    v94 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._9_ReadBoolean.method)(
            v30,
            v30->klass->vtable._10_ReadByte.methodPtr);
    v95 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v93);
      v95 = ServantCommentManager_TypeInfo;
    }
    v95->static_fields->isContinueDevice = v94 & 1;
    v96 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
            v30,
            v30->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v96 >= 1 )
    {
      v97 = &System_Collections_Generic_List_int__TypeInfo;
      for ( j = 0; j != v96; ++j )
      {
        v99 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                v30,
                v30->klass->vtable._16_ReadUInt32.methodPtr);
        v103 = sub_1BCAA2C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v100, v101, v102);
        System_Object___ctor((Il2CppObject *)v103, 0LL);
        if ( !v103 )
          sub_1BCAA3C(v104, v105);
        *(_DWORD *)(v103 + 16) = v99;
        v108 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(*v97, v105, v106, v107);
        System_Collections_Generic_List_int____ctor(
          v108,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v103 + 24) = v108;
        v109 = (System_Collections_Generic_List_int__o **)(v103 + 24);
        sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 24), (int64_t)v108, v110, v111, v112, v113, v114, v115);
        v116 = v97;
        v120 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(*v97, v117, v118, v119);
        System_Collections_Generic_List_int____ctor(
          v120,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v103 + 32) = v120;
        v121 = (System_Collections_Generic_List_int__o **)(v103 + 32);
        sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), (int64_t)v120, v122, v123, v124, v125, v126, v127);
        v135 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                 v30,
                 v30->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v135 >= 1 )
        {
          do
          {
            v136 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                     v30,
                     v30->klass->vtable._16_ReadUInt32.methodPtr);
            v137 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v30->klass->vtable._15_ReadInt32.method)(
                     v30,
                     v30->klass->vtable._16_ReadUInt32.methodPtr);
            v138 = *v109;
            if ( !*v109 )
              sub_1BCAA3C(0LL, v128);
            v139 = v138->fields._items;
            v140 = Method_System_Collections_Generic_List_int__Add__;
            ++v138->fields._version;
            if ( !v139 )
              sub_1BCAA3C(v138, v128);
            v141 = v138->fields._size;
            if ( (unsigned int)v141 >= v139->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v138,
                v136,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
            }
            else
            {
              v138->fields._size = v141 + 1;
              v139->m_Items[v141 + 1] = v136;
            }
            v142 = *v121;
            if ( !*v121 )
              sub_1BCAA3C(0LL, v128);
            v143 = v142->fields._items;
            v144 = Method_System_Collections_Generic_List_int__Add__;
            ++v142->fields._version;
            if ( !v143 )
              sub_1BCAA3C(v142, v128);
            v145 = v142->fields._size;
            if ( (unsigned int)v145 >= v143->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v142,
                v137,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
            }
            else
            {
              v142->fields._size = v145 + 1;
              v143->m_Items[v145 + 1] = v137;
            }
            --v135;
          }
          while ( v135 );
        }
        v146 = ServantCommentManager_TypeInfo;
        if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v128);
          v146 = ServantCommentManager_TypeInfo;
        }
        v97 = v116;
        v147 = (System_Collections_Generic_List_object__o *)v146->static_fields->openList;
        if ( !v147 )
          sub_1BCAA3C(0LL, v128);
        v148 = v147->fields._items;
        v149 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
        ++v147->fields._version;
        if ( !v148 )
          sub_1BCAA3C(v147, v128);
        v150 = v147->fields._size;
        if ( (unsigned int)v150 >= v148->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v147,
            (Il2CppObject *)v103,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
        }
        else
        {
          v151 = &v148->obj.klass + v150;
          v147->fields._size = v150 + 1;
          v151[4] = (Il2CppClass *)v103;
          sub_1BCA784((PartyOrganizationUtility_o *)(v151 + 4), v103, v129, v130, v131, v132, v133, v134);
        }
      }
    }
  }
  v21 = 1;
LABEL_74:
  klass = v30->klass;
  v153 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v153;
      p_offset += 4;
      if ( !v153 )
        goto LABEL_78;
    }
    v155 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_78:
    v155 = sub_1C1C7C0(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v155)(v30, *(_QWORD *)(v155 + 8));
  return v21;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCommentManager_c *v4; // x0

  if ( (byte_4B173D1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, method, v2);
    byte_4B173D1 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method);
    v4 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->FORCE_READ_NEW_COMMENTS_KEY, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentManager__SetOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *openList; // x0
  __int64 v26; // x8
  int v27; // w8
  int v28; // w26
  int32_t i; // w23
  System_Collections_Generic_List_int__o *v30; // x21
  int64_t v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_int__o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x2
  __int64 v42; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v46; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  ServantCommentManager_c *v62; // x0
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  ServantCommentManager_c *v67; // x0
  int32_t v68; // w22
  int v69; // w23
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10

  if ( (byte_4B173CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_int__Add__,
      *(_QWORD *)&svtCommentId,
      *(_QWORD *)&svtCommentPriority);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v23, v24);
    byte_4B173CD = 1;
  }
  openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtCommentId);
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  v26 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 56LL);
  if ( !v26 )
    goto LABEL_55;
  v27 = *(_DWORD *)(v26 + 24);
  v28 = v27 - 1;
  if ( v27 < 1 )
  {
LABEL_15:
    v31 = sub_1BCAA2C(
            ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
            *(_QWORD *)&svtCommentId,
            *(_QWORD *)&svtCommentPriority,
            method);
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    if ( v31 )
    {
      *(_DWORD *)(v31 + 16) = svtId;
      v34 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        *(_QWORD *)&svtCommentId,
                                                        v32,
                                                        v33);
      System_Collections_Generic_List_int____ctor(
        v34,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v31 + 24) = v34;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)v34, v35, v36, v37, v38, v39, v40);
      openList = *(System_Collections_Generic_List_int__o **)(v31 + 24);
      if ( openList )
      {
        items = openList->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              openList,
              svtCommentId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            openList->fields._size = size + 1;
            items->m_Items[size + 1] = svtCommentId;
          }
          v46 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            *(_QWORD *)&svtCommentId,
                                                            v41,
                                                            v42);
          System_Collections_Generic_List_int____ctor(
            v46,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          *(_QWORD *)(v31 + 32) = v46;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v46, v47, v48, v49, v50, v51, v52);
          openList = *(System_Collections_Generic_List_int__o **)(v31 + 32);
          if ( openList )
          {
            v59 = openList->fields._items;
            v60 = Method_System_Collections_Generic_List_int__Add__;
            ++openList->fields._version;
            if ( v59 )
            {
              v61 = openList->fields._size;
              if ( (unsigned int)v61 >= v59->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  openList,
                  svtCommentPriority,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                openList->fields._size = v61 + 1;
                v59->m_Items[v61 + 1] = svtCommentPriority;
              }
              v62 = ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtCommentId);
                v62 = ServantCommentManager_TypeInfo;
              }
              openList = (System_Collections_Generic_List_int__o *)v62->static_fields->openList;
              if ( openList )
              {
                v63 = openList->fields._items;
                v64 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
                ++openList->fields._version;
                if ( v63 )
                {
                  v65 = openList->fields._size;
                  if ( (unsigned int)v65 >= v63->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)openList,
                      (Il2CppObject *)v31,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v66 = (__int64)v63 + 8 * v65;
                    openList->fields._size = v65 + 1;
                    *(_QWORD *)(v66 + 32) = v31;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 32), v31, v53, v54, v55, v56, v57, v58);
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
    sub_1BCAA3C(openList, *(_QWORD *)&svtCommentId);
  }
  for ( i = 0; ; ++i )
  {
    if ( !openList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(openList, *(_QWORD *)&svtCommentId);
      openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
    }
    openList = *(System_Collections_Generic_List_int__o **)(*(_QWORD *)&openList[4].fields._size + 56LL);
    if ( !openList )
      goto LABEL_55;
    openList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)openList,
                                                           i,
                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    if ( !openList )
      goto LABEL_55;
    v30 = openList;
    if ( LODWORD(openList->fields._items) == svtId )
      break;
    if ( v28 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_int__o *)ServantCommentManager_TypeInfo;
  }
  openList = *(System_Collections_Generic_List_int__o **)&openList->fields._size;
  if ( !openList )
    goto LABEL_55;
  v68 = 0;
  v69 = openList->fields._size & ~(openList->fields._size >> 31);
  while ( v69 != v68 )
  {
    if ( System_Collections_Generic_List_int___get_Item(
           openList,
           v68,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentId )
    {
      openList = (System_Collections_Generic_List_int__o *)v30->fields._syncRoot;
      if ( !openList )
        goto LABEL_55;
      if ( System_Collections_Generic_List_int___get_Item(
             openList,
             v68,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtCommentPriority )
        return;
    }
    openList = *(System_Collections_Generic_List_int__o **)&v30->fields._size;
    ++v68;
    if ( !openList )
      goto LABEL_55;
  }
  v70 = openList->fields._items;
  v71 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v70 )
    goto LABEL_55;
  v72 = openList->fields._size;
  if ( (unsigned int)v72 >= v70->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v72 + 1;
    v70->m_Items[v72 + 1] = svtCommentId;
  }
  openList = (System_Collections_Generic_List_int__o *)v30->fields._syncRoot;
  if ( !openList )
    goto LABEL_55;
  v73 = openList->fields._items;
  v74 = Method_System_Collections_Generic_List_int__Add__;
  ++openList->fields._version;
  if ( !v73 )
    goto LABEL_55;
  v75 = openList->fields._size;
  if ( (unsigned int)v75 >= v73->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      openList,
      svtCommentPriority,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    openList->fields._size = v75 + 1;
    v73->m_Items[v75 + 1] = svtCommentPriority;
  }
  v67 = ServantCommentManager_TypeInfo;
  if ( ServantCommentManager_TypeInfo->_2.cctor_finished )
    goto LABEL_34;
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtCommentId);
LABEL_33:
  v67 = ServantCommentManager_TypeInfo;
LABEL_34:
  v67->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_41219032(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v27; // x8
  int v28; // w8
  __int64 v29; // x26
  int v30; // w24
  int32_t i; // w23
  System_Collections_Generic_List_object__o *v32; // x21
  int64_t v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_int__o *v36; // x23
  void **v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_List_int__o *v47; // x24
  void **v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  unsigned __int64 j; // x24
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  ServantCommentManager_c *v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  __int64 v73; // x8
  int v74; // w27
  unsigned __int64 v75; // x24
  int32_t v76; // w22
  int32_t v77; // w23
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10

  v5 = svtCommentIdList;
  if ( (byte_4B173CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, svtCommentIdList, svtCommentPriorityList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v23, v24);
    byte_4B173CE = 1;
  }
  if ( v5 )
  {
    v25 = *(_QWORD *)&v5->max_length;
    if ( (int)v25 >= 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
        Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
      }
      v27 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 56LL);
      if ( !v27 )
        goto LABEL_72;
      v28 = *(_DWORD *)(v27 + 24);
      v29 = (unsigned int)v25;
      v30 = v28 - 1;
      if ( v28 >= 1 )
      {
        for ( i = 0; ; ++i )
        {
          if ( !Item[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(Item, svtCommentIdList);
            Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
          }
          Item = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&Item[4].fields._size + 56LL);
          if ( !Item )
            goto LABEL_72;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                i,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
          if ( !Item )
            goto LABEL_72;
          v32 = Item;
          if ( LODWORD(Item->fields._items) == svtId )
            break;
          if ( v30 == i )
            goto LABEL_17;
          Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
        }
        v73 = *(_QWORD *)&Item->fields._size;
        if ( v73 )
        {
          v74 = *(_DWORD *)(v73 + 24);
          v75 = 0LL;
          while ( 1 )
          {
            if ( v75 >= v5->max_length )
LABEL_73:
              sub_1BCAA44(Item, svtCommentIdList);
            v76 = v5->m_Items[v75 + 1];
            if ( v74 >= 1 )
              break;
LABEL_54:
            if ( v76 >= 1 )
            {
              Item = *(System_Collections_Generic_List_object__o **)&v32->fields._size;
              if ( !Item )
                goto LABEL_72;
              items = Item->fields._items;
              v79 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !items )
                goto LABEL_72;
              size = Item->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  v76,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = size + 1;
                *((_DWORD *)items->m_Items + size) = v76;
              }
              if ( !svtCommentPriorityList )
                goto LABEL_72;
              if ( v75 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              Item = (System_Collections_Generic_List_object__o *)v32->fields._syncRoot;
              if ( !Item )
                goto LABEL_72;
              svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[v75 + 1];
              v81 = Item->fields._items;
              v82 = Method_System_Collections_Generic_List_int__Add__;
              ++Item->fields._version;
              if ( !v81 )
                goto LABEL_72;
              v83 = Item->fields._size;
              if ( (unsigned int)v83 >= v81->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Item,
                  (int32_t)svtCommentIdList,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
              }
              else
              {
                Item->fields._size = v83 + 1;
                *((_DWORD *)v81->m_Items + v83) = (_DWORD)svtCommentIdList;
              }
              Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
                Item = (System_Collections_Generic_List_object__o *)ServantCommentManager_TypeInfo;
              }
              *(_BYTE *)(*(_QWORD *)&Item[4].fields._size + 48LL) = 1;
            }
            if ( ++v75 == v29 )
              return;
          }
          v77 = 0;
          while ( 1 )
          {
            Item = *(System_Collections_Generic_List_object__o **)&v32->fields._size;
            if ( !Item )
              break;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                  (System_Collections_Generic_List_int__o *)Item,
                                                                  v77,
                                                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( (_DWORD)Item == v76 )
            {
              Item = (System_Collections_Generic_List_object__o *)v32->fields._syncRoot;
              if ( !Item )
                break;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)Item,
                                                                    v77,
                                                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !svtCommentPriorityList )
                break;
              if ( v75 >= svtCommentPriorityList->max_length )
                goto LABEL_73;
              if ( (_DWORD)Item == svtCommentPriorityList->m_Items[v75 + 1] )
                return;
            }
            if ( v74 == ++v77 )
              goto LABEL_54;
          }
        }
LABEL_72:
        sub_1BCAA3C(Item, svtCommentIdList);
      }
LABEL_17:
      v33 = sub_1BCAA2C(
              ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
              svtCommentIdList,
              svtCommentPriorityList,
              method);
      System_Object___ctor((Il2CppObject *)v33, 0LL);
      if ( !v33 )
        goto LABEL_72;
      *(_DWORD *)(v33 + 16) = svtId;
      v36 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        svtCommentIdList,
                                                        v34,
                                                        v35);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v33 + 24) = v36;
      v37 = (void **)(v33 + 24);
      sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)v36, v38, v39, v40, v41, v42, v43);
      v47 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v44,
                                                        v45,
                                                        v46);
      System_Collections_Generic_List_int____ctor(
        v47,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v33 + 32) = v47;
      v48 = (void **)(v33 + 32);
      sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v47, v49, v50, v51, v52, v53, v54);
      for ( j = 0LL; j != v29; ++j )
      {
        if ( j >= v5->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v37;
        if ( !*v37 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)v5->m_Items[j + 1];
        v62 = Item->fields._items;
        v63 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v62 )
          goto LABEL_72;
        v64 = Item->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v64 + 1;
          *((_DWORD *)v62->m_Items + v64) = (_DWORD)svtCommentIdList;
        }
        if ( !svtCommentPriorityList )
          goto LABEL_72;
        if ( j >= svtCommentPriorityList->max_length )
          goto LABEL_73;
        Item = (System_Collections_Generic_List_object__o *)*v48;
        if ( !*v48 )
          goto LABEL_72;
        svtCommentIdList = (System_Int32_array *)(unsigned int)svtCommentPriorityList->m_Items[j + 1];
        v65 = Item->fields._items;
        v66 = Method_System_Collections_Generic_List_int__Add__;
        ++Item->fields._version;
        if ( !v65 )
          goto LABEL_72;
        v67 = Item->fields._size;
        if ( (unsigned int)v67 >= v65->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Item,
            (int32_t)svtCommentIdList,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          Item->fields._size = v67 + 1;
          *((_DWORD *)v65->m_Items + v67) = (_DWORD)svtCommentIdList;
        }
      }
      v68 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, svtCommentIdList);
        v68 = ServantCommentManager_TypeInfo;
      }
      Item = (System_Collections_Generic_List_object__o *)v68->static_fields->openList;
      if ( !Item )
        goto LABEL_72;
      v69 = Item->fields._items;
      v70 = Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__;
      ++Item->fields._version;
      if ( !v69 )
        goto LABEL_72;
      v71 = Item->fields._size;
      if ( (unsigned int)v71 >= v69->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = (__int64)v69 + 8 * v71;
        Item->fields._size = v71 + 1;
        *(_QWORD *)(v72 + 32) = v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 32), v33, v55, v56, v57, v58, v59, v60);
      }
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void __fastcall ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ManagerConfig_c *v15; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  ServantCommentManager_c *v19; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  ServantCommentManager_ClearWarInfo_o *v25; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  System_String_o *v28; // x20
  __int64 v29; // x1
  ServantCommentManager_c *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_4B173CB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_ClearWarInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v3, v4);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_25396/*"{}"*/, v13, v14);
    byte_4B173CB = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( !v15->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_19;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v19 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v18);
      v19 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v19->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_25396/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(SelfUserGame, v17);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v25 = (ServantCommentManager_ClearWarInfo_o *)sub_1BCAA2C(
                                                    ServantCommentManager_ClearWarInfo_TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24);
    ServantCommentManager_ClearWarInfo___ctor_41216768(v25, ClearWarIdList, v26);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v27);
    v28 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v28, 0LL) )
    {
      v30 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v29);
        v30 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v30->static_fields->SAVE_KEY, v28, 0LL);
      ServantCommentManager__checkUIChange(0, v31);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


bool __fastcall ServantCommentManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ServantCommentManager_c *v17; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v19; // x0
  ServantCommentManager_c *v21; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_IO_BinaryWriter_o *v27; // x19
  __int64 v28; // x1
  ServantCommentManager_c *v29; // x0
  struct ServantCommentManager_StaticFields *v30; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v33; // x1
  int32_t i; // w21
  ServantCommentManager_c *v35; // x0
  System_Collections_Generic_List_object__o *v36; // x0
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x22
  _DWORD *monitor; // x8
  int v41; // w23
  int32_t j; // w24
  System_Collections_Generic_List_int__o *v43; // x0
  unsigned int v44; // w0
  __int64 v45; // x1
  System_Collections_Generic_List_int__o *klass; // x0
  unsigned int v47; // w0
  System_IO_BinaryWriter_c *v48; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0

  if ( (byte_4B173D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v15, v16);
    byte_4B173D0 = 1;
  }
  v17 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
    v17 = ServantCommentManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v1);
    static_fields = ServantCommentManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v19 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( v19->static_fields->UseMock )
    return 0;
  v21 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v21);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v27 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v24, v25, v26);
  System_IO_BinaryWriter___ctor_62639712(v27, v23, 0LL);
  v29 = ServantCommentManager_TypeInfo;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v28);
    v29 = ServantCommentManager_TypeInfo;
  }
  v30 = v29->static_fields;
  openList = v30->openList;
  if ( !openList )
    sub_1BCAA3C(v29, v28);
  if ( !v27 )
    sub_1BCAA3C(v29, v28);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v27->klass->vtable._22_Write.method)(
    v27,
    v30->SAVE_DATA_VERSION,
    v27->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v27->klass->vtable._8_Write.method)(
    v27,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v27->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
    v27,
    (unsigned int)size,
    v27->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v35 = ServantCommentManager_TypeInfo;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v33);
        v35 = ServantCommentManager_TypeInfo;
      }
      v36 = (System_Collections_Generic_List_object__o *)v35->static_fields->openList;
      if ( !v36 )
        sub_1BCAA3C(0LL, v33);
      Item = System_Collections_Generic_List_object___get_Item(
               v36,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
      v39 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v38);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(Item, v38);
      v41 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
        v27,
        LODWORD(Item[1].klass),
        v27->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
        v27,
        (unsigned int)v41,
        v27->klass->vtable._18_Write.methodPtr);
      if ( v41 >= 1 )
      {
        for ( j = 0; j != v41; ++j )
        {
          v43 = (System_Collections_Generic_List_int__o *)v39[1].monitor;
          if ( !v43 )
            sub_1BCAA3C(0LL, v33);
          v44 = System_Collections_Generic_List_int___get_Item(
                  v43,
                  j,
                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
            v27,
            v44,
            v27->klass->vtable._18_Write.methodPtr);
          klass = (System_Collections_Generic_List_int__o *)v39[2].klass;
          if ( !klass )
            sub_1BCAA3C(0LL, v45);
          v47 = System_Collections_Generic_List_int___get_Item(
                  klass,
                  j,
                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
            v27,
            v47,
            v27->klass->vtable._18_Write.methodPtr);
        }
      }
    }
  }
  v48 = v27->klass;
  v49 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_35;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v51 = sub_1C1C7C0(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v51)(v27, *(_QWORD *)(v51 + 8));
  return 1;
}


void __fastcall ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Value; // w0
  __int64 v11; // x1
  int32_t v12; // w21
  ServantCommentManager_c *v13; // x0
  System_Int32_array *ClearWarIdList; // x0
  __int64 v15; // x1
  System_Int32_array *v16; // x23
  int32_t v17; // w22
  __int64 v18; // x0
  int max_length; // w8
  __int64 v20; // x9
  int32_t v21; // w20
  int32_t v22; // w11
  int32_t v23; // w21
  ServantCommentManager_c *v24; // x0

  if ( (byte_4B173D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Reverse_int___, method, v2);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3471/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3472/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v8, v9);
    byte_4B173D9 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3472/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v12 = Value;
    v13 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v11);
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v13);
    if ( !ClearWarIdList )
      sub_1BCAA3C(0LL, v15);
    v16 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v17 = ConstantMaster__getValue((System_String_o *)StringLiteral_3471/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse_int_(v16, (const MethodInfo_2ED4490 *)Method_System_Array_Reverse_int___),
          max_length = v16->max_length,
          max_length >= 1) )
    {
      v20 = 0LL;
      v21 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1BCAA44(v18, v15);
        v22 = v16->m_Items[v20 + 1];
        if ( v22 == v17 )
          v21 = 1;
        if ( v22 == v12 )
          break;
        if ( (int)++v20 >= max_length )
          goto LABEL_17;
      }
      v23 = 1;
    }
    else
    {
      v21 = 0;
LABEL_17:
      v23 = 0;
    }
    v24 = ServantCommentManager_TypeInfo;
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v15);
      v24 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v24->static_fields->UI_CHANGE_TYPE_KEY, v23, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v21, 0LL);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_String_o *__fastcall ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B173C3 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B173C3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B173DE & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B173DE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.warIdList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_41216768(
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
  if ( (byte_4B173DF & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, warIdList, method);
    byte_4B173DF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v5 = sub_1BCA888(int___TypeInfo, 0LL);
    v3 = (struct System_Int32_array *)v5;
  }
  if ( !this )
    sub_1BCAA3C(v5, v6);
  this->fields.warIdList = v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}