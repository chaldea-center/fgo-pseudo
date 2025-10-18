void AssistEffectListViewManager___ctor(AssistEffectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


int32_t AssistEffectListViewManager__CreateList(
        AssistEffectListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  int32_t v5; // w21
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w23
  void *v8; // x25
  System_String_o *Detail; // x0
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t v11; // w26
  int32_t v12; // w27
  System_String_o *v13; // x28
  int32_t size; // w20
  System_String_o *v15; // x29
  AssistEffectListViewItem_o *v16; // x25
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v22; // [xsp+0h] [xbp-70h]

  if ( (byte_4C3CCBC & 1) == 0 )
  {
    sub_1C37058(&AssistEffectListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3CCBC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_17;
  v5 = *((_DWORD *)Instance + 6);
  v6 = (System_Collections_Generic_List_object__o *)Instance;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v6,
                   v7,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_AssistEntity__get_Item__);
      if ( !Instance )
        break;
      v8 = Instance;
      Detail = AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v11 = *((_DWORD *)v8 + 4);
      v12 = *((_DWORD *)v8 + 9);
      v13 = (System_String_o *)*((_QWORD *)v8 + 3);
      size = v6->fields._size;
      v15 = Detail;
      v16 = (AssistEffectListViewItem_o *)sub_1C372A4(AssistEffectListViewItem_TypeInfo);
      AssistEffectListViewItem___ctor(v16, v7, eventId, v11, v12, v13, v15, v7 == size - 1, v22);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v19 = itemList->fields._size;
      if ( (unsigned int)v19 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v19;
        itemList->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C36FFC(v20 + 4, v16);
      }
      if ( v5 == ++v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(Instance);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Instance = this->fields.scrollView;
  if ( !Instance )
    goto LABEL_17;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  return v5;
}


void AssistEffectListViewManager__OnClickListView(
        AssistEffectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}