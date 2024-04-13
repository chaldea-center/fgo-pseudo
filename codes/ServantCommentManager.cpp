void __fastcall ServantCommentManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
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
  struct ServantCommentManager_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ServantCommentManager_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  ServantCommentManager_c *v74; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x19
  struct ServantCommentManager_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_42E9D22 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3987/*"ChapterProgress"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6828/*"ForceReadNewProfiles"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10302/*"OverwriteUIVersion"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6692/*"Fgo_20150511_1"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6696/*"Fgo_20160620_1"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_14830/*"UIChangeType"*/, v29, v30, v31);
    byte_42E9D22 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCommentManager_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_6692/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6692/*"Fgo_20150511_1"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = ServantCommentManager_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_6696/*"Fgo_20160620_1"*/;
  v34->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6696/*"Fgo_20160620_1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v34->SAVE_DATA_VERSION, v35, v36, v37, v38, v39, v40, v41);
  v42 = ServantCommentManager_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_3987/*"ChapterProgress"*/;
  v42->SAVE_KEY = (struct System_String_o *)StringLiteral_3987/*"ChapterProgress"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->SAVE_KEY, v43, v44, v45, v46, v47, v48, v49);
  v50 = ServantCommentManager_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_14830/*"UIChangeType"*/;
  v50->UI_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_14830/*"UIChangeType"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v50->UI_CHANGE_TYPE_KEY, v51, v52, v53, v54, v55, v56, v57);
  v58 = ServantCommentManager_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_10302/*"OverwriteUIVersion"*/;
  v58->OVERWIRTE_UI_VERSION_KEY = (struct System_String_o *)StringLiteral_10302/*"OverwriteUIVersion"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v58->OVERWIRTE_UI_VERSION_KEY, v59, v60, v61, v62, v63, v64, v65);
  v66 = ServantCommentManager_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_6828/*"ForceReadNewProfiles"*/;
  v66->FORCE_READ_NEW_COMMENTS_KEY = (struct System_String_o *)StringLiteral_6828/*"ForceReadNewProfiles"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v66->FORCE_READ_NEW_COMMENTS_KEY, v67, v68, v69, v70, v71, v72, v73);
  v74 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isModfiy = 0;
  v74->static_fields->isContinueDevice = 0;
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo___ctor__);
  v76 = ServantCommentManager_TypeInfo->static_fields;
  v76->openList = (struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *)v75;
  sub_B5D560((BattleServantConfConponent_o *)&v76->openList, (System_Int32_array **)v75, v77, v78, v79, v80, v81, v82);
}


void __fastcall ServantCommentManager___ctor(ServantCommentManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantCommentManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *openList; // x8

  if ( (byte_42E9D0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__,
      v1,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v7, v8, v9);
    byte_42E9D0D = 1;
  }
  v10 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->openList;
  if ( !openList )
    goto LABEL_16;
  if ( openList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantCommentManager_TypeInfo->static_fields->openList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        openList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Clear__);
      v10 = ServantCommentManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = ServantCommentManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0
  const MethodInfo *v5; // x0
  ServantCommentManager_c *v6; // x8
  const MethodInfo *v7; // x0
  _BOOL8 v8; // x0

  if ( (byte_42E9D0B & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D0B = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__DeleteSaveData((const MethodInfo *)v4);
  ServantCommentManager__ClearSaveDataList(v5);
  v6 = ServantCommentManager_TypeInfo;
  ServantCommentManager_TypeInfo->static_fields->isContinueDevice = 1;
  v6->static_fields->isModfiy = 1;
  v8 = ServantCommentManager__WriteData(v7);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v8);
}


void __fastcall ServantCommentManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D09 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D09 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->UI_CHANGE_TYPE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(ServantCommentManager_TypeInfo->static_fields->OVERWIRTE_UI_VERSION_KEY, 0LL);
}


void __fastcall ServantCommentManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E9D0A & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D0A = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall ServantCommentManager__ForceReadNewComments(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x19
  __int64 v20; // x19
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_o *v23; // x20
  __int64 v24; // x19
  __int64 v25; // x19
  ServantCommentMaster_o *v26; // x19
  __int64 v27; // x8
  WarQuestSelectionEntity_array *v28; // x20
  unsigned __int64 i; // x24
  WarQuestSelectionEntity_o *v30; // x23
  WarQuestSelectionEntity_c *klass; // x21
  __int64 v32; // x22
  const MethodInfo *v33; // x4
  WarQuestSelectionEntity_c *v34; // x21
  __int64 v35; // x22
  int32_t v36; // w0
  const MethodInfo *v37; // x3
  System_Int32_array *v38; // x22
  System_Int32_array *v39; // x21
  int32_t v40; // w23
  ServantCommentManager_c *v41; // x0
  __int64 v42; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42E9D18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_UserServantCollectionEntity___, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16, v17, v18);
    byte_42E9D18 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AF52C4(v20);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v20 + 184);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    return;
  v23 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AF52C4(v25);
  Entitys_WarQuestSelectionEntity = **(WarQuestSelectionEntity_array ***)(v25 + 184);
  if ( !Entitys_WarQuestSelectionEntity
    || (v26 = (ServantCommentMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Entitys_WarQuestSelectionEntity,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                             v23,
                                             (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_UserServantCollectionEntity___)) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(Entitys_WarQuestSelectionEntity, v1);
  }
  v27 = *(_QWORD *)&Entitys_WarQuestSelectionEntity->max_length;
  v28 = Entitys_WarQuestSelectionEntity;
  if ( (int)v27 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v27; ++i )
    {
      if ( i >= (unsigned int)v27 )
      {
        v42 = sub_B5D6C8(Entitys_WarQuestSelectionEntity);
        sub_B5D668(v42, 0LL);
      }
      v30 = v28->m_Items[i];
      if ( v30 )
      {
        v32 = *(_QWORD *)&v30->fields.shortCutBannerId;
        klass = v30[1].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v45.fields.currentCryptoKey = v32;
        *(_QWORD *)&v45.fields.fakeValue = klass;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                             v45,
                                                                             0LL);
        if ( !v26 )
          goto LABEL_38;
        Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)ServantCommentMaster__GetNewList(
                                                                             v26,
                                                                             &idList,
                                                                             &priorityList,
                                                                             (int32_t)Entitys_WarQuestSelectionEntity,
                                                                             v33);
        if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
        {
          v35 = *(_QWORD *)&v30->fields.shortCutBannerId;
          v34 = v30[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v46.fields.currentCryptoKey = v35;
          *(_QWORD *)&v46.fields.fakeValue = v34;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL);
          v38 = idList;
          v39 = priorityList;
          v40 = v36;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          }
          ServantCommentManager__SetOpen_27546372(v40, v38, v39, v37);
        }
      }
      LODWORD(v27) = v28->max_length;
    }
  }
  v41 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__WriteData((const MethodInfo *)v41);
}


System_Int32_array *__fastcall ServantCommentManager__GetClearWarIdList(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ServantCommentManager_c *v19; // x0
  Il2CppObject *String; // x19
  TerminalPramsManager_ClearData_o *v21; // x0
  __int64 v22; // x1
  TerminalPramsManager_ClearData_o *v23; // x19

  if ( (byte_42E9D0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int___, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___, v7, v8, v9);
    sub_B5D5C4(&JsonManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23995/*"{}"*/, v16, v17, v18);
    byte_42E9D0F = 1;
  }
  v19 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v19 = ServantCommentManager_TypeInfo;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             v19->static_fields->SAVE_KEY,
                             (System_String_o *)StringLiteral_23995/*"{}"*/,
                             0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
          String,
          (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_ServantCommentManager_ClearWarInfo___);
  v23 = v21;
  if ( !v21 )
    sub_B5D69C(0LL, v22);
  System_Array__Sort_int_(
    (System_Int32_array *)v21->fields.qClearHeroineInfo,
    (const MethodInfo_1AC82C0 *)Method_System_Array_Sort_int___);
  return (System_Int32_array *)v23->fields.qClearHeroineInfo;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x6
  const MethodInfo *v50; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v53; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v54; // x21
  const MethodInfo *v55; // x3
  unsigned int datalist; // w8
  int v57; // w25
  unsigned __int64 v58; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x26
  _BOOL8 v60; // x0
  __int64 v61; // x1
  int v62; // w8
  _BYTE v64[32]; // [xsp+8h] [xbp-98h] BYREF
  int v65; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E9D19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, oldFriendShipRank, limitCount, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___68746936, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    byte_42E9D19 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v65 = 0;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityList_27550020(
                                (ServantCommentMaster_o *)Instance,
                                svt_id,
                                limitCount,
                                9,
                                1,
                                1,
                                v49);
  if ( Instance )
  {
    if ( !v46 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v46,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v46 )
  {
    goto LABEL_42;
  }
  size = v46->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v53 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = (DataManager_o *)v46->fields._items->m_Items[v53];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v50) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
          v53,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v46->fields._size;
    }
