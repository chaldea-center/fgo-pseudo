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
  WebViewManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserPresentHistoryListViewManager___c_c *v26; // x8
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_UserPresentHistoryEntity__DateTime__o *_9__2_0; // x21
  Il2CppObject *v29; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int32_t v38; // w0
  int32_t v39; // w24
  int32_t v40; // w21
  UserPresentHistoryEntity_o *v41; // x0
  UserPresentHistoryEntity_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x25
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  System_Int32_array **v48; // x27
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t v60; // w0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w26
  int32_t i; // w27
  UserPresentHistoryEntity_o *v67; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v68; // x28
  System_Int32_array **v69; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int32_t v81; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v82; // x26
  __int64 v83; // x27
  System_Int32_array **v84; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v93; // [xsp+10h] [xbp-70h]
  int32_t v94; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v96; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v97; // 0:x0.8

  if ( (byte_40F8089 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v8);
    sub_B16FFC(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__, v9);
    sub_B16FFC(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_B16FFC(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_B16FFC(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_B16FFC(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_10475/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_B16FFC(&StringLiteral_1/*""*/, v19);
    byte_40F8089 = 1;
  }
  v96 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v26 = UserPresentHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v26 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B170CC(
                                                                     System_Func_UserPresentHistoryEntity__DateTime__TypeInfo,
                                                                     v21,
                                                                     v22,
                                                                     v23,
                                                                     v24);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v29,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2B6AF24 *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v30 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v30->__9__2_0 = _9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserPresentHistoryEntity__DateTime_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_18D8790 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v37,
                                                                  (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  v38 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          source,
          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v93 = v38 - 1;
  v94 = v38;
  if ( v38 >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10475/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v39 = 0;
    v40 = 0;
    while ( 1 )
    {
      v41 = System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
              source,
              v40,
              (const MethodInfo_18D5DD4 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !v41 )
        break;
      klass = v41->klass;
      itemList = this->fields.itemList;
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
      if ( *(_WORD *)&v41->klass->_2.bitflags1 )
      {
        v45 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          ++v45;
          p_offset += 4;
          if ( v45 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v47 = sub_AAFEF8(v41, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v96 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v47)(
              v44,
              *(_QWORD *)(v47 + 8));
      v97.fields.dateData = (uint64_t)&v96;
      v48 = (System_Int32_array **)System_DateTime__ToString_15197012(v97, format, 0LL);
      v53 = sub_B170CC(UserPresentHistoryListViewItem_TypeInfo, v49, v50, v51, v52);
      ListViewItem___ctor_30173668((ListViewItem_o *)v53, v39, 0LL);
      *(_QWORD *)(v53 + 112) = v48;
      sub_B16F98((BattleServantConfConponent_o *)(v53 + 112), v48, v54, v55, v56, v57, v58, v59);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v60 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
              v44,
              (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( v60 >= 1 )
      {
        v65 = v60;
        for ( i = 0; i < v65; ++i )
        {
          v67 = System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                  v44,
                  i,
                  (const MethodInfo_18D5DD4 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !v67 )
            goto LABEL_37;
          v68 = this->fields.itemList;
          v69 = (System_Int32_array **)((__int64 (__fastcall *)(UserPresentHistoryEntity_o *, Il2CppMethodPointer))v67->klass->vtable._3_ToString.method)(
                                         v67,
                                         v67->klass->vtable._4_get_PrimaryKey.methodPtr);
          v74 = sub_B170CC(UserPresentHistoryListViewItem_TypeInfo, v70, v71, v72, v73);
          ListViewItem___ctor_30173668((ListViewItem_o *)v74, v39 + i + 1, 0LL);
          *(_QWORD *)(v74 + 112) = v69;
          sub_B16F98((BattleServantConfConponent_o *)(v74 + 112), v69, v75, v76, v77, v78, v79, v80);
          if ( !v68 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v39 += i;
      }
      v81 = v39 + 1;
      if ( v40 != v93 )
      {
        v82 = this->fields.itemList;
        v83 = sub_B170CC(UserPresentHistoryListViewItem_TypeInfo, v61, v62, v63, v64);
        v84 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_30173668((ListViewItem_o *)v83, v81, 0LL);
        *(_QWORD *)(v83 + 112) = v84;
        sub_B16F98((BattleServantConfConponent_o *)(v83 + 112), v84, v85, v86, v87, v88, v89, v90);
        if ( !v82 )
          break;
        v81 = v39 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v40;
      v39 = v81;
      if ( v40 >= v94 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B170D4();
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

  if ( (byte_40F808A & 1) == 0 )
  {
    sub_B16FFC(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_40F808A = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  UserPresentHistoryListViewObject__SetupDisp((UserPresentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall UserPresentHistoryListViewManager__get_ListViewHeight(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t ItemSum; // w0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B170D4();
  return seed->fields.arrangementPich.fields.y * (float)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F799F & 1) == 0 )
  {
    sub_B16FFC(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_40F799F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserPresentHistoryListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F79A0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, entity);
    byte_40F79A0 = 1;
  }
  if ( !entity )
    sub_B170D4();
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_23685560(createdAt, 0LL);
}