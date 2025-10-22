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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int32_t v14; // w24
  int32_t v15; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x25
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_DateTime_o v22; // x0
  System_String_o *v23; // x28
  __int64 v24; // x27
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int v33; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v35; // x28
  __int64 v36; // x21
  __int64 v37; // x29
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w25
  System_Collections_Generic_List_object__o *v47; // x26
  __int64 v48; // x27
  __int64 v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v60; // [xsp+10h] [xbp-80h]
  int v61; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v63; // [xsp+24h] [xbp-6Ch]
  __int64 v64; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C55A81 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C3E564(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C3E564(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_1C3E564(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C3E564(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_1C3E564(&UserPresentHistoryListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_10454/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C55A81 = 1;
  }
  v64 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v9,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_3123E94 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v13,
                                                                  (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v60 = (int)Instance;
  v61 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = 0;
    v15 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10454/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v15,
                   (const MethodInfo_311DB58 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v19 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v21 = sub_1C8ED7C(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0);
      }
      v63 = v15;
      v64 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v21)(
              v18,
              *(_QWORD *)(v21 + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v22.fields._dateData = (uint64_t)&v64;
      v23 = System_DateTime__ToString_65036264(v22, format, 0);
      v24 = sub_1C3E7B0(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_43860152((ListViewItem_o *)v24, v14, 0);
      *(_QWORD *)(v24 + 120) = v23;
      sub_1C3E508((CGThumbnailListItem_o *)(v24 + 120), (int32_t)v23, v25, v26);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v24;
        sub_1C3E508((CGThumbnailListItem_o *)(v32 + 4), v24, v27, v28);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v18,
                                   (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v33 = (int)Instance;
        for ( i = 0; i != v33; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v18,
                       i,
                       (const MethodInfo_311DB58 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v35 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v36 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v37 = sub_1C3E7B0(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_43860152((ListViewItem_o *)v37, v14 + i + 1, 0);
          *(_QWORD *)(v37 + 120) = v36;
          sub_1C3E508((CGThumbnailListItem_o *)(v37 + 120), v36, v38, v39);
          if ( !v35 )
            goto LABEL_48;
          v42 = v35->fields._items;
          v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v35->fields._version;
          if ( !v42 )
            goto LABEL_48;
          v44 = v35->fields._size;
          if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v35,
              (Il2CppObject *)v37,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v42->obj.klass + v44;
            v35->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v37;
            sub_1C3E508((CGThumbnailListItem_o *)(v45 + 4), v37, v40, v41);
          }
        }
        v14 += i;
      }
      v46 = v14 + 1;
      if ( v15 != v61 )
      {
        v47 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v48 = sub_1C3E7B0(UserPresentHistoryListViewItem_TypeInfo);
        v49 = StringLiteral_1/*""*/;
        ListViewItem___ctor_43860152((ListViewItem_o *)v48, v46, 0);
        *(_QWORD *)(v48 + 120) = v49;
        sub_1C3E508((CGThumbnailListItem_o *)(v48 + 120), v49, v50, v51);
        if ( !v47 )
          break;
        v54 = v47->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v47->fields._version;
        if ( !v54 )
          break;
        v56 = v47->fields._size;
        v46 = v14 + 2;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)v48,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v47->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v48;
          sub_1C3E508((CGThumbnailListItem_o *)(v57 + 4), v48, v52, v53);
        }
        v15 = v63;
      }
      ++v15;
      v14 = v46;
      if ( v15 == v60 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1C3E7C0(Instance, v4);
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

  if ( (byte_4C55A82 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1C3E564(&UserPresentHistoryListViewObject_TypeInfo);
    byte_4C55A82 = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
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
    sub_1C3E7C0(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C55A83 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_4C55A83 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_1C3E508(
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

  if ( (byte_4C55A84 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55A84 = 1;
  }
  if ( !entity )
    sub_1C3E7C0(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_41416004(createdAt, 0);
}