void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6622 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E6622 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    118,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v63; // x1
  System_Collections_Generic_List_GachaEntity__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x20
  int32_t Count; // w0
  int32_t v67; // w22
  int32_t v68; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  BannerEntity_o *v70; // x24
  __int64 v71; // x10
  const MethodInfo *v72; // x2
  System_String_o **v73; // x25
  System_String_o *v74; // x26
  BannerMaster___c__DisplayClass0_0_o *v75; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v76; // x25
  struct BannerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v79; // x21
  struct BannerMaster___c_StaticFields *v80; // x0

  if ( (byte_42E6621 & 1) == 0 )
  {
    sub_B5D5C4(&BannerEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Comparison_BannerEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Comparison_BannerEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Find__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_BannerEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Predicate_GachaEntity___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Predicate_GachaEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&SceneList_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v50, v51, v52);
    sub_B5D5C4(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v53, v54, v55);
    sub_B5D5C4(&BannerMaster___c__DisplayClass0_0_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&BannerMaster___c_TypeInfo, v59, v60, v61);
    byte_42E6621 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ValidGachaEntityList = GachaMaster__GetValidGachaEntityList((GachaMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_WarQuestSelectionMaster = this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v67 = Count;
    v68 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
               v68,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v70 = (BannerEntity_o *)Item;
        v71 = *(&BannerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v71
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[v71 - 1] == BannerEntity_TypeInfo )
        {
          Master_WarQuestSelectionMaster = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v63);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( v70->fields.linkType != 2 )
              goto LABEL_26;
            Master_WarQuestSelectionMaster = BannerEntity__GetLinkBody(v70, 0x2Fu, v72);
            if ( !Master_WarQuestSelectionMaster )
              break;
            v73 = (System_String_o **)Master_WarQuestSelectionMaster;
            if ( *((int *)Master_WarQuestSelectionMaster + 6) >= 1 )
            {
              v74 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
              if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SceneList_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (void *)SceneList__getSceneType(v74, 0LL);
              if ( (_DWORD)Master_WarQuestSelectionMaster != 20 )
                goto LABEL_26;
              v75 = (BannerMaster___c__DisplayClass0_0_o *)sub_B5D694(BannerMaster___c__DisplayClass0_0_TypeInfo);
              BannerMaster___c__DisplayClass0_0___ctor(v75, 0LL);
              if ( *((int *)v73 + 6) >= 2 )
              {
                if ( !v75 )
                  break;
                System_Int32__TryParse(v73[5], &v75->fields.gachaId, 0LL);
                v76 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_GachaEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v76,
                  (Il2CppObject *)v75,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  (const MethodInfo_2B9320C *)Method_System_Predicate_GachaEntity___ctor__);
                if ( !ValidGachaEntityList )
                  break;
                Master_WarQuestSelectionMaster = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ValidGachaEntityList,
                                                   (System_Predicate_T__o *)v76,
                                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
LABEL_26:
                  if ( !v65 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v65,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BannerEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v68 >= v67 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B5D69C(Master_WarQuestSelectionMaster, v63);
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
    v79 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v79,
      Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BannerEntity___ctor__);
    v80 = BannerMaster___c_TypeInfo->static_fields;
    v80->__9__0_0 = (struct System_Comparison_BannerEntity__o *)_9__0_0;
    sub_B5D560(&v80->__9__0_0);
  }
  if ( !v65 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E754D & 1) == 0 )
  {
    sub_B5D5C4(&BannerMaster___c_TypeInfo, v1, v2, v3);
    byte_42E754D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BannerMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}