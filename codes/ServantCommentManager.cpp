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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x19
  struct ServantCommentManager_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_4189F0C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v8);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_3920/*"ChapterProgress"*/, v10);
    sub_B2C35C(&StringLiteral_6746/*"ForceReadNewProfiles"*/, v11);
    sub_B2C35C(&StringLiteral_10196/*"OverwriteUIVersion"*/, v12);
    sub_B2C35C(&StringLiteral_6613/*"Fgo_20150511_1"*/, v13);
    sub_B2C35C(&StringLiteral_6617/*"Fgo_20160620_1"*/, v14);
    sub_B2C35C(&StringLiteral_14673/*"UIChangeType"*/, v15);
    byte_4189F0C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_6613/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6613/*"Fgo_20150511_1"*/;
  sub_B2C2F8(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = ServantCommentManager_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_6617/*"Fgo_20160620_1"*/;
  v18->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6617/*"Fgo_20160620_1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18->SAVE_DATA_VERSION, v19, v20, v21, v22, v23, v24, v25);
  v26 = ServantCommentManager_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_3920/*"ChapterProgress"*/;
  v26->SAVE_KEY = (struct System_String_o *)StringLiteral_3920/*"ChapterProgress"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->SAVE_KEY, v27, v28, v29, v30, v31, v32, v33);
  v34 = ServantCommentManager_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_14673/*"UIChangeType"*/;
  v34->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14673/*"UIChangeType"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->UI_CHANGE_TYPE_KEY, v35, v36, v37, v38, v39, v40, v41);
  v42 = ServantCommentManager_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_10196/*"OverwriteUIVersion"*/;
  v42->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10196/*"OverwriteUIVersion"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->OVERWIRTE_UI_VERSION_KEY, v43, v44, v45, v46, v47, v48, v49);
  v50 = ServantCommentManager_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_6746/*"ForceReadNewProfiles"*/;
  v50->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6746/*"ForceReadNewProfiles"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->FORCE_READ_NEW_COMMENTS_KEY, v51, v52, v53, v54, v55, v56, v57);
  v58 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v58->static_fields->isContinueDevice = 0;
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v60 = ServantCommentManager_TypeInfo->static_fields;
  v60->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v59;
  sub_B2C2F8((BattleServantConfConponent_o *)&v60->openList, (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
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

  if ( (byte_4189EF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__, v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v2);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v3);
    byte_4189EF7 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
      v4 = ServantCommentManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4189EF5 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189EF5 = 1;
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

  if ( (byte_4189EF3 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189EF3 = 1;
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

  if ( (byte_4189EF4 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189EF4 = 1;
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
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x19
  ServantCommentMaster_o *v14; // x19
  __int64 v15; // x8
  WarQuestSelectionEntity_array *v16; // x20
  unsigned __int64 i; // x24
  WarQuestSelectionEntity_o *v18; // x23
  WarQuestSelectionEntity_c *klass; // x21
  __int64 v20; // x22
  const MethodInfo *v21; // x4
  WarQuestSelectionEntity_c *v22; // x21
  __int64 v23; // x22
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x22
  System_Int32_array *v27; // x21
  int32_t v28; // w23
  ServantCommentManager_c *v29; // x0
  __int64 v30; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4189F02 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v2);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4189F02 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(v8);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v8 + 184);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    return;
  v11 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(v13);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v13 + 184);
  if ( !Entitys_WarQuestSelectionEntity
    || (v14 = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                             v11,
                                             (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_38:
    sub_B2C434(Entitys_WarQuestSelectionEntity, v1);
  }
  v15 = *(_QWORD *)&Entitys_WarQuestSelectionEntity->max_length;
  v16 = Entitys_WarQuestSelectionEntity;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
      {
        v30 = sub_B2C460(Entitys_WarQuestSelectionEntity);
        sub_B2C400(v30, 0LL);
      }
      v18 = v16->m_Items[i];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.shortCutBannerId;
        klass = v18[1].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v20;
        *(_QWORD *)&v33.fields.fakeValue = klass;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                             v33,
                                                                             0LL);
        if ( !v14 )
          goto LABEL_38;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)ServantCommentMaster__GetNewList(
                                                                             v14,
                                                                             &idList,
                                                                             &priorityList,
                                                                             (int32_t)Entitys_WarQuestSelectionEntity,
                                                                             v21);
        if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
        {
          v23 = *(_QWORD *)&v18->fields.shortCutBannerId;
          v22 = v18[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v34.fields.currentCryptoKey = v23;
          *(_QWORD *)&v34.fields.fakeValue = v22;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
          v26 = idList;
          v27 = priorityList;
          v28 = v24;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          }
          ServantCommentManager__SetOpen_29246260(v28, v26, v27, v25);
        }
      }
      LODWORD(v15) = v16->max_length;
    }
  }
  v29 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
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
  TerminalPramsManager_ClearData_o *v9; // x0
  __int64 v10; // x1
  TerminalPramsManager_ClearData_o *v11; // x19

  if ( (byte_4189EF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int___, v1);
    sub_B2C35C(&int___TypeInfo, v2);
    sub_B2C35C(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v3);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23683/*"{}"*/, v6);
    byte_4189EF9 = 1;
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
                             (System_String_o *)StringLiteral_23683/*"{}"*/,
                             0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         String,
         (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v11 = v9;
  if ( !v9 )
    sub_B2C434(0LL, v10);
  System_Array__Sort_int_(
    (System_Int32_array *)v9->fields.qClearHeroineInfo,
    (const MethodInfo_23CB7EC *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v11->fields.qClearHeroineInfo;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v27; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v28; // x21
  const MethodInfo *v29; // x3
  unsigned int datalist; // w8
  int v31; // w25
  unsigned __int64 v32; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x26
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  _BYTE v38[32]; // [xsp+8h] [xbp-98h] BYREF
  int v39; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4189F03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___67318072, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4189F03 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList_29249908(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                v23);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_42;
  }
  size = v20->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v27 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = (DataManager_o *)v20->fields._items->m_Items[v27];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v24) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
          v27,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v20->fields._size;
    }
