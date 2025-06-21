void __fastcall EventEquipSkillPartsAddPartsListViewManager___ctor(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventEquipSkillPartsAddPartsListViewManager__CreateList(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        int32_t eventId,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssistEntity_o *Item; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t skillId; // w24
  System_String_o *name; // x25
  System_String_o *Detail; // x0
  int32_t size; // w27
  System_String_o *v17; // x26
  EventEquipSkillPartsAddPartsListViewItem_o *v18; // x23
  const MethodInfo *v19; // x6
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B168A0 & 1) == 0 )
  {
    sub_1BCAFF8(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssistEntity__get_Item__, v8);
    byte_4B168A0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !assistList )
    goto LABEL_15;
  if ( assistList->fields._size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      Item = (AssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)assistList,
                                 v11,
                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssistEntity__get_Item__);
      if ( !Item )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      skillId = Item->fields.skillId;
      name = Item->fields.name;
      Detail = AssistEntity__GetDetail(Item, 0, 0LL);
      size = assistList->fields._size;
      v17 = Detail;
      v18 = (EventEquipSkillPartsAddPartsListViewItem_o *)sub_1BCB244(EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
      EventEquipSkillPartsAddPartsListViewItem___ctor(v18, v11, skillId, name, v17, v11 == size - 1, v19);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v22 = itemList->fields._size;
      if ( (unsigned int)v22 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + v22;
        itemList->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v18;
        sub_1BCAF9C(v23 + 4);
      }
      if ( ++v11 >= assistList->fields._size )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BCB254(Item, v10);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Item = (AssistEntity_o *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_15;
  UIScrollView__ResetPosition((UIScrollView_o *)Item, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsListViewManager__OnClickListView(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventEquipSkillPartsAddPartsListViewManager__SetScrollBarValue(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x8

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (this = (EventEquipSkillPartsAddPartsListViewManager_o *)scrollView->fields.verticalScrollBar) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0LL);
}