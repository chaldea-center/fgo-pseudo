void __fastcall UserPresentHistoryListViewManager___ctor(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserPresentHistoryListViewManager__CreateList(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserPresentHistoryListViewManager___c_c *v24; // x8
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_UserPresentHistoryEntity__DateTime__o *_9__2_0; // x21
  Il2CppObject *v27; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v36; // w24
  int32_t v37; // w21
  DataManager_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x25
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  System_Int32_array **v44; // x27
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t v56; // w26
  int32_t i; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v58; // x28
  System_Int32_array **v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v70; // x26
  __int64 v71; // x27
  System_Int32_array **v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v81; // [xsp+10h] [xbp-70h]
  int32_t v82; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v84; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v85; // 0:x0.8

  if ( (byte_4212BA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v8);
    sub_B0D8A4(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__, v9);
    sub_B0D8A4(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_B0D8A4(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_B0D8A4(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_B0D8A4(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_10533/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_4212BA7 = 1;
  }
  v84 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v24 = UserPresentHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v24 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B0D974(
                                                                     System_Func_UserPresentHistoryEntity__DateTime__TypeInfo,
                                                                     v21,
                                                                     v22);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v27,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2618D9C *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v28 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v28->__9__2_0 = _9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserPresentHistoryEntity__DateTime_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1B4C748 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v35,
                                                                  (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                source,
                                (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v81 = (_DWORD)Instance - 1;
  v82 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10533/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v36 = 0;
    v37 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                    source,
                                    v37,
                                    (const MethodInfo_1B49958 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = this->fields.itemList;
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v41 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          ++v41;
          p_offset += 4;
          if ( v41 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v43 = sub_AA67A0(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v84 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v43)(
              v40,
              *(_QWORD *)(v43 + 8));
      v85.fields.dateData = (uint64_t)&v84;
      v44 = (System_Int32_array **)System_DateTime__ToString_15045904(v85, format, 0LL);
      v47 = sub_B0D974(UserPresentHistoryListViewItem_TypeInfo, v45, v46);
      ListViewItem___ctor_23700744((ListViewItem_o *)v47, v36, 0LL);
      *(_QWORD *)(v47 + 112) = v44;
      sub_B0D840((BattleServantConfConponent_o *)(v47 + 112), v44, v48, v49, v50, v51, v52, v53);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    v40,
                                    (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v56 = (int)Instance;
        for ( i = 0; i < v56; ++i )
        {
          Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v40,
                                        i,
                                        (const MethodInfo_1B49958 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_37;
          v58 = this->fields.itemList;
          v59 = (System_Int32_array **)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                         Instance,
                                         Instance->klass[1]._1.image);
          v62 = sub_B0D974(UserPresentHistoryListViewItem_TypeInfo, v60, v61);
          ListViewItem___ctor_23700744((ListViewItem_o *)v62, v36 + i + 1, 0LL);
          *(_QWORD *)(v62 + 112) = v59;
          sub_B0D840((BattleServantConfConponent_o *)(v62 + 112), v59, v63, v64, v65, v66, v67, v68);
          if ( !v58 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v36 += i;
      }
      v69 = v36 + 1;
      if ( v37 != v81 )
      {
        v70 = this->fields.itemList;
        v71 = sub_B0D974(UserPresentHistoryListViewItem_TypeInfo, v54, v55);
        v72 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_23700744((ListViewItem_o *)v71, v69, 0LL);
        *(_QWORD *)(v71 + 112) = v72;
        sub_B0D840((BattleServantConfConponent_o *)(v71 + 112), v72, v73, v74, v75, v76, v77, v78);
        if ( !v70 )
          break;
        v69 = v36 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v70,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v37;
      v36 = v69;
      if ( v37 >= v82 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B0D97C(Instance);
  }
LABEL_35:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentHistoryListViewManager__SetObjectItem(
        UserPresentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_4212BA8 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_B0D8A4(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_4212BA8 = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  UserPresentHistoryListViewObject__SetupDisp((UserPresentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall UserPresentHistoryListViewManager__get_ListViewHeight(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B0D97C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_421263E & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_421263E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(UserPresentHistoryListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall UserPresentHistoryListViewManager___c___ctor(
        UserPresentHistoryListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_DateTime_o __fastcall UserPresentHistoryListViewManager___c___CreateList_b__2_0(
        UserPresentHistoryListViewManager___c_o *this,
        UserPresentHistoryEntity_o *entity,
        const MethodInfo *method)
{
  int64_t createdAt; // x19

  if ( (byte_421263F & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_B0D8A4(&NetworkManager_TypeInfo, entity);
    byte_421263F = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_25504848(createdAt, 0LL);
}