LABEL_42:
    sub_B5D69C(Instance, v48);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v54 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v54,
      (System_Collections_Generic_IEnumerable_T__o *)v46,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___68746936);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                                  svt_id,
                                  -1,
                                  limitCount,
                                  v55);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v57 = 0;
      v58 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v58 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v54 )
          goto LABEL_42;
        v59 = v46->fields._items->m_Items[v58];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v64,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v66 = *(System_Collections_Generic_List_Enumerator_T__o *)v64;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v66,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v60 )
            break;
          if ( !v59 )
            sub_B5D69C(v60, v61);
          if ( !v66.fields.current )
            sub_B5D69C(v60, v61);
          if ( v59->fields.missionConditionDetailId == HIDWORD(v66.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
              v58,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v64[4 * v57 + 24] = 192;
        v57 = ++v65;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v66,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v57 )
        {
          v62 = v57 - 1;
          if ( *(_DWORD *)&v64[4 * v57 + 20] == 192 )
          {
            --v57;
            v65 = v62;
          }
        }
        if ( (--v58 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v46;
        datalist = v46->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v46;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
        int32_t svtId,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x5
  const MethodInfo *v50; // x3
  unsigned int size; // w8
  unsigned int i; // w25
  int32_t v53; // w23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v54; // x21
  const MethodInfo *v55; // x3
  unsigned int datalist; // w8
  int v57; // w25
  unsigned __int64 v58; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x26
  _BOOL8 v60; // x0
  __int64 v61; // x1
  int v62; // w8
  _BYTE v64[32]; // [xsp+8h] [xbp-98h] BYREF
  int v65; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E9D1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, imageLimit, oldFriendShipRank, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor___68746936, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    byte_42E9D1C = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v65 = 0;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantCommentMaster__GetEntityListWithImageList(
                                (ServantCommentMaster_o *)Instance,
                                svtId,
                                imageLimit,
                                9,
                                1,
                                v49);
  if ( Instance )
  {
    if ( !v46 )
      goto LABEL_42;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v46,
      (System_Collections_Generic_IEnumerable_T__o *)Instance,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ServantCommentEntity__AddRange__);
  }
  else if ( !v46 )
  {
    goto LABEL_42;
  }
  size = v46->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    for ( i = size - 2; ; --i )
    {
      v53 = i + 1;
      if ( size <= i + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = (DataManager_o *)v46->fields._items->m_Items[v53];
      if ( !Instance )
        break;
      if ( !ServantCommentEntity__IsOpen((ServantCommentEntity_o *)Instance, oldFriendShipRank, 1, v50) )
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
          v53,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
      if ( (i & 0x80000000) != 0 )
        goto LABEL_18;
      size = v46->fields._size;
    }
LABEL_42:
    sub_B5D69C(Instance, v48);
  }
LABEL_18:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v54 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v54,
      (System_Collections_Generic_IEnumerable_T__o *)v46,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor___68746936);
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShipAndImageLimit(
                                  svtId,
                                  imageLimit,
                                  -1,
                                  v55);
    if ( !Instance )
      goto LABEL_42;
    datalist = (unsigned int)Instance->fields.datalist;
    v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v57 = 0;
      v58 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v58 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v54 )
          goto LABEL_42;
        v59 = v46->fields._items->m_Items[v58];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v64,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantCommentEntity__GetEnumerator__);
        v66 = *(System_Collections_Generic_List_Enumerator_T__o *)v64;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v66,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__MoveNext__);
          if ( !v60 )
            break;
          if ( !v59 )
            sub_B5D69C(v60, v61);
          if ( !v66.fields.current )
            sub_B5D69C(v60, v61);
          if ( v59->fields.missionConditionDetailId == HIDWORD(v66.fields.current[1].klass) )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
              v58,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ServantCommentEntity__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v64[4 * v57 + 24] = 191;
        v57 = ++v65;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v66,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantCommentEntity__Dispose__);
        if ( v57 )
        {
          v62 = v57 - 1;
          if ( *(_DWORD *)&v64[4 * v57 + 20] == 191 )
          {
            --v57;
            v65 = v62;
          }
        }
        if ( (--v58 & 0x80000000) != 0 )
          return (System_Collections_Generic_List_ServantCommentEntity__o *)v46;
        datalist = v46->fields._size;
      }
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v46;
}


