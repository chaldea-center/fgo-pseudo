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
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_object__o *v36; // x23
  void *ValidEntityList; // x0
  _BOOL8 v38; // x0
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  CommandAssistLvUpListViewManager___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v46; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  Il2CppObject *v52; // x0
  Il2CppObject *CurrentEntity; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  CommandAssistLvUpListViewManager___c_c *v63; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v65; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w24
  void *v70; // x25
  SkillLvEntity_o *v71; // x0
  System_String_o *Empty; // x26
  void *v73; // x28
  SkillLvEntity_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  System_String_o *beforeDetail; // x29
  int32_t v78; // w19
  int32_t v79; // w20
  System_String_o *v80; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v82; // x28
  int32_t v83; // w21
  CommandAssistLvUpListViewItem_o *v84; // x25
  int32_t v85; // w2
  int32_t v86; // w3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  const MethodInfo *v91; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v92; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v96; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A003E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_1B640C8(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v17);
    sub_1B640C8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v24);
    sub_1B640C8(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v25);
    sub_1B640C8(&string_TypeInfo, v26);
    sub_1B640C8(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v27);
    sub_1B640C8(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v28);
    sub_1B640C8(&CommandAssistLvUpListViewManager___c_TypeInfo, v29);
    byte_4A003E7 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v33 )
    goto LABEL_53;
  v92 = v32;
  v96 = (EventCommandAssistMaster_o *)v33;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v33, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v98,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v100 = v98;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v100,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v100.fields._current;
    if ( !v100.fields._current )
      sub_1B64324(v38);
    if ( !Master_object )
      sub_1B64324(v38);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v100.fields._current[3].monitor),
             0LL);
    v43 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v43 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v43->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v43->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_CommonReleaseEntity__bool__TypeInfo, v41, v42);
      System_Func_object__bool____ctor(
        _9__0_1,
        v46,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v48, v49);
    }
    v50 = System_Linq_Enumerable__Where_object_(
            v44,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v50,
                                                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v52 = System_Linq_Enumerable__FirstOrDefault_object_(
            v51,
            (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v52 )
    {
      if ( !v31 )
        sub_1B64324(v52);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v31,
             &entity,
             (int32_t)v52[2].klass,
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
        v56 = CurrentEntity;
        if ( !v36 )
          sub_1B64324(CurrentEntity);
        items = v36->fields._items;
        v58 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v36->fields._version;
        if ( !items )
          sub_1B64324(CurrentEntity);
        size = v36->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            CurrentEntity,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v36->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v56;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v56, v54, v55);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v100,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v63 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v63 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v63->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventCommandAssistEntity__bool__TypeInfo, v61, v62);
    System_Func_object__bool____ctor(
      _9__0_0,
      v65,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v66 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v66->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66->__9__0_0, (int32_t)_9__0_0, v67, v68);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v36,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v36 )
      goto LABEL_53;
    missionIdb = v36->fields._size;
    if ( missionIdb >= 1 )
    {
      v69 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v36,
                            v69,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v32 )
          break;
        v70 = ValidEntityList;
        v71 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v71 || (Empty = SkillLvEntity__getDetail_39520556(v71, v71->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v96, *((_DWORD *)v70 + 4), *((_DWORD *)v70 + 10) - 1, 0LL);
        if ( !ValidEntityList )
          break;
        v73 = ValidEntityList;
        v74 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v74 || (beforeDetail = SkillLvEntity__getDetail_39520556(v74, v74->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v78 = *((_DWORD *)v70 + 4);
        v79 = *((_DWORD *)v70 + 12);
        v80 = (System_String_o *)*((_QWORD *)v70 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v82 = (System_String_o *)*((_QWORD *)v73 + 4);
        v83 = v36->fields._size;
        v84 = (CommandAssistLvUpListViewItem_o *)sub_1B64314(CommandAssistLvUpListViewItem_TypeInfo, v75, v76);
        CommandAssistLvUpListViewItem___ctor(
          v84,
          v69,
          eventId,
          v78,
          v79,
          v80,
          Empty,
          v82,
          beforeDetail,
          v69 == v83 - 1,
          v91);
        if ( !itemList )
          break;
        v87 = itemList->fields._items;
        v88 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v87 )
          break;
        v89 = itemList->fields._size;
        v32 = v92;
        if ( (unsigned int)v89 >= v87->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v84,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &v87->obj.klass + v89;
          itemList->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v84;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v90 + 4), (int32_t)v84, v85, v86);
        }
        if ( missionIdb == ++v69 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1B64324(ValidEntityList);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A003E8 & 1) == 0 )
  {
    sub_1B640C8(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_4A003E8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return ent->fields.condType == 177;
}