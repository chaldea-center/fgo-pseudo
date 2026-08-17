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
  System_DateTime_o v32; // x0
  System_String_o *v33; // x28
  __int64 v34; // x27
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  int v51; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v53; // x28
  __int64 v54; // x20
  __int64 v55; // x29
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  int32_t v72; // w20
  int32_t v73; // w25
  System_Collections_Generic_List_object__o *v74; // x26
  __int64 v75; // x27
  void *v76; // x20
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v95; // [xsp+10h] [xbp-80h]
  int v96; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v98; // [xsp+24h] [xbp-6Ch]
  __int64 v99; // [xsp+28h] [xbp-68h] BYREF

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
  v99 = 0;
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
  v95 = (int)Instance;
  v96 = (_DWORD)Instance - 1;
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
      v98 = v23;
      v99 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v29)(
              v26,
              *(_QWORD *)(v29 + 8));
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v30, v31);
      v32.fields._dateData = (uint64_t)&v99;
      v33 = System_DateTime__ToString_77027772(v32, format, 0);
      v34 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_50819428((ListViewItem_o *)v34, v22, 0);
      *(_QWORD *)(v34 + 120) = v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 120), (int32_t)v33, v35, v36, v37, v38, v39, v40);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v34,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v34;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), v34, v41, v42, v43, v44, v45, v46);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v26,
                                   (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v51 = (int)Instance;
        for ( i = 0; i != v51; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v26,
                       i,
                       (const MethodInfo_387D3C0 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v53 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v54 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v55 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_50819428((ListViewItem_o *)v55, v22 + i + 1, 0);
          *(_QWORD *)(v55 + 120) = v54;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 120), v54, v56, v57, v58, v59, v60, v61);
          if ( !v53 )
            goto LABEL_48;
          v68 = v53->fields._items;
          v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v53->fields._version;
          if ( !v68 )
            goto LABEL_48;
          v70 = v53->fields._size;
          if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v53,
              (Il2CppObject *)v55,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &v68->obj.klass + v70;
            v53->fields._size = v70 + 1;
            v71[4] = (Il2CppClass *)v55;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 4), v55, v62, v63, v64, v65, v66, v67);
          }
        }
        v22 += i;
      }
      v72 = v98;
      v73 = v22 + 1;
      if ( v98 != v96 )
      {
        v74 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v75 = sub_2213CCC(UserPresentHistoryListViewItem_TypeInfo);
        v76 = StringLiteral_1/*""*/;
        ListViewItem___ctor_50819428((ListViewItem_o *)v75, v73, 0);
        *(_QWORD *)(v75 + 120) = v76;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 120), (int32_t)v76, v77, v78, v79, v80, v81, v82);
        if ( !v74 )
          break;
        v89 = v74->fields._items;
        v90 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v74->fields._version;
        if ( !v89 )
          break;
        v91 = v74->fields._size;
        v73 = v22 + 2;
        if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            (Il2CppObject *)v75,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
        }
        else
        {
          v92 = &v89->obj.klass + v91;
          v74->fields._size = v91 + 1;
          v92[4] = (Il2CppClass *)v75;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 4), v75, v83, v84, v85, v86, v87, v88);
        }
        v72 = v98;
      }
      v23 = v72 + 1;
      v22 = v73;
      if ( v23 == v95 )
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