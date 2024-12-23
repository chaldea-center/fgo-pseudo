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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w24
  int32_t v36; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x25
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *v43; // x28
  int64_t v44; // x27
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  int v61; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v63; // x28
  int64_t v64; // x21
  int64_t v65; // x29
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w25
  System_Collections_Generic_List_object__o *v83; // x26
  int64_t v84; // x27
  void *v85; // x20
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v104; // [xsp+10h] [xbp-80h]
  int v105; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v107; // [xsp+24h] [xbp-6Ch]
  __int64 v108; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v109; // 0:x0.8

  if ( (byte_4B659CC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method);
    sub_1BE4ACC(&System_DateTime_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v9);
    sub_1BE4ACC(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v10);
    sub_1BE4ACC(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v15);
    sub_1BE4ACC(&UserPresentHistoryListViewManager___c_TypeInfo, v16);
    sub_1BE4ACC(&UserPresentHistoryListViewItem_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_10612/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v18);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v19);
    byte_4B659CC = 1;
  }
  v108 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_UserPresentHistoryEntity__DateTime__TypeInfo);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v26,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2F7D200 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v34,
                                                                  (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v104 = (int)Instance;
  v105 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = 0;
    v36 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10612/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v36,
                   (const MethodInfo_2F77704 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v40 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_19;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_19:
        p_method = sub_1C36AAC(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v107 = v36;
      v108 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
               v39,
               *(_QWORD *)(p_method + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v109.fields._dateData = (uint64_t)&v108;
      v43 = System_DateTime__ToString_63389780(v109, format, 0LL);
      v44 = sub_1BE4D18(UserPresentHistoryListViewItem_TypeInfo);
      ListViewItem___ctor_41686696((ListViewItem_o *)v44, v35, 0LL);
      *(_QWORD *)(v44 + 112) = v43;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 112), (int64_t)v43, v45, v46, v47, v48, v49, v50);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v44,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), v44, v51, v52, v53, v54, v55, v56);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v39,
                                   (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v61 = (int)Instance;
        for ( i = 0; i != v61; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v39,
                       i,
                       (const MethodInfo_2F77704 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v63 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v64 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Instance->klass->vtable[3].method)(
                  Instance,
                  Instance->klass->vtable[4].methodPtr);
          v65 = sub_1BE4D18(UserPresentHistoryListViewItem_TypeInfo);
          ListViewItem___ctor_41686696((ListViewItem_o *)v65, v35 + i + 1, 0LL);
          *(_QWORD *)(v65 + 112) = v64;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v65 + 112), v64, v66, v67, v68, v69, v70, v71);
          if ( !v63 )
            goto LABEL_48;
          v78 = v63->fields._items;
          v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v63->fields._version;
          if ( !v78 )
            goto LABEL_48;
          v80 = v63->fields._size;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              (Il2CppObject *)v65,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &v78->obj.klass + v80;
            v63->fields._size = v80 + 1;
            v81[4] = (Il2CppClass *)v65;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v81 + 4), v65, v72, v73, v74, v75, v76, v77);
          }
        }
        v35 += i;
      }
      v82 = v35 + 1;
      if ( v36 != v105 )
      {
        v83 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v84 = sub_1BE4D18(UserPresentHistoryListViewItem_TypeInfo);
        v85 = StringLiteral_1/*""*/;
        ListViewItem___ctor_41686696((ListViewItem_o *)v84, v82, 0LL);
        *(_QWORD *)(v84 + 112) = v85;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v84 + 112), (int64_t)v85, v86, v87, v88, v89, v90, v91);
        if ( !v83 )
          break;
        v98 = v83->fields._items;
        v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v83->fields._version;
        if ( !v98 )
          break;
        v100 = v83->fields._size;
        v82 = v35 + 2;
        if ( (unsigned int)v100 >= v98->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v83,
            (Il2CppObject *)v84,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v98->obj.klass + v100;
          v83->fields._size = v100 + 1;
          v101[4] = (Il2CppClass *)v84;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v101 + 4), v84, v92, v93, v94, v95, v96, v97);
        }
        v36 = v107;
      }
      ++v36;
      v35 = v82;
      if ( v36 == v104 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1BE4D28(Instance, v21);
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

  if ( (byte_4B659CD & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1BE4ACC(&UserPresentHistoryListViewObject_TypeInfo, obj);
    byte_4B659CD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
    sub_1BE4D28(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B659CE & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentHistoryListViewManager___c_TypeInfo, v1);
    byte_4B659CE = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(UserPresentHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B659CF & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1BE4ACC(&NetworkManager_TypeInfo, entity);
    byte_4B659CF = 1;
  }
  if ( !entity )
    sub_1BE4D28(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getServerDateTime_39466056(createdAt, 0LL);
}