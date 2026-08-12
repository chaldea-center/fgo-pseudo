void UserPresentHistoryListViewManager___ctor(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserPresentHistoryListViewManager__CreateList(UserPresentHistoryListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserPresentHistoryListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v12; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x2
  int32_t v22; // w24
  int32_t v23; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x25
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x28
  __int64 v33; // x27
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int v50; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v52; // x28
  __int64 v53; // x20
  __int64 v54; // x29
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int32_t v71; // w20
  int32_t v72; // w25
  System_Collections_Generic_List_object__o *v73; // x26
  __int64 v74; // x27
  void *v75; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v94; // [xsp+10h] [xbp-80h]
  int v95; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v97; // [xsp+24h] [xbp-6Ch]
  __int64 v98; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596F4CE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_2213A60(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_2213A60(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_2213A60(&UserPresentHistoryListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10885/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F4CE = 1;
  }
  v98 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v8 = UserPresentHistoryListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !*(&UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo, v6, v7);
    v8 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__2_0 = (System_Func_T__TResult__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v12,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0);
    v13 = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    v13->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__2_0, (int32_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v9,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_3883144 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v20,
                                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v94 = (int)Instance;
  v95 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v21);
    v22 = 0;
    v23 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10885/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v23,
                   (const MethodInfo_387D3C0 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v27 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_19;
        }
        v29 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v29 = sub_224BC3C(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0);
      }
      v97 = v23;
      v98 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v29)(
              v26,
              *(_QWORD *)(v29 + 8));
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v30, v31);
      v32 = System_DateTime__ToString_77027772((System_DateTime_o)&v98, format, 0);
      v33 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_50819428((ListViewItem_o *)v33, v22, 0);
      *(_QWORD *)(v33 + 120) = v32;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 120), (int32_t)v32, v34, v35, v36, v37, v38, v39);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v33,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), v33, v40, v41, v42, v43, v44, v45);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v26,
                                   (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v50 = (int)Instance;
        for ( i = 0; i != v50; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v26,
                       i,
                       (const MethodInfo_387D3C0 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v52 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v53 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v54 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_50819428((ListViewItem_o *)v54, v22 + i + 1, 0);
          *(_QWORD *)(v54 + 120) = v53;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 120), v53, v55, v56, v57, v58, v59, v60);
          if ( !v52 )
            goto LABEL_48;
          v67 = v52->fields._items;
          v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v52->fields._version;
          if ( !v67 )
            goto LABEL_48;
          v69 = v52->fields._size;
          if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v52,
              (Il2CppObject *)v54,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &v67->obj.klass + v69;
            v52->fields._size = v69 + 1;
            v70[4] = (Il2CppClass *)v54;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), v54, v61, v62, v63, v64, v65, v66);
          }
        }
        v22 += i;
      }
      v71 = v97;
      v72 = v22 + 1;
      if ( v97 != v95 )
      {
        v73 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v74 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
        v75 = StringLiteral_1/*""*/;
        ListViewItem___ctor_50819428((ListViewItem_o *)v74, v72, 0);
        *(_QWORD *)(v74 + 120) = v75;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 120), (int32_t)v75, v76, v77, v78, v79, v80, v81);
        if ( !v73 )
          break;
        v88 = v73->fields._items;
        v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v73->fields._version;
        if ( !v88 )
          break;
        v90 = v73->fields._size;
        v72 = v22 + 2;
        if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v73,
            (Il2CppObject *)v74,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v73->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v74;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 4), v74, v82, v83, v84, v85, v86, v87);
        }
        v71 = v97;
      }
      v23 = v71 + 1;
      v22 = v72;
      if ( v23 == v94 )
        goto LABEL_46;
    }
LABEL_48:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_596F4CF & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_2213A60(&UserPresentHistoryListViewObject_TypeInfo);
    byte_596F4CF = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_2213CDC(this, obj);
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
    sub_2213CDC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F4D0 & 1) == 0 )
  {
    sub_2213A60(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_596F4D0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
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

  if ( (byte_596F4D1 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F4D1 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entity, method);
  return NetworkManager__getServerDateTime_48347596(createdAt, 0);
}