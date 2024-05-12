void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4388C88 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
    byte_4388C88 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    118,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_GachaEntity__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  BannerEntity_o *v11; // x24
  __int64 v12; // x10
  const MethodInfo *v13; // x2
  System_String_o **v14; // x25
  System_String_o *v15; // x26
  BannerMaster___c__DisplayClass0_0_o *v16; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x25
  struct BannerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v20; // x21
  struct BannerMaster___c_StaticFields *v21; // x0

  if ( (byte_4388C87 & 1) == 0 )
  {
    sub_B775C4(&BannerEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_BannerEntity___ctor__);
    sub_B775C4(&System_Comparison_BannerEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BannerEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_BannerEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_BannerEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BannerEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BannerEntity__TypeInfo);
    sub_B775C4(&Method_System_Predicate_GachaEntity___ctor__);
    sub_B775C4(&System_Predicate_GachaEntity__TypeInfo);
    sub_B775C4(&SceneList_TypeInfo);
    sub_B775C4(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__);
    sub_B775C4(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__);
    sub_B775C4(&BannerMaster___c__DisplayClass0_0_TypeInfo);
    sub_B775C4(&BannerMaster___c_TypeInfo);
    byte_4388C87 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ValidGachaEntityList = GachaMaster__GetValidGachaEntityList((GachaMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_WarQuestSelectionMaster = this->fields.list;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
               v9,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = (BannerEntity_o *)Item;
        v12 = *(&BannerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == BannerEntity_TypeInfo )
        {
          Master_WarQuestSelectionMaster = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v4);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( v11->fields.linkType != 2 )
              goto LABEL_26;
            Master_WarQuestSelectionMaster = BannerEntity__GetLinkBody(v11, 0x2Fu, v13);
            if ( !Master_WarQuestSelectionMaster )
              break;
            v14 = (System_String_o **)Master_WarQuestSelectionMaster;
            if ( *((int *)Master_WarQuestSelectionMaster + 6) >= 1 )
            {
              v15 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
              if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SceneList_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (void *)SceneList__getSceneType(v15, 0LL);
              if ( (_DWORD)Master_WarQuestSelectionMaster != 20 )
                goto LABEL_26;
              v16 = (BannerMaster___c__DisplayClass0_0_o *)sub_B77694(BannerMaster___c__DisplayClass0_0_TypeInfo);
              BannerMaster___c__DisplayClass0_0___ctor(v16, 0LL);
              if ( *((int *)v14 + 6) >= 2 )
              {
                if ( !v16 )
                  break;
                System_Int32__TryParse(v14[5], &v16->fields.gachaId, 0LL);
                v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_GachaEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v17,
                  (Il2CppObject *)v16,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  (const MethodInfo_2C3248C *)Method_System_Predicate_GachaEntity___ctor__);
                if ( !ValidGachaEntityList )
                  break;
                Master_WarQuestSelectionMaster = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ValidGachaEntityList,
                                                   (System_Predicate_T__o *)v17,
                                                   (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
LABEL_26:
                  if ( !v6 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v6,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BannerEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v20,
      Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_BannerEntity___ctor__);
    v21 = BannerMaster___c_TypeInfo->static_fields;
    v21->__9__0_0 = (struct System_Comparison_BannerEntity__o *)_9__0_0;
    sub_B77560(&v21->__9__0_0);
  }
  if ( !v6 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F6B & 1) == 0 )
  {
    sub_B775C4(&BannerMaster___c_TypeInfo);
    byte_4389F6B = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BannerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}