int32_t __fastcall ServantCommentManager__GetOverwriteUiVersion(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D21 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D21 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->OVERWIRTE_UI_VERSION_KEY, 0, 0LL);
}


int32_t __fastcall ServantCommentManager__GetUiChangeType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D20 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D20 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__GetUiFlag((const MethodInfo *)v4);
}


int32_t __fastcall ServantCommentManager__GetUiFlag(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D1F & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D1F = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->UI_CHANGE_TYPE_KEY, 0, 0LL);
}


void __fastcall ServantCommentManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D0C & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D0C = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall ServantCommentManager__IsForceReadNewComments(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCommentManager_c *v4; // x0

  if ( (byte_42E9D17 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E9D17 = 1;
  }
  v4 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v4 = ServantCommentManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->FORCE_READ_NEW_COMMENTS_KEY, 1, 0LL) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentManager__IsOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ServantCommentManager_c *v19; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  char v22; // w23
  unsigned int v23; // w25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v24; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v25; // x26
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v27; // x27
  __int64 v28; // x28
  unsigned __int64 v29; // x22
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  struct System_Collections_Generic_List_int__o *v31; // x21
  int32_t v33; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E9D11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      svtCommentId,
      svtCommentPriority,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v13, v14, v15);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v16, v17, v18);
    byte_42E9D11 = 1;
  }
  v19 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v19 = ServantCommentManager_TypeInfo;
  }
  openList = v19->static_fields->openList;
  if ( !openList )
LABEL_41:
    sub_B5D69C(v19, *(_QWORD *)&svtCommentId);
  size = openList->fields._size;
  if ( size < 1 )
  {
    v22 = 0;
    return v22 & 1;
  }
  v22 = 0;
  v23 = 0;
  v33 = svtId;
  while ( 1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantCommentManager_TypeInfo;
    }
    v24 = v19->static_fields->openList;
    if ( !v24 )
      goto LABEL_41;
    if ( v24->fields._size <= v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = v24->fields._items->m_Items[v23];
    if ( !v25 )
      goto LABEL_41;
    if ( v25->fields.svtId == svtId )
    {
      svtCommentIdList = v25->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        goto LABEL_41;
      v27 = svtCommentIdList->fields._size;
      if ( (int)v27 >= 1 )
        break;
    }
LABEL_36:
    if ( (int)++v23 >= size )
      return v22 & 1;
    v19 = ServantCommentManager_TypeInfo;
  }
  v28 = 8LL;
  while ( 1 )
  {
    v29 = v28 - 8;
    if ( v28 - 8 >= (unsigned __int64)(unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v28) != svtCommentId )
      goto LABEL_32;
    svtCommentPriorityList = v25->fields.svtCommentPriorityList;
    if ( !svtCommentPriorityList )
      goto LABEL_41;
    if ( v29 >= (unsigned int)svtCommentPriorityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v28) == svtCommentPriority )
      break;
    v31 = v25->fields.svtCommentPriorityList;
    if ( !v31 )
      goto LABEL_41;
    if ( v29 >= (unsigned int)v31->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v22 |= *((_DWORD *)&v31->fields._items->obj.klass + v28) >= svtCommentPriority;
LABEL_32:
    if ( v28 - 7 >= v27 )
    {
      svtId = v33;
      goto LABEL_36;
    }
    svtCommentIdList = v25->fields.svtCommentIdList;
    ++v28;
    if ( !svtCommentIdList )
      goto LABEL_41;
  }
  v22 = 1;
  return v22 & 1;
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E9D1A & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, oldFriendShipRank, (_DWORD)method, v3);
    byte_42E9D1A = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__IsOpenByServantFriendShip_27551544(svt_id, oldFriendShipRank, -1, v3);
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
        int32_t svt_id,
        int32_t imageLimit,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_ServantCommentEntity__o *OpenServantCommentEntityByServantFriendShipAndImageLimit; // x0
  __int64 v11; // x1

  if ( (byte_42E9D1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__,
      imageLimit,
      oldFriendShipRank,
      method);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v7, v8, v9);
    byte_42E9D1D = 1;
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
    sub_B5D69C(0LL, v11);
  return OpenServantCommentEntityByServantFriendShipAndImageLimit->fields._size > 0;
}


