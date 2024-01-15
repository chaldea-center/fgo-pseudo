void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct ServantCommentManager_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ServantCommentManager_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct ServantCommentManager_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ServantCommentManager_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ServantCommentManager_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ServantCommentManager_c *v58; // x8
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x19
  struct ServantCommentManager_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  if ( (byte_40FCEA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v8);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_3905/*"ChapterProgress"*/, v10);
    sub_B16FFC(&StringLiteral_6722/*"ForceReadNewProfiles"*/, v11);
    sub_B16FFC(&StringLiteral_10163/*"OverwriteUIVersion"*/, v12);
    sub_B16FFC(&StringLiteral_6589/*"Fgo_20150511_1"*/, v13);
    sub_B16FFC(&StringLiteral_6593/*"Fgo_20160620_1"*/, v14);
    sub_B16FFC(&StringLiteral_14613/*"UIChangeType"*/, v15);
    byte_40FCEA5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_6589/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6589/*"Fgo_20150511_1"*/;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = ServantCommentManager_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_6593/*"Fgo_20160620_1"*/;
  v18->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6593/*"Fgo_20160620_1"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v18->SAVE_DATA_VERSION, v19, v20, v21, v22, v23, v24, v25);
  v26 = ServantCommentManager_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_3905/*"ChapterProgress"*/;
  v26->SAVE_KEY = (struct System_String_o *)StringLiteral_3905/*"ChapterProgress"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v26->SAVE_KEY, v27, v28, v29, v30, v31, v32, v33);
  v34 = ServantCommentManager_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_14613/*"UIChangeType"*/;
  v34->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14613/*"UIChangeType"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v34->UI_CHANGE_TYPE_KEY, v35, v36, v37, v38, v39, v40, v41);
  v42 = ServantCommentManager_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_10163/*"OverwriteUIVersion"*/;
  v42->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10163/*"OverwriteUIVersion"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v42->OVERWIRTE_UI_VERSION_KEY, v43, v44, v45, v46, v47, v48, v49);
  v50 = ServantCommentManager_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_6722/*"ForceReadNewProfiles"*/;
  v50->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6722/*"ForceReadNewProfiles"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v50->FORCE_READ_NEW_COMMENTS_KEY, v51, v52, v53, v54, v55, v56, v57);
  v58 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v58->static_fields->isContinueDevice = 0;
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61,
                                                                                                  v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v64 = ServantCommentManager_TypeInfo->static_fields;
  v64->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v63;
  sub_B16F98((BattleServantConfConponent_o *)&v64->openList, (System_Int32_array **)v63, v65, v66, v67, v68, v69, v70);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *openList; // x8

  if ( (byte_40FCE90 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__, v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v2);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v3);
    byte_40FCE90 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->openList;
  if ( !openList )
    goto LABEL_16;
  if ( openList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantCommentManager_TypeInfo->static_fields->openList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        openList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
      v4 = ServantCommentManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantCommentManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  const MethodInfo *v3; // x0
  ServantCommentManager_c *v4; // x8
  const MethodInfo *v5; // x0
  _BOOL8 v6; // x0

  if ( (byte_40FCE8E & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCE8E = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v2);
  ServantCommentManager__ClearSaveDataList(v3);
  v4 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  v6 = ServantCommentManager__WriteData(v5);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v6);
}


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_40FCE8C & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCE8C = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0LL);
}


void __fastcall ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40FCE8D & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCE8D = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
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
  __int64 v7; // x19
  __int64 v8; // x19
  DataManager_o *v9; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x19
  DataManager_o *v14; // x0
  ServantCommentMaster_o *v15; // x19
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  WarQuestSelectionEntity_array *v20; // x20
  unsigned __int64 i; // x24
  WarQuestSelectionEntity_o *v22; // x23
  WarQuestSelectionEntity_c *klass; // x21
  __int64 v24; // x22
  int32_t v25; // w0
  const MethodInfo *v26; // x4
  WarQuestSelectionEntity_c *v27; // x21
  __int64 v28; // x22
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x22
  System_Int32_array *v32; // x21
  int32_t v33; // w23
  ServantCommentManager_c *v34; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_40FCE9B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v2);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_40FCE9B = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v9,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    return;
  v11 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(v13);
  v14 = **(DataManager_o ***)(v13 + 184);
  if ( !v14
    || (v15 = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v14,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                             v11,
                                             (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  v19 = *(_QWORD *)&Entitys_WarQuestSelectionEntity->max_length;
  v20 = Entitys_WarQuestSelectionEntity;
  if ( (int)v19 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v19; ++i )
    {
      if ( i >= (unsigned int)v19 )
      {
        sub_B17100(Entitys_WarQuestSelectionEntity, v17, v18);
        sub_B170A0();
      }
      v22 = v20->m_Items[i];
      if ( v22 )
      {
        v24 = *(_QWORD *)&v22->fields.shortCutBannerId;
        klass = v22[1].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v37.fields.currentCryptoKey = v24;
        *(_QWORD *)&v37.fields.fakeValue = klass;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37, 0LL);
        if ( !v15 )
          goto LABEL_38;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)ServantCommentMaster__GetNewList(
                                                                             v15,
                                                                             &idList,
                                                                             &priorityList,
                                                                             v25,
                                                                             v26);
        if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
        {
          v28 = *(_QWORD *)&v22->fields.shortCutBannerId;
          v27 = v22[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v38.fields.currentCryptoKey = v28;
          *(_QWORD *)&v38.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
          v31 = idList;
          v32 = priorityList;
          v33 = v29;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          }
          ServantCommentManager__SetOpen_30489560(v33, v31, v32, v30);
        }
      }
      LODWORD(v19) = v20->max_length;
    }
  }
  v34 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__WriteData((const MethodInfo *)v34);
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
  TerminalPramsManager_ClearData_o *v9; // x0
  TerminalPramsManager_ClearData_o *v10; // x19

  if ( (byte_40FCE92 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int___, v1);
    sub_B16FFC(&int___TypeInfo, v2);
    sub_B16FFC(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v3);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23589/*"{}"*/, v6);
    byte_40FCE92 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v7->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_23589/*"{}"*/,
                             0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         String,
         (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v10 = v9;
  if ( !v9 )
    sub_B170D4();
  System_Array__Sort_int_(
    (System_Int32_array *)v9->fields.qClearHeroineInfo,
    (const MethodInfo_2506964 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v10->fields.qClearHeroineInfo;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  WebViewManager_o *Instance; // x0
  ServantCommentMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v24; // x6
  System_Collections_Generic_IEnumerable_T__o *EntityList_30493208; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  __int64 v29; // x4
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v32; // w23
  ServantCommentEntity_o *v33; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v34; // x21
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShip; // x0
  unsigned int v37; // w8
  int v38; // w25
  unsigned __int64 v39; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x26
  int v41; // w8
  _BYTE v43[32]; // [xsp+8h] [xbp-98h] BYREF
  int v44; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FCE9C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___66743840, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FCE9C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&oldFriendShipRank,
                                                                                                  *(_QWORD *)&limitCount,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  EntityList_30493208 = (System_Collections_Generic_IEnumerable_T__o *)ServantCommentMaster__GetEntityList_30493208(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         svt_id,
                                                                         limitCount,
                                                                         9,
                                                                         1,
                                                                         1,
                                                                         v24);
  if ( EntityList_30493208 )
  {
    if ( !v21 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      EntityList_30493208,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v21 )
  {
    goto LABEL_42;
  }
  size = v21->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v32 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v33 = (ServantCommentEntity_o *)v21->fields._items->m_Items[v32];
      if ( !v33 )
        break;
      if ( !ServantCommentEntity__IsOpen(v33, oldFriendShipRank, 1, v28) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
          v32,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v21->fields._size;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v34 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                            v26,
                                                                            v27,
                                                                            v28,
                                                                            v29);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___66743840);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    OpenServantCommentEntityByServantFriendShip = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                                    svt_id,
                                                    -1,
                                                    limitCount,
                                                    v35);
    if ( !OpenServantCommentEntityByServantFriendShip )
      goto LABEL_42;
    v37 = OpenServantCommentEntityByServantFriendShip->fields._size;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OpenServantCommentEntityByServantFriendShip;
    if ( (int)(v37 - 1) >= 0 )
    {
      v38 = 0;
      v39 = (int)(v37 - 1);
      while ( 1 )
      {
        if ( v39 >= v37 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v34 )
          goto LABEL_42;
        v40 = v21->fields._items->m_Items[v39];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v43,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v45 = *(System_Collections_Generic_List_Enumerator_T__o *)v43;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__) )
        {
          if ( !v40 )
            sub_B170D4();
          if ( !v45.fields.current )
            sub_B170D4();
          if ( v40->fields.missionConditionDetailId == HIDWORD(v45.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
              v39,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v43[4 * v38 + 24] = 192;
        v38 = ++v44;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v38 )
        {
          v41 = v38 - 1;
          if ( *(_DWORD *)&v43[4 * v38 + 20] == 192 )
          {
            --v38;
            v44 = v41;
          }
        }
        if ( (--v39 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v21;
        v37 = v21->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
        int32_t svtId,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  WebViewManager_o *Instance; // x0
  ServantCommentMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v24; // x5
  System_Collections_Generic_IEnumerable_T__o *EntityListWithImageList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  __int64 v29; // x4
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v32; // w23
  ServantCommentEntity_o *v33; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v34; // x21
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  unsigned int v37; // w8
  int v38; // w25
  unsigned __int64 v39; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x26
  int v41; // w8
  _BYTE v43[32]; // [xsp+8h] [xbp-98h] BYREF
  int v44; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FCE9F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&imageLimit);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___66743840, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FCE9F = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&imageLimit,
                                                                                                  *(_QWORD *)&oldFriendShipRank,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  EntityListWithImageList = (System_Collections_Generic_IEnumerable_T__o *)ServantCommentMaster__GetEntityListWithImageList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             svtId,
                                                                             imageLimit,
                                                                             9,
                                                                             1,
                                                                             v24);
  if ( EntityListWithImageList )
  {
    if ( !v21 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      EntityListWithImageList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v21 )
  {
    goto LABEL_42;
  }
  size = v21->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v32 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v33 = (ServantCommentEntity_o *)v21->fields._items->m_Items[v32];
      if ( !v33 )
        break;
      if ( !ServantCommentEntity__IsOpen(v33, oldFriendShipRank, 1, v28) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
          v32,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v21->fields._size;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v34 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                            v26,
                                                                            v27,
                                                                            v28,
                                                                            v29);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___66743840);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                                 svtId,
                                                                 imageLimit,
                                                                 -1,
                                                                 v35);
    if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
      goto LABEL_42;
    v37 = OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OpenServantCommentEntityByServantFriendShipAndImageLimit;
    if ( (int)(v37 - 1) >= 0 )
    {
      v38 = 0;
      v39 = (int)(v37 - 1);
      while ( 1 )
      {
        if ( v39 >= v37 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v34 )
          goto LABEL_42;
        v40 = v21->fields._items->m_Items[v39];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v43,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v45 = *(System_Collections_Generic_List_Enumerator_T__o *)v43;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__) )
        {
          if ( !v40 )
            sub_B170D4();
          if ( !v45.fields.current )
            sub_B170D4();
          if ( v40->fields.missionConditionDetailId == HIDWORD(v45.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
              v39,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v43[4 * v38 + 24] = 191;
        v38 = ++v44;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v38 )
        {
          v41 = v38 - 1;
          if ( *(_DWORD *)&v43[4 * v38 + 20] == 191 )
          {
            --v38;
            v44 = v41;
          }
        }
        if ( (--v39 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v21;
        v37 = v21->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v21;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_40FCEA4 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCEA4 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40FCEA3 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCEA3 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v2);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_40FCEA2 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCEA2 = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40FCE8F & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCE8F = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_40FCE9A & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, v1);
    byte_40FCE9A = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantCommentManager_c *v11; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  char v14; // w23
  unsigned int v15; // w25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v16; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v17; // x26
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v19; // x27
  __int64 v20; // x28
  unsigned __int64 v21; // x22
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  struct System_Collections_Generic_List_int__o *v23; // x21
  int32_t v25; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FCE94 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      *(_QWORD *)&svtCommentId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v10);
    byte_40FCE94 = 1;
  }
  v11 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v11 = ServantCommentManager_TypeInfo;
  }
  openList = v11->static_fields->openList;
  if ( !openList )
LABEL_41:
    sub_B170D4();
  size = openList->fields._size;
  if ( size < 1 )
  {
    v14 = 0;
    return v14 & 1;
  }
  v14 = 0;
  v15 = 0;
  v25 = svtId;
  while ( 1 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantCommentManager_TypeInfo;
    }
    v16 = v11->static_fields->openList;
    if ( !v16 )
      goto LABEL_41;
    if ( v16->fields._size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = v16->fields._items->m_Items[v15];
    if ( !v17 )
      goto LABEL_41;
    if ( v17->fields.svtId == svtId )
    {
      svtCommentIdList = v17->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        goto LABEL_41;
      v19 = svtCommentIdList->fields._size;
      if ( (int)v19 >= 1 )
        break;
    }
LABEL_36:
    if ( (int)++v15 >= size )
      return v14 & 1;
    v11 = ServantCommentManager_TypeInfo;
  }
  v20 = 8LL;
  while ( 1 )
  {
    v21 = v20 - 8;
    if ( v20 - 8 >= (unsigned __int64)(unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v20) != svtCommentId )
      goto LABEL_32;
    svtCommentPriorityList = v17->fields.svtCommentPriorityList;
    if ( !svtCommentPriorityList )
      goto LABEL_41;
    if ( v21 >= (unsigned int)svtCommentPriorityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v20) == svtCommentPriority )
      break;
    v23 = v17->fields.svtCommentPriorityList;
    if ( !v23 )
      goto LABEL_41;
    if ( v21 >= (unsigned int)v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 |= *((_DWORD *)&v23->fields._items->obj.klass + v20) >= svtCommentPriority;
LABEL_32:
    if ( v20 - 7 >= v19 )
    {
      svtId = v25;
      goto LABEL_36;
    }
    svtCommentIdList = v17->fields.svtCommentIdList;
    ++v20;
    if ( !svtCommentIdList )
      goto LABEL_41;
  }
  v14 = 1;
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FCE9D & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    byte_40FCE9D = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__IsOpenByServantFriendShip_30494732(svt_id, oldFriendShipRank, -1, v3);
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

  if ( (byte_40FCEA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, *(_QWORD *)&imageLimit);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v7);
    byte_40FCEA0 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  OpenServantCommentEntityByServantFriendShipAndImageLimit = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                                               svt_id,
                                                               imageLimit,
                                                               oldFriendShipRank,
                                                               method);
  if ( !OpenServantCommentEntityByServantFriendShipAndImageLimit )
    sub_B170D4();
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_30494732(
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  int32_t maxLimitCount; // w21
  WebViewManager_o *v16; // x0
  ServantLimitImageMaster_o *v17; // x0
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShip; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCE9E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCE9E = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B170D4();
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svt_id, 0LL) )
    {
      if ( !entity )
        goto LABEL_20;
      maxLimitCount = entity->fields.maxLimitCount;
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v16 )
        goto LABEL_20;
      v17 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v16,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !v17 )
        goto LABEL_20;
      limitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v17, svt_id, maxLimitCount, 0LL);
    }
    else
    {
      limitCount = -1;
    }
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  OpenServantCommentEntityByServantFriendShip = ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                                  svt_id,
                                                  oldFriendShipRank,
                                                  limitCount,
                                                  method);
  if ( !OpenServantCommentEntityByServantFriendShip )
    goto LABEL_20;
  return OpenServantCommentEntityByServantFriendShip->fields._size > 0;
}