LABEL_42:
    sub_B2C434(Instance, v22);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v28 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___67318072);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v29);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v31 = 0;
      v32 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v32 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v28 )
          goto LABEL_42;
        v33 = v20->fields._items->m_Items[v32];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v38,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v28,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v40 = *(System_Collections_Generic_List_Enumerator_T__o *)v38;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v34 )
            break;
          if ( !v33 )
            sub_B2C434(v34, v35);
          if ( !v40.fields.current )
            sub_B2C434(v34, v35);
          if ( v33->fields.missionConditionDetailId == HIDWORD(v40.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
              v32,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v38[4 * v31 + 24] = 192;
        v31 = ++v39;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v40,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v31 )
        {
          v36 = v31 - 1;
          if ( *(_DWORD *)&v38[4 * v31 + 20] == 192 )
          {
            --v31;
            v39 = v36;
          }
        }
        if ( (--v32 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
        datalist = v20->fields._size;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v27; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v28; // x21
  const MethodInfo *v29; // x3
  unsigned int datalist; // w8
  int v31; // w25
  unsigned __int64 v32; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x26
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  _BYTE v38[32]; // [xsp+8h] [xbp-98h] BYREF
  int v39; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4189F06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, *(_QWORD *)&imageLimit);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___67318072, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4189F06 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityListWithImageList(
                                (ServantCommentMaster_o *)Instance,
                                svtId,
                                imageLimit,
                                9,
                                1,
                                v23);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v20 )
  {
    goto LABEL_42;
  }
  size = v20->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v27 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = (DataManager_o *)v20->fields._items->m_Items[v27];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v24) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
          v27,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v20->fields._size;
    }
