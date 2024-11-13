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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  UserPresentHistoryListViewManager___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v47; // x22
  struct UserPresentHistoryListViewManager___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int32_t v56; // w24
  int32_t v57; // w20
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x25
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v64; // x1
  System_String_o *v65; // x28
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  int64_t v69; // x27
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x2
  __int64 v87; // x3
  int v88; // w26
  int32_t i; // w27
  System_Collections_Generic_List_object__o *v90; // x28
  int64_t v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  int64_t v95; // x29
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  int32_t v112; // w25
  System_Collections_Generic_List_object__o *v113; // x26
  int64_t v114; // x27
  void *v115; // x20
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  struct ListViewSort_o *sort; // x8
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int v134; // [xsp+10h] [xbp-80h]
  int v135; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-78h]
  int32_t v137; // [xsp+24h] [xbp-6Ch]
  __int64 v138; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v139; // 0:x0.8

  if ( (byte_4B15025 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentHistoryMaster___, method, v2);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____, v16, v17);
    sub_1BCA7E0(&System_Func_UserPresentHistoryEntity__DateTime__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__, v28, v29);
    sub_1BCA7E0(&UserPresentHistoryListViewManager___c_TypeInfo, v30, v31);
    sub_1BCA7E0(&UserPresentHistoryListViewItem_TypeInfo, v32, v33);
    sub_1BCA7E0(&StringLiteral_10585/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v36, v37);
    byte_4B15025 = 1;
  }
  v138 = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentHistoryMaster___);
  v44 = UserPresentHistoryListViewManager___c_TypeInfo;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)MasterData_object;
  if ( !UserPresentHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryListViewManager___c_TypeInfo, v41);
    v44 = UserPresentHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v44->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, v41);
      v44 = UserPresentHistoryListViewManager___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_UserPresentHistoryEntity__DateTime__TypeInfo,
                                             v41,
                                             v42,
                                             v43);
    System_Func_object__DateTime____ctor(
      _9__2_0,
      v47,
      Method_UserPresentHistoryListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = UserPresentHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserPresentHistoryEntity__DateTime__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__DateTime_(
                                                               v45,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2F363C8 *)Method_System_Linq_Enumerable_GroupBy_UserPresentHistoryEntity__DateTime___);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v55,
                                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_IGrouping_DateTime__UserPresentHistoryEntity____);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                               source,
                               (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_IGrouping_DateTime__UserPresentHistoryEntity____);
  v134 = (int)Instance;
  v135 = (_DWORD)Instance - 1;
  if ( (int)Instance >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    v56 = 0;
    v57 = 0;
    format = LocalizationManager__Get((System_String_o *)StringLiteral_10585/*"PRESENT_HISTORY_DATE_TIME_FORMAT"*/, 0LL);
    while ( 1 )
    {
      Instance = System_Linq_Enumerable__ElementAt_object_(
                   source,
                   v57,
                   (const MethodInfo_2F31284 *)Method_System_Linq_Enumerable_ElementAt_IGrouping_DateTime__UserPresentHistoryEntity____);
      if ( !Instance )
        break;
      klass = Instance->klass;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v61 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__c **)p_offset - 1) != System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo )
        {
          --v61;
          p_offset += 4;
          if ( !v61 )
            goto LABEL_19;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_19:
        p_method = sub_1C1C7C0(Instance, System_Linq_IGrouping_DateTime__UserPresentHistoryEntity__TypeInfo, 0LL);
      }
      v137 = v57;
      v138 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
               v60,
               *(_QWORD *)(p_method + 8));
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v64);
      v139.fields._dateData = (uint64_t)&v138;
      v65 = System_DateTime__ToString_63092192(v139, format, 0LL);
      v69 = sub_1BCAA2C(UserPresentHistoryListViewItem_TypeInfo, v66, v67, v68);
      ListViewItem___ctor_41447164((ListViewItem_o *)v69, v56, 0LL);
      *(_QWORD *)(v69 + 112) = v65;
      sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 112), (int64_t)v65, v70, v71, v72, v73, v74, v75);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v69,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v85[4] = (Il2CppClass *)v69;
        sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 4), v69, v76, v77, v78, v79, v80, v81);
      }
      Instance = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                                   v60,
                                   (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UserPresentHistoryEntity___);
      if ( (int)Instance >= 1 )
      {
        v88 = (int)Instance;
        for ( i = 0; i != v88; ++i )
        {
          Instance = System_Linq_Enumerable__ElementAt_object_(
                       v60,
                       i,
                       (const MethodInfo_2F31284 *)Method_System_Linq_Enumerable_ElementAt_UserPresentHistoryEntity___);
          if ( !Instance )
            goto LABEL_48;
          v90 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v91 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Instance->klass->vtable[3].method)(
                  Instance,
                  Instance->klass->vtable[4].methodPtr);
          v95 = sub_1BCAA2C(UserPresentHistoryListViewItem_TypeInfo, v92, v93, v94);
          ListViewItem___ctor_41447164((ListViewItem_o *)v95, v56 + i + 1, 0LL);
          *(_QWORD *)(v95 + 112) = v91;
          sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 112), v91, v96, v97, v98, v99, v100, v101);
          if ( !v90 )
            goto LABEL_48;
          v108 = v90->fields._items;
          v109 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v90->fields._version;
          if ( !v108 )
            goto LABEL_48;
          v110 = v90->fields._size;
          if ( (unsigned int)v110 >= v108->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v90,
              (Il2CppObject *)v95,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = &v108->obj.klass + v110;
            v90->fields._size = v110 + 1;
            v111[4] = (Il2CppClass *)v95;
            sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), v95, v102, v103, v104, v105, v106, v107);
          }
        }
        v56 += i;
      }
      v112 = v56 + 1;
      if ( v57 != v135 )
      {
        v113 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v114 = sub_1BCAA2C(UserPresentHistoryListViewItem_TypeInfo, v39, v86, v87);
        v115 = StringLiteral_1/*""*/;
        ListViewItem___ctor_41447164((ListViewItem_o *)v114, v112, 0LL);
        *(_QWORD *)(v114 + 112) = v115;
        sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 112), (int64_t)v115, v116, v117, v118, v119, v120, v121);
        if ( !v113 )
          break;
        v128 = v113->fields._items;
        v129 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v113->fields._version;
        if ( !v128 )
          break;
        v130 = v113->fields._size;
        v112 = v56 + 2;
        if ( (unsigned int)v130 >= v128->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v113,
            (Il2CppObject *)v114,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
        }
        else
        {
          v131 = &v128->obj.klass + v130;
          v113->fields._size = v130 + 1;
          v131[4] = (Il2CppClass *)v114;
          sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 4), v114, v122, v123, v124, v125, v126, v127);
        }
        v57 = v137;
      }
      ++v57;
      v56 = v112;
      if ( v57 == v134 )
        goto LABEL_46;
    }
LABEL_48:
    sub_1BCAA3C(Instance, v39);
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

  if ( (byte_4B15026 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager_o *)sub_1BCA7E0(&UserPresentHistoryListViewObject_TypeInfo, obj, item);
    byte_4B15026 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentHistoryListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
    sub_1BCAA3C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall UserPresentHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15027 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentHistoryListViewManager___c_TypeInfo, v1, v2);
    byte_4B15027 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserPresentHistoryListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserPresentHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserPresentHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B15028 & 1) == 0 )
  {
    this = (UserPresentHistoryListViewManager___c_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, entity, method);
    byte_4B15028 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  createdAt = entity->fields.createdAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entity);
  return NetworkManager__getServerDateTime_39270492(createdAt, 0LL);
}