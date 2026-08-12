void EventRewardAnotherPayListViewManager___ctor(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayListViewManager__CreateList(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t eventId,
        int32_t shopItemId,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        System_Action_bool__int__o *clickAction,
        const MethodInfo *method)
{
  bool v7; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v20; // x25
  EventRewardAnotherPayListViewItem_o *v21; // x24
  const MethodInfo *v22; // x6
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  char v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v35; // x28
  System_Collections_Generic_List_object__o *v36; // x24
  ItemEntity_o *v37; // x26
  EventRewardAnotherPayListViewItem_o *v38; // x25
  const MethodInfo *v39; // x6
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  char v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  ItemEntity_o *v50; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596ABEA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&StringLiteral_15802/*"UpdateScrollPosition"*/);
    byte_596ABEA = 1;
  }
  entity = 0;
  v50 = 0;
  this->fields.onSelectItemAction = clickAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectItemAction,
    (int32_t)clickAction,
    *(System_String_o **)&shopItemId,
    (System_String_o *)anotherItemIds,
    isOnlyAnotherItem,
    (int32_t)clickAction,
    (bool)method,
    v7);
  this->fields._IsSkillList_k__BackingField = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v33 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v20 = entity;
    v21 = (EventRewardAnotherPayListViewItem_o *)sub_2213CCC(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v21, 0, eventId, (ItemEntity_o *)v20, 0, 0, v22);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v21,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v21, v23, v24, v25, v26, v27, v28);
    }
    v33 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  max_length = anotherItemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      if ( !v18 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v18,
                                        (Il2CppObject **)&v50,
                                        anotherItemIds->m_Items[v35],
                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v36 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v37 = v50;
        v38 = (EventRewardAnotherPayListViewItem_o *)sub_2213CCC(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v38, v33, eventId, v37, 1, v33, v39);
        if ( !v36 )
          break;
        v46 = v36->fields._items;
        v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v36->fields._version;
        if ( !v46 )
          break;
        v48 = v36->fields._size;
        if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            (Il2CppObject *)v38,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &v46->obj.klass + v48;
          v36->fields._size = v48 + 1;
          v49[4] = (Il2CppClass *)v38;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v38, v40, v41, v42, v43, v44, v45);
        }
        ++v33;
      }
      LODWORD(max_length) = anotherItemIds->max_length;
      if ( (__int64)++v35 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_2213CDC(Master_object, v17);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15802/*"UpdateScrollPosition"*/, 0.0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayListViewManager__CreateList_38848320(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t eventId,
        int32_t anotherItemId,
        System_Action_int__o *clickAction,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v16; // x21
  int32_t v17; // w22
  unsigned __int64 v18; // x28
  int32_t v19; // w23
  Il2CppObject *v20; // x26
  Il2CppObject *v21; // x19
  System_Collections_Generic_List_object__o *itemList; // x23
  EventRewardAnotherPayListViewItem_o *v23; // x24
  const MethodInfo *v24; // x6
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *v37; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596ABEB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&StringLiteral_15802/*"UpdateScrollPosition"*/);
    byte_596ABEB = 1;
  }
  entity = 0;
  v37 = 0;
  this->fields.onSelectSkillAction = clickAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSkillAction,
    (int32_t)clickAction,
    *(System_String_o **)&anotherItemId,
    (System_String_o *)clickAction,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields._IsSkillList_k__BackingField = 1;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         anotherItemId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Master_object = (System_Int32_array *)entity;
    if ( !entity )
      goto LABEL_24;
    Master_object = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
    if ( !Master_object )
      goto LABEL_24;
    max_length = Master_object->max_length;
    v16 = Master_object;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)max_length )
          sub_2213CE4(Master_object);
        v19 = v16->m_Items[v18];
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Master_object )
          break;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &v37,
                                                v19,
                                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v20 = v37;
          v21 = entity;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v23 = (EventRewardAnotherPayListViewItem_o *)sub_2213CCC(EventRewardAnotherPayListViewItem_TypeInfo);
          EventRewardAnotherPayListViewItem___ctor_38844764(
            v23,
            v17,
            eventId,
            (ItemEntity_o *)v21,
            (SkillEntity_o *)v20,
            v17,
            v24);
          if ( !itemList )
            break;
          items = itemList->fields._items;
          v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            break;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v23,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v23;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
          }
          ++v17;
        }
        LODWORD(max_length) = v16->max_length;
        if ( (__int64)++v18 >= (int)max_length )
          goto LABEL_23;
      }
