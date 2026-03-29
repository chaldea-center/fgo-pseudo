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
  System_String_o *v26; // x28
  __int64 v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int v44; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v46; // x28
  __int64 v47; // x21
  __int64 v48; // x29
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  int32_t v65; // w25
  System_Collections_Generic_List_object__o *v66; // x26
  __int64 v67; // x27
  __int64 v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v87; // [xsp+10h] [xbp-80h]
  int v88; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v90; // [xsp+24h] [xbp-6Ch]
  __int64 v91; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4D2F70E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
    sub_1C93AD4(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    sub_1C93AD4(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C93AD4(&UserPresentHistoryListViewManager___c_TypeInfo);
    sub_1C93AD4(&UserPresentHistoryListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_10522/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F70E = 1;
  }
  v91 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v9,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_31CDFBC *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v87 = (int)Instance;
  v88 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = 0;
    v19 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10522/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v19,
                   (const MethodInfo_31C80C8 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
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
        v25 = sub_1C69E5C(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0);
      }
      v90 = v19;
      v91 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
              v22,
              *(_QWORD *)(v25 + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v26 = System_DateTime__ToString_65823908((System_DateTime_o)&v91, format, 0);
      v27 = sub_1C93D20(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_44487500((ListViewItem_o *)v27, v18, 0);
      *(_QWORD *)(v27 + 120) = v26;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 120), (int32_t)v26, v28, v29, v30, v31, v32, v33);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v27,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v27;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), v27, v34, v35, v36, v37, v38, v39);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v22,
                                   (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v44 = (int)Instance;
        for ( i = 0; i != v44; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v22,
                       i,
                       (const MethodInfo_31C80C8 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v46 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v47 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Instance->klass->vtable[3].methodPtr)(
                  Instance,
                  Instance->klass->vtable[3].method);
          v48 = sub_1C93D20(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_44487500((ListViewItem_o *)v48, v18 + i + 1, 0);
          *(_QWORD *)(v48 + 120) = v47;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 120), v47, v49, v50, v51, v52, v53, v54);
          if ( !v46 )
            goto LABEL_48;
          v61 = v46->fields._items;
          v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v46->fields._version;
          if ( !v61 )
            goto LABEL_48;
          v63 = v46->fields._size;
          if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)v48,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = &v61->obj.klass + v63;
            v46->fields._size = v63 + 1;
            v64[4] = (Il2CppClass *)v48;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v64 + 4), v48, v55, v56, v57, v58, v59, v60);
          }
        }
        v18 += i;
      }
      v65 = v18 + 1;
      if ( v19 != v88 )
      {
        v66 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v67 = sub_1C93D20(UserPresentHistoryListViewItem_TypeInfo);
        v68 = StringLiteral_1/*""*/;
        ListViewItem___ctor_44487500((ListViewItem_o *)v67, v65, 0);
        *(_QWORD *)(v67 + 120) = v68;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 120), v68, v69, v70, v71, v72, v73, v74);
        if ( !v66 )
          break;
        v81 = v66->fields._items;
        v82 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v66->fields._version;
        if ( !v81 )
          break;
        v83 = v66->fields._size;
        v65 = v18 + 2;
        if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            (Il2CppObject *)v67,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &v81->obj.klass + v83;
          v66->fields._size = v83 + 1;
          v84[4] = (Il2CppClass *)v67;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v84 + 4), v67, v75, v76, v77, v78, v79, v80);
        }
        v19 = v90;
      }
      ++v19;
      v18 = v65;
      if ( v19 == v87 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1C93D2C(Instance, v4);
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

  if ( (byte_4D2F70F & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1C93AD4(&UserPresentHistoryListViewObject_TypeInfo);
    byte_4D2F70F = 1;
  }
  if ( !obj
    || (naturalAligment = UserPresentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
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
    sub_1C93D2C(ItemSum, v4);
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

  if ( (byte_4D2F710 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentHistoryListViewManager___c_TypeInfo);
    byte_4D2F710 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v1;
  sub_1C93A78(
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

  if ( (byte_4D2F711 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2F711 = 1;
  }
  if ( !entity )
    sub_1C93D2C(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_42097084(createdAt, 0);
}