bool __fastcall ServantCommentManager__IsOpenByServantFriendShip_27551544(
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t ServantLimitCountSealAfter; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int64_t Instance; // x0
  __int64 v23; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t maxLimitCount; // w21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  ServantLimitCountSealAfter = limitCount;
  if ( (byte_42E9D1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, oldFriendShipRank, limitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E9D1B = 1;
  }
  entity = 0LL;
  if ( ServantLimitCountSealAfter == -1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B5D69C(Instance, v23);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !Instance )
        goto LABEL_20;
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
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  Instance = (int64_t)ServantCommentManager__GetOpenServantCommentEntityByServantFriendShip(
                        svt_id,
                        oldFriendShipRank,
                        ServantLimitCountSealAfter,
                        method);
  if ( !Instance )
    goto LABEL_20;
  return *(_DWORD *)(Instance + 24) > 0;
}


void __fastcall ServantCommentManager__LoginProcess(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantCommentManager_c *v10; // x0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x0
  const MethodInfo *v14; // x0
  ServantCommentManager_c *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42E9D0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1, v2, v3);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E9D0E = 1;
  }
  v10 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v10 = ServantCommentManager_TypeInfo;
  }
  if ( v10->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v12);
    }
    UserServantCollectionMaster__continueDeviceServantComment((UserServantCollectionMaster_o *)Instance, 0LL);
    v13 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v13 = (const MethodInfo *)ServantCommentManager_TypeInfo;
    }
    BYTE1(v13[2].klass->_1.this_arg.data) = 0;
    LOBYTE(v13[2].klass->_1.this_arg.data) = 1;
    ServantCommentManager__WriteData(v13);
    v10 = ServantCommentManager_TypeInfo;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  ServantCommentManager__UpdateChapter((const MethodInfo *)v10);
  if ( ServantCommentManager__IsForceReadNewComments(v14) )
  {
    v15 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ForceReadNewComments((const MethodInfo *)v15);
    ServantCommentManager__SetForceReadNewComments(0, v16);
  }
}


