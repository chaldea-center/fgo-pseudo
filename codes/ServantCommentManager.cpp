void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ServantCommentManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantCommentManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ServantCommentManager_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ServantCommentManager_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ServantCommentManager_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  ServantCommentManager_c *v49; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  struct ServantCommentManager_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_4353012 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&StringLiteral_3996/*"ChapterProgress"*/);
    sub_B70694(&StringLiteral_6841/*"ForceReadNewProfiles"*/);
    sub_B70694(&StringLiteral_10321/*"OverwriteUIVersion"*/);
    sub_B70694(&StringLiteral_6705/*"Fgo_20150511_1"*/);
    sub_B70694(&StringLiteral_6709/*"Fgo_20160620_1"*/);
    sub_B70694(&StringLiteral_14858/*"UIChangeType"*/);
    byte_4353012 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6705/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6705/*"Fgo_20150511_1"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantCommentManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6709/*"Fgo_20160620_1"*/;
  v9->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6709/*"Fgo_20160620_1"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SAVE_DATA_VERSION, v10, v11, v12, v13, v14, v15, v16);
  v17 = ServantCommentManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_3996/*"ChapterProgress"*/;
  v17->SAVE_KEY = (struct System_String_o *)StringLiteral_3996/*"ChapterProgress"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->SAVE_KEY, v18, v19, v20, v21, v22, v23, v24);
  v25 = ServantCommentManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_14858/*"UIChangeType"*/;
  v25->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14858/*"UIChangeType"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->UI_CHANGE_TYPE_KEY, v26, v27, v28, v29, v30, v31, v32);
  v33 = ServantCommentManager_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_10321/*"OverwriteUIVersion"*/;
  v33->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10321/*"OverwriteUIVersion"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->OVERWIRTE_UI_VERSION_KEY, v34, v35, v36, v37, v38, v39, v40);
  v41 = ServantCommentManager_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_6841/*"ForceReadNewProfiles"*/;
  v41->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6841/*"ForceReadNewProfiles"*/;
  sub_B70630((BattleServantConfConponent_o *)&v41->FORCE_READ_NEW_COMMENTS_KEY, v42, v43, v44, v45, v46, v47, v48);
  v49 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v49->static_fields->isContinueDevice = 0;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v51 = ServantCommentManager_TypeInfo->static_fields;
  v51->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v50;
  sub_B70630((BattleServantConfConponent_o *)&v51->openList, (System_Int32_array **)v50, v52, v53, v54, v55, v56, v57);
}


void __fastcall ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *openList; // x8

  if ( (byte_4352FFD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FFD = 1;
  }
  v2 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v2 = ServantCommentManager_TypeInfo;
  }
  openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->openList;
  if ( !openList )
    goto LABEL_16;
  if ( openList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantCommentManager_TypeInfo->static_fields->openList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        openList,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
      v2 = ServantCommentManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantCommentManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  const MethodInfo *v2; // x0
  ServantCommentManager_c *v3; // x8
  const MethodInfo *v4; // x0
  _BOOL8 v5; // x0

  if ( (byte_4352FFB & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FFB = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v1);
  ServantCommentManager__ClearSaveDataList(v2);
  v3 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  v5 = ServantCommentManager__WriteData(v4);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v5);
}


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4352FF9 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FF9 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4352FFA & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FFA = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19
  __int64 v3; // x19
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_o *v6; // x20
  __int64 v7; // x19
  __int64 v8; // x19
  ServantCommentMaster_o *v9; // x19
  __int64 v10; // x8
  WarQuestSelectionEntity_array *v11; // x20
  unsigned __int64 i; // x24
  WarQuestSelectionEntity_o *v13; // x23
  WarQuestSelectionEntity_c *klass; // x21
  __int64 v15; // x22
  const MethodInfo *v16; // x4
  WarQuestSelectionEntity_c *v17; // x21
  __int64 v18; // x22
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x22
  System_Int32_array *v22; // x21
  int32_t v23; // w23
  ServantCommentManager_c *v24; // x0
  __int64 v25; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4353008 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4353008 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(v3);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v3 + 184);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    return;
  v6 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(v8);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v8 + 184);
  if ( !Entitys_WarQuestSelectionEntity
    || (v9 = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                             v6,
                                             (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_38:
    sub_B7076C(Entitys_WarQuestSelectionEntity, v1);
  }
  v10 = *(_QWORD *)&Entitys_WarQuestSelectionEntity->max_length;
  v11 = Entitys_WarQuestSelectionEntity;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
      {
        v25 = sub_B70798(Entitys_WarQuestSelectionEntity);
        sub_B70738(v25, 0LL);
      }
      v13 = v11->m_Items[i];
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.shortCutBannerId;
        klass = v13[1].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v15;
        *(_QWORD *)&v28.fields.fakeValue = klass;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                             v28,
                                                                             0LL);
        if ( !v9 )
          goto LABEL_38;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)ServantCommentMaster__GetNewList(
                                                                             v9,
                                                                             &idList,
                                                                             &priorityList,
                                                                             (int32_t)Entitys_WarQuestSelectionEntity,
                                                                             v16);
        if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
        {
          v18 = *(_QWORD *)&v13->fields.shortCutBannerId;
          v17 = v13[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v29.fields.currentCryptoKey = v18;
          *(_QWORD *)&v29.fields.fakeValue = v17;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v29, 0LL);
          v21 = idList;
          v22 = priorityList;
          v23 = v19;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          }
          ServantCommentManager__SetOpen_27482124(v23, v21, v22, v20);
        }
      }
      LODWORD(v10) = v11->max_length;
    }
  }
  v24 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__WriteData((const MethodInfo *)v24);
}


