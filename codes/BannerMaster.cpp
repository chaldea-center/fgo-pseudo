void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6EE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_40F6EE6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    117,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v20; // x1
  __int64 v21; // x1
  GachaMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_GachaEntity__o *ValidGachaEntityList; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w22
  int32_t v36; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v37; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  BannerEntity_o *v39; // x24
  __int64 v40; // x10
  System_String_array *LinkBody; // x0
  System_String_array *v42; // x25
  System_String_o *v43; // x26
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  BannerMaster___c__DisplayClass0_0_o *v48; // x26
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v53; // x25
  BannerMaster___c_c *v54; // x0
  struct BannerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v57; // x21
  struct BannerMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40F6EE5 & 1) == 0 )
  {
    sub_B16FFC(&BannerEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B16FFC(&Method_System_Comparison_BannerEntity___ctor__, v5);
    sub_B16FFC(&System_Comparison_BannerEntity__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Find__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BannerEntity__TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_GachaEntity___ctor__, v15);
    sub_B16FFC(&System_Predicate_GachaEntity__TypeInfo, v16);
    sub_B16FFC(&SceneList_TypeInfo, v17);
    sub_B16FFC(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v18);
    sub_B16FFC(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v19);
    sub_B16FFC(&BannerMaster___c__DisplayClass0_0_TypeInfo, v20);
    sub_B16FFC(&BannerMaster___c_TypeInfo, v21);
    byte_40F6EE5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ValidGachaEntityList = GachaMaster__GetValidGachaEntityList(Master_WarQuestSelectionMaster, 0LL);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BannerEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v35 = Count;
    v36 = 0;
    while ( 1 )
    {
      v37 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v37 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v37,
               v36,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v39 = (BannerEntity_o *)Item;
        v40 = *(&BannerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == BannerEntity_TypeInfo
          && BannerEntity__IsEnable((BannerEntity_o *)Item, v31) )
        {
          if ( v39->fields.linkType != 2 )
            goto LABEL_26;
          LinkBody = BannerEntity__GetLinkBody(v39, 0x2Fu, v32);
          if ( !LinkBody )
            break;
          v42 = LinkBody;
          if ( (int)LinkBody->max_length >= 1 )
          {
            v43 = LinkBody->m_Items[0];
            if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SceneList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
            }
            if ( SceneList__getSceneType(v43, 0LL) != 20 )
              goto LABEL_26;
            v48 = (BannerMaster___c__DisplayClass0_0_o *)sub_B170CC(
                                                           BannerMaster___c__DisplayClass0_0_TypeInfo,
                                                           v44,
                                                           v45,
                                                           v46,
                                                           v47);
            BannerMaster___c__DisplayClass0_0___ctor(v48, 0LL);
            if ( (int)v42->max_length >= 2 )
            {
              if ( !v48 )
                break;
              System_Int32__TryParse(v42->m_Items[1], &v48->fields.gachaId, 0LL);
              v53 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                               System_Predicate_GachaEntity__TypeInfo,
                                                                               v49,
                                                                               v50,
                                                                               v51,
                                                                               v52);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                v53,
                (Il2CppObject *)v48,
                Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                (const MethodInfo_2B0B204 *)Method_System_Predicate_GachaEntity___ctor__);
              if ( !ValidGachaEntityList )
                break;
              if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ValidGachaEntityList,
                     (System_Predicate_T__o *)v53,
                     (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
              {
LABEL_26:
                if ( !v28 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v28,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BannerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v36 >= v35 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_29:
  v54 = BannerMaster___c_TypeInfo;
  if ( (BYTE3(BannerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    v54 = BannerMaster___c_TypeInfo;
  }
  static_fields = v54->static_fields;
  _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = BannerMaster___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_BannerEntity__TypeInfo,
                                                                          v31,
                                                                          v32,
                                                                          v33,
                                                                          v34);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v57,
      Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BannerEntity___ctor__);
    v58 = BannerMaster___c_TypeInfo->static_fields;
    v58->__9__0_0 = (struct System_Comparison_BannerEntity__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v58->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  if ( !v28 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9157 & 1) == 0 )
  {
    sub_B16FFC(&BannerMaster___c_TypeInfo, v1);
    byte_40F9157 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BannerMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BannerMaster___c___ctor(BannerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BannerMaster___c___GetEnableEntitiyList_b__0_0(
        BannerMaster___c_o *this,
        BannerEntity_o *a,
        BannerEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.terminalBannerPriority - a->fields.terminalBannerPriority;
}


void __fastcall BannerMaster___c__DisplayClass0_0___ctor(
        BannerMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BannerMaster___c__DisplayClass0_0___GetEnableEntitiyList_b__1(
        BannerMaster___c__DisplayClass0_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.id == this->fields.gachaId;
}