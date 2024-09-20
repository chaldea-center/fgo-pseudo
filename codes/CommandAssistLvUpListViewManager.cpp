void __fastcall CommandAssistLvUpListViewManager___ctor(
        CommandAssistLvUpListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpListViewManager__CreateList(
        CommandAssistLvUpListViewManager_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x25
  Il2CppObject *v5; // x26
  Il2CppObject *v6; // x19
  Il2CppObject *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x23
  void *ValidEntityList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  CommandAssistLvUpListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v18; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *CurrentEntity; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  CommandAssistLvUpListViewManager___c_c *v34; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v36; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w24
  void *v41; // x25
  SkillLvEntity_o *v42; // x0
  System_String_o *Empty; // x26
  void *v44; // x28
  SkillLvEntity_o *v45; // x0
  System_String_o *beforeDetail; // x29
  int32_t v47; // w19
  int32_t v48; // w20
  System_String_o *v49; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v51; // x28
  int32_t v52; // w21
  CommandAssistLvUpListViewItem_o *v53; // x25
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  const MethodInfo *v60; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v61; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v65; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A5F1D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_1B885B0(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_1B885B0(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_1B885B0(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_1B885B0(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4A5F1D3 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v7 )
    goto LABEL_53;
  v61 = v6;
  v65 = (EventCommandAssistMaster_o *)v7;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v7, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v69 = v67;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1B8880C(v11, v12);
    if ( !Master_object )
      sub_1B8880C(v11, v12);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v69.fields._current[3].monitor),
             0LL);
    v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v15->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v18,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v20, v21);
    }
    v22 = System_Linq_Enumerable__Where_object_(
            v16,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v22,
                                                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v24 = System_Linq_Enumerable__FirstOrDefault_object_(
            v23,
            (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v24 )
    {
      if ( !v5 )
        sub_1B8880C(v24, v25);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v5,
             &entity,
             (int32_t)v24[2].klass,
             missionId,
             0LL) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v7,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0LL);
        v29 = CurrentEntity;
        if ( !v8 )
          sub_1B8880C(CurrentEntity, CurrentEntity);
        items = v8->fields._items;
        v31 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1B8880C(CurrentEntity, CurrentEntity);
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            CurrentEntity,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v29, v27, v28);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v34 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v34 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v34->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v36,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v37 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v37->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->__9__0_0, (int32_t)_9__0_0, v38, v39);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v8,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v8 )
      goto LABEL_53;
    missionIdb = v8->fields._size;
    if ( missionIdb >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v8,
                            v40,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v6 )
          break;
        v41 = ValidEntityList;
        v42 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v42 || (Empty = SkillLvEntity__getDetail_39937016(v42, v42->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v65, *((_DWORD *)v41 + 4), *((_DWORD *)v41 + 10) - 1, 0LL);
        if ( !ValidEntityList )
          break;
        v44 = ValidEntityList;
        v45 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v45 || (beforeDetail = SkillLvEntity__getDetail_39937016(v45, v45->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v47 = *((_DWORD *)v41 + 4);
        v48 = *((_DWORD *)v41 + 12);
        v49 = (System_String_o *)*((_QWORD *)v41 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v51 = (System_String_o *)*((_QWORD *)v44 + 4);
        v52 = v8->fields._size;
        v53 = (CommandAssistLvUpListViewItem_o *)sub_1B887FC(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v53,
          v40,
          eventId,
          v47,
          v48,
          v49,
          Empty,
          v51,
          beforeDetail,
          v40 == v52 - 1,
          v60);
        if ( !itemList )
          break;
        v56 = itemList->fields._items;
        v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v56 )
          break;
        v58 = itemList->fields._size;
        v6 = v61;
        if ( (unsigned int)v58 >= v56->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v53,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &v56->obj.klass + v58;
          itemList->fields._size = v58 + 1;
          v59[4] = (Il2CppClass *)v53;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v53, v54, v55);
        }
        if ( missionIdb == ++v40 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1B8880C(ValidEntityList, v10);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F1D4 & 1) == 0 )
  {
    sub_1B885B0(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4A5F1D4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return ent->fields.condType == 177;
}