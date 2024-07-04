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
  Il2CppObject *Master_object; // x21
  void *ValidEntityList; // x0
  __int64 v12; // x1
  int v13; // w20
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  void *v16; // x25
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x26
  int32_t v19; // w27
  int32_t v20; // w28
  System_String_o *v21; // x29
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t size; // w19
  CommandAssistListViewItem_o *v24; // x25
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // [xsp+0h] [xbp-80h]

  if ( (byte_48DDE19 & 1) == 0 )
  {
    sub_1B00CCC(&CommandAssistListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v8);
    sub_1B00CCC(&string_TypeInfo, v9);
    byte_48DDE19 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v13 = *((_DWORD *)ValidEntityList + 6);
  v14 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v14,
                          v15,
                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v16 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_38593460(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v19 = *((_DWORD *)v16 + 4);
      v20 = *((_DWORD *)v16 + 12);
      v21 = (System_String_o *)*((_QWORD *)v16 + 4);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      size = v14->fields._size;
      v24 = (CommandAssistListViewItem_o *)sub_1B00F18(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v24, v15, eventId, v19, v20, v21, Empty, v15 == size - 1, v29);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v27 = itemList->fields._size;
      if ( (unsigned int)v27 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + v27;
        itemList->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1B00C70(v28 + 4);
      }
      if ( v13 == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B00F28(ValidEntityList, v12);
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