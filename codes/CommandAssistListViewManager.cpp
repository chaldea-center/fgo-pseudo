void __fastcall CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  void *ValidEntityList; // x0
  __int64 v27; // x1
  void *v28; // x22
  unsigned int v29; // w8
  __int64 i; // x23
  __int64 v31; // x20
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x25
  int32_t v34; // w27
  int32_t v35; // w28
  System_String_o *v36; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int v38; // w19
  CommandAssistListViewItem_o *v39; // x26
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]
  int v41; // [xsp+10h] [xbp-60h]

  if ( (byte_42E8B65 & 1) == 0 )
  {
    sub_B5D5C4(&CommandAssistListViewItem_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v19, v20, v21);
    sub_B5D5C4(&string_TypeInfo, v22, v23, v24);
    byte_42E8B65 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v28 = ValidEntityList;
  v41 = *((_DWORD *)ValidEntityList + 6);
  if ( v41 >= 1 )
  {
    v29 = *((_DWORD *)ValidEntityList + 6);
    for ( i = 0LL; ; ++i )
    {
      if ( v29 <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v31 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 8 * i + 32);
      if ( !v31 || !Master_WarQuestSelectionMaster )
        break;
      Entity = SkillLvMaster__GetEntity(
                 Master_WarQuestSelectionMaster,
                 *(_DWORD *)(v31 + 52),
                 *(_DWORD *)(v31 + 56),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_26810736(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v34 = *(_DWORD *)(v31 + 16);
      v35 = *(_DWORD *)(v31 + 48);
      v36 = *(System_String_o **)(v31 + 32);
      itemList = this->fields.itemList;
      v38 = *((_DWORD *)v28 + 6);
      v39 = (CommandAssistListViewItem_o *)sub_B5D694(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v39, i, eventId, v34, v35, v36, Empty, (_DWORD)i == v38 - 1, v40);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)i + 1 >= v41 )
        goto LABEL_20;
      v29 = *((_DWORD *)v28 + 6);
    }
LABEL_22:
    sub_B5D69C(ValidEntityList, v27);
  }
LABEL_20:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ValidEntityList = this->fields.scrollView;
  if ( !ValidEntityList )
    goto LABEL_22;
  UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0LL);
}


void __fastcall CommandAssistListViewManager__OnClickListView(
        CommandAssistListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}