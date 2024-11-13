void __fastcall CommandAssistLvUpListViewManager___ctor(
        CommandAssistLvUpListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistLvUpListViewManager__CreateList(
        CommandAssistLvUpListViewManager_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v58; // x26
  Il2CppObject *v59; // x19
  Il2CppObject *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x23
  void *ValidEntityList; // x0
  __int64 v66; // x1
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  CommandAssistLvUpListViewManager___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v77; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  Il2CppObject *CurrentEntity; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x1
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  CommandAssistLvUpListViewManager___c_c *v104; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v106; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int32_t v114; // w24
  void *v115; // x25
  SkillLvEntity_o *v116; // x0
  System_String_o *Empty; // x26
  void *v118; // x28
  SkillLvEntity_o *v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  System_String_o *beforeDetail; // x29
  int32_t v124; // w19
  int32_t v125; // w20
  System_String_o *v126; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v128; // x28
  int32_t v129; // w21
  CommandAssistLvUpListViewItem_o *v130; // x25
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  const MethodInfo *v141; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v142; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v146; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B1A3C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId, *(_QWORD *)&missionId);
    sub_1BCA7E0(&CommandAssistLvUpListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillDetailMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v28, v29);
    sub_1BCA7E0(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Func_CommonReleaseEntity__bool__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v44, v45);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v46, v47);
    sub_1BCA7E0(&string_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v50, v51);
    sub_1BCA7E0(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v52, v53);
    sub_1BCA7E0(&CommandAssistLvUpListViewManager___c_TypeInfo, v54, v55);
    byte_4B1A3C5 = 1;
  }
  memset(&v150, 0, sizeof(v150));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v58 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v59 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v60 )
    goto LABEL_53;
  v142 = v59;
  v146 = (EventCommandAssistMaster_o *)v60;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v60, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v148,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v150 = v148;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v150,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v67 )
      break;
    current = v150.fields._current;
    if ( !v150.fields._current )
      sub_1BCAA3C(v67, v68);
    if ( !Master_object )
      sub_1BCAA3C(v67, v68);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v150.fields._current[3].monitor),
             0LL);
    v74 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v75 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo, v71);
      v74 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v74->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74, v71);
        v74 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v77 = (Il2CppObject *)v74->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                 v71,
                                                 v72,
                                                 v73);
      System_Func_object__bool____ctor(
        _9__0_1,
        v77,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__0_1,
        (int64_t)_9__0_1,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
    v85 = System_Linq_Enumerable__Where_object_(
            v75,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v85,
                                                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v87 = System_Linq_Enumerable__FirstOrDefault_object_(
            v86,
            (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v87 )
    {
      if ( !v58 )
        sub_1BCAA3C(v87, v88);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v58,
             &entity,
             (int32_t)v87[2].klass,
             missionId,
             0LL) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v60,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0LL);
        v96 = (int64_t)CurrentEntity;
        if ( !v64 )
          sub_1BCAA3C(CurrentEntity, CurrentEntity);
        items = v64->fields._items;
        v98 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v64->fields._version;
        if ( !items )
          sub_1BCAA3C(CurrentEntity, CurrentEntity);
        size = v64->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            CurrentEntity,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &items->obj.klass + size;
          v64->fields._size = size + 1;
          v100[4] = (Il2CppClass *)v96;
          sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), v96, v90, v91, v92, v93, v94, v95);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v150,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v104 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo, v101);
    v104 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v104->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104, v101);
      v104 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v106 = (Il2CppObject *)v104->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_EventCommandAssistEntity__bool__TypeInfo,
                                               v101,
                                               v102,
                                               v103);
    System_Func_object__bool____ctor(
      _9__0_0,
      v106,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v107 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v107->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v107->__9__0_0, (int64_t)_9__0_0, v108, v109, v110, v111, v112, v113);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v64,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v64 )
      goto LABEL_53;
    missionIdb = v64->fields._size;
    if ( missionIdb >= 1 )
    {
      v114 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v64,
                            v114,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v59 )
          break;
        v115 = ValidEntityList;
        v116 = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)v59,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 10),
                 0LL);
        if ( !v116 || (Empty = SkillLvEntity__getDetail_40665920(v116, v116->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v146,
                            *((_DWORD *)v115 + 4),
                            *((_DWORD *)v115 + 10) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v118 = ValidEntityList;
        v119 = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)v59,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 10),
                 0LL);
        if ( !v119 || (beforeDetail = SkillLvEntity__getDetail_40665920(v119, v119->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v124 = *((_DWORD *)v115 + 4);
        v125 = *((_DWORD *)v115 + 12);
        v126 = (System_String_o *)*((_QWORD *)v115 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v128 = (System_String_o *)*((_QWORD *)v118 + 4);
        v129 = v64->fields._size;
        v130 = (CommandAssistLvUpListViewItem_o *)sub_1BCAA2C(CommandAssistLvUpListViewItem_TypeInfo, v120, v121, v122);
        CommandAssistLvUpListViewItem___ctor(
          v130,
          v114,
          eventId,
          v124,
          v125,
          v126,
          Empty,
          v128,
          beforeDetail,
          v114 == v129 - 1,
          v141);
        if ( !itemList )
          break;
        v137 = itemList->fields._items;
        v138 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v137 )
          break;
        v139 = itemList->fields._size;
        v59 = v142;
        if ( (unsigned int)v139 >= v137->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v130,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
        }
        else
        {
          v140 = &v137->obj.klass + v139;
          itemList->fields._size = v139 + 1;
          v140[4] = (Il2CppClass *)v130;
          sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), (int64_t)v130, v131, v132, v133, v134, v135, v136);
        }
        if ( missionIdb == ++v114 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1BCAA3C(ValidEntityList, v66);
    }
LABEL_50:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    ValidEntityList = this->fields.scrollView;
    if ( !ValidEntityList )
      goto LABEL_53;
    UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0LL);
  }
}


void __fastcall CommandAssistLvUpListViewManager__OnClickListView(
        CommandAssistLvUpListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandAssistLvUpListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1A3C6 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2);
    byte_4B1A3C6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CommandAssistLvUpListViewManager___c___ctor(
        CommandAssistLvUpListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommandAssistLvUpListViewManager___c___CreateList_b__0_0(
        CommandAssistLvUpListViewManager___c_o *this,
        EventCommandAssistEntity_o *x,
        const MethodInfo *method)
{
  return x == 0LL;
}


bool __fastcall CommandAssistLvUpListViewManager___c___CreateList_b__0_1(
        CommandAssistLvUpListViewManager___c_o *this,
        CommonReleaseEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.condType == 177;
}