void __fastcall ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x0
  const MethodInfo *v8; // x0
  ServantCommentManager_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FCE91 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCE91 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    UserServantCollectionMaster__continueDeviceServantComment(MasterData_WarQuestSelectionMaster, 0LL);
    v7 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v7 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    BYTE1(v7[2].klass->_1.this_arg.data) = 0;
    LOBYTE(v7[2].klass->_1.this_arg.data) = 1;
    ServantCommentManager__WriteData(v7);
    v4 = ServantCommentManager_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v4);
  if ( ServantCommentManager__IsForceReadNewComments(v8) )
  {
    v9 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_IO_BinaryReader_o *v21; // x19
  System_String_o *v22; // x20
  ServantCommentManager_c *v23; // x0
  char v24; // w20
  ServantCommentManager_c *v25; // x0
  int v26; // w20
  System_Collections_Generic_List_int__c **v27; // x27
  const MethodInfo_2F0F794 **v28; // x28
  int v29; // w25
  int v30; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_int__o *v40; // x23
  System_Collections_Generic_List_int__o **v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_int__o *v52; // x24
  System_Collections_Generic_List_int__o **v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo_2F0F794 **v60; // x20
  System_Collections_Generic_List_int__c **v61; // x28
  int v62; // w24
  int i; // w27
  int32_t v64; // w1
  ServantCommentManager_c *v65; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  ServantCommentManager_c *v67; // x0
  char v68; // w20
  ServantCommentManager_c *v69; // x0
  int v70; // w28
  int j; // w24
  int v72; // w24
  ServantCommentManager_c *v73; // x0
  int v74; // w22
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Collections_Generic_List_int__o *v84; // x23
  System_Collections_Generic_List_int__o **v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Collections_Generic_List_int__o *v96; // x24
  System_Collections_Generic_List_int__o **v97; // x23
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  int v104; // w24
  int k; // w20
  int32_t v106; // w26
  int32_t v107; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v110; // x10
  int32_t *p_offset; // x11
  __int64 v112; // x0
  ServantCommentManager_c *v113; // x0
  int v115; // [xsp+4h] [xbp-6Ch]
  int v116; // [xsp+4h] [xbp-6Ch]

  if ( (byte_40FCE97 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v8);
    sub_B16FFC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v9);
    byte_40FCE97 = 1;
  }
  v10 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  v10->static_fields->isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 1;
  v13 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v13);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v15 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v15);
    v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v21 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v17, v18, v19, v20);
    System_IO_BinaryReader___ctor(v21, v16, 0LL);
    if ( !v21 )
      sub_B170D4();
    v22 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._22_ReadString.method)(
                               v21,
                               v21->klass->vtable._23_ReadChars.methodPtr);
    v23 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v23 = ServantCommentManager_TypeInfo;
    }
    if ( System_String__op_Equality(v23->static_fields->SAVE_DATA_OLD_VERSION, v22, 0LL) )
    {
      v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._9_ReadBoolean.method)(
              v21,
              v21->klass->vtable._10_ReadByte.methodPtr);
      v25 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v25 = ServantCommentManager_TypeInfo;
      }
      v25->static_fields->isContinueDevice = v24 & 1;
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
              v21,
              v21->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v26 >= 1 )
      {
        v27 = &System_Collections_Generic_List_int__TypeInfo;
        v28 = (const MethodInfo_2F0F794 **)&Method_System_Collections_Generic_List_int___ctor__;
        v29 = 0;
        v115 = v26;
        do
        {
          v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                  v21,
                  v21->klass->vtable._16_ReadUInt32.methodPtr);
          v35 = sub_B170CC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v31, v32, v33, v34);
          ServantCommentManager_UserServantCommentOpenInfo___ctor(
            (ServantCommentManager_UserServantCommentOpenInfo_o *)v35,
            0LL);
          if ( !v35 )
            sub_B170D4();
          *(_DWORD *)(v35 + 16) = v30;
          v40 = (System_Collections_Generic_List_int__o *)sub_B170CC(*v27, v36, v37, v38, v39);
          System_Collections_Generic_List_int____ctor(v40, *v28);
          *(_QWORD *)(v35 + 24) = v40;
          v41 = (System_Collections_Generic_List_int__o **)(v35 + 24);
          sub_B16F98(
            (BattleServantConfConponent_o *)(v35 + 24),
            (System_Int32_array **)v40,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v52 = (System_Collections_Generic_List_int__o *)sub_B170CC(*v27, v48, v49, v50, v51);
          System_Collections_Generic_List_int____ctor(v52, *v28);
          *(_QWORD *)(v35 + 32) = v52;
          v53 = (System_Collections_Generic_List_int__o **)(v35 + 32);
          sub_B16F98(
            (BattleServantConfConponent_o *)(v35 + 32),
            (System_Int32_array **)v52,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          v60 = v28;
          v61 = v27;
          v62 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                  v21,
                  v21->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v62 >= 1 )
          {
            for ( i = 0; i < v62; ++i )
            {
              v64 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                      v21,
                      v21->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !*v41 )
                sub_B170D4();
              System_Collections_Generic_List_int___Add(
                *v41,
                v64,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !*v53 )
                sub_B170D4();
              System_Collections_Generic_List_int___Add(
                *v53,
                0,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v65 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v65 = ServantCommentManager_TypeInfo;
          }
          v27 = v61;
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65->static_fields->openList;
          if ( !openList )
            sub_B170D4();
          v28 = v60;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          ++v29;
        }
        while ( v29 < v115 );
      }
      v12 = 1;
    }
    else
    {
      v67 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v67 = ServantCommentManager_TypeInfo;
      }
      if ( System_String__op_Equality(v67->static_fields->SAVE_DATA_VERSION, v22, 0LL) )
      {
        v68 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._9_ReadBoolean.method)(
                v21,
                v21->klass->vtable._10_ReadByte.methodPtr);
        v69 = ServantCommentManager_TypeInfo;
        if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v69 = ServantCommentManager_TypeInfo;
        }
        v69->static_fields->isContinueDevice = v68 & 1;
        v70 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                v21,
                v21->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v70 >= 1 )
        {
          for ( j = 0; j < v70; j = v72 + 1 )
          {
            v74 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                    v21,
                    v21->klass->vtable._16_ReadUInt32.methodPtr);
            v79 = sub_B170CC(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v75, v76, v77, v78);
            ServantCommentManager_UserServantCommentOpenInfo___ctor(
              (ServantCommentManager_UserServantCommentOpenInfo_o *)v79,
              0LL);
            if ( !v79 )
              sub_B170D4();
            *(_DWORD *)(v79 + 16) = v74;
            v84 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v80,
                                                              v81,
                                                              v82,
                                                              v83);
            System_Collections_Generic_List_int____ctor(
              v84,
              (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v79 + 24) = v84;
            v85 = (System_Collections_Generic_List_int__o **)(v79 + 24);
            sub_B16F98(
              (BattleServantConfConponent_o *)(v79 + 24),
              (System_Int32_array **)v84,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            v116 = j;
            v96 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v92,
                                                              v93,
                                                              v94,
                                                              v95);
            System_Collections_Generic_List_int____ctor(
              v96,
              (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v79 + 32) = v96;
            v97 = (System_Collections_Generic_List_int__o **)(v79 + 32);
            sub_B16F98(
              (BattleServantConfConponent_o *)(v79 + 32),
              (System_Int32_array **)v96,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            v104 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                     v21,
                     v21->klass->vtable._16_ReadUInt32.methodPtr);
            if ( v104 >= 1 )
            {
              for ( k = 0; k < v104; ++k )
              {
                v106 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                         v21,
                         v21->klass->vtable._16_ReadUInt32.methodPtr);
                v107 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._15_ReadInt32.method)(
                         v21,
                         v21->klass->vtable._16_ReadUInt32.methodPtr);
                if ( !*v85 )
                  sub_B170D4();
                System_Collections_Generic_List_int___Add(
                  *v85,
                  v106,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                if ( !*v97 )
                  sub_B170D4();
                System_Collections_Generic_List_int___Add(
                  *v97,
                  v107,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            v73 = ServantCommentManager_TypeInfo;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              v72 = v116;
              v73 = ServantCommentManager_TypeInfo;
            }
            else
            {
              v72 = v116;
            }
            v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v73->static_fields->openList;
            if ( !v108 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v108,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          }
        }
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
    }
    klass = v21->klass;
    if ( *(_WORD *)&v21->klass->_2.bitflags1 )
    {
      v110 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v110;
        p_offset += 4;
        if ( v110 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v112 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_67:
      v112 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v112)(v21, *(_QWORD *)(v112 + 8));
  }
  else
  {
    v113 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v113);
    return 0;
  }
  return v12;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  ServantCommentManager_c *v4; // x0

  if ( (byte_40FCE99 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, method);
    byte_40FCE99 = 1;
  }
  v3 = flag;
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->FORCE_READ_NEW_COMMENTS_KEY, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentManager__SetOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantCommentManager_c *v17; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  __int64 i; // x25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v21; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v22; // x22
  System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v24; // x24
  __int64 v25; // x25
  unsigned __int64 v26; // x26
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  __int64 v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_int__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_int__o *v52; // x0
  ServantCommentManager_c *v53; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x0
  ServantCommentManager_c *v55; // x0
  System_Collections_Generic_List_int__o *v56; // x0

  if ( (byte_40FCE95 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      *(_QWORD *)&svtCommentId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v15);
    sub_B16FFC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v16);
    byte_40FCE95 = 1;
  }
  v17 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v17 = ServantCommentManager_TypeInfo;
  }
  openList = v17->static_fields->openList;
  if ( !openList )
    goto LABEL_46;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_31:
    v28 = sub_B170CC(
            ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
            *(_QWORD *)&svtCommentId,
            *(_QWORD *)&svtCommentPriority,
            method,
            v4);
    ServantCommentManager_UserServantCommentOpenInfo___ctor(
      (ServantCommentManager_UserServantCommentOpenInfo_o *)v28,
      0LL);
    if ( v28 )
    {
      *(_DWORD *)(v28 + 16) = svtId;
      v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v29,
                                                        v30,
                                                        v31,
                                                        v32);
      System_Collections_Generic_List_int____ctor(
        v33,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v28 + 24) = v33;
      sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
      v40 = *(System_Collections_Generic_List_int__o **)(v28 + 24);
      if ( v40 )
      {
        System_Collections_Generic_List_int___Add(
          v40,
          svtCommentId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v45 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v41,
                                                          v42,
                                                          v43,
                                                          v44);
        System_Collections_Generic_List_int____ctor(
          v45,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v28 + 32) = v45;
        sub_B16F98((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
        v52 = *(System_Collections_Generic_List_int__o **)(v28 + 32);
        if ( v52 )
        {
          System_Collections_Generic_List_int___Add(
            v52,
            svtCommentPriority,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v53 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v53 = ServantCommentManager_TypeInfo;
          }
          v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53->static_fields->openList;
          if ( v54 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v54,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
            goto LABEL_39;
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ServantCommentManager_TypeInfo;
    }
    v21 = v17->static_fields->openList;
    if ( !v21 )
      goto LABEL_46;
    if ( v21->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v22 = v21->fields._items->m_Items[i];
    if ( !v22 )
      goto LABEL_46;
    if ( v22->fields.svtId == svtId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_31;
    v17 = ServantCommentManager_TypeInfo;
  }
  svtCommentIdList = v22->fields.svtCommentIdList;
  if ( !svtCommentIdList )
    goto LABEL_46;
  v24 = svtCommentIdList->fields._size;
  v25 = 8LL;
  while ( 1 )
  {
    v26 = v25 - 8;
    if ( v25 - 8 >= v24 )
      break;
    if ( v26 >= (unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v25) == svtCommentId )
    {
      svtCommentPriorityList = v22->fields.svtCommentPriorityList;
      if ( !svtCommentPriorityList )
        goto LABEL_46;
      if ( v26 >= (unsigned int)svtCommentPriorityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v25) == svtCommentPriority )
        return;
    }
    svtCommentIdList = v22->fields.svtCommentIdList;
    ++v25;
    if ( !svtCommentIdList )
      goto LABEL_46;
  }
  System_Collections_Generic_List_int___Add(
    svtCommentIdList,
    svtCommentId,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v56 = v22->fields.svtCommentPriorityList;
  if ( !v56 )
    goto LABEL_46;
  System_Collections_Generic_List_int___Add(
    v56,
    svtCommentPriority,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v55 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_39:
  v55 = ServantCommentManager_TypeInfo;
LABEL_40:
  v55->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_30489560(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x26
  ServantCommentManager_c *v18; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w23
  __int64 i; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v22; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v23; // x22
  struct System_Collections_Generic_List_int__o *v24; // x8
  __int64 v25; // x24
  unsigned __int64 v26; // x23
  int32_t v27; // w21
  __int64 v28; // x27
  struct System_Collections_Generic_List_int__o *v29; // x25
  struct System_Collections_Generic_List_int__o *v30; // x25
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  System_Collections_Generic_List_int__o *v33; // x0
  __int64 v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_int__o *v39; // x23
  System_Collections_Generic_List_int__o **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_int__o *v51; // x24
  System_Collections_Generic_List_int__o **v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  unsigned __int64 v59; // x24
  ServantCommentManager_c *v60; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x0

  if ( (byte_40FCE96 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      svtCommentIdList);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v15);
    sub_B16FFC(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v16);
    byte_40FCE96 = 1;
  }
  if ( svtCommentIdList )
  {
    v17 = *(_QWORD *)&svtCommentIdList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v18 = ServantCommentManager_TypeInfo;
      }
      openList = v18->static_fields->openList;
      if ( !openList )
        goto LABEL_62;
      size = openList->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0LL; ; ++i )
        {
          if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = ServantCommentManager_TypeInfo;
          }
          v22 = v18->static_fields->openList;
          if ( !v22 )
            goto LABEL_62;
          if ( v22->fields._size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v23 = v22->fields._items->m_Items[i];
          if ( !v23 )
            goto LABEL_62;
          if ( v23->fields.svtId == svtId )
            break;
          if ( (int)i + 1 >= size )
            goto LABEL_48;
          v18 = ServantCommentManager_TypeInfo;
        }
        v24 = v23->fields.svtCommentIdList;
        if ( v24 )
        {
          v25 = v24->fields._size;
          v26 = 0LL;
          while ( 1 )
          {
            if ( v26 >= svtCommentIdList->max_length )
              goto LABEL_63;
            v27 = svtCommentIdList->m_Items[v26 + 1];
            if ( (int)v25 >= 1 )
              break;
LABEL_37:
            if ( v27 >= 1 )
            {
              v32 = v23->fields.svtCommentIdList;
              if ( !v32 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                v32,
                v27,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !svtCommentPriorityList )
                goto LABEL_62;
              if ( v26 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              v33 = v23->fields.svtCommentPriorityList;
              if ( !v33 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                v33,
                svtCommentPriorityList->m_Items[v26 + 1],
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              v18 = ServantCommentManager_TypeInfo;
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v18 = ServantCommentManager_TypeInfo;
              }
              v18->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v26 >= (int)v17 )
              return;
          }
          v28 = 8LL;
          while ( 1 )
          {
            v29 = v23->fields.svtCommentIdList;
            if ( !v29 )
              break;
            if ( v28 - 8 >= (unsigned __int64)(unsigned int)v29->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( *((_DWORD *)&v29->fields._items->obj.klass + v28) == v27 )
            {
              v30 = v23->fields.svtCommentPriorityList;
              if ( !v30 )
                break;
              if ( v28 - 8 >= (unsigned __int64)(unsigned int)v30->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( !svtCommentPriorityList )
                break;
              if ( v26 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              if ( *((_DWORD *)&v30->fields._items->obj.klass + v28) == svtCommentPriorityList->m_Items[v26 + 1] )
                return;
            }
            v31 = v28 - 7;
            ++v28;
            if ( v31 >= v25 )
              goto LABEL_37;
          }
        }
LABEL_62:
        sub_B170D4();
      }
LABEL_48:
      v34 = sub_B170CC(
              ServantCommentManager_UserServantCommentOpenInfo_TypeInfo,
              svtCommentIdList,
              svtCommentPriorityList,
              method,
              v4);
      ServantCommentManager_UserServantCommentOpenInfo___ctor(
        (ServantCommentManager_UserServantCommentOpenInfo_o *)v34,
        0LL);
      if ( !v34 )
        goto LABEL_62;
      *(_DWORD *)(v34 + 16) = svtId;
      v39 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v35,
                                                        v36,
                                                        v37,
                                                        v38);
      System_Collections_Generic_List_int____ctor(
        v39,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v40 = (System_Collections_Generic_List_int__o **)(v34 + 24);
      *(_QWORD *)(v34 + 24) = v39;
      sub_B16F98((BattleServantConfConponent_o *)(v34 + 24), (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
      v51 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v47,
                                                        v48,
                                                        v49,
                                                        v50);
      System_Collections_Generic_List_int____ctor(
        v51,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v52 = (System_Collections_Generic_List_int__o **)(v34 + 32);
      *(_QWORD *)(v34 + 32) = v51;
      sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v51, v53, v54, v55, v56, v57, v58);
      v59 = 0LL;
      do
      {
        if ( v59 >= svtCommentIdList->max_length )
        {
LABEL_63:
          sub_B17100(v18, svtCommentIdList, svtCommentPriorityList);
          sub_B170A0();
        }
        if ( !*v40 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          *v40,
          svtCommentIdList->m_Items[v59 + 1],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !svtCommentPriorityList )
          goto LABEL_62;
        if ( v59 >= svtCommentPriorityList->max_length )
          goto LABEL_63;
        if ( !*v52 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          *v52,
          svtCommentPriorityList->m_Items[++v59],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      while ( (__int64)v59 < (int)v17 );
      v60 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v60 = ServantCommentManager_TypeInfo;
      }
      v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v60->static_fields->openList;
      if ( !v61 )
        goto LABEL_62;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v61,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
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
  WebViewManager_o *Instance; // x0
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *ClearWarIdList; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantCommentManager_ClearWarInfo_o *v19; // x20
  System_String_o *v20; // x20
  ServantCommentManager_c *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_40FCE93 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_ClearWarInfo_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_23589/*"{}"*/, v7);
    byte_40FCE93 = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_23;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v10 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v10 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v10->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_23589/*"{}"*/,
               0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_23:
      sub_B170D4();
    }
    ClearWarIdList = WarMaster__getClearWarIdList(MasterData_WarQuestSelectionMaster, 0LL);
    v19 = (ServantCommentManager_ClearWarInfo_o *)sub_B170CC(
                                                    ServantCommentManager_ClearWarInfo_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
    ServantCommentManager_ClearWarInfo___ctor_20112604(v19, ClearWarIdList, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__toJson((Il2CppObject *)v19, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v20, 0LL) )
    {
      v21 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v21 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v21->static_fields->SAVE_KEY, v20, 0LL);
      ServantCommentManager__checkUIChange(0, v22);
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
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v13; // x0
  ServantCommentManager_c *v15; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_IO_BinaryWriter_o *v22; // x19
  ServantCommentManager_c *v23; // x0
  struct ServantCommentManager_StaticFields *v24; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  int i; // w23
  ServantCommentManager_c *v28; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v29; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v30; // x24
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x8
  __int64 v32; // x21
  __int64 v33; // x25
  struct System_Collections_Generic_List_int__o *v34; // x27
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x27
  __int64 v36; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0

  if ( (byte_40FCE98 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v8);
    byte_40FCE98 = 1;
  }
  v9 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v9 = ServantCommentManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    p_isModfiy = &ServantCommentManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v13 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 0;
  v15 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v15);
  v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v18, v19, v20, v21);
  System_IO_BinaryWriter___ctor_39195976(v22, v17, 0LL);
  v23 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v23 = ServantCommentManager_TypeInfo;
  }
  v24 = v23->static_fields;
  openList = v24->openList;
  if ( !openList )
    sub_B170D4();
  if ( !v22 )
    sub_B170D4();
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v22->klass->vtable._22_Write.method)(
    v22,
    v24->SAVE_DATA_VERSION,
    v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v22->klass->vtable._8_Write.method)(
    v22,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v22->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
    v22,
    (unsigned int)size,
    v22->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v28 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v28 = ServantCommentManager_TypeInfo;
      }
      v29 = v28->static_fields->openList;
      if ( !v29 )
        sub_B170D4();
      if ( v29->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = v29->fields._items->m_Items[i];
      if ( !v30 )
        sub_B170D4();
      svtCommentIdList = v30->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        sub_B170D4();
      v32 = svtCommentIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        (unsigned int)v30->fields.svtId,
        v22->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        (unsigned int)v32,
        v22->klass->vtable._18_Write.methodPtr);
      if ( (int)v32 >= 1 )
      {
        v33 = 8LL;
        do
        {
          v34 = v30->fields.svtCommentIdList;
          if ( !v34 )
            sub_B170D4();
          if ( v33 - 8 >= (unsigned __int64)(unsigned int)v34->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
            v22,
            *((unsigned int *)&v34->fields._items->obj.klass + v33),
            v22->klass->vtable._18_Write.methodPtr);
          svtCommentPriorityList = v30->fields.svtCommentPriorityList;
          if ( !svtCommentPriorityList )
            sub_B170D4();
          if ( v33 - 8 >= (unsigned __int64)(unsigned int)svtCommentPriorityList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
            v22,
            *((unsigned int *)&svtCommentPriorityList->fields._items->obj.klass + v33),
            v22->klass->vtable._18_Write.methodPtr);
          v36 = v33 - 7;
          ++v33;
        }
        while ( v36 < v32 );
      }
    }
  }
  klass = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_47:
    v40 = sub_AAFEF8(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v22, *(_QWORD *)(v40 + 8));
  return 1;
}


void __fastcall ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w0
  int32_t v6; // w21
  ServantCommentManager_c *v7; // x0
  System_Int32_array *ClearWarIdList; // x0
  System_Int32_array *v9; // x23
  int32_t v10; // w22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  __int64 v15; // x9
  int32_t v16; // w20
  int32_t v17; // w11
  int32_t v18; // w21
  ServantCommentManager_c *v19; // x0

  if ( (byte_40FCEA1 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2953/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v3);
    sub_B16FFC(&StringLiteral_2954/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v4);
    byte_40FCEA1 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_2954/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v6 = Value;
    v7 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v7);
    if ( !ClearWarIdList )
      sub_B170D4();
    v9 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v10 = ConstantMaster__getValue((System_String_o *)StringLiteral_2953/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse((System_Array_o *)v9, 0LL),
          max_length = v9->max_length,
          max_length >= 1) )
    {
      v15 = 0LL;
      v16 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v17 = v9->m_Items[v15 + 1];
        if ( v17 == v10 )
          v16 = 1;
        if ( v17 == v6 )
          break;
        if ( (int)++v15 >= max_length )
          goto LABEL_18;
      }
      v18 = 1;
    }
    else
    {
      v16 = 0;
LABEL_18:
      v18 = 0;
    }
    v19 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40FCE8B & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FCE8B = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct System_Int32_array *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F7619 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F7619 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v3);
  this->fields.warIdList = v4;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_20112604(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v3 = warIdList;
  if ( (byte_40F761A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, warIdList);
    byte_40F761A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
    v3 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v5);
  if ( !this )
    sub_B170D4();
  this->fields.warIdList = v3;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}