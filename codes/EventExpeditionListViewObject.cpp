void EventExpeditionListViewObject___ctor(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CB0588 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewObject_TypeInfo);
    byte_4CB0588 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventExpeditionListViewObject__Awake(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CB0581 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
    byte_4CB0581 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C6BC60(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
  this->fields.itemDraw = (struct EventExpeditionListViewItemDraw_o *)Component_object;
  sub_1C6B9AC(&this->fields.itemDraw, Component_object);
}


EventExpeditionListViewItem_o *EventExpeditionListViewObject__GetItem(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CB0583 & 1) == 0 )
  {
    sub_1C6BA08(&EventExpeditionListViewItem_TypeInfo);
    byte_4CB0583 = 1;
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
  struct System_Action_o **p_callbackFunc; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  EventExpeditionListViewObject_c *v13; // x8
  int32_t v14; // w9
  EventExpeditionListViewObject_c *klass; // x8
  bool v16; // w21
  EventExpeditionListViewObject_o *v17; // x0
  const MethodInfo *v18; // x2
  EventExpeditionListViewObject_c *v19; // x8
  const MethodInfo *v20; // x1
  struct System_Action_o *v21; // x19

  if ( (byte_4CB0584 & 1) == 0 )
  {
    sub_1C6BA08(&EventExpeditionListViewItem_TypeInfo);
    byte_4CB0584 = 1;
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
    sub_1C6BC60(transform, v9);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C6B9AC(&this->fields.callbackFunc, callbackFunc);
  if ( !v7 || !v7->fields.isRelease )
  {
    klass = this->klass;
    this->fields.dispMode = 0;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, _QWORD, const MethodInfo *))klass->vtable._9_SetInput.methodPtr)(
      this,
      0,
      klass->vtable._9_SetInput.method);
    v16 = 0;
    goto LABEL_22;
  }
  EventExpeditionListViewItem__CheckExpeditionCondition(v7, v11);
  if ( v7->fields.isComplete )
  {
    v13 = this->klass;
    v14 = 4;
  }
  else
  {
    EventExpeditionListViewItem__CheckExpeditionCondition(v7, v12);
    if ( v7->fields.isRunning )
    {
      v13 = this->klass;
      v14 = 3;
    }
    else
    {
      if ( EventExpeditionListViewObject__IsAllUserItemEnough(v17, v7->fields.commonConsumeEntity, v18) )
      {
        v19 = this->klass;
        v16 = 1;
        this->fields.dispMode = 1;
        ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, const MethodInfo *))v19->vtable._9_SetInput.methodPtr)(
          this,
          1,
          v19->vtable._9_SetInput.method);
        goto LABEL_22;
      }
      v13 = this->klass;
      v14 = 2;
    }
  }
  this->fields.dispMode = v14;
  v16 = 1;
  ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, const MethodInfo *))v13->vtable._9_SetInput.methodPtr)(
    this,
    1,
    v13->vtable._9_SetInput.method);
LABEL_22:
  ListViewObject__SetVisible((ListViewObject_o *)this, v16, 0);
  EventExpeditionListViewObject__SetupDisp(this, v20);
  v21 = this->fields.callbackFunc;
  if ( v21 )
  {
    *p_callbackFunc = 0;
    sub_1C6B9AC(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


bool EventExpeditionListViewObject__IsAllUserItemEnough(
        EventExpeditionListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w20
  unsigned int v6; // w23
  CommonConsumeEntity_o *v7; // x27
  Il2CppObject *MasterData_object; // x0
  UserItemMaster_o *v9; // x22
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB0586 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    this = (EventExpeditionListViewObject_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB0586 = 1;
  }
  entity = 0;
  if ( !consumeList )
LABEL_23:
    sub_1C6BC60(this, consumeList);
  max_length = consumeList->max_length;
  v5 = 1;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C6BC68(this);
      v7 = consumeList->m_Items[v6];
      this = (EventExpeditionListViewObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_23;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
      entity = 0;
      v9 = (UserItemMaster_o *)MasterData_object;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      this = (EventExpeditionListViewObject_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventExpeditionListViewObject_o *)NetworkManager_TypeInfo;
      }
      if ( !v7 || !v9 )
        goto LABEL_23;
      this = (EventExpeditionListViewObject_o *)UserItemMaster__TryGetEntity(
                                                  v9,
                                                  &entity,
                                                  (int64_t)this[1].fields.manager->fields.sortKindLabel,
                                                  v7->fields.objectId,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( !entity )
        goto LABEL_23;
      if ( v7->fields.num > entity->fields.num )
        return 0;
      max_length = consumeList->max_length;
      if ( (int)++v6 >= max_length )
        return 1;
    }
  }
  return v5;
}


void EventExpeditionListViewObject__OnClickSelect(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CB0587 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9845/*"OnClickListView"*/);
    byte_4CB0587 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C6BC60(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9845/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void EventExpeditionListViewObject__SetItem(
        EventExpeditionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44077592((ListViewObject_o *)this, item, seed, 0);
}


void EventExpeditionListViewObject__SetupDisp(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventExpeditionListViewItemDraw_o *v9; // x0

  if ( (byte_4CB0585 & 1) == 0 )
  {
    sub_1C6BA08(&EventExpeditionListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0585 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C6BC60(0, v7);
    EventExpeditionListViewItemDraw__SetItem(v9, (EventExpeditionListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void EventExpeditionListViewObject__Update(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventExpeditionListViewItem_c *v6; // x10
  EventExpeditionListViewItem_o *v7; // x20
  EventExpeditionListViewItemDraw_o *itemDraw; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4CB0582 & 1) == 0 )
  {
    sub_1C6BA08(&EventExpeditionListViewItem_TypeInfo);
    byte_4CB0582 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventExpeditionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v6 = (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v7 = v6 == EventExpeditionListViewItem_TypeInfo ? (EventExpeditionListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventExpeditionListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        EventExpeditionListViewObject__Init(this, 0, v2);
        if ( !itemDraw )
          sub_1C6BC60(v9, v10);
        EventExpeditionListViewItemDraw__UpdateItem(itemDraw, v7, this->fields.dispMode, v11);
      }
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
  __int64 v9; // x0
  bool v10; // zf
  EventExpeditionListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB057F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB057F = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventExpeditionListViewObject_o *)sub_1C6BFFC(v8);
  EventExpeditionListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EventExpeditionListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB0580 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB0580 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventExpeditionListViewObject_o *)sub_1C6BFFC(v8);
  EventExpeditionListViewObject__Awake(v11, v12);
}