System_Int32_array *__fastcall ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  Il2CppObject *String; // x19
  TerminalPramsManager_ClearData_o *v3; // x0
  __int64 v4; // x1
  TerminalPramsManager_ClearData_o *v5; // x19

  if ( (byte_4352FFF & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&StringLiteral_24067/*"{}"*/);
    byte_4352FFF = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v1->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_24067/*"{}"*/,
                             0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         String,
         (const MethodInfo_1D504B8 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v5 = v3;
  if ( !v3 )
    sub_B7076C(0LL, v4);
  System_Array__Sort_int_(
    (System_Int32_array *)v3->fields.qClearHeroineInfo,
    (const MethodInfo_1BCD22C *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v5->fields.qClearHeroineInfo;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v14; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x21
  const MethodInfo *v16; // x3
  unsigned int datalist; // w8
  int v18; // w25
  unsigned __int64 v19; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x26
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int v23; // w8
  _BYTE v25[32]; // [xsp+8h] [xbp-98h] BYREF
  int v26; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4353009 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___69171720);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353009 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList_27485772(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                v10);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_42;
  }
  size = v7->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v14 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Instance = (DataManager_o *)v7->fields._items->m_Items[v14];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v11) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7,
          v14,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v7->fields._size;
    }
LABEL_42:
    sub_B7076C(Instance, v9);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___69171720);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v16);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v18 = 0;
      v19 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v19 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v15 )
          goto LABEL_42;
        v20 = v7->fields._items->m_Items[v19];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v25,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v27 = *(System_Collections_Generic_List_Enumerator_T__o *)v25;
        while ( 1 )
        {
          v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v27,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v21 )
            break;
          if ( !v20 )
            sub_B7076C(v21, v22);
          if ( !v27.fields.current )
            sub_B7076C(v21, v22);
          if ( v20->fields.missionConditionDetailId == HIDWORD(v27.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7,
              v19,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v25[4 * v18 + 24] = 192;
        v18 = ++v26;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v27,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v18 )
        {
          v23 = v18 - 1;
          if ( *(_DWORD *)&v25[4 * v18 + 20] == 192 )
          {
            --v18;
            v26 = v23;
          }
        }
        if ( (--v19 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
        datalist = v7->fields._size;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v14; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x21
  const MethodInfo *v16; // x3
  unsigned int datalist; // w8
  int v18; // w25
  unsigned __int64 v19; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x26
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int v23; // w8
  _BYTE v25[32]; // [xsp+8h] [xbp-98h] BYREF
  int v26; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_435300C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___69171720);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435300C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityListWithImageList(
                                (ServantCommentMaster_o *)Instance,
                                svtId,
                                imageLimit,
                                9,
                                1,
                                v10);
  if ( Instance )
  {
    if ( !v7 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_42;
  }
  size = v7->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v14 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Instance = (DataManager_o *)v7->fields._items->m_Items[v14];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v11) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7,
          v14,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v7->fields._size;
    }
LABEL_42:
    sub_B7076C(Instance, v9);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v7,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___69171720);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v16);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v18 = 0;
      v19 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v19 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v15 )
          goto LABEL_42;
        v20 = v7->fields._items->m_Items[v19];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v25,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v27 = *(System_Collections_Generic_List_Enumerator_T__o *)v25;
        while ( 1 )
        {
          v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v27,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v21 )
            break;
          if ( !v20 )
            sub_B7076C(v21, v22);
          if ( !v27.fields.current )
            sub_B7076C(v21, v22);
          if ( v20->fields.missionConditionDetailId == HIDWORD(v27.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7,
              v19,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v25[4 * v18 + 24] = 191;
        v18 = ++v26;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v27,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v18 )
        {
          v23 = v18 - 1;
          if ( *(_DWORD *)&v25[4 * v18 + 20] == 191 )
          {
            --v18;
            v26 = v23;
          }
        }
        if ( (--v19 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
        datalist = v7->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v7;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4353011 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353011 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0LL);
}


int32_t __fastcall ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4353010 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353010 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v1);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_435300F & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_435300F = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->UI_CHANGE_TYPE_KEY, 0, 0LL);
}


