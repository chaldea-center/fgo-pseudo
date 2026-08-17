void EventExpeditionListViewObject___ctor(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A5E1 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A5E1 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventExpeditionListViewObject__Awake(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A5DA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
    byte_596A5DA = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
  this->fields.itemDraw = (struct EventExpeditionListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventExpeditionListViewItem_o *EventExpeditionListViewObject__GetItem(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A5DC & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewItem_TypeInfo);
    byte_596A5DC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventExpeditionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventExpeditionListViewItem_TypeInfo )
    return (EventExpeditionListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventExpeditionListViewObject__Init(
        EventExpeditionListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventExpeditionListViewItem_o *v7; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w8
  _BOOL4 v18; // w21
  EventExpeditionListViewObject_o *ConsumeList; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Action_o *v28; // x19

  if ( (byte_596A5DD & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewItem_TypeInfo);
    byte_596A5DD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventExpeditionListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventExpeditionListViewItem_TypeInfo )
      v7 = (EventExpeditionListViewItem_o *)this->fields.linkItem;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v9);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v7 || !v7->fields.isRelease )
  {
    v18 = 0;
    this->fields.dispMode = 0;
    goto LABEL_22;
  }
  if ( EventExpeditionListViewItem__get_IsComplete(v7, 0) )
  {
    v17 = 4;
  }
  else if ( EventExpeditionListViewItem__get_IsRunning(v7, 0) )
  {
    v17 = 3;
  }
  else
  {
    ConsumeList = (EventExpeditionListViewObject_o *)EventExpeditionListViewItem__get_ConsumeList(v7, 0);
    if ( EventExpeditionListViewObject__IsAllUserItemEnough(ConsumeList, (CommonConsumeEntity_array *)ConsumeList, v20) )
    {
      v18 = 1;
      this->fields.dispMode = 1;
      goto LABEL_22;
    }
    v17 = 2;
  }
  v18 = 1;
  this->fields.dispMode = v17;
LABEL_22:
  ((void (__fastcall *)(EventExpeditionListViewObject_o *, _BOOL4, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v18,
    this->klass->vtable._9_SetInput.method);
  ListViewObject__SetVisible((ListViewObject_o *)this, v18, 0);
  EventExpeditionListViewObject__SetupDisp(this, v21);
  v28 = this->fields.callbackFunc;
  if ( v28 )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v22, v23, v24, v25, v26, v27);
    ((void (__fastcall *)(intptr_t, intptr_t))v28->fields.invoke_impl)(v28->fields.method_code, v28->fields.method);
  }
}


bool EventExpeditionListViewObject__IsAllUserItemEnough(
        EventExpeditionListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w22
  int v6; // w23
  CommonConsumeEntity_o *v7; // x28
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596A5DF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (EventExpeditionListViewObject_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5DF = 1;
  }
  entity = 0;
  if ( !consumeList )
    goto LABEL_21;
  max_length = consumeList->max_length;
  v5 = max_length < 1;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v7 = consumeList->m_Items[v6];
      this = (EventExpeditionListViewObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      entity = 0;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, consumeList, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      this = (EventExpeditionListViewObject_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, consumeList, v8);
        this = (EventExpeditionListViewObject_o *)NetworkManager_TypeInfo;
      }
      if ( !v7 || !MasterData_object )
        break;
      this = (EventExpeditionListViewObject_o *)UserItemMaster__TryGetEntity(
                                                  (UserItemMaster_o *)MasterData_object,
                                                  &entity,
                                                  (int64_t)this[1].fields.manager->fields.sortKindLabel,
                                                  v7->fields.objectId,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
        return v5;
      if ( !entity )
        break;
      if ( v7->fields.num <= entity->fields.num )
      {
        max_length = consumeList->max_length;
        v5 = ++v6 >= max_length;
        if ( v6 < max_length )
          continue;
      }
      return v5;
    }
LABEL_21:
    sub_2213CDC(this, consumeList);
  }
  return v5;
}


void EventExpeditionListViewObject__OnClickSelect(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596A5E0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596A5E0 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void EventExpeditionListViewObject__SetItem(
        EventExpeditionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void EventExpeditionListViewObject__SetupDisp(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  EventExpeditionListViewItemDraw_o *v10; // x0

  if ( (byte_596A5DE & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A5DE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventExpeditionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventExpeditionListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v9);
    EventExpeditionListViewItemDraw__SetItem(v10, (EventExpeditionListViewItem_o *)linkItem, this->fields.dispMode, 0);
  }
}


void EventExpeditionListViewObject__Update(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  EventExpeditionListViewItemDraw_o *itemDraw; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596A5DB & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewItem_TypeInfo);
    byte_596A5DB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventExpeditionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventExpeditionListViewItem_TypeInfo )
    {
      itemDraw = this->fields.itemDraw;
      EventExpeditionListViewObject__Init(this, 0, v2);
      if ( !itemDraw )
        sub_2213CDC(v7, v8);
      EventExpeditionListViewItemDraw__UpdateItem(
        itemDraw,
        (EventExpeditionListViewItem_o *)linkItem,
        this->fields.dispMode,
        0);
    }
  }
}


void EventExpeditionListViewObject__add_callbackFunc(
        EventExpeditionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventExpeditionListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A5D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A5D8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventExpeditionListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventExpeditionListViewObject__remove_callbackFunc(v13, v14, v15);
}


int32_t EventExpeditionListViewObject__get_DispMode(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.dispMode;
}


void EventExpeditionListViewObject__remove_callbackFunc(
        EventExpeditionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventExpeditionListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A5D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A5D9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventExpeditionListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventExpeditionListViewObject__Awake(v13, v14);
}