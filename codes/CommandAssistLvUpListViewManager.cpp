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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v31; // x26
  Il2CppObject *v32; // x19
  Il2CppObject *v33; // x21
  System_Collections_Generic_List_object__o *v34; // x23
  void *ValidEntityList; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  CommandAssistLvUpListViewManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v44; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  Il2CppObject *CurrentEntity; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  CommandAssistLvUpListViewManager___c_c *v68; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v70; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int32_t v78; // w24
  void *v79; // x25
  SkillLvEntity_o *v80; // x0
  System_String_o *Empty; // x26
  void *v82; // x28
  SkillLvEntity_o *v83; // x0
  System_String_o *beforeDetail; // x29
  int32_t v85; // w19
  int32_t v86; // w20
  System_String_o *v87; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v89; // x28
  int32_t v90; // w21
  CommandAssistLvUpListViewItem_o *v91; // x25
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
  const MethodInfo *v102; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v103; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v107; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B6AE5C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_1BE4ACC(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v17);
    sub_1BE4ACC(&System_Func_CommonReleaseEntity__bool__TypeInfo, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v25);
    sub_1BE4ACC(&string_TypeInfo, v26);
    sub_1BE4ACC(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v27);
    sub_1BE4ACC(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v28);
    sub_1BE4ACC(&CommandAssistLvUpListViewManager___c_TypeInfo, v29);
    byte_4B6AE5C = 1;
  }
  memset(&v111, 0, sizeof(v111));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v33 )
    goto LABEL_53;
  v103 = v32;
  v107 = (EventCommandAssistMaster_o *)v33;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v33, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v111 = v109;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v111,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v111.fields._current;
    if ( !v111.fields._current )
      sub_1BE4D28(v37, v38);
    if ( !Master_object )
      sub_1BE4D28(v37, v38);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v111.fields._current[3].monitor),
             0LL);
    v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v41->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v41->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v44,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__0_1,
        (int64_t)_9__0_1,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = System_Linq_Enumerable__Where_object_(
            v42,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v52,
                                                                 (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v54 = System_Linq_Enumerable__FirstOrDefault_object_(
            v53,
            (const MethodInfo_2F7B9A0 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v54 )
    {
      if ( !v31 )
        sub_1BE4D28(v54, v55);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v31,
             &entity,
             (int32_t)v54[2].klass,
             missionId,
             0LL) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v33,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0LL);
        v63 = (int64_t)CurrentEntity;
        if ( !v34 )
          sub_1BE4D28(CurrentEntity, CurrentEntity);
        items = v34->fields._items;
        v65 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          sub_1BE4D28(CurrentEntity, CurrentEntity);
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            CurrentEntity,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v67[4] = (Il2CppClass *)v63;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v67 + 4), v63, v57, v58, v59, v60, v61, v62);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v111,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v68 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v68 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v68->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v70,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v71 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v71->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v71->__9__0_0, (int64_t)_9__0_0, v72, v73, v74, v75, v76, v77);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v34,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v34 )
      goto LABEL_53;
    missionIdb = v34->fields._size;
    if ( missionIdb >= 1 )
    {
      v78 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v34,
                            v78,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v32 )
          break;
        v79 = ValidEntityList;
        v80 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v80 || (Empty = SkillLvEntity__getDetail_40890048(v80, v80->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v107,
                            *((_DWORD *)v79 + 4),
                            *((_DWORD *)v79 + 10) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v82 = ValidEntityList;
        v83 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v83 || (beforeDetail = SkillLvEntity__getDetail_40890048(v83, v83->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v85 = *((_DWORD *)v79 + 4);
        v86 = *((_DWORD *)v79 + 12);
        v87 = (System_String_o *)*((_QWORD *)v79 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v89 = (System_String_o *)*((_QWORD *)v82 + 4);
        v90 = v34->fields._size;
        v91 = (CommandAssistLvUpListViewItem_o *)sub_1BE4D18(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v91,
          v78,
          eventId,
          v85,
          v86,
          v87,
          Empty,
          v89,
          beforeDetail,
          v78 == v90 - 1,
          v102);
        if ( !itemList )
          break;
        v98 = itemList->fields._items;
        v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v98 )
          break;
        v100 = itemList->fields._size;
        v32 = v103;
        if ( (unsigned int)v100 >= v98->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v91,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v98->obj.klass + v100;
          itemList->fields._size = v100 + 1;
          v101[4] = (Il2CppClass *)v91;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v101 + 4), (int64_t)v91, v92, v93, v94, v95, v96, v97);
        }
        if ( missionIdb == ++v78 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1BE4D28(ValidEntityList, v36);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6AE5D & 1) == 0 )
  {
    sub_1BE4ACC(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_4B6AE5D = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return ent->fields.condType == 177;
}