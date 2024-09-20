void __fastcall EventExpeditionListViewObject___ctor(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EE8A & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5EE8A = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewObject__Awake(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EE83 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
    byte_4A5EE83 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
  this->fields.itemDraw = (struct EventExpeditionListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


EventExpeditionListViewItem_o *__fastcall EventExpeditionListViewObject__GetItem(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A5EE85 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewItem_TypeInfo);
    byte_4A5EE85 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventExpeditionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionListViewItem_TypeInfo )
    return (EventExpeditionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventExpeditionListViewObject__Init(
        EventExpeditionListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventExpeditionListViewItem_o *v7; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  EventExpeditionListViewObject_c *v15; // x8
  int32_t v16; // w9
  EventExpeditionListViewObject_c *klass; // x8
  bool v18; // w21
  EventExpeditionListViewObject_o *v19; // x0
  const MethodInfo *v20; // x2
  EventExpeditionListViewObject_c *v21; // x8
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Action_o *v25; // x19

  if ( (byte_4A5EE86 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewItem_TypeInfo);
    byte_4A5EE86 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventExpeditionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionListViewItem_TypeInfo )
      v7 = (EventExpeditionListViewItem_o *)this->fields.linkItem;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v9);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( !v7 || !v7->fields.isRelease )
  {
    klass = this->klass;
    this->fields.dispMode = 0;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, _QWORD, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
      this,
      0LL,
      klass->vtable._10_Invalidation.methodPtr);
    v18 = 0;
    goto LABEL_22;
  }
  EventExpeditionListViewItem__CheckExpeditionCondition(v7, v13);
  if ( v7->fields.isComplete )
  {
    v15 = this->klass;
    v16 = 4;
  }
  else
  {
    EventExpeditionListViewItem__CheckExpeditionCondition(v7, v14);
    if ( v7->fields.isRunning )
    {
      v15 = this->klass;
      v16 = 3;
    }
    else
    {
      if ( EventExpeditionListViewObject__IsAllUserItemEnough(v19, v7->fields.commonConsumeEntity, v20) )
      {
        v21 = this->klass;
        v18 = 1;
        this->fields.dispMode = 1;
        ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, Il2CppMethodPointer))v21->vtable._9_SetInput.method)(
          this,
          1LL,
          v21->vtable._10_Invalidation.methodPtr);
        goto LABEL_22;
      }
      v15 = this->klass;
      v16 = 2;
    }
  }
  this->fields.dispMode = v16;
  v18 = 1;
  ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, Il2CppMethodPointer))v15->vtable._9_SetInput.method)(
    this,
    1LL,
    v15->vtable._10_Invalidation.methodPtr);
LABEL_22:
  ListViewObject__SetVisible((ListViewObject_o *)this, v18, 0LL);
  EventExpeditionListViewObject__SetupDisp(this, v22);
  v25 = this->fields.callbackFunc;
  if ( v25 )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v23, v24);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v25->fields.m_target)(
      v25->fields.original_method_info,
      *(_QWORD *)&v25->fields.extra_arg);
  }
}


bool __fastcall EventExpeditionListViewObject__IsAllUserItemEnough(
        EventExpeditionListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w21
  CommonConsumeEntity_o *v6; // x25
  Il2CppObject *MasterData_object; // x0
  UserItemMaster_o *v8; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EE88 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (EventExpeditionListViewObject_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE88 = 1;
  }
  entity = 0LL;
  if ( !consumeList )
LABEL_19:
    sub_1B8880C(this, consumeList);
  max_length = consumeList->max_length;
  if ( max_length < 1 )
    return 1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
      sub_1B88814(this, consumeList);
    v6 = consumeList->m_Items[v5];
    this = (EventExpeditionListViewObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    v8 = (UserItemMaster_o *)MasterData_object;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (EventExpeditionListViewObject_o *)NetworkManager__get_UserId(0LL);
    if ( !v6 || !v8 )
      goto LABEL_19;
    this = (EventExpeditionListViewObject_o *)UserItemMaster__TryGetEntity(
                                                v8,
                                                &entity,
                                                (int64_t)this,
                                                v6->fields.objectId,
                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( !entity )
      goto LABEL_19;
    if ( v6->fields.num > entity->fields.num )
      return 0;
    max_length = consumeList->max_length;
    if ( (int)++v5 >= max_length )
      return 1;
  }
}


void __fastcall EventExpeditionListViewObject__OnClickSelect(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A5EE89 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9847/*"OnClickListView"*/);
    byte_4A5EE89 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9847/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetItem(
        EventExpeditionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetupDisp(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventExpeditionListViewItemDraw_o *v9; // x0

  if ( (byte_4A5EE87 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE87 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventExpeditionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventExpeditionListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    EventExpeditionListViewItemDraw__SetItem(v9, (EventExpeditionListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void __fastcall EventExpeditionListViewObject__Update(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventExpeditionListViewItem_c *v6; // x10
  EventExpeditionListViewItem_o *v7; // x20
  EventExpeditionListViewItemDraw_o *itemDraw; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4A5EE84 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewItem_TypeInfo);
    byte_4A5EE84 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventExpeditionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == EventExpeditionListViewItem_TypeInfo ? (EventExpeditionListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventExpeditionListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        EventExpeditionListViewObject__Init(this, 0LL, v2);
        if ( !itemDraw )
          sub_1B8880C(v9, v10);
        EventExpeditionListViewItemDraw__UpdateItem(itemDraw, v7, this->fields.dispMode, v11);
      }
    }
  }
}


void __fastcall EventExpeditionListViewObject__add_callbackFunc(
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

  if ( (byte_4A5EE81 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EE81 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  EventExpeditionListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall EventExpeditionListViewObject__get_DispMode(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dispMode;
}


void __fastcall EventExpeditionListViewObject__remove_callbackFunc(
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

  if ( (byte_4A5EE82 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EE82 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  EventExpeditionListViewObject__Awake(v11, v12);
}