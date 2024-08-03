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
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UserPresentHistoryListViewManager___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v27; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int32_t v32; // w24
  int32_t v33; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x25
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *v40; // x28
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x27
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  int v54; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v56; // x28
  __int64 v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x29
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  int32_t v69; // w25
  System_Collections_Generic_List_object__o *v70; // x26
  __int64 v71; // x27
  void *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v83; // [xsp+10h] [xbp-80h]
  int v84; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v86; // [xsp+24h] [xbp-6Ch]
  __int64 v87; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v88; // 0:x0.8

  if ( (byte_49FB1C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_1B640C8(&System_DateTime_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v9);
    sub_1B640C8(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_1B640C8(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_1B640C8(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_1B640C8(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_10402/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49FB1C1 = 1;
  }
  v87 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v24 = UserPresentHistoryListViewManager___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo);
    v24 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = UserPresentHistoryListViewManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                             System_Func_UserPresentHistoryEntity__DateTime__TypeInfo,
                                             v22,
                                             v23);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v27,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2E5E0F4 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v31,
                                                                  (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v83 = (int)Instance;
  v84 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = 0;
    v33 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v33,
                   (const MethodInfo_2E58FB0 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v37 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v37;
          p_offset += 4;
          if ( !v37 )
            goto LABEL_19;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_19:
        p_method = sub_1BB60A8(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v86 = v33;
      v87 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v36,
              *(_QWORD *)(p_method + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v88.fields._dateData = (uint64_t)&v87;
      v40 = System_DateTime__ToString_62066032(v88, format, 0LL);
      v43 = sub_1B64314(UserPresentHistoryListViewItem_TypeInfo, v41, v42);
      ListViewItem___ctor_40370988((ListViewItem_o *)v43, v32, 0LL);
      *(_QWORD *)(v43 + 112) = v40;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 112), (int32_t)v40, v44, v45);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v43,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v43;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), v43, v46, v47);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v36,
                                   (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v54 = (int)Instance;
        for ( i = 0; i != v54; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v36,
                       i,
                       (const MethodInfo_2E58FB0 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v56 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v57 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Instance->klass->vtable[3].method)(
                  Instance,
                  Instance->klass->vtable[4].methodPtr);
          v60 = sub_1B64314(UserPresentHistoryListViewItem_TypeInfo, v58, v59);
          ListViewItem___ctor_40370988((ListViewItem_o *)v60, v32 + i + 1, 0LL);
          *(_QWORD *)(v60 + 112) = v57;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 112), v57, v61, v62);
          if ( !v56 )
            goto LABEL_48;
          v65 = v56->fields._items;
          v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v56->fields._version;
          if ( !v65 )
            goto LABEL_48;
          v67 = v56->fields._size;
          if ( (unsigned int)v67 >= v65->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v56,
              (Il2CppObject *)v60,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            v56->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)v60;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), v60, v63, v64);
          }
        }
        v32 += i;
      }
      v69 = v32 + 1;
      if ( v33 != v84 )
      {
        v70 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v71 = sub_1B64314(UserPresentHistoryListViewItem_TypeInfo, v52, v53);
        v72 = StringLiteral_1/*""*/;
        ListViewItem___ctor_40370988((ListViewItem_o *)v71, v69, 0LL);
        *(_QWORD *)(v71 + 112) = v72;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 112), (int32_t)v72, v73, v74);
        if ( !v70 )
          break;
        v77 = v70->fields._items;
        v78 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v70->fields._version;
        if ( !v77 )
          break;
        v79 = v70->fields._size;
        v69 = v32 + 2;
        if ( (unsigned int)v79 >= v77->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            (Il2CppObject *)v71,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &v77->obj.klass + v79;
          v70->fields._size = v79 + 1;
          v80[4] = (Il2CppClass *)v71;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), v71, v75, v76);
        }
        v33 = v86;
      }
      ++v33;
      v32 = v69;
      if ( v33 == v83 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1B64324(Instance);
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

  if ( (byte_49FB1C2 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1B640C8(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_49FB1C2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1B64324(this);
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
    sub_1B64324(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB1C3 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_49FB1C3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserPresentHistoryListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FB1C4 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1B640C8(&NetworkManager_TypeInfo, entity);
    byte_49FB1C4 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_38078100(createdAt, 0LL);
}