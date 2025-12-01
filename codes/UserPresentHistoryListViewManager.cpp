void UserPresentHistoryListViewManager___ctor(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserPresentHistoryListViewManager__CreateList(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  UserPresentHistoryListViewManager___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v9; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int32_t v18; // w24
  int32_t v19; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x25
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  System_DateTime_o v26; // x0
  System_String_o *v27; // x28
  __int64 v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int v45; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v47; // x28
  __int64 v48; // x21
  __int64 v49; // x29
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t v66; // w25
  System_Collections_Generic_List_object__o *v67; // x26
  __int64 v68; // x27
  __int64 v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v88; // [xsp+10h] [xbp-80h]
  int v89; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v91; // [xsp+24h] [xbp-6Ch]
  __int64 v92; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC60FD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C713B0(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C713B0(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_1C713B0(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C713B0(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_1C713B0(&UserPresentHistoryListViewItem_TypeInfo);
    sub_1C713B0(&StringLiteral_10456/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC60FD = 1;
  }
  v92 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v6 = UserPresentHistoryListViewManager___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v6 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v6->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UserPresentHistoryListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v9,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_3175530 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_316B570 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v88 = (int)Instance;
  v89 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = 0;
    v19 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v19,
                   (const MethodInfo_316F1F4 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v23 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_19;
        }
        v25 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v25 = sub_1C47738(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0);
      }
      v91 = v19;
      v92 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
              v22,
              *(_QWORD *)(v25 + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v26.fields._dateData = (uint64_t)&v92;
      v27 = System_DateTime__ToString_65429908(v26, format, 0);
      v28 = sub_1C715FC(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_44097096((ListViewItem_o *)v28, v18, 0);
      *(_QWORD *)(v28 + 120) = v27;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 120), (int32_t)v27, v29, v30, v31, v32, v33, v34);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v28;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v44 + 4), v28, v35, v36, v37, v38, v39, v40);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v22,
                                   (const MethodInfo_316B570 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v45 = (int)Instance;
        for ( i = 0; i != v45; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v22,
                       i,
                       (const MethodInfo_316F1F4 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v47 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v48 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v49 = sub_1C715FC(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_44097096((ListViewItem_o *)v49, v18 + i + 1, 0);
          *(_QWORD *)(v49 + 120) = v48;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v49 + 120), v48, v50, v51, v52, v53, v54, v55);
          if ( !v47 )
            goto LABEL_48;
          v62 = v47->fields._items;
          v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v47->fields._version;
          if ( !v62 )
            goto LABEL_48;
          v64 = v47->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v47,
              (Il2CppObject *)v49,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v47->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v49;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v65 + 4), v49, v56, v57, v58, v59, v60, v61);
          }
        }
        v18 += i;
      }
      v66 = v18 + 1;
      if ( v19 != v89 )
      {
        v67 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v68 = sub_1C715FC(UserPresentHistoryListViewItem_TypeInfo);
        v69 = StringLiteral_1/*""*/;
        ListViewItem___ctor_44097096((ListViewItem_o *)v68, v66, 0);
        *(_QWORD *)(v68 + 120) = v69;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v68 + 120), v69, v70, v71, v72, v73, v74, v75);
        if ( !v67 )
          break;
        v82 = v67->fields._items;
        v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v67->fields._version;
        if ( !v82 )
          break;
        v84 = v67->fields._size;
        v66 = v18 + 2;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v67,
            (Il2CppObject *)v68,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v67->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v68;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v85 + 4), v68, v76, v77, v78, v79, v80, v81);
        }
        v19 = v91;
      }
      ++v19;
      v18 = v66;
      if ( v19 == v88 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1C71608(Instance, v4);
  }
LABEL_46:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_48;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserPresentHistoryListViewManager__SetObjectItem(
        UserPresentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CC60FE & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1C713B0(&UserPresentHistoryListViewObject_TypeInfo);
    byte_4CC60FE = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  UserPresentHistoryListViewObject__SetupDisp((UserPresentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float UserPresentHistoryListViewManager__get_ListViewHeight(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C71608(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC60FF & 1) == 0 )
  {
    sub_1C713B0(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_4CC60FF = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserPresentHistoryListViewManager___c___ctor(
        UserPresentHistoryListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_DateTime_o UserPresentHistoryListViewManager___c___CreateList_b__2_0(
        UserPresentHistoryListViewManager___c_o *this,
        UserPresentHistoryEntity_o *entity,
        const MethodInfo *method)
{
  int64_t createdAt; // x19

  if ( (byte_4CC6100 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC6100 = 1;
  }
  if ( !entity )
    sub_1C71608(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_41644032(createdAt, 0);
}