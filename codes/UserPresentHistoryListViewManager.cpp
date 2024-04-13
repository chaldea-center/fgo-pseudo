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
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserPresentHistoryListViewManager___c_c *v59; // x8
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_UserPresentHistoryEntity__DateTime__o *_9__2_0; // x21
  Il2CppObject *v62; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  int32_t v71; // w24
  int32_t v72; // w21
  __int64 v73; // x3
  DataManager_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x25
  unsigned __int64 v77; // x10
  int32_t *p_offset; // x11
  __int64 v79; // x0
  System_Int32_array **v80; // x27
  __int64 v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int32_t v88; // w26
  int32_t i; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v90; // x28
  System_Int32_array **v91; // x22
  __int64 v92; // x20
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  int32_t v99; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v100; // x26
  __int64 v101; // x27
  System_Int32_array **v102; // x20
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v111; // [xsp+10h] [xbp-70h]
  int32_t v112; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v114; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v115; // 0:x0.8

  if ( (byte_42E6A53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v41, v42, v43);
    sub_B5D5C4(&UserPresentHistoryListViewManager___c_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UserPresentHistoryListViewItem_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_10625/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1/*""*/, v53, v54, v55);
    byte_42E6A53 = 1;
  }
  v114 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v59 = UserPresentHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v59 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B5D694(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v62,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2C2F0B4 *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v63 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v63->__9__2_0 = _9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v63->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserPresentHistoryEntity__DateTime_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1CACB90 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v70,
                                                                  (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                source,
                                (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v111 = (_DWORD)Instance - 1;
  v112 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10625/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v71 = 0;
    v72 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                    source,
                                    v72,
                                    (const MethodInfo_1CA9DA0 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = this->fields.itemList;
      v76 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v77 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          ++v77;
          p_offset += 4;
          if ( v77 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v79 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v79 = sub_AF54C0(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL, v73);
      }
      v114 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v79)(
               v76,
               *(_QWORD *)(v79 + 8));
      v115.fields.dateData = (uint64_t)&v114;
      v80 = (System_Int32_array **)System_DateTime__ToString_15577356(v115, format, 0LL);
      v81 = sub_B5D694(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_23901828((ListViewItem_o *)v81, v71, 0LL);
      *(_QWORD *)(v81 + 112) = v80;
      sub_B5D560((BattleServantConfConponent_o *)(v81 + 112), v80, v82, v83, v84, v85, v86, v87);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    v76,
                                    (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v88 = (int)Instance;
        for ( i = 0; i < v88; ++i )
        {
          Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v76,
                                        i,
                                        (const MethodInfo_1CA9DA0 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_37;
          v90 = this->fields.itemList;
          v91 = (System_Int32_array **)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                         Instance,
                                         Instance->klass[1]._1.image);
          v92 = sub_B5D694(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_23901828((ListViewItem_o *)v92, v71 + i + 1, 0LL);
          *(_QWORD *)(v92 + 112) = v91;
          sub_B5D560((BattleServantConfConponent_o *)(v92 + 112), v91, v93, v94, v95, v96, v97, v98);
          if ( !v90 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v90,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v71 += i;
      }
      v99 = v71 + 1;
      if ( v72 != v111 )
      {
        v100 = this->fields.itemList;
        v101 = sub_B5D694(UserPresentHistoryListViewItem_TypeInfo);
        v102 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_23901828((ListViewItem_o *)v101, v99, 0LL);
        *(_QWORD *)(v101 + 112) = v102;
        sub_B5D560((BattleServantConfConponent_o *)(v101 + 112), v102, v103, v104, v105, v106, v107, v108);
        if ( !v100 )
          break;
        v99 = v71 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v72;
      v71 = v99;
      if ( v72 >= v112 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B5D69C(Instance, v57);
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

  if ( (byte_42E6A54 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_B5D5C4(
                                                    &UserPresentHistoryListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42E6A54 = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
    sub_B5D69C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7019 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentHistoryListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E7019 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  int64_t createdAt; // x19

  if ( (byte_42E701A & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_B5D5C4(
                                                        &NetworkManager_TypeInfo,
                                                        (_DWORD)entity,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E701A = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_26077756(createdAt, 0LL);
}