bool __fastcall ServantCommentManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  ServantCommentManager_c *v28; // x0
  ManagerConfig_c *v29; // x0
  bool v30; // w21
  ServantCommentManager_c *v31; // x0
  System_String_o *SaveFileName; // x19
  ServantCommentManager_c *v33; // x0
  System_IO_Stream_o *v34; // x20
  System_IO_BinaryReader_o *v35; // x19
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x20
  ServantCommentManager_c *v39; // x0
  char v40; // w20
  ServantCommentManager_c *v41; // x0
  __int64 v42; // x3
  int v43; // w20
  System_Collections_Generic_List_int__c **v44; // x27
  const MethodInfo_30836B0 **v45; // x28
  int v46; // w25
  int v47; // w22
  __int64 v48; // x21
  __int64 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_List_int__o *v51; // x23
  System_Collections_Generic_List_int__o **v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_int__o *v59; // x24
  System_Collections_Generic_List_int__o **v60; // x23
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  const MethodInfo_30836B0 **v67; // x20
  System_Collections_Generic_List_int__c **v68; // x28
  __int64 v69; // x1
  int v70; // w24
  int i; // w27
  __int64 v72; // x1
  __int64 v73; // x1
  ServantCommentManager_c *v74; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  ServantCommentManager_c *v76; // x0
  char v77; // w20
  ServantCommentManager_c *v78; // x0
  int v79; // w28
  int j; // w24
  __int64 v81; // x1
  int v82; // w24
  ServantCommentManager_c *v83; // x0
  int v84; // w22
  __int64 v85; // x21
  __int64 v86; // x0
  __int64 v87; // x1
  System_Collections_Generic_List_int__o *v88; // x23
  System_Collections_Generic_List_int__o **v89; // x22
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
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
  __int64 v107; // x1
  int32_t v108; // w25
  __int64 v109; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v112; // x10
  int32_t *p_offset; // x11
  __int64 v114; // x0
  ServantCommentManager_c *v115; // x0
  int v117; // [xsp+4h] [xbp-6Ch]
  int v118; // [xsp+4h] [xbp-6Ch]

  if ( (byte_42E9D14 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v25, v26, v27);
    byte_42E9D14 = 1;
  }
  v28 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v28 = ServantCommentManager_TypeInfo;
  }
  v28->static_fields->isModfiy = 0;
  v29 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v29 = ManagerConfig_TypeInfo;
  }
  if ( v29->static_fields->UseMock )
    return 1;
  v31 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v31);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v33 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v33);
    v34 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v35 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v35, v34, 0LL);
    if ( !v35 )
      sub_B5D69C(v36, v37);
    v38 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._22_ReadString.method)(
                               v35,
                               v35->klass->vtable._23_ReadChars.methodPtr);
    v39 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v39 = ServantCommentManager_TypeInfo;
    }
    if ( System_String__op_Equality(v39->static_fields->SAVE_DATA_OLD_VERSION, v38, 0LL) )
    {
      v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._9_ReadBoolean.method)(
              v35,
              v35->klass->vtable._10_ReadByte.methodPtr);
      v41 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v41 = ServantCommentManager_TypeInfo;
      }
      v41->static_fields->isContinueDevice = v40 & 1;
      v43 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
              v35,
              v35->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v43 >= 1 )
      {
        v44 = &System_Collections_Generic_List_int__TypeInfo;
        v45 = (const MethodInfo_30836B0 **)&Method_System_Collections_Generic_List_int___ctor___68740224;
        v46 = 0;
        v117 = v43;
        do
        {
          v47 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                  v35,
                  v35->klass->vtable._16_ReadUInt32.methodPtr);
          v48 = sub_B5D694(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
          ServantCommentManager_UserServantCommentOpenInfo___ctor(
            (ServantCommentManager_UserServantCommentOpenInfo_o *)v48,
            0LL);
          if ( !v48 )
            sub_B5D69C(v49, v50);
          *(_DWORD *)(v48 + 16) = v47;
          v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(*v44);
          System_Collections_Generic_List_int____ctor(v51, *v45);
          *(_QWORD *)(v48 + 24) = v51;
          v52 = (System_Collections_Generic_List_int__o **)(v48 + 24);
          sub_B5D560(
            (BattleServantConfConponent_o *)(v48 + 24),
            (System_Int32_array **)v51,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          v59 = (System_Collections_Generic_List_int__o *)sub_B5D694(*v44);
          System_Collections_Generic_List_int____ctor(v59, *v45);
          *(_QWORD *)(v48 + 32) = v59;
          v60 = (System_Collections_Generic_List_int__o **)(v48 + 32);
          sub_B5D560(
            (BattleServantConfConponent_o *)(v48 + 32),
            (System_Int32_array **)v59,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
          v67 = v45;
          v68 = v44;
          v70 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                  v35,
                  v35->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v70 >= 1 )
          {
            for ( i = 0; i < v70; ++i )
            {
              v72 = ((unsigned __int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                      v35,
                      v35->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !*v52 )
                sub_B5D69C(0LL, v72);
              System_Collections_Generic_List_int___Add(
                *v52,
                v72,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              if ( !*v60 )
                sub_B5D69C(0LL, v73);
              System_Collections_Generic_List_int___Add(
                *v60,
                0,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v74 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v74 = ServantCommentManager_TypeInfo;
          }
          v44 = v68;
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v74->static_fields->openList;
          if ( !openList )
            sub_B5D69C(0LL, v69);
          v45 = v67;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          ++v46;
        }
        while ( v46 < v117 );
      }
      v30 = 1;
    }
    else
    {
      v76 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v76 = ServantCommentManager_TypeInfo;
      }
      if ( System_String__op_Equality(v76->static_fields->SAVE_DATA_VERSION, v38, 0LL) )
      {
        v77 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._9_ReadBoolean.method)(
                v35,
                v35->klass->vtable._10_ReadByte.methodPtr);
        v78 = ServantCommentManager_TypeInfo;
        if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          v78 = ServantCommentManager_TypeInfo;
        }
        v78->static_fields->isContinueDevice = v77 & 1;
        v79 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                v35,
                v35->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v79 >= 1 )
        {
          for ( j = 0; j < v79; j = v82 + 1 )
          {
            v84 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                    v35,
                    v35->klass->vtable._16_ReadUInt32.methodPtr);
            v85 = sub_B5D694(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
            ServantCommentManager_UserServantCommentOpenInfo___ctor(
              (ServantCommentManager_UserServantCommentOpenInfo_o *)v85,
              0LL);
            if ( !v85 )
              sub_B5D69C(v86, v87);
            *(_DWORD *)(v85 + 16) = v84;
            v88 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v88,
              (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
            *(_QWORD *)(v85 + 24) = v88;
            v89 = (System_Collections_Generic_List_int__o **)(v85 + 24);
            sub_B5D560(
              (BattleServantConfConponent_o *)(v85 + 24),
              (System_Int32_array **)v88,
              v90,
              v91,
              v92,
              v93,
              v94,
              v95);
            v118 = j;
            v96 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v96,
              (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
            *(_QWORD *)(v85 + 32) = v96;
            v97 = (System_Collections_Generic_List_int__o **)(v85 + 32);
            sub_B5D560(
              (BattleServantConfConponent_o *)(v85 + 32),
              (System_Int32_array **)v96,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            v104 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                     v35,
                     v35->klass->vtable._16_ReadUInt32.methodPtr);
            if ( v104 >= 1 )
            {
              for ( k = 0; k < v104; ++k )
              {
                v106 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                         v35,
                         v35->klass->vtable._16_ReadUInt32.methodPtr);
                v108 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v35->klass->vtable._15_ReadInt32.method)(
                         v35,
                         v35->klass->vtable._16_ReadUInt32.methodPtr);
                if ( !*v89 )
                  sub_B5D69C(0LL, v107);
                System_Collections_Generic_List_int___Add(
                  *v89,
                  v106,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                if ( !*v97 )
                  sub_B5D69C(0LL, v109);
                System_Collections_Generic_List_int___Add(
                  *v97,
                  v108,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            v83 = ServantCommentManager_TypeInfo;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              v82 = v118;
              v83 = ServantCommentManager_TypeInfo;
            }
            else
            {
              v82 = v118;
            }
            v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83->static_fields->openList;
            if ( !v110 )
              sub_B5D69C(0LL, v81);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v110,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
          }
        }
        v30 = 1;
      }
      else
      {
        v30 = 0;
      }
    }
    klass = v35->klass;
    if ( *(_WORD *)&v35->klass->_2.bitflags1 )
    {
      v112 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v112;
        p_offset += 4;
        if ( v112 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v114 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_67:
      v114 = sub_AF54C0(v35, System_IDisposable_TypeInfo, 0LL, v42);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v114)(v35, *(_QWORD *)(v114 + 8));
  }
  else
  {
    v115 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__ClearSaveDataList((const MethodInfo *)v115);
    return 0;
  }
  return v30;
}


void __fastcall ServantCommentManager__SetForceReadNewComments(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v5; // w19
  ServantCommentManager_c *v6; // x0

  if ( (byte_42E9D16 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D16 = 1;
  }
  v5 = flag;
  v6 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v6 = ServantCommentManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->FORCE_READ_NEW_COMMENTS_KEY, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentManager__SetOpen(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  ServantCommentManager_c *v34; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w24
  __int64 i; // x25
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v38; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v39; // x22
  System_Collections_Generic_List_int__o *svtCommentIdList; // x21
  __int64 v41; // x24
  __int64 v42; // x25
  unsigned __int64 v43; // x26
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x21
  __int64 v45; // x22
  System_Collections_Generic_List_int__o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_List_int__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantCommentManager_c *v60; // x0
  ServantCommentManager_c *v61; // x0

  if ( (byte_42E9D12 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      svtCommentId,
      svtCommentPriority,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v31, v32, v33);
    byte_42E9D12 = 1;
  }
  v34 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v34 = ServantCommentManager_TypeInfo;
  }
  openList = v34->static_fields->openList;
  if ( !openList )
    goto LABEL_46;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_31:
    v45 = sub_B5D694(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
    ServantCommentManager_UserServantCommentOpenInfo___ctor(
      (ServantCommentManager_UserServantCommentOpenInfo_o *)v45,
      0LL);
    if ( v45 )
    {
      *(_DWORD *)(v45 + 16) = svtId;
      v46 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v46,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      *(_QWORD *)(v45 + 24) = v46;
      sub_B5D560((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
      v34 = *(ServantCommentManager_c **)(v45 + 24);
      if ( v34 )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v34,
          svtCommentId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v53,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        *(_QWORD *)(v45 + 32) = v53;
        sub_B5D560((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
        v34 = *(ServantCommentManager_c **)(v45 + 32);
        if ( v34 )
        {
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v34,
            svtCommentPriority,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v60 = ServantCommentManager_TypeInfo;
          if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCommentManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            v60 = ServantCommentManager_TypeInfo;
          }
          v34 = (ServantCommentManager_c *)v60->static_fields->openList;
          if ( v34 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
            goto LABEL_39;
          }
        }
      }
    }
LABEL_46:
    sub_B5D69C(v34, *(_QWORD *)&svtCommentId);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ServantCommentManager_TypeInfo;
    }
    v38 = v34->static_fields->openList;
    if ( !v38 )
      goto LABEL_46;
    if ( v38->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v39 = v38->fields._items->m_Items[i];
    if ( !v39 )
      goto LABEL_46;
    if ( v39->fields.svtId == svtId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_31;
    v34 = ServantCommentManager_TypeInfo;
  }
  svtCommentIdList = v39->fields.svtCommentIdList;
  if ( !svtCommentIdList )
    goto LABEL_46;
  v41 = svtCommentIdList->fields._size;
  v42 = 8LL;
  while ( 1 )
  {
    v43 = v42 - 8;
    if ( v42 - 8 >= v41 )
      break;
    if ( v43 >= (unsigned int)svtCommentIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( *((_DWORD *)&svtCommentIdList->fields._items->obj.klass + v42) == svtCommentId )
    {
      svtCommentPriorityList = v39->fields.svtCommentPriorityList;
      if ( !svtCommentPriorityList )
        goto LABEL_46;
      if ( v43 >= (unsigned int)svtCommentPriorityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( *((_DWORD *)&svtCommentPriorityList->fields._items->obj.klass + v42) == svtCommentPriority )
        return;
    }
    svtCommentIdList = v39->fields.svtCommentIdList;
    ++v42;
    if ( !svtCommentIdList )
      goto LABEL_46;
  }
  System_Collections_Generic_List_int___Add(
    svtCommentIdList,
    svtCommentId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  v34 = (ServantCommentManager_c *)v39->fields.svtCommentPriorityList;
  if ( !v34 )
    goto LABEL_46;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v34,
    svtCommentPriority,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  v61 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
LABEL_39:
  v61 = ServantCommentManager_TypeInfo;
LABEL_40:
  v61->static_fields->isModfiy = 1;
}


void __fastcall ServantCommentManager__SetOpen_27546372(
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  __int64 v34; // x26
  ServantCommentManager_c *v35; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x8
  int size; // w23
  __int64 i; // x24
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v39; // x22
  ServantCommentManager_UserServantCommentOpenInfo_o *v40; // x22
  struct System_Collections_Generic_List_int__o *v41; // x8
  __int64 v42; // x24
  unsigned __int64 v43; // x23
  int32_t v44; // w21
  __int64 v45; // x27
  struct System_Collections_Generic_List_int__o *v46; // x25
  struct System_Collections_Generic_List_int__o *v47; // x25
  __int64 v48; // x8
  __int64 v49; // x22
  System_Collections_Generic_List_int__o *v50; // x23
  ServantCommentManager_c **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_int__o *v58; // x24
  ServantCommentManager_c **v59; // x23
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  unsigned __int64 v66; // x24
  ServantCommentManager_c *v67; // x0
  __int64 v68; // x0

  if ( (byte_42E9D13 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__,
      (_DWORD)svtCommentIdList,
      (_DWORD)svtCommentPriorityList,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&ServantCommentManager_UserServantCommentOpenInfo_TypeInfo, v31, v32, v33);
    byte_42E9D13 = 1;
  }
  if ( svtCommentIdList )
  {
    v34 = *(_QWORD *)&svtCommentIdList->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v35 = ServantCommentManager_TypeInfo;
      }
      openList = v35->static_fields->openList;
      if ( !openList )
        goto LABEL_62;
      size = openList->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0LL; ; ++i )
        {
          if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = ServantCommentManager_TypeInfo;
          }
          v39 = v35->static_fields->openList;
          if ( !v39 )
            goto LABEL_62;
          if ( v39->fields._size <= (unsigned int)i )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v40 = v39->fields._items->m_Items[i];
          if ( !v40 )
            goto LABEL_62;
          if ( v40->fields.svtId == svtId )
            break;
          if ( (int)i + 1 >= size )
            goto LABEL_48;
          v35 = ServantCommentManager_TypeInfo;
        }
        v41 = v40->fields.svtCommentIdList;
        if ( v41 )
        {
          v42 = v41->fields._size;
          v43 = 0LL;
          while ( 1 )
          {
            if ( v43 >= svtCommentIdList->max_length )
              goto LABEL_63;
            v44 = svtCommentIdList->m_Items[v43 + 1];
            if ( (int)v42 >= 1 )
              break;
LABEL_37:
            if ( v44 >= 1 )
            {
              v35 = (ServantCommentManager_c *)v40->fields.svtCommentIdList;
              if ( !v35 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v35,
                v44,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              if ( !svtCommentPriorityList )
                goto LABEL_62;
              if ( v43 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              v35 = (ServantCommentManager_c *)v40->fields.svtCommentPriorityList;
              if ( !v35 )
                goto LABEL_62;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v35,
                svtCommentPriorityList->m_Items[v43 + 1],
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              v35 = ServantCommentManager_TypeInfo;
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                v35 = ServantCommentManager_TypeInfo;
              }
              v35->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v43 >= (int)v34 )
              return;
          }
          v45 = 8LL;
          while ( 1 )
          {
            v46 = v40->fields.svtCommentIdList;
            if ( !v46 )
              break;
            if ( v45 - 8 >= (unsigned __int64)(unsigned int)v46->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( *((_DWORD *)&v46->fields._items->obj.klass + v45) == v44 )
            {
              v47 = v40->fields.svtCommentPriorityList;
              if ( !v47 )
                break;
              if ( v45 - 8 >= (unsigned __int64)(unsigned int)v47->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( !svtCommentPriorityList )
                break;
              if ( v43 >= svtCommentPriorityList->max_length )
                goto LABEL_63;
              if ( *((_DWORD *)&v47->fields._items->obj.klass + v45) == svtCommentPriorityList->m_Items[v43 + 1] )
                return;
            }
            v48 = v45 - 7;
            ++v45;
            if ( v48 >= v42 )
              goto LABEL_37;
          }
        }
LABEL_62:
        sub_B5D69C(v35, svtCommentIdList);
      }
LABEL_48:
      v49 = sub_B5D694(ServantCommentManager_UserServantCommentOpenInfo_TypeInfo);
      ServantCommentManager_UserServantCommentOpenInfo___ctor(
        (ServantCommentManager_UserServantCommentOpenInfo_o *)v49,
        0LL);
      if ( !v49 )
        goto LABEL_62;
      *(_DWORD *)(v49 + 16) = svtId;
      v50 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v50,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v51 = (ServantCommentManager_c **)(v49 + 24);
      *(_QWORD *)(v49 + 24) = v50;
      sub_B5D560((BattleServantConfConponent_o *)(v49 + 24), (System_Int32_array **)v50, v52, v53, v54, v55, v56, v57);
      v58 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v58,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v59 = (ServantCommentManager_c **)(v49 + 32);
      *(_QWORD *)(v49 + 32) = v58;
      sub_B5D560((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v58, v60, v61, v62, v63, v64, v65);
      v66 = 0LL;
      do
      {
        if ( v66 >= svtCommentIdList->max_length )
        {
LABEL_63:
          v68 = sub_B5D6C8(v35);
          sub_B5D668(v68, 0LL);
        }
        v35 = *v51;
        if ( !*v51 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v35,
          svtCommentIdList->m_Items[v66 + 1],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( !svtCommentPriorityList )
          goto LABEL_62;
        if ( v66 >= svtCommentPriorityList->max_length )
          goto LABEL_63;
        v35 = *v59;
        if ( !*v59 )
          goto LABEL_62;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)v35,
          svtCommentPriorityList->m_Items[++v66],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      while ( (__int64)v66 < (int)v34 );
      v67 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v67 = ServantCommentManager_TypeInfo;
      }
      v35 = (ServantCommentManager_c *)v67->static_fields->openList;
      if ( !v35 )
        goto LABEL_62;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__Add__);
      ServantCommentManager_TypeInfo->static_fields->isModfiy = 1;
    }
  }
}


void __fastcall ServantCommentManager__UpdateChapter(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  ManagerConfig_c *v22; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v24; // x1
  ServantCommentManager_c *v25; // x0
  System_String_o *String; // x19
  System_Int32_array *ClearWarIdList; // x21
  ServantCommentManager_ClearWarInfo_o *v28; // x20
  System_String_o *v29; // x20
  ServantCommentManager_c *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_42E9D10 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_ClearWarInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v4, v5, v6);
    sub_B5D5C4(&JsonManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23995/*"{}"*/, v19, v20, v21);
    byte_42E9D10 = 1;
  }
  v22 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v22 = ManagerConfig_TypeInfo;
  }
  if ( !v22->static_fields->UseMock )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_23;
    if ( UserGameEntity__IsAccountDelete(SelfUserGame, 0LL) )
      return;
    v25 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      v25 = ServantCommentManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v25->static_fields->SAVE_KEY,
               (System_String_o *)StringLiteral_23995/*"{}"*/,
               0LL);
    SelfUserGame = (UserGameEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame
      || (SelfUserGame = (UserGameEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)SelfUserGame,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
LABEL_23:
      sub_B5D69C(SelfUserGame, v24);
    }
    ClearWarIdList = WarMaster__getClearWarIdList((WarMaster_o *)SelfUserGame, 0LL);
    v28 = (ServantCommentManager_ClearWarInfo_o *)sub_B5D694(ServantCommentManager_ClearWarInfo_TypeInfo);
    ServantCommentManager_ClearWarInfo___ctor_20079752(v28, ClearWarIdList, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v29 = JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0LL);
    if ( System_String__op_Inequality(String, v29, 0LL) )
    {
      v30 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v30 = ServantCommentManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v30->static_fields->SAVE_KEY, v29, 0LL);
      ServantCommentManager__checkUIChange(0, v31);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


bool __fastcall ServantCommentManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  ServantCommentManager_c *v25; // x0
  struct ServantCommentManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v29; // x0
  ServantCommentManager_c *v31; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v33; // x20
  System_IO_BinaryWriter_o *v34; // x19
  __int64 v35; // x1
  ServantCommentManager_c *v36; // x0
  struct ServantCommentManager_StaticFields *v37; // x8
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *openList; // x9
  int size; // w20
  __int64 v40; // x1
  __int64 v41; // x3
  int i; // w23
  ServantCommentManager_c *v43; // x0
  struct System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__o *v44; // x21
  ServantCommentManager_UserServantCommentOpenInfo_o *v45; // x24
  struct System_Collections_Generic_List_int__o *svtCommentIdList; // x8
  __int64 v47; // x21
  __int64 v48; // x0
  __int64 v49; // x25
  struct System_Collections_Generic_List_int__o *v50; // x27
  __int64 v51; // x0
  __int64 v52; // x1
  struct System_Collections_Generic_List_int__o *svtCommentPriorityList; // x27
  __int64 v54; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v56; // x10
  int32_t *p_offset; // x11
  __int64 v58; // x0

  if ( (byte_42E9D15 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantCommentManager_UserServantCommentOpenInfo__get_Item__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v16, v17, v18);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v22, v23, v24);
    byte_42E9D15 = 1;
  }
  v25 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v25 = ServantCommentManager_TypeInfo;
  }
  static_fields = v25->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    p_isModfiy = &ServantCommentManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v29 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v29 = ManagerConfig_TypeInfo;
  }
  if ( v29->static_fields->UseMock )
    return 0;
  v31 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  SaveFileName = ServantCommentManager__getSaveFileName((const MethodInfo *)v31);
  v33 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v34 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v34, v33, 0LL);
  v36 = ServantCommentManager_TypeInfo;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    v36 = ServantCommentManager_TypeInfo;
  }
  v37 = v36->static_fields;
  openList = v37->openList;
  if ( !openList )
    sub_B5D69C(v36, v35);
  if ( !v34 )
    sub_B5D69C(v36, v35);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v34->klass->vtable._22_Write.method)(
    v34,
    v37->SAVE_DATA_VERSION,
    v34->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v34->klass->vtable._8_Write.method)(
    v34,
    ServantCommentManager_TypeInfo->static_fields->isContinueDevice,
    v34->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
    v34,
    (unsigned int)size,
    v34->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v43 = ServantCommentManager_TypeInfo;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
        v43 = ServantCommentManager_TypeInfo;
      }
      v44 = v43->static_fields->openList;
      if ( !v44 )
        sub_B5D69C(v43, v40);
      if ( v44->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v45 = v44->fields._items->m_Items[i];
      if ( !v45 )
        sub_B5D69C(v43, v40);
      svtCommentIdList = v45->fields.svtCommentIdList;
      if ( !svtCommentIdList )
        sub_B5D69C(v43, v40);
      v47 = svtCommentIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
        v34,
        (unsigned int)v45->fields.svtId,
        v34->klass->vtable._18_Write.methodPtr);
      v48 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
              v34,
              (unsigned int)v47,
              v34->klass->vtable._18_Write.methodPtr);
      if ( (int)v47 >= 1 )
      {
        v49 = 8LL;
        do
        {
          v50 = v45->fields.svtCommentIdList;
          if ( !v50 )
            sub_B5D69C(v48, v40);
          if ( v49 - 8 >= (unsigned __int64)(unsigned int)v50->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v51 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
                  v34,
                  *((unsigned int *)&v50->fields._items->obj.klass + v49),
                  v34->klass->vtable._18_Write.methodPtr);
          svtCommentPriorityList = v45->fields.svtCommentPriorityList;
          if ( !svtCommentPriorityList )
            sub_B5D69C(v51, v52);
          if ( v49 - 8 >= (unsigned __int64)(unsigned int)svtCommentPriorityList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v48 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
                  v34,
                  *((unsigned int *)&svtCommentPriorityList->fields._items->obj.klass + v49),
                  v34->klass->vtable._18_Write.methodPtr);
          v54 = v49 - 7;
          ++v49;
        }
        while ( v54 < v47 );
      }
    }
  }
  klass = v34->klass;
  if ( *(_WORD *)&v34->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      p_offset += 4;
      if ( v56 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_47:
    v58 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v41);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v58)(v34, *(_QWORD *)(v58 + 8));
  return 1;
}


