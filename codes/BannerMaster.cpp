void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211633 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_4211633 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    117,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
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
  void *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_GachaEntity__o *ValidGachaEntityList; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  int32_t Count; // w0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t v30; // w22
  int32_t v31; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  BannerEntity_o *v33; // x24
  __int64 v34; // x10
  System_String_o **v35; // x25
  System_String_o *v36; // x26
  __int64 v37; // x1
  __int64 v38; // x2
  BannerMaster___c__DisplayClass0_0_o *v39; // x26
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x25
  struct BannerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v45; // x21
  struct BannerMaster___c_StaticFields *v46; // x0

  if ( (byte_4211632 & 1) == 0 )
  {
    sub_B0D8A4(&BannerEntity_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Comparison_BannerEntity___ctor__, v5);
    sub_B0D8A4(&System_Comparison_BannerEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Find__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BannerEntity__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Predicate_GachaEntity___ctor__, v15);
    sub_B0D8A4(&System_Predicate_GachaEntity__TypeInfo, v16);
    sub_B0D8A4(&SceneList_TypeInfo, v17);
    sub_B0D8A4(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v18);
    sub_B0D8A4(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v19);
    sub_B0D8A4(&BannerMaster___c__DisplayClass0_0_TypeInfo, v20);
    sub_B0D8A4(&BannerMaster___c_TypeInfo, v21);
    byte_4211632 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ValidGachaEntityList = GachaMaster__GetValidGachaEntityList((GachaMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BannerEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_WarQuestSelectionMaster = this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
               v31,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = (BannerEntity_o *)Item;
        v34 = *(&BannerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] == BannerEntity_TypeInfo )
        {
          Master_WarQuestSelectionMaster = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v28);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( v33->fields.linkType != 2 )
              goto LABEL_26;
            Master_WarQuestSelectionMaster = BannerEntity__GetLinkBody(v33, 0x2Fu, v29);
            if ( !Master_WarQuestSelectionMaster )
              break;
            v35 = (System_String_o **)Master_WarQuestSelectionMaster;
            if ( *((int *)Master_WarQuestSelectionMaster + 6) >= 1 )
            {
              v36 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
              if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SceneList_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (void *)SceneList__getSceneType(v36, 0LL);
              if ( (_DWORD)Master_WarQuestSelectionMaster != 20 )
                goto LABEL_26;
              v39 = (BannerMaster___c__DisplayClass0_0_o *)sub_B0D974(
                                                             BannerMaster___c__DisplayClass0_0_TypeInfo,
                                                             v37,
                                                             v38);
              BannerMaster___c__DisplayClass0_0___ctor(v39, 0LL);
              if ( *((int *)v35 + 6) >= 2 )
              {
                if ( !v39 )
                  break;
                System_Int32__TryParse(v35[5], &v39->fields.gachaId, 0LL);
                v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                 System_Predicate_GachaEntity__TypeInfo,
                                                                                 v40,
                                                                                 v41);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v42,
                  (Il2CppObject *)v39,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  (const MethodInfo_2AF7E30 *)Method_System_Predicate_GachaEntity___ctor__);
                if ( !ValidGachaEntityList )
                  break;
                Master_WarQuestSelectionMaster = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ValidGachaEntityList,
                                                   (System_Predicate_T__o *)v42,
                                                   (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
LABEL_26:
                  if ( !v26 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v26,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BannerEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_29:
  Master_WarQuestSelectionMaster = BannerMaster___c_TypeInfo;
  if ( (BYTE3(BannerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_WarQuestSelectionMaster = BannerMaster___c_TypeInfo;
  }
  static_fields = (struct BannerMaster___c_StaticFields *)*((_QWORD *)Master_WarQuestSelectionMaster + 23);
  _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BannerMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_BannerEntity__TypeInfo,
                                                                          v28,
                                                                          v29);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v45,
      Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BannerEntity___ctor__);
    v46 = BannerMaster___c_TypeInfo->static_fields;
    v46->__9__0_0 = (struct System_Comparison_BannerEntity__o *)_9__0_0;
    sub_B0D840(&v46->__9__0_0, _9__0_0);
  }
  if ( !v26 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213997 & 1) == 0 )
  {
    sub_B0D8A4(&BannerMaster___c_TypeInfo, v1);
    byte_4213997 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BannerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return n->fields.id == this->fields.gachaId;
}