void __fastcall ServantCommentManager__Initialize(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4352FFC & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4352FFC = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0

  if ( (byte_4353007 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353007 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0LL) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  ServantCommentManager_c *v7; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  char v10; // w23
  unsigned int v11; // w25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v12; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v13; // x26
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v15; // x27
  __int64 v16; // x28
  unsigned __int64 v17; // x22
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  struct System_Collections_Generic_List_int__o *v19; // x21
  int32_t v21; // [xsp+Ch] [xbp-54h]

  if ( (byte_4353001 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353001 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  openList = v7->static_fields->openList;
  if ( !openList )
LABEL_41:
    sub_B7076C(v7, *(_QWORD *)&svtCommentId);
  size = openList->fields._size;
  if ( size < 1 )
  {
    v10 = 0;
    return v10 & 1;
  }
  v10 = 0;
  v11 = 0;
  v21 = svtId;
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantCommentManager_TypeInfo;
    }
    v12 = v7->static_fields->openList;
    if ( !v12 )
      goto LABEL_41;
    if ( v12->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v13 = v12->fields._items->m_Items[v11];
    if ( !v13 )
      goto LABEL_41;
    if ( v13->fields.svtId == svtId )
    {
      svtCommentIdList = v13->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        goto LABEL_41;
      v15 = svtCommentIdList->fields._size;
      if ( (int)v15 >= 1 )
        break;
    }
LABEL_36:
    if ( (int)++v11 >= size )
      return v10 & 1;
    v7 = ServantCommentManager_TypeInfo;
  }
  v16 = 8LL;
  while ( 1 )
  {
    v17 = v16 - 8;
    if ( v16 - 8 >= (unsigned __int64)(unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v16) != svtCommentId )
      goto LABEL_32;
    svtCommentPriorityList = v13->fields.svtCommentPriorityList;
    if ( !svtCommentPriorityList )
      goto LABEL_41;
    if ( v17 >= (unsigned int)svtCommentPriorityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v16) == svtCommentPriority )
      break;
    v19 = v13->fields.svtCommentPriorityList;
    if ( !v19 )
      goto LABEL_41;
    if ( v17 >= (unsigned int)v19->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 |= *((_DWORD *)&v19->fields._items->obj.klass + v16) >= svtCommentPriority;
LABEL_32:
    if ( v16 - 7 >= v15 )
    {
      svtId = v21;
      goto LABEL_36;
    }
    svtCommentIdList = v13->fields.svtCommentIdList;
    ++v16;
    if ( !svtCommentIdList )
      goto LABEL_41;
  }
  v10 = 1;
  return v10 & 1;
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_435300A & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_435300A = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__IsOpenByServantFriendShip_27487296(svt_id, oldFriendShipRank, -1, v3);
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v8; // x1

  if ( (byte_435300D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_435300D = 1;
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
    sub_B7076C(0LL, v8);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_27487296(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435300B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435300B = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B7076C(Instance, v8);
    Instance = UserServantCollectionMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 svt_id,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      maxLimitCount = entity->fields.maxLimitCount;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_20;
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
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  Instance = (int64_t)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                        svt_id,
                        oldFriendShipRank,
                        limitCount,
                        method);
  if ( !Instance )
    goto LABEL_20;
  return *(_DWORD *)(Instance + 24) > 0;
}


void __fastcall ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0
  ServantCommentManager_c *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4352FFE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352FFE = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v3);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
    v4 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    BYTE1(v4[2].klass->_1.this_arg.data) = 0;
    LOBYTE(v4[2].klass->_1.this_arg.data) = 1;
    ServantCommentManager__WriteData(v4);
    v1 = ServantCommentManager_TypeInfo;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v1);
  if ( ServantCommentManager__IsForceReadNewComments(v5) )
  {
    v6 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
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
  System_Collections_Generic_List_int__c **v16; // x27
  const MethodInfo_30B547C **v17; // x28
  int v18; // w25
  int v19; // w22
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x23
  System_Collections_Generic_List_int__o **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x24
  System_Collections_Generic_List_int__o **v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo_30B547C **v39; // x20
  System_Collections_Generic_List_int__c **v40; // x28
  __int64 v41; // x1
  int v42; // w24
  int i; // w27
  __int64 v44; // x1
  __int64 v45; // x1
  ServantCommentManager_c *v46; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  ServantCommentManager_c *v48; // x0
  char v49; // w20
  ServantCommentManager_c *v50; // x0
  int v51; // w28
  int j; // w24
  __int64 v53; // x1
  int v54; // w24
  ServantCommentManager_c *v55; // x0
  int v56; // w22
  __int64 v57; // x21
  __int64 v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_int__o *v60; // x23
  System_Collections_Generic_List_int__o **v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_int__o *v68; // x24
  System_Collections_Generic_List_int__o **v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int v76; // w24
  int k; // w20
  int32_t v78; // w26
  __int64 v79; // x1
  int32_t v80; // w25
  __int64 v81; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v84; // x10
  int32_t *p_offset; // x11
  __int64 v86; // x0
  ServantCommentManager_c *v87; // x0
  int v89; // [xsp+4h] [xbp-6Ch]
  int v90; // [xsp+4h] [xbp-6Ch]

  if ( (byte_4353004 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4353004 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B7076C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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
        v16 = &System_Collections_Generic_List_int__TypeInfo;
        v17 = (const MethodInfo_30B547C **)&Method_System_Collections_Generic_List_int___ctor__;
        v18 = 0;
        v89 = v15;
        do
        {
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v20 = sub_B70764(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
          ServantCommentManager_UserServantCommentOpenInfo___ctor(
            (ServantCommentManager_UserServantCommentOpenInfo_o *)v20,
            0LL);
          if ( !v20 )
            sub_B7076C(v21, v22);
          *(_DWORD *)(v20 + 16) = v19;
          v23 = (System_Collections_Generic_List_int__o *)sub_B70764(*v16);
          System_Collections_Generic_List_int____ctor(v23, *v17);
          *(_QWORD *)(v20 + 24) = v23;
          v24 = (System_Collections_Generic_List_int__o **)(v20 + 24);
          sub_B70630(
            (BattleServantConfConponent_o *)(v20 + 24),
            (System_Int32_array **)v23,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v31 = (System_Collections_Generic_List_int__o *)sub_B70764(*v16);
          System_Collections_Generic_List_int____ctor(v31, *v17);
          *(_QWORD *)(v20 + 32) = v31;
          v32 = (System_Collections_Generic_List_int__o **)(v20 + 32);
          sub_B70630(
            (BattleServantConfConponent_o *)(v20 + 32),
            (System_Int32_array **)v31,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          v39 = v17;
          v40 = v16;
          v42 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v42 >= 1 )
          {
            for ( i = 0; i < v42; ++i )
            {
              v44 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                      v8,
                      v8->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !*v24 )
                sub_B7076C(0LL, v44);
              System_Collections_Generic_List_int___Add(
                *v24,
                v44,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !*v32 )
                sub_B7076C(0LL, v45);
              System_Collections_Generic_List_int___Add(
                *v32,
                0,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v46 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v46 = ServantCommentManager_TypeInfo;
          }
          v16 = v40;
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46->static_fields->openList;
          if ( !openList )
            sub_B7076C(0LL, v41);
          v17 = v39;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          ++v18;
        }
        while ( v18 < v89 );
      }
      v3 = 1;
    }
    else
    {
      v48 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v48 = ServantCommentManager_TypeInfo;
      }
      if ( System_String__op_Equality(v48->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
      {
        v49 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
                v8,
                v8->klass->vtable._10_ReadByte.methodPtr);
        v50 = ServantCommentManager_TypeInfo;
        if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v50 = ServantCommentManager_TypeInfo;
        }
        v50->static_fields->isContinueDevice = v49 & 1;
        v51 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v51 >= 1 )
        {
          for ( j = 0; j < v51; j = v54 + 1 )
          {
            v56 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v57 = sub_B70764(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
            ServantCommentManager_UserServantCommentOpenInfo___ctor(
              (ServantCommentManager_UserServantCommentOpenInfo_o *)v57,
              0LL);
            if ( !v57 )
              sub_B7076C(v58, v59);
            *(_DWORD *)(v57 + 16) = v56;
            v60 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v60,
              (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v57 + 24) = v60;
            v61 = (System_Collections_Generic_List_int__o **)(v57 + 24);
            sub_B70630(
              (BattleServantConfConponent_o *)(v57 + 24),
              (System_Int32_array **)v60,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
            v90 = j;
            v68 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v68,
              (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v57 + 32) = v68;
            v69 = (System_Collections_Generic_List_int__o **)(v57 + 32);
            sub_B70630(
              (BattleServantConfConponent_o *)(v57 + 32),
              (System_Int32_array **)v68,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
            v76 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            if ( v76 >= 1 )
            {
              for ( k = 0; k < v76; ++k )
              {
                v78 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                        v8,
                        v8->klass->vtable._16_ReadUInt32.methodPtr);
                v80 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                        v8,
                        v8->klass->vtable._16_ReadUInt32.methodPtr);
                if ( !*v61 )
                  sub_B7076C(0LL, v79);
                System_Collections_Generic_List_int___Add(
                  *v61,
                  v78,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
                if ( !*v69 )
                  sub_B7076C(0LL, v81);
                System_Collections_Generic_List_int___Add(
                  *v69,
                  v80,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            v55 = ServantCommentManager_TypeInfo;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              v54 = v90;
              v55 = ServantCommentManager_TypeInfo;
            }
            else
            {
              v54 = v90;
            }
            v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55->static_fields->openList;
            if ( !v82 )
              sub_B7076C(0LL, v53);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v82,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          }
        }
        v3 = 1;
      }
      else
      {
        v3 = 0;
      }
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v84 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v84;
        p_offset += 4;
        if ( v84 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v86 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_67:
      v86 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v86)(v8, *(_QWORD *)(v86 + 8));
  }
  else
  {
    v87 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v87);
    return 0;
  }
  return v3;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  ServantCommentManager_c *v4; // x0

  if ( (byte_4353006 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353006 = 1;
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
  ServantCommentManager_c *v7; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  __int64 i; // x25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v11; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v12; // x22
  System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v14; // x24
  __int64 v15; // x25
  unsigned __int64 v16; // x26
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  __int64 v18; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_int__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ServantCommentManager_c *v33; // x0
  ServantCommentManager_c *v34; // x0

  if ( (byte_4353002 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4353002 = 1;
  }
  v7 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v7 = ServantCommentManager_TypeInfo;
  }
  openList = v7->static_fields->openList;
  if ( !openList )
    goto LABEL_46;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_31:
    v18 = sub_B70764(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    ServantCommentManager_UserServantCommentOpenInfo___ctor(
      (ServantCommentManager_UserServantCommentOpenInfo_o *)v18,
      0LL);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 16) = svtId;
      v19 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v18 + 24) = v19;
      sub_B70630((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
      v7 = *(ServantCommentManager_c **)(v18 + 24);
      if ( v7 )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v7,
          svtCommentId,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        v26 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v26,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v18 + 32) = v26;
        sub_B70630((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
        v7 = *(ServantCommentManager_c **)(v18 + 32);
        if ( v7 )
        {
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v7,
            svtCommentPriority,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          v33 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v33 = ServantCommentManager_TypeInfo;
          }
          v7 = (ServantCommentManager_c *)v33->static_fields->openList;
          if ( v7 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
            goto LABEL_39;
          }
        }
      }
    }
LABEL_46:
    sub_B7076C(v7, *(_QWORD *)&svtCommentId);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantCommentManager_TypeInfo;
    }
    v11 = v7->static_fields->openList;
    if ( !v11 )
      goto LABEL_46;
    if ( v11->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v12 = v11->fields._items->m_Items[i];
    if ( !v12 )
      goto LABEL_46;
    if ( v12->fields.svtId == svtId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_31;
    v7 = ServantCommentManager_TypeInfo;
  }
  svtCommentIdList = v12->fields.svtCommentIdList;
  if ( !svtCommentIdList )
    goto LABEL_46;
  v14 = svtCommentIdList->fields._size;
  v15 = 8LL;
  while ( 1 )
  {
    v16 = v15 - 8;
    if ( v15 - 8 >= v14 )
      break;
    if ( v16 >= (unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v15) == svtCommentId )
    {
      svtCommentPriorityList = v12->fields.svtCommentPriorityList;
      if ( !svtCommentPriorityList )
        goto LABEL_46;
      if ( v16 >= (unsigned int)svtCommentPriorityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v15) == svtCommentPriority )
        return;
    }
    svtCommentIdList = v12->fields.svtCommentIdList;
    ++v15;
    if ( !svtCommentIdList )
      goto LABEL_46;
  }
  System_Collections_Generic_List_int___Add(
    svtCommentIdList,
    svtCommentId,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  v7 = (ServantCommentManager_c *)v12->fields.svtCommentPriorityList;
  if ( !v7 )
    goto LABEL_46;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v7,
    svtCommentPriority,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  v34 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_39:
  v34 = ServantCommentManager_TypeInfo;
LABEL_40:
  v34->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_27482124(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  __int64 v7; // x26
  ServantCommentManager_c *v8; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w23
  __int64 i; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v12; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v13; // x22
  struct System_Collections_Generic_List_int__o *v14; // x8
  __int64 v15; // x24
  unsigned __int64 v16; // x23
  int32_t v17; // w21
  __int64 v18; // x27
  struct System_Collections_Generic_List_int__o *v19; // x25
  struct System_Collections_Generic_List_int__o *v20; // x25
  __int64 v21; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_int__o *v23; // x23
  ServantCommentManager_c **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x24
  ServantCommentManager_c **v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  unsigned __int64 v39; // x24
  ServantCommentManager_c *v40; // x0
  __int64 v41; // x0

  if ( (byte_4353003 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    byte_4353003 = 1;
  }
  if ( svtCommentIdList )
  {
    v7 = *(_QWORD *)&svtCommentIdList->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v8 = ServantCommentManager_TypeInfo;
      }
      openList = v8->static_fields->openList;
      if ( !openList )
        goto LABEL_62;
      size = openList->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0LL; ; ++i )
        {
          if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = ServantCommentManager_TypeInfo;
          }
          v12 = v8->static_fields->openList;
          if ( !v12 )
            goto LABEL_62;
          if ( v12->fields._size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v13 = v12->fields._items->m_Items[i];
          if ( !v13 )
            goto LABEL_62;
          if ( v13->fields.svtId == svtId )
            break;
          if ( (int)i + 1 >= size )
            goto LABEL_48;
          v8 = ServantCommentManager_TypeInfo;
        }
        v14 = v13->fields.svtCommentIdList;
        if ( v14 )
        {
          v15 = v14->fields._size;
          v16 = 0LL;
          while ( 1 )
          {
            if ( v16 >= svtCommentIdList->max_length )
              goto LABEL_63;
            v17 = svtCommentIdList->m_Items[v16 + 1];
            if ( (int)v15 >= 1 )
              break;
LABEL_37:
            if ( v17 >= 1 )
            {
              v8 = (ServantCommentManager_c *)v13->fields.svtCommentIdList;
              if ( !v8 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v8,
                v17,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !svtCommentPriorityList )
                goto LABEL_62;
              if ( v16 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              v8 = (ServantCommentManager_c *)v13->fields.svtCommentPriorityList;
              if ( !v8 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v8,
                svtCommentPriorityList->m_Items[v16 + 1],
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              v8 = ServantCommentManager_TypeInfo;
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v8 = ServantCommentManager_TypeInfo;
              }
              v8->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v16 >= (int)v7 )
              return;
          }
          v18 = 8LL;
          while ( 1 )
          {
            v19 = v13->fields.svtCommentIdList;
            if ( !v19 )
              break;
            if ( v18 - 8 >= (unsigned __int64)(unsigned int)v19->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            if ( *((_DWORD *)&v19->fields._items->obj.klass + v18) == v17 )
            {
              v20 = v13->fields.svtCommentPriorityList;
              if ( !v20 )
                break;
              if ( v18 - 8 >= (unsigned __int64)(unsigned int)v20->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              if ( !svtCommentPriorityList )
                break;
              if ( v16 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              if ( *((_DWORD *)&v20->fields._items->obj.klass + v18) == svtCommentPriorityList->m_Items[v16 + 1] )
                return;
            }
            v21 = v18 - 7;
            ++v18;
            if ( v21 >= v15 )
              goto LABEL_37;
          }
        }
LABEL_62:
        sub_B7076C(v8, svtCommentIdList);
      }
LABEL_48:
      v22 = sub_B70764(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      ServantCommentManager_UserServantCommentOpenInfo___ctor(
        (ServantCommentManager_UserServantCommentOpenInfo_o *)v22,
        0LL);
      if ( !v22 )
        goto LABEL_62;
      *(_DWORD *)(v22 + 16) = svtId;
      v23 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      v24 = (ServantCommentManager_c **)(v22 + 24);
      *(_QWORD *)(v22 + 24) = v23;
      sub_B70630((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
      v31 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      v32 = (ServantCommentManager_c **)(v22 + 32);
      *(_QWORD *)(v22 + 32) = v31;
      sub_B70630((BattleServantConfConponent_o *)(v22 + 32), (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
      v39 = 0LL;
      do
      {
        if ( v39 >= svtCommentIdList->max_length )
        {
LABEL_63:
          v41 = sub_B70798(v8);
          sub_B70738(v41, 0LL);
        }
        v8 = *v24;
        if ( !*v24 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v8,
          svtCommentIdList->m_Items[v39 + 1],
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !svtCommentPriorityList )
          goto LABEL_62;
        if ( v39 >= svtCommentPriorityList->max_length )
          goto LABEL_63;
        v8 = *v32;
        if ( !*v32 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v8,
          svtCommentPriorityList->m_Items[++v39],
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      while ( (__int64)v39 < (int)v7 );
      v40 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v40 = ServantCommentManager_TypeInfo;
      }
      v8 = (ServantCommentManager_c *)v40->static_fields->openList;
      if ( !v8 )
        goto LABEL_62;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
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
  System_String_o *v8; // x20
  ServantCommentManager_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4353000 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_ClearWarInfo_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_24067/*"{}"*/);
    byte_4353000 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_23;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v4 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v4 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v4->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_24067/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_23:
      sub_B7076C(SelfUserGame, v3);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v7 = (ServantCommentManager_ClearWarInfo_o *)sub_B70764(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_20143516(v7, ClearWarIdList, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v8, 0LL) )
    {
      v9 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v9 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v9->static_fields->SAVE_KEY, v8, 0LL);
      ServantCommentManager__checkUIChange(0, v10);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


bool __fastcall ServantCommentManager__WriteData(const MethodInfo *method)
{
  ServantCommentManager_c *v1; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  ServantCommentManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  ServantCommentManager_c *v12; // x0
  struct ServantCommentManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v16; // x1
  int i; // w23
  ServantCommentManager_c *v18; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v19; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v20; // x24
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x8
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x25
  struct System_Collections_Generic_List_int__o *v25; // x27
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x27
  __int64 v29; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0

  if ( (byte_4353005 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4353005 = 1;
  }
  v1 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v1 = ServantCommentManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &ServantCommentManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v10, v9, 0LL);
  v12 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v12 = ServantCommentManager_TypeInfo;
  }
  v13 = v12->static_fields;
  openList = v13->openList;
  if ( !openList )
    sub_B7076C(v12, v11);
  if ( !v10 )
    sub_B7076C(v12, v11);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v10->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)size,
    v10->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v18 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v18 = ServantCommentManager_TypeInfo;
      }
      v19 = v18->static_fields->openList;
      if ( !v19 )
        sub_B7076C(v18, v16);
      if ( v19->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = v19->fields._items->m_Items[i];
      if ( !v20 )
        sub_B7076C(v18, v16);
      svtCommentIdList = v20->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        sub_B7076C(v18, v16);
      v22 = svtCommentIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.svtId,
        v10->klass->vtable._18_Write.methodPtr);
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
              v10,
              (unsigned int)v22,
              v10->klass->vtable._18_Write.methodPtr);
      if ( (int)v22 >= 1 )
      {
        v24 = 8LL;
        do
        {
          v25 = v20->fields.svtCommentIdList;
          if ( !v25 )
            sub_B7076C(v23, v16);
          if ( v24 - 8 >= (unsigned __int64)(unsigned int)v25->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
                  v10,
                  *((unsigned int *)&v25->fields._items->obj.klass + v24),
                  v10->klass->vtable._18_Write.methodPtr);
          svtCommentPriorityList = v20->fields.svtCommentPriorityList;
          if ( !svtCommentPriorityList )
            sub_B7076C(v26, v27);
          if ( v24 - 8 >= (unsigned __int64)(unsigned int)svtCommentPriorityList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
                  v10,
                  *((unsigned int *)&svtCommentPriorityList->fields._items->obj.klass + v24),
                  v10->klass->vtable._18_Write.methodPtr);
          v29 = v24 - 7;
          ++v24;
        }
        while ( v29 < v22 );
      }
    }
  }
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_47:
    v33 = sub_B08590(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v33)(v10, *(_QWORD *)(v33 + 8));
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
  int max_length; // w8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w11
  int32_t v15; // w21
  ServantCommentManager_c *v16; // x0
  __int64 v17; // x0

  if ( (byte_435300E & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&StringLiteral_3030/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_B70694(&StringLiteral_3031/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_435300E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3031/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v4 = Value;
    v5 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v5);
    if ( !ClearWarIdList )
      sub_B7076C(0LL, v7);
    v8 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v9 = ConstantMaster__getValue((System_String_o *)StringLiteral_3030/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse((System_Array_o *)v8, 0LL),
          max_length = v8->max_length,
          max_length >= 1) )
    {
      v12 = 0LL;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
        {
          v17 = sub_B70798(v10);
          sub_B70738(v17, 0LL);
        }
        v14 = v8->m_Items[v12 + 1];
        if ( v14 == v9 )
          v13 = 1;
        if ( v14 == v4 )
          break;
        if ( (int)++v12 >= max_length )
          goto LABEL_18;
      }
      v15 = 1;
    }
    else
    {
      v13 = 0;
LABEL_18:
      v15 = 0;
    }
    v16 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v16 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v16->static_fields->UI_CHANGE_TYPE_KEY, v15, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v13, 0LL);
    if ( isSave )
      UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_String_o *__fastcall ServantCommentManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4352FF8 & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4352FF8 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_434F224 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F224 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warIdList = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  sub_B70630(&this->fields);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_20143516(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1

  if ( (byte_434F225 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F225 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warIdList )
  {
    v5 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
    warIdList = v5;
  }
  if ( !this )
    sub_B7076C(v5, v6);
  this->fields.warIdList = warIdList;
  sub_B70630(&this->fields);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}