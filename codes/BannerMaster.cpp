void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41849EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_41849EB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    117,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
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
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_GachaEntity__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  int32_t Count; // w0
  int32_t v27; // w22
  int32_t v28; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  BannerEntity_o *v30; // x24
  __int64 v31; // x10
  const MethodInfo *v32; // x2
  System_String_o **v33; // x25
  System_String_o *v34; // x26
  BannerMaster___c__DisplayClass0_0_o *v35; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x25
  struct BannerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v39; // x21
  struct BannerMaster___c_StaticFields *v40; // x0

  if ( (byte_41849EA & 1) == 0 )
  {
    sub_B2C35C(&BannerEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B2C35C(&Method_System_Comparison_BannerEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_BannerEntity__TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Find__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_BannerEntity__TypeInfo, v14);
    sub_B2C35C(&Method_System_Predicate_GachaEntity___ctor__, v15);
    sub_B2C35C(&System_Predicate_GachaEntity__TypeInfo, v16);
    sub_B2C35C(&SceneList_TypeInfo, v17);
    sub_B2C35C(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v18);
    sub_B2C35C(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v19);
    sub_B2C35C(&BannerMaster___c__DisplayClass0_0_TypeInfo, v20);
    sub_B2C35C(&BannerMaster___c_TypeInfo, v21);
    byte_41849EA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ValidGachaEntityList = GachaMaster__GetValidGachaEntityList((GachaMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_WarQuestSelectionMaster = this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
               v28,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = (BannerEntity_o *)Item;
        v31 = *(&BannerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == BannerEntity_TypeInfo )
        {
          Master_WarQuestSelectionMaster = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v23);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( v30->fields.linkType != 2 )
              goto LABEL_26;
            Master_WarQuestSelectionMaster = BannerEntity__GetLinkBody(v30, 0x2Fu, v32);
            if ( !Master_WarQuestSelectionMaster )
              break;
            v33 = (System_String_o **)Master_WarQuestSelectionMaster;
            if ( *((int *)Master_WarQuestSelectionMaster + 6) >= 1 )
            {
              v34 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
              if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SceneList_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (void *)SceneList__getSceneType(v34, 0LL);
              if ( (_DWORD)Master_WarQuestSelectionMaster != 20 )
                goto LABEL_26;
              v35 = (BannerMaster___c__DisplayClass0_0_o *)sub_B2C42C(BannerMaster___c__DisplayClass0_0_TypeInfo);
              BannerMaster___c__DisplayClass0_0___ctor(v35, 0LL);
              if ( *((int *)v33 + 6) >= 2 )
              {
                if ( !v35 )
                  break;
                System_Int32__TryParse(v33[5], &v35->fields.gachaId, 0LL);
                v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_GachaEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v36,
                  (Il2CppObject *)v35,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  (const MethodInfo_2952BE4 *)Method_System_Predicate_GachaEntity___ctor__);
                if ( !ValidGachaEntityList )
                  break;
                Master_WarQuestSelectionMaster = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ValidGachaEntityList,
                                                   (System_Predicate_T__o *)v36,
                                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
LABEL_26:
                  if ( !v25 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v25,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BannerEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B2C434(Master_WarQuestSelectionMaster, v23);
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
    v39 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v39,
      Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BannerEntity___ctor__);
    v40 = BannerMaster___c_TypeInfo->static_fields;
    v40->__9__0_0 = (struct System_Comparison_BannerEntity__o *)_9__0_0;
    sub_B2C2F8(&v40->__9__0_0, _9__0_0);
  }
  if ( !v25 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BE1 & 1) == 0 )
  {
    sub_B2C35C(&BannerMaster___c_TypeInfo, v1);
    byte_4186BE1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BannerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}