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
  __int64 v20; // x3
  DataManager_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x25
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  System_Int32_array **v27; // x27
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t v35; // w26
  int32_t i; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x28
  System_Int32_array **v38; // x22
  __int64 v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v47; // x26
  __int64 v48; // x27
  System_Int32_array **v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v58; // [xsp+10h] [xbp-70h]
  int32_t v59; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v61; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v62; // 0:x0.8

  if ( (byte_42AE0EC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B52984(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B52984(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_B52984(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    sub_B52984(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_B52984(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_B52984(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_B52984(&UserPresentHistoryListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_10581/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE0EC = 1;
  }
  v61 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
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
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B52A54(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v9,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2BC94A0 *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v10 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v10->__9__2_0 = _9__2_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B63CB8 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v17,
                                                                  (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                source,
                                (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v58 = (_DWORD)Instance - 1;
  v59 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10581/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                    source,
                                    v19,
                                    (const MethodInfo_1B60EC8 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = this->fields.itemList;
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v24 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          ++v24;
          p_offset += 4;
          if ( v24 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v26 = sub_AEB880(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL, v20);
      }
      v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v26)(
              v23,
              *(_QWORD *)(v26 + 8));
      v62.fields.dateData = (uint64_t)&v61;
      v27 = (System_Int32_array **)System_DateTime__ToString_15518528(v62, format, 0LL);
      v28 = sub_B52A54(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_23532700((ListViewItem_o *)v28, v18, 0LL);
      *(_QWORD *)(v28 + 112) = v27;
      sub_B52920((BattleServantConfConponent_o *)(v28 + 112), v27, v29, v30, v31, v32, v33, v34);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    v23,
                                    (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v35 = (int)Instance;
        for ( i = 0; i < v35; ++i )
        {
          Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v23,
                                        i,
                                        (const MethodInfo_1B60EC8 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_37;
          v37 = this->fields.itemList;
          v38 = (System_Int32_array **)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                         Instance,
                                         Instance->klass[1]._1.image);
          v39 = sub_B52A54(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_23532700((ListViewItem_o *)v39, v18 + i + 1, 0LL);
          *(_QWORD *)(v39 + 112) = v38;
          sub_B52920((BattleServantConfConponent_o *)(v39 + 112), v38, v40, v41, v42, v43, v44, v45);
          if ( !v37 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v18 += i;
      }
      v46 = v18 + 1;
      if ( v19 != v58 )
      {
        v47 = this->fields.itemList;
        v48 = sub_B52A54(UserPresentHistoryListViewItem_TypeInfo);
        v49 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_23532700((ListViewItem_o *)v48, v46, 0LL);
        *(_QWORD *)(v48 + 112) = v49;
        sub_B52920((BattleServantConfConponent_o *)(v48 + 112), v49, v50, v51, v52, v53, v54, v55);
        if ( !v47 )
          break;
        v46 = v18 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v19;
      v18 = v46;
      if ( v19 >= v59 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42AE0ED & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_B52984(&UserPresentHistoryListViewObject_TypeInfo);
    byte_42AE0ED = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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
    sub_B52A5C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5A6 & 1) == 0 )
  {
    sub_B52984(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_42AE5A6 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AE5A7 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE5A7 = 1;
  }
  if ( !entity )
    sub_B52A5C(this, entity);
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_25742200(createdAt, 0LL);
}