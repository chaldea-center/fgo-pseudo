void UserPresentHistoryListViewManager___ctor(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserPresentHistoryListViewManager__CreateList(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  UserPresentHistoryListViewManager___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v8; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int32_t v13; // w24
  int32_t v14; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x25
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_DateTime_o v21; // x0
  System_String_o *v22; // x28
  __int64 v23; // x27
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int v32; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v34; // x28
  __int64 v35; // x21
  __int64 v36; // x29
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w25
  System_Collections_Generic_List_object__o *v46; // x26
  __int64 v47; // x27
  __int64 v48; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v59; // [xsp+10h] [xbp-80h]
  int v60; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v62; // [xsp+24h] [xbp-6Ch]
  __int64 v63; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C366F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C32C20(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_1C32C20(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C32C20(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_1C32C20(&UserPresentHistoryListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_10451/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C366F1 = 1;
  }
  v63 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v5 = UserPresentHistoryListViewManager___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v5 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = UserPresentHistoryListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v8,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_3107738 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v12,
                                                                  (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v59 = (int)Instance;
  v60 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = 0;
    v14 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v14,
                   (const MethodInfo_31013FC *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v18 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v18;
          p_offset += 4;
          if ( !v18 )
            goto LABEL_19;
        }
        v20 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v20 = sub_1C83438(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0);
      }
      v62 = v14;
      v63 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v20)(
              v17,
              *(_QWORD *)(v20 + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v21.fields._dateData = (uint64_t)&v63;
      v22 = System_DateTime__ToString_64918340(v21, format, 0);
      v23 = sub_1C32E6C(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_43702564((ListViewItem_o *)v23, v13, 0);
      *(_QWORD *)(v23 + 120) = v22;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 120), (int32_t)v22, v24, v25);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), v23, v26, v27);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v17,
                                   (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v32 = (int)Instance;
        for ( i = 0; i != v32; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v17,
                       i,
                       (const MethodInfo_31013FC *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v34 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v35 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v36 = sub_1C32E6C(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_43702564((ListViewItem_o *)v36, v13 + i + 1, 0);
          *(_QWORD *)(v36 + 120) = v35;
          sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 120), v35, v37, v38);
          if ( !v34 )
            goto LABEL_48;
          v41 = v34->fields._items;
          v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v34->fields._version;
          if ( !v41 )
            goto LABEL_48;
          v43 = v34->fields._size;
          if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v36,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v41->obj.klass + v43;
            v34->fields._size = v43 + 1;
            v44[4] = (Il2CppClass *)v36;
            sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), v36, v39, v40);
          }
        }
        v13 += i;
      }
      v45 = v13 + 1;
      if ( v14 != v60 )
      {
        v46 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v47 = sub_1C32E6C(UserPresentHistoryListViewItem_TypeInfo);
        v48 = StringLiteral_1/*""*/;
        ListViewItem___ctor_43702564((ListViewItem_o *)v47, v45, 0);
        *(_QWORD *)(v47 + 120) = v48;
        sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 120), v48, v49, v50);
        if ( !v46 )
          break;
        v53 = v46->fields._items;
        v54 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v46->fields._version;
        if ( !v53 )
          break;
        v55 = v46->fields._size;
        v45 = v13 + 2;
        if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            (Il2CppObject *)v47,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v46->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)v47;
          sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 4), v47, v51, v52);
        }
        v14 = v62;
      }
      ++v14;
      v13 = v45;
      if ( v14 == v59 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C366F2 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1C32C20(&UserPresentHistoryListViewObject_TypeInfo);
    byte_4C366F2 = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  UserPresentHistoryListViewObject__SetupDisp((UserPresentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float UserPresentHistoryListViewManager__get_ListViewHeight(
        UserPresentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C32E7C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C366F3 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_4C366F3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4C366F4 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C366F4 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_41267996(createdAt, 0);
}