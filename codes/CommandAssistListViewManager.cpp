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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Master_object; // x21
  void *ValidEntityList; // x0
  __int64 v20; // x1
  int v21; // w20
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  void *v24; // x25
  SkillLvEntity_o *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_String_o *Empty; // x26
  int32_t v30; // w27
  int32_t v31; // w28
  System_String_o *v32; // x29
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t size; // w19
  CommandAssistListViewItem_o *v35; // x25
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  const MethodInfo *v40; // [xsp+0h] [xbp-80h]

  if ( (byte_4B10DE9 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandAssistListViewItem_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&string_TypeInfo, v15, v16);
    byte_4B10DE9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v21 = *((_DWORD *)ValidEntityList + 6);
  v22 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v22,
                          v23,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v24 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_40665920(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v30 = *((_DWORD *)v24 + 4);
      v31 = *((_DWORD *)v24 + 12);
      v32 = (System_String_o *)*((_QWORD *)v24 + 4);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      size = v22->fields._size;
      v35 = (CommandAssistListViewItem_o *)sub_1BCAA2C(CommandAssistListViewItem_TypeInfo, v26, v27, v28);
      CommandAssistListViewItem___ctor(v35, v23, eventId, v30, v31, v32, Empty, v23 == size - 1, v40);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v38 = itemList->fields._size;
      if ( (unsigned int)v38 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v35,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + v38;
        itemList->fields._size = v38 + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784(v39 + 4, v35);
      }
      if ( v21 == ++v23 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(ValidEntityList, v20);
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