LABEL_42:
    sub_B2C434(Instance, v22);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v28 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)v20,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___67318072);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v29);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v31 = 0;
      v32 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v32 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v28 )
          goto LABEL_42;
        v33 = v20->fields._items->m_Items[v32];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v38,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v28,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v40 = *(System_Collections_Generic_List_Enumerator_T__o *)v38;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v34 )
            break;
          if ( !v33 )
            sub_B2C434(v34, v35);
          if ( !v40.fields.current )
            sub_B2C434(v34, v35);
          if ( v33->fields.missionConditionDetailId == HIDWORD(v40.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
              v32,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v38[4 * v31 + 24] = 191;
        v31 = ++v39;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v40,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v31 )
        {
          v36 = v31 - 1;
          if ( *(_DWORD *)&v38[4 * v31 + 20] == 191 )
          {
            --v31;
            v39 = v36;
          }
        }
        if ( (--v32 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
        datalist = v20->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v20;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCommentManager_c *v2; // x0

  if ( (byte_4189F0B & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189F0B = 1;
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

  if ( (byte_4189F0A & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189F0A = 1;
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

  if ( (byte_4189F09 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189F09 = 1;
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

  if ( (byte_4189EF6 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189EF6 = 1;
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

  if ( (byte_4189F01 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_4189F01 = 1;
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

  if ( (byte_4189EFB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      *(_QWORD *)&svtCommentId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v10);
    byte_4189EFB = 1;
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
    sub_B2C434(v11, *(_QWORD *)&svtCommentId);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v20) != svtCommentId )
      goto LABEL_32;
    svtCommentPriorityList = v17->fields.svtCommentPriorityList;
    if ( !svtCommentPriorityList )
      goto LABEL_41;
    if ( v21 >= (unsigned int)svtCommentPriorityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v20) == svtCommentPriority )
      break;
    v23 = v17->fields.svtCommentPriorityList;
    if ( !v23 )
      goto LABEL_41;
    if ( v21 >= (unsigned int)v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4189F04 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    byte_4189F04 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__IsOpenByServantFriendShip_29251432(svt_id, oldFriendShipRank, -1, v3);
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

  if ( (byte_4189F07 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, *(_QWORD *)&imageLimit);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v7);
    byte_4189F07 = 1;
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
    sub_B2C434(0LL, v9);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_29251432(
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189F05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&oldFriendShipRank);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4189F05 = 1;
  }
  entity = 0LL;
  if ( limitCount == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B2C434(Instance, v13);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantCommentManager_c *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x0
  const MethodInfo *v8; // x0
  ServantCommentManager_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4189EF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4189EF8 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
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
  System_IO_BinaryReader_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  ServantCommentManager_c *v21; // x0
  char v22; // w20
  ServantCommentManager_c *v23; // x0
  __int64 v24; // x3
  int v25; // w20
  System_Collections_Generic_List_int__c **v26; // x27
  const MethodInfo_2F6629C **v27; // x28
  int v28; // w25
  int v29; // w22
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_int__o *v33; // x23
  System_Collections_Generic_List_int__o **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_int__o *v41; // x24
  System_Collections_Generic_List_int__o **v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo_2F6629C **v49; // x20
  System_Collections_Generic_List_int__c **v50; // x28
  __int64 v51; // x1
  int v52; // w24
  int i; // w27
  __int64 v54; // x1
  __int64 v55; // x1
  ServantCommentManager_c *v56; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  ServantCommentManager_c *v58; // x0
  char v59; // w20
  ServantCommentManager_c *v60; // x0
  int v61; // w28
  int j; // w24
  __int64 v63; // x1
  int v64; // w24
  ServantCommentManager_c *v65; // x0
  int v66; // w22
  __int64 v67; // x21
  __int64 v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_List_int__o *v70; // x23
  System_Collections_Generic_List_int__o **v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_List_int__o *v78; // x24
  System_Collections_Generic_List_int__o **v79; // x23
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v86; // w24
  int k; // w20
  int32_t v88; // w26
  __int64 v89; // x1
  int32_t v90; // w25
  __int64 v91; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v94; // x10
  int32_t *p_offset; // x11
  __int64 v96; // x0
  ServantCommentManager_c *v97; // x0
  int v99; // [xsp+4h] [xbp-6Ch]
  int v100; // [xsp+4h] [xbp-6Ch]

  if ( (byte_4189EFE & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&ManagerConfig_TypeInfo, v7);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v8);
    sub_B2C35C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v9);
    byte_4189EFE = 1;
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
    v17 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v17, v16, 0LL);
    if ( !v17 )
      sub_B2C434(v18, v19);
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                               v17,
                               v17->klass->vtable._23_ReadChars.methodPtr);
    v21 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
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
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v23 = ServantCommentManager_TypeInfo;
      }
      v23->static_fields->isContinueDevice = v22 & 1;
      v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
              v17,
              v17->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v25 >= 1 )
      {
        v26 = &System_Collections_Generic_List_int__TypeInfo;
        v27 = (const MethodInfo_2F6629C **)&Method_System_Collections_Generic_List_int___ctor__;
        v28 = 0;
        v99 = v25;
        do
        {
          v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                  v17,
                  v17->klass->vtable._16_ReadUInt32.methodPtr);
          v30 = sub_B2C42C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
          ServantCommentManager_UserServantCommentOpenInfo___ctor(
            (ServantCommentManager_UserServantCommentOpenInfo_o *)v30,
            0LL);
          if ( !v30 )
            sub_B2C434(v31, v32);
          *(_DWORD *)(v30 + 16) = v29;
          v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(*v26);
          System_Collections_Generic_List_int____ctor(v33, *v27);
          *(_QWORD *)(v30 + 24) = v33;
          v34 = (System_Collections_Generic_List_int__o **)(v30 + 24);
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v30 + 24),
            (System_Int32_array **)v33,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = (System_Collections_Generic_List_int__o *)sub_B2C42C(*v26);
          System_Collections_Generic_List_int____ctor(v41, *v27);
          *(_QWORD *)(v30 + 32) = v41;
          v42 = (System_Collections_Generic_List_int__o **)(v30 + 32);
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v30 + 32),
            (System_Int32_array **)v41,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          v49 = v27;
          v50 = v26;
          v52 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                  v17,
                  v17->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v52 >= 1 )
          {
            for ( i = 0; i < v52; ++i )
            {
              v54 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                      v17,
                      v17->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !*v34 )
                sub_B2C434(0LL, v54);
              System_Collections_Generic_List_int___Add(
                *v34,
                v54,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !*v42 )
                sub_B2C434(0LL, v55);
              System_Collections_Generic_List_int___Add(
                *v42,
                0,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v56 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v56 = ServantCommentManager_TypeInfo;
          }
          v26 = v50;
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56->static_fields->openList;
          if ( !openList )
            sub_B2C434(0LL, v51);
          v27 = v49;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          ++v28;
        }
        while ( v28 < v99 );
      }
      v12 = 1;
    }
    else
    {
      v58 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v58 = ServantCommentManager_TypeInfo;
      }
      if ( System_String__op_Equality(v58->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
      {
        v59 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._9_ReadBoolean.method)(
                v17,
                v17->klass->vtable._10_ReadByte.methodPtr);
        v60 = ServantCommentManager_TypeInfo;
        if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v60 = ServantCommentManager_TypeInfo;
        }
        v60->static_fields->isContinueDevice = v59 & 1;
        v61 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                v17,
                v17->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v61 >= 1 )
        {
          for ( j = 0; j < v61; j = v64 + 1 )
          {
            v66 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            v67 = sub_B2C42C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
            ServantCommentManager_UserServantCommentOpenInfo___ctor(
              (ServantCommentManager_UserServantCommentOpenInfo_o *)v67,
              0LL);
            if ( !v67 )
              sub_B2C434(v68, v69);
            *(_DWORD *)(v67 + 16) = v66;
            v70 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v70,
              (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v67 + 24) = v70;
            v71 = (System_Collections_Generic_List_int__o **)(v67 + 24);
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v67 + 24),
              (System_Int32_array **)v70,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
            v100 = j;
            v78 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v78,
              (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
            *(_QWORD *)(v67 + 32) = v78;
            v79 = (System_Collections_Generic_List_int__o **)(v67 + 32);
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v67 + 32),
              (System_Int32_array **)v78,
              v80,
              v81,
              v82,
              v83,
              v84,
              v85);
            v86 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                    v17,
                    v17->klass->vtable._16_ReadUInt32.methodPtr);
            if ( v86 >= 1 )
            {
              for ( k = 0; k < v86; ++k )
              {
                v88 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                        v17,
                        v17->klass->vtable._16_ReadUInt32.methodPtr);
                v90 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                        v17,
                        v17->klass->vtable._16_ReadUInt32.methodPtr);
                if ( !*v71 )
                  sub_B2C434(0LL, v89);
                System_Collections_Generic_List_int___Add(
                  *v71,
                  v88,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                if ( !*v79 )
                  sub_B2C434(0LL, v91);
                System_Collections_Generic_List_int___Add(
                  *v79,
                  v90,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            v65 = ServantCommentManager_TypeInfo;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              v64 = v100;
              v65 = ServantCommentManager_TypeInfo;
            }
            else
            {
              v64 = v100;
            }
            v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65->static_fields->openList;
            if ( !v92 )
              sub_B2C434(0LL, v63);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v92,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          }
        }
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
    }
    klass = v17->klass;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v94 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v94;
        p_offset += 4;
        if ( v94 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v96 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_67:
      v96 = sub_AC5258(v17, System_IDisposable_TypeInfo, 0LL, v24);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v96)(v17, *(_QWORD *)(v96 + 8));
  }
  else
  {
    v97 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v97);
    return 0;
  }
  return v12;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  ServantCommentManager_c *v4; // x0

  if ( (byte_4189F00 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    byte_4189F00 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ServantCommentManager_c *v16; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  __int64 i; // x25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v20; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v21; // x22
  System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v23; // x24
  __int64 v24; // x25
  unsigned __int64 v25; // x26
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  __int64 v27; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  ServantCommentManager_c *v42; // x0
  ServantCommentManager_c *v43; // x0

  if ( (byte_4189EFC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      *(_QWORD *)&svtCommentId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v14);
    sub_B2C35C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4189EFC = 1;
  }
  v16 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v16 = ServantCommentManager_TypeInfo;
  }
  openList = v16->static_fields->openList;
  if ( !openList )
    goto LABEL_46;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_31:
    v27 = sub_B2C42C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    ServantCommentManager_UserServantCommentOpenInfo___ctor(
      (ServantCommentManager_UserServantCommentOpenInfo_o *)v27,
      0LL);
    if ( v27 )
    {
      *(_DWORD *)(v27 + 16) = svtId;
      v28 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v28,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      *(_QWORD *)(v27 + 24) = v28;
      sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
      v16 = *(ServantCommentManager_c **)(v27 + 24);
      if ( v16 )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v16,
          svtCommentId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v35 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v35,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        *(_QWORD *)(v27 + 32) = v35;
        sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v16 = *(ServantCommentManager_c **)(v27 + 32);
        if ( v16 )
        {
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v16,
            svtCommentPriority,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v42 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v42 = ServantCommentManager_TypeInfo;
          }
          v16 = (ServantCommentManager_c *)v42->static_fields->openList;
          if ( v16 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
            goto LABEL_39;
          }
        }
      }
    }
