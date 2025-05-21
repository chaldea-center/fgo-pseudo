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
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x0
  UserPresentHistoryListViewManager___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v26; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int32_t v31; // w24
  int32_t v32; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x25
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *v39; // x28
  __int64 v40; // x27
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  int v49; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v51; // x28
  __int64 v52; // x21
  __int64 v53; // x29
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  int32_t v62; // w25
  System_Collections_Generic_List_object__o *v63; // x26
  __int64 v64; // x27
  void *v65; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v76; // [xsp+10h] [xbp-80h]
  int v77; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v79; // [xsp+24h] [xbp-6Ch]
  __int64 v80; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v81; // 0:x0.8

  if ( (byte_4B43810 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_1BDB878(&System_DateTime_TypeInfo, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v9);
    sub_1BDB878(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_1BDB878(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BDB878(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_1BDB878(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_1BDB878(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_10447/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_1BDB878(&StringLiteral_1/*""*/, v19);
    byte_4B43810 = 1;
  }
  v80 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v23 = UserPresentHistoryListViewManager___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v23 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v23->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = UserPresentHistoryListViewManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v26,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_305A1D8 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v30,
                                                                  (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v76 = (int)Instance;
  v77 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = 0;
    v32 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10447/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v32,
                   (const MethodInfo_3053E9C *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v36 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_19;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_19:
        p_method = sub_1C2C00C(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v79 = v32;
      v80 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v35,
              *(_QWORD *)(p_method + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v81.fields._dateData = (uint64_t)&v80;
      v39 = System_DateTime__ToString_63976336(v81, format, 0LL);
      v40 = sub_1BDBAC4(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_42734232((ListViewItem_o *)v40, v31, 0LL);
      *(_QWORD *)(v40 + 112) = v39;
      sub_1BDB81C((CGThumbnailListItem_o *)(v40 + 112), (int32_t)v39, v41, v42);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v40,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v40;
        sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 4), v40, v43, v44);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v35,
                                   (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v49 = (int)Instance;
        for ( i = 0; i != v49; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v35,
                       i,
                       (const MethodInfo_3053E9C *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v51 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v52 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Instance->klass->vtable[3].method)(
                  Instance,
                  Instance->klass->vtable[4].methodPtr);
          v53 = sub_1BDBAC4(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_42734232((ListViewItem_o *)v53, v31 + i + 1, 0LL);
          *(_QWORD *)(v53 + 112) = v52;
          sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 112), v52, v54, v55);
          if ( !v51 )
            goto LABEL_48;
          v58 = v51->fields._items;
          v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v51->fields._version;
          if ( !v58 )
            goto LABEL_48;
          v60 = v51->fields._size;
          if ( (unsigned int)v60 >= v58->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v53,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &v58->obj.klass + v60;
            v51->fields._size = v60 + 1;
            v61[4] = (Il2CppClass *)v53;
            sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 4), v53, v56, v57);
          }
        }
        v31 += i;
      }
      v62 = v31 + 1;
      if ( v32 != v77 )
      {
        v63 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v64 = sub_1BDBAC4(UserPresentHistoryListViewItem_TypeInfo);
        v65 = StringLiteral_1/*""*/;
        ListViewItem___ctor_42734232((ListViewItem_o *)v64, v62, 0LL);
        *(_QWORD *)(v64 + 112) = v65;
        sub_1BDB81C((CGThumbnailListItem_o *)(v64 + 112), (int32_t)v65, v66, v67);
        if ( !v63 )
          break;
        v70 = v63->fields._items;
        v71 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v63->fields._version;
        if ( !v70 )
          break;
        v72 = v63->fields._size;
        v62 = v31 + 2;
        if ( (unsigned int)v72 >= v70->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v63,
            (Il2CppObject *)v64,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v70->obj.klass + v72;
          v63->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v64;
          sub_1BDB81C((CGThumbnailListItem_o *)(v73 + 4), v64, v68, v69);
        }
        v32 = v79;
      }
      ++v32;
      v31 = v62;
      if ( v32 == v76 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1BDBAD4(Instance, v21);
  }
LABEL_46:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_48;
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentHistoryListViewManager__SetObjectItem(
        UserPresentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B43811 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1BDB878(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_4B43811 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
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
    sub_1BDBAD4(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B43812 & 1) == 0 )
  {
    sub_1BDB878(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_4B43812 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4B43813 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1BDB878(&NetworkManager_TypeInfo, entity);
    byte_4B43813 = 1;
  }
  if ( !entity )
    sub_1BDBAD4(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_40279056(createdAt, 0LL);
}