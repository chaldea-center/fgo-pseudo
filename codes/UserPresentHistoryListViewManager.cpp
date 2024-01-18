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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserPresentHistoryListViewManager___c_c *v23; // x8
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_UserPresentHistoryEntity__DateTime__o *_9__2_0; // x21
  Il2CppObject *v26; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w24
  int32_t v36; // w21
  __int64 v37; // x3
  DataManager_c *klass; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x25
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  System_Int32_array **v44; // x27
  __int64 v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w26
  int32_t i; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v54; // x28
  System_Int32_array **v55; // x22
  __int64 v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t v63; // w25
  struct System_Collections_Generic_List_ListViewItem__o *v64; // x26
  __int64 v65; // x27
  System_Int32_array **v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v75; // [xsp+10h] [xbp-70h]
  int32_t v76; // [xsp+14h] [xbp-6Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-68h]
  __int64 v78; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v79; // 0:x0.8

  if ( (byte_4185DA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v8);
    sub_B2C35C(&Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__, v9);
    sub_B2C35C(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_B2C35C(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_B2C35C(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_B2C35C(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_10508/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_4185DA0 = 1;
  }
  v78 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v23 = UserPresentHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v23 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_UserPresentHistoryEntity__DateTime__o *)sub_B2C42C(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_UserPresentHistoryEntity__DateTime____ctor(
      _9__2_0,
      v26,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2711FE8 *)Method_System_Func_UserPresentHistoryEntity__DateTime___ctor__);
    v27 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v27->__9__2_0 = _9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserPresentHistoryEntity__DateTime_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1A9147C *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v34,
                                                                  (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                source,
                                (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v75 = (_DWORD)Instance - 1;
  v76 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10508/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                    source,
                                    v36,
                                    (const MethodInfo_1A8E68C *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
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
        v43 = sub_AC5258(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL, v37);
      }
      v78 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v43)(
              v40,
              *(_QWORD *)(v43 + 8));
      v79.fields.dateData = (uint64_t)&v78;
      v44 = (System_Int32_array **)System_DateTime__ToString_15282696(v79, format, 0LL);
      v45 = sub_B2C42C(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_24128628((ListViewItem_o *)v45, v35, 0LL);
      *(_QWORD *)(v45 + 112) = v44;
      sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 112), v44, v46, v47, v48, v49, v50, v51);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    v40,
                                    (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v52 = (int)Instance;
        for ( i = 0; i < v52; ++i )
        {
          Instance = (DataManager_o *)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v40,
                                        i,
                                        (const MethodInfo_1A8E68C *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_37;
          v54 = this->fields.itemList;
          v55 = (System_Int32_array **)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                         Instance,
                                         Instance->klass[1]._1.image);
          v56 = sub_B2C42C(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_24128628((ListViewItem_o *)v56, v35 + i + 1, 0LL);
          *(_QWORD *)(v56 + 112) = v55;
          sub_B2C2F8((BattleServantConfConponent_o *)(v56 + 112), v55, v57, v58, v59, v60, v61, v62);
          if ( !v54 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        v35 += i;
      }
      v63 = v35 + 1;
      if ( v36 != v75 )
      {
        v64 = this->fields.itemList;
        v65 = sub_B2C42C(UserPresentHistoryListViewItem_TypeInfo);
        v66 = (System_Int32_array **)StringLiteral_1/*""*/;
        ListViewItem___ctor_24128628((ListViewItem_o *)v65, v63, 0LL);
        *(_QWORD *)(v65 + 112) = v66;
        sub_B2C2F8((BattleServantConfConponent_o *)(v65 + 112), v66, v67, v68, v69, v70, v71, v72);
        if ( !v64 )
          break;
        v63 = v35 + 2;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      ++v36;
      v35 = v63;
      if ( v36 >= v76 )
        goto LABEL_35;
    }
LABEL_37:
    sub_B2C434(Instance, v21);
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

  if ( (byte_4185DA1 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_B2C35C(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_4185DA1 = 1;
  }
  if ( !obj
    || (v5 = *(&UserPresentHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
    sub_B2C434(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41856C7 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_41856C7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856C8 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_B2C35C(&NetworkManager_TypeInfo, entity);
    byte_41856C8 = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  createdAt = entity->fields.createdAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getServerDateTime_26271756(createdAt, 0LL);
}