LABEL_24:
      sub_2213CDC(Master_object, v13);
    }
  }
LABEL_23:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15802/*"UpdateScrollPosition"*/, 0.0, 0);
}


void EventRewardAnotherPayListViewManager__OnClickListView(
        EventRewardAnotherPayListViewManager_o *this,
        EventRewardAnotherPayListViewItemObject_o *targetObj,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewManager_o *v4; // x19
  EventRewardAnotherPayListViewManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct UICommonButton_o *sortKindButton; // x8
  int dropList_low; // w8
  struct UnityEngine_GameObject_o *dragParentObject; // x9
  int32_t m_CachedPtr; // w2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_596ABEC & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool__int___);
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (EventRewardAnotherPayListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ABEC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !targetObj )
    goto LABEL_31;
  this = (EventRewardAnotherPayListViewManager_o *)EventRewardAnotherPayListViewItemObject__GetItem(
                                                     targetObj,
                                                     (const MethodInfo *)targetObj);
  v5 = this;
  if ( v4->fields._IsSkillList_k__BackingField )
  {
    this = (EventRewardAnotherPayListViewManager_o *)v4->fields.objectList;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v22 = v21;
      v21.fields._list = 0;
      *(_QWORD *)&v21.fields._index = &v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_2213CDC(0, v6);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v22.fields._current,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemObject___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
          v12 = UnityEngine_Object__op_Equality(
                  (UnityEngine_Object_o *)Component_object,
                  (UnityEngine_Object_o *)targetObj,
                  0);
          if ( !Component_object )
            sub_2213CDC(v12, v13);
          EventRewardAnotherPayListViewItemObject__SetSelectedFrame(
            (EventRewardAnotherPayListViewItemObject_o *)Component_object,
            v12,
            v14);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v5 )
      {
        sortKindButton = v5->fields.sortKindButton;
        if ( sortKindButton )
        {
          ActionExtensions__Call_int_(
            (System_Action_T__o *)v4->fields.onSelectSkillAction,
            sortKindButton->fields.m_CachedPtr,
            (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
          return;
        }
      }
    }
LABEL_31:
    sub_2213CDC(this, targetObj);
  }
  if ( !this )
    goto LABEL_31;
  if ( BYTE1(this->fields.dropList) )
  {
    dropList_low = LOBYTE(this->fields.dropList);
    this = (EventRewardAnotherPayListViewManager_o *)v4->fields.onSelectItemAction;
    if ( LOBYTE(v5->fields.dropList) )
    {
      dragParentObject = v5->fields.dragParentObject;
      if ( !dragParentObject )
        goto LABEL_31;
      m_CachedPtr = dragParentObject->fields.m_CachedPtr;
    }
    else
    {
      m_CachedPtr = 0;
    }
    ActionExtensions__Call_bool__int_(
      (System_Action_T1__T2__o *)this,
      dropList_low != 0,
      m_CachedPtr,
      (const MethodInfo_37000F4 *)Method_ActionExtensions_Call_bool__int___);
  }
  else
  {
    v19 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
  }
}


void EventRewardAnotherPayListViewManager__UpdateScrollPosition(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIScrollView_o *scrollView; // x0

  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_2213CDC(0, v3);
  UIScrollView__UpdatePosition(scrollView, 0);
}


bool EventRewardAnotherPayListViewManager__get_IsSkillList(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSkillList_k__BackingField;
}


int32_t EventRewardAnotherPayListViewManager__get_SelectedSkillId(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedSkillId_k__BackingField;
}


void EventRewardAnotherPayListViewManager__set_IsSkillList(
        EventRewardAnotherPayListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSkillList_k__BackingField = value;
}


void EventRewardAnotherPayListViewManager__set_SelectedSkillId(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedSkillId_k__BackingField = value;
}