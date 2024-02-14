void __fastcall CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  void *ValidEntityList; // x0
  void *v12; // x22
  unsigned int v13; // w8
  __int64 i; // x23
  __int64 v15; // x20
  SkillLvEntity_o *Entity; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *Empty; // x25
  int32_t v20; // w27
  int32_t v21; // w28
  System_String_o *v22; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int v24; // w19
  CommandAssistListViewItem_o *v25; // x26
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]
  int v27; // [xsp+10h] [xbp-60h]

  if ( (byte_42147BC & 1) == 0 )
  {
    sub_B0D8A4(&CommandAssistListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v8);
    sub_B0D8A4(&string_TypeInfo, v9);
    byte_42147BC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v12 = ValidEntityList;
  v27 = *((_DWORD *)ValidEntityList + 6);
  if ( v27 >= 1 )
  {
    v13 = *((_DWORD *)ValidEntityList + 6);
    for ( i = 0LL; ; ++i )
    {
      if ( v13 <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 8 * i + 32);
      if ( !v15 || !Master_WarQuestSelectionMaster )
        break;
      Entity = SkillLvMaster__GetEntity(
                 Master_WarQuestSelectionMaster,
                 *(_DWORD *)(v15 + 52),
                 *(_DWORD *)(v15 + 56),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_26117940(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v20 = *(_DWORD *)(v15 + 16);
      v21 = *(_DWORD *)(v15 + 48);
      v22 = *(System_String_o **)(v15 + 32);
      itemList = this->fields.itemList;
      v24 = *((_DWORD *)v12 + 6);
      v25 = (CommandAssistListViewItem_o *)sub_B0D974(CommandAssistListViewItem_TypeInfo, v17, v18);
      CommandAssistListViewItem___ctor(v25, i, eventId, v20, v21, v22, Empty, (_DWORD)i == v24 - 1, v26);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)i + 1 >= v27 )
        goto LABEL_20;
      v13 = *((_DWORD *)v12 + 6);
    }
LABEL_22:
    sub_B0D97C(ValidEntityList);
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