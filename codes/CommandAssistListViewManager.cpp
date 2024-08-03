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
  int v12; // w20
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  void *v15; // x25
  SkillLvEntity_o *Entity; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *Empty; // x26
  int32_t v20; // w27
  int32_t v21; // w28
  System_String_o *v22; // x29
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t size; // w19
  CommandAssistListViewItem_o *v25; // x25
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // [xsp+0h] [xbp-80h]

  if ( (byte_49F7539 & 1) == 0 )
  {
    sub_1B640C8(&CommandAssistListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v8);
    sub_1B640C8(&string_TypeInfo, v9);
    byte_49F7539 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v12 = *((_DWORD *)ValidEntityList + 6);
  v13 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v13,
                          v14,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v15 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_39520556(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v20 = *((_DWORD *)v15 + 4);
      v21 = *((_DWORD *)v15 + 12);
      v22 = (System_String_o *)*((_QWORD *)v15 + 4);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      size = v13->fields._size;
      v25 = (CommandAssistListViewItem_o *)sub_1B64314(CommandAssistListViewItem_TypeInfo, v17, v18);
      CommandAssistListViewItem___ctor(v25, v14, eventId, v20, v21, v22, Empty, v14 == size - 1, v30);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v28 = itemList->fields._size;
      if ( (unsigned int)v28 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + v28;
        itemList->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)v25;
        sub_1B6406C(v29 + 4);
      }
      if ( v12 == ++v14 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(ValidEntityList);
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