LABEL_46:
    sub_B2C434(v16, *(_QWORD *)&svtCommentId);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantCommentManager_TypeInfo;
    }
    v20 = v16->static_fields->openList;
    if ( !v20 )
      goto LABEL_46;
    if ( v20->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v21 = v20->fields._items->m_Items[i];
    if ( !v21 )
      goto LABEL_46;
    if ( v21->fields.svtId == svtId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_31;
    v16 = ServantCommentManager_TypeInfo;
  }
  svtCommentIdList = v21->fields.svtCommentIdList;
  if ( !svtCommentIdList )
    goto LABEL_46;
  v23 = svtCommentIdList->fields._size;
  v24 = 8LL;
  while ( 1 )
  {
    v25 = v24 - 8;
    if ( v24 - 8 >= v23 )
      break;
    if ( v25 >= (unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v24) == svtCommentId )
    {
      svtCommentPriorityList = v21->fields.svtCommentPriorityList;
      if ( !svtCommentPriorityList )
        goto LABEL_46;
      if ( v25 >= (unsigned int)svtCommentPriorityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v24) == svtCommentPriority )
        return;
    }
    svtCommentIdList = v21->fields.svtCommentIdList;
    ++v24;
    if ( !svtCommentIdList )
      goto LABEL_46;
  }
  System_Collections_Generic_List_int___Add(
    svtCommentIdList,
    svtCommentId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  v16 = (ServantCommentManager_c *)v21->fields.svtCommentPriorityList;
  if ( !v16 )
    goto LABEL_46;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v16,
    svtCommentPriority,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  v43 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_39:
  v43 = ServantCommentManager_TypeInfo;
LABEL_40:
  v43->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_29246260(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
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
  __int64 v16; // x26
  ServantCommentManager_c *v17; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w23
  __int64 i; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v21; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v22; // x22
  struct System_Collections_Generic_List_int__o *v23; // x8
  __int64 v24; // x24
  unsigned __int64 v25; // x23
  int32_t v26; // w21
  __int64 v27; // x27
  struct System_Collections_Generic_List_int__o *v28; // x25
  struct System_Collections_Generic_List_int__o *v29; // x25
  __int64 v30; // x8
  __int64 v31; // x22
  System_Collections_Generic_List_int__o *v32; // x23
  ServantCommentManager_c **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x24
  ServantCommentManager_c **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  unsigned __int64 v48; // x24
  ServantCommentManager_c *v49; // x0
  __int64 v50; // x0

  if ( (byte_4189EFD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      svtCommentIdList);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v14);
    sub_B2C35C(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v15);
    byte_4189EFD = 1;
  }
  if ( svtCommentIdList )
  {
    v16 = *(_QWORD *)&svtCommentIdList->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v17 = ServantCommentManager_TypeInfo;
      }
      openList = v17->static_fields->openList;
      if ( !openList )
        goto LABEL_62;
      size = openList->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0LL; ; ++i )
        {
          if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = ServantCommentManager_TypeInfo;
          }
          v21 = v17->static_fields->openList;
          if ( !v21 )
            goto LABEL_62;
          if ( v21->fields._size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v22 = v21->fields._items->m_Items[i];
          if ( !v22 )
            goto LABEL_62;
          if ( v22->fields.svtId == svtId )
            break;
          if ( (int)i + 1 >= size )
            goto LABEL_48;
          v17 = ServantCommentManager_TypeInfo;
        }
        v23 = v22->fields.svtCommentIdList;
        if ( v23 )
        {
          v24 = v23->fields._size;
          v25 = 0LL;
          while ( 1 )
          {
            if ( v25 >= svtCommentIdList->max_length )
              goto LABEL_63;
            v26 = svtCommentIdList->m_Items[v25 + 1];
            if ( (int)v24 >= 1 )
              break;
LABEL_37:
            if ( v26 >= 1 )
            {
              v17 = (ServantCommentManager_c *)v22->fields.svtCommentIdList;
              if ( !v17 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v17,
                v26,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !svtCommentPriorityList )
                goto LABEL_62;
              if ( v25 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              v17 = (ServantCommentManager_c *)v22->fields.svtCommentPriorityList;
              if ( !v17 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v17,
                svtCommentPriorityList->m_Items[v25 + 1],
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              v17 = ServantCommentManager_TypeInfo;
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v17 = ServantCommentManager_TypeInfo;
              }
              v17->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v25 >= (int)v16 )
              return;
          }
          v27 = 8LL;
          while ( 1 )
          {
            v28 = v22->fields.svtCommentIdList;
            if ( !v28 )
              break;
            if ( v27 - 8 >= (unsigned __int64)(unsigned int)v28->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( *((_DWORD *)&v28->fields._items->obj.klass + v27) == v26 )
            {
              v29 = v22->fields.svtCommentPriorityList;
              if ( !v29 )
                break;
              if ( v27 - 8 >= (unsigned __int64)(unsigned int)v29->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( !svtCommentPriorityList )
                break;
              if ( v25 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              if ( *((_DWORD *)&v29->fields._items->obj.klass + v27) == svtCommentPriorityList->m_Items[v25 + 1] )
                return;
            }
            v30 = v27 - 7;
            ++v27;
            if ( v30 >= v24 )
              goto LABEL_37;
          }
        }
LABEL_62:
        sub_B2C434(v17, svtCommentIdList);
      }
LABEL_48:
      v31 = sub_B2C42C(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      ServantCommentManager_UserServantCommentOpenInfo___ctor(
        (ServantCommentManager_UserServantCommentOpenInfo_o *)v31,
        0LL);
      if ( !v31 )
        goto LABEL_62;
      *(_DWORD *)(v31 + 16) = svtId;
      v32 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v32,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v33 = (ServantCommentManager_c **)(v31 + 24);
      *(_QWORD *)(v31 + 24) = v32;
      sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
      v40 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v40,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v41 = (ServantCommentManager_c **)(v31 + 32);
      *(_QWORD *)(v31 + 32) = v40;
      sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v40, v42, v43, v44, v45, v46, v47);
      v48 = 0LL;
      do
      {
        if ( v48 >= svtCommentIdList->max_length )
        {
LABEL_63:
          v50 = sub_B2C460(v17);
          sub_B2C400(v50, 0LL);
        }
        v17 = *v33;
        if ( !*v33 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v17,
          svtCommentIdList->m_Items[v48 + 1],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !svtCommentPriorityList )
          goto LABEL_62;
        if ( v48 >= svtCommentPriorityList->max_length )
          goto LABEL_63;
        v17 = *v41;
        if ( !*v41 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v17,
          svtCommentPriorityList->m_Items[++v48],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      while ( (__int64)v48 < (int)v16 );
      v49 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v49 = ServantCommentManager_TypeInfo;
      }
      v17 = (ServantCommentManager_c *)v49->static_fields->openList;
      if ( !v17 )
        goto LABEL_62;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
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
  System_String_o *v15; // x20
  ServantCommentManager_c *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4189EFA & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_ClearWarInfo_TypeInfo, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_23683/*"{}"*/, v7);
    byte_4189EFA = 1;
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
    v11 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v11 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v11->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_23683/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_23:
      sub_B2C434(SelfUserGame, v10);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v14 = (ServantCommentManager_ClearWarInfo_o *)sub_B2C42C(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_20449716(v14, ClearWarIdList, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)v14, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v15, 0LL) )
    {
      v16 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v16 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v16->static_fields->SAVE_KEY, v15, 0LL);
      ServantCommentManager__checkUIChange(0, v17);
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
  System_IO_BinaryWriter_o *v18; // x19
  __int64 v19; // x1
  ServantCommentManager_c *v20; // x0
  struct ServantCommentManager_StaticFields *v21; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v24; // x1
  __int64 v25; // x3
  int i; // w23
  ServantCommentManager_c *v27; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v28; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v29; // x24
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x8
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x25
  struct System_Collections_Generic_List_int__o *v34; // x27
  __int64 v35; // x0
  __int64 v36; // x1
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x27
  __int64 v38; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0

  if ( (byte_4189EFF & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_B2C35C(&ManagerConfig_TypeInfo, v7);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v8);
    byte_4189EFF = 1;
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
  v18 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v18, v17, 0LL);
  v20 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v20 = ServantCommentManager_TypeInfo;
  }
  v21 = v20->static_fields;
  openList = v21->openList;
  if ( !openList )
    sub_B2C434(v20, v19);
  if ( !v18 )
    sub_B2C434(v20, v19);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v21->SAVE_DATA_VERSION,
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
    for ( i = 0; i < size; ++i )
    {
      v27 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v27 = ServantCommentManager_TypeInfo;
      }
      v28 = v27->static_fields->openList;
      if ( !v28 )
        sub_B2C434(v27, v24);
      if ( v28->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v29 = v28->fields._items->m_Items[i];
      if ( !v29 )
        sub_B2C434(v27, v24);
      svtCommentIdList = v29->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        sub_B2C434(v27, v24);
      v31 = svtCommentIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v29->fields.svtId,
        v18->klass->vtable._18_Write.methodPtr);
      v32 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
              v18,
              (unsigned int)v31,
              v18->klass->vtable._18_Write.methodPtr);
      if ( (int)v31 >= 1 )
      {
        v33 = 8LL;
        do
        {
          v34 = v29->fields.svtCommentIdList;
          if ( !v34 )
            sub_B2C434(v32, v24);
          if ( v33 - 8 >= (unsigned __int64)(unsigned int)v34->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v35 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
                  v18,
                  *((unsigned int *)&v34->fields._items->obj.klass + v33),
                  v18->klass->vtable._18_Write.methodPtr);
          svtCommentPriorityList = v29->fields.svtCommentPriorityList;
          if ( !svtCommentPriorityList )
            sub_B2C434(v35, v36);
          if ( v33 - 8 >= (unsigned __int64)(unsigned int)svtCommentPriorityList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
                  v18,
                  *((unsigned int *)&svtCommentPriorityList->fields._items->obj.klass + v33),
                  v18->klass->vtable._18_Write.methodPtr);
          v38 = v33 - 7;
          ++v33;
        }
        while ( v38 < v31 );
      }
    }
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_47:
    v42 = sub_AC5258(v18, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v42)(v18, *(_QWORD *)(v42 + 8));
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
  __int64 v9; // x1
  System_Int32_array *v10; // x23
  int32_t v11; // w22
  __int64 v12; // x0
  int max_length; // w8
  __int64 v14; // x9
  int32_t v15; // w20
  int32_t v16; // w11
  int32_t v17; // w21
  ServantCommentManager_c *v18; // x0
  __int64 v19; // x0

  if ( (byte_4189F08 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2962/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v3);
    sub_B2C35C(&StringLiteral_2963/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v4);
    byte_4189F08 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_2963/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
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
      sub_B2C434(0LL, v9);
    v10 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_2962/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse((System_Array_o *)v10, 0LL),
          max_length = v10->max_length,
          max_length >= 1) )
    {
      v14 = 0LL;
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
        {
          v19 = sub_B2C460(v12);
          sub_B2C400(v19, 0LL);
        }
        v16 = v10->m_Items[v14 + 1];
        if ( v16 == v11 )
          v15 = 1;
        if ( v16 == v6 )
          break;
        if ( (int)++v14 >= max_length )
          goto LABEL_18;
      }
      v17 = 1;
    }
    else
    {
      v15 = 0;
LABEL_18:
      v17 = 0;
    }
    v18 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v18 = ServantCommentManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v18->static_fields->UI_CHANGE_TYPE_KEY, v17, 0LL);
    UnityEngine_PlayerPrefs__SetInt(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, v15, 0LL);
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

  if ( (byte_4189EF2 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189EF2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x1

  if ( (byte_41853D5 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_41853D5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.warIdList = v3;
  sub_B2C2F8(&this->fields, v3);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_20449716(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  v3 = warIdList;
  if ( (byte_41853D6 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, warIdList);
    byte_41853D6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v5 = sub_B2C374(int___TypeInfo, 0LL);
    v3 = (struct System_Int32_array *)v5;
  }
  if ( !this )
    sub_B2C434(v5, v6);
  this->fields.warIdList = v3;
  sub_B2C2F8(&this->fields, v3);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}