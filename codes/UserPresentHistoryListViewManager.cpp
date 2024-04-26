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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserPresentHistoryListViewManager___c_c *v6; // x8
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_UserPresentHistoryEntity__DateTime__o *_9__2_0; // x21
  Il2CppObject *v9; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int32_t v18; // w24
  int32_t v19; // w21
  DataManager_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x25
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  System_Int32_array **v26; // x27
  __int64 v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w26
  int32_t i; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x28
  System_Int32_array **v37; // x22
  __int64 v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x26
  __int64 v47; // x27
  System_Int32_array **v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v57; // [xsp+10h] [xbp-70h]
  int32_t v58; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v60; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v61; // 0:x0.8

  if ( (byte_434FCED & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B70694(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B70694(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B70694(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    sub_B70694(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_B70694(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_B70694(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_B70694(&UserPresentHistoryListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_10646/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FCED = 1;
  }
  v60 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v6 = UserPresentHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v6 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B70764(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v9,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_29AC95C *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v10 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v10->__9__2_0 = _9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserPresentHistoryEntity__DateTime_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1CBD4D4 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v17,
                                                                  (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                source,
                                (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v57 = (_DWORD)Instance - 1;
  v58 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10646/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                    source,
                                    v19,
                                    (const MethodInfo_1CBA6E4 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = this->fields.itemList;
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          ++v23;
          p_offset += 4;
          if ( v23 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v25 = sub_B08590(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
              v22,
              *(_QWORD *)(v25 + 8));
      v61.fields.dateData = (uint64_t)&v60;
      v26 = (System_Int32_array **)System_DateTime__ToString_42981572(v61, format, 0LL);
      v27 = sub_B70764(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_23967088((ListViewItem_o *)v27, v18, 0LL);
      *(_QWORD *)(v27 + 112) = v26;
      sub_B70630((BattleServantConfConponent_o *)(v27 + 112), v26, v28, v29, v30, v31, v32, v33);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    v22,
                                    (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v34 = (int)Instance;
        for ( i = 0; i < v34; ++i )
        {
          Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v22,
                                        i,
                                        (const MethodInfo_1CBA6E4 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_37;
          v36 = this->fields.itemList;
          v37 = (System_Int32_array **)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                         Instance,
                                         Instance->klass[1]._1.image);
          v38 = sub_B70764(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_23967088((ListViewItem_o *)v38, v18 + i + 1, 0LL);
          *(_QWORD *)(v38 + 112) = v37;
          sub_B70630((BattleServantConfConponent_o *)(v38 + 112), v37, v39, v40, v41, v42, v43, v44);
          if ( !v36 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v18 += i;
      }
      v45 = v18 + 1;
      if ( v19 != v57 )
      {
        v46 = this->fields.itemList;
        v47 = sub_B70764(UserPresentHistoryListViewItem_TypeInfo);
        v48 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_23967088((ListViewItem_o *)v47, v45, 0LL);
        *(_QWORD *)(v47 + 112) = v48;
        sub_B70630((BattleServantConfConponent_o *)(v47 + 112), v48, v49, v50, v51, v52, v53, v54);
        if ( !v46 )
          break;
        v45 = v18 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v19;
      v18 = v45;
      if ( v19 >= v58 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B7076C(Instance, v4);
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

  if ( (byte_434FCEE & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_B70694(&UserPresentHistoryListViewObject_TypeInfo);
    byte_434FCEE = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  UserPresentHistoryListViewObject__SetupDisp((UserPresentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall UserPresentHistoryListViewManager__get_ListViewHeight(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B7076C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F327 & 1) == 0 )
  {
    sub_B70694(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_434F327 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434F328 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_434F328 = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_25948096(createdAt, 0LL);
}