void __fastcall ServantCommentManager__checkUIChange(bool isSave, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t Value; // w0
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
  __int64 v25; // x0

  if ( (byte_42E9D1E & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3021/*"CHAPTER2_EPILOGUE_WAR_ID"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3022/*"CHAPTER2_PROLOGUE_WAR_ID"*/, v8, v9, v10);
    byte_42E9D1E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3022/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0LL);
  if ( (Value & 0x80000000) == 0 )
  {
    v12 = Value;
    v13 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ClearWarIdList = ServantCommentManager__GetClearWarIdList((const MethodInfo *)v13);
    if ( !ClearWarIdList )
      sub_B5D69C(0LL, v15);
    v16 = ClearWarIdList;
    if ( *(_QWORD *)&ClearWarIdList->max_length
      && (v17 = ConstantMaster__getValue((System_String_o *)StringLiteral_3021/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0LL),
          System_Array__Reverse((System_Array_o *)v16, 0LL),
          max_length = v16->max_length,
          max_length >= 1) )
    {
      v20 = 0LL;
      v21 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
        {
          v25 = sub_B5D6C8(v18);
          sub_B5D668(v25, 0LL);
        }
        v22 = v16->m_Items[v20 + 1];
        if ( v22 == v17 )
          v21 = 1;
        if ( v22 == v12 )
          break;
        if ( (int)++v20 >= max_length )
          goto LABEL_18;
      }
      v23 = 1;
    }
    else
    {
      v21 = 0;
LABEL_18:
      v23 = 0;
    }
    v24 = ServantCommentManager_TypeInfo;
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E9D08 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E9D08 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(11, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor(
        ServantCommentManager_ClearWarInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5D45 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5D45 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warIdList = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  sub_B5D560(&this->fields);
}


void __fastcall ServantCommentManager_ClearWarInfo___ctor_20079752(
        ServantCommentManager_ClearWarInfo_o *this,
        System_Int32_array *warIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Int32_array *v4; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  v4 = warIdList;
  if ( (byte_42E5D46 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)warIdList, (_DWORD)method, v3);
    byte_42E5D46 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v4 )
  {
    v6 = sub_B5D5DC(int___TypeInfo, 0LL);
    v4 = (struct System_Int32_array *)v6;
  }
  if ( !this )
    sub_B5D69C(v6, v7);
  this->fields.warIdList = v4;
  sub_B5D560(&this->fields);
}


void __fastcall ServantCommentManager_UserServantCommentOpenInfo___ctor(
        ServantCommentManager_UserServantCommentOpenInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}