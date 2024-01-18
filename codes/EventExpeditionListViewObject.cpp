void __fastcall EventExpeditionListViewObject___ctor(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_418A3BB & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418A3BB = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewObject__Awake(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventExpeditionListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A3B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___, method);
    byte_418A3B4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct EventExpeditionListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          dispObject,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventExpeditionListViewItem_o *__fastcall EventExpeditionListViewObject__GetItem(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418A3B6 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewItem_TypeInfo, method);
    byte_418A3B6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventExpeditionListViewItem_TypeInfo )
    return (EventExpeditionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventExpeditionListViewObject__Init(
        EventExpeditionListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  EventExpeditionListViewItem_o *v7; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  EventExpeditionListViewObject_c *klass; // x8
  int32_t v20; // w9
  EventExpeditionListViewObject_c *v21; // x8
  ListViewObject_o *v22; // x0
  bool v23; // w1
  EventExpeditionListViewObject_o *v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *v33; // x19

  if ( (byte_418A3B7 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewItem_TypeInfo, callbackFunc);
    byte_418A3B7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v6 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventExpeditionListViewItem_TypeInfo )
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
    sub_B2C434(transform, v9);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( v7 && v7->fields.isRelease )
  {
    EventExpeditionListViewItem__CheckExpeditionCondition(v7, v17);
    if ( v7->fields.isComplete )
    {
      klass = this->klass;
      v20 = 4;
    }
    else
    {
      EventExpeditionListViewItem__CheckExpeditionCondition(v7, v18);
      if ( v7->fields.isRunning )
      {
        klass = this->klass;
        v20 = 3;
      }
      else if ( EventExpeditionListViewObject__IsAllUserItemEnough(v24, v7->fields.commonConsumeEntity, v25) )
      {
        klass = this->klass;
        v20 = 1;
      }
      else
      {
        klass = this->klass;
        v20 = 2;
      }
    }
    this->fields.dispMode = v20;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
      this,
      1LL,
      klass->vtable._10_Invalidation.methodPtr);
    v23 = 1;
    v22 = (ListViewObject_o *)this;
  }
  else
  {
    v21 = this->klass;
    this->fields.dispMode = 0;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, _QWORD, Il2CppMethodPointer))v21->vtable._9_SetInput.method)(
      this,
      0LL,
      v21->vtable._10_Invalidation.methodPtr);
    v22 = (ListViewObject_o *)this;
    v23 = 0;
  }
  ListViewObject__SetVisible(v22, v23, 0LL);
  EventExpeditionListViewObject__SetupDisp(this, v26);
  v33 = this->fields.callbackFunc;
  if ( v33 )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v27, v28, v29, v30, v31, v32);
    System_Action__Invoke(v33, 0LL);
  }
}


bool __fastcall EventExpeditionListViewObject__IsAllUserItemEnough(
        EventExpeditionListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  signed int max_length; // w8
  unsigned int v7; // w21
  CommonConsumeEntity_o *v8; // x25
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemMaster_o *v10; // x20
  __int64 v12; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A3B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, consumeList);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    this = (EventExpeditionListViewObject_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A3B9 = 1;
  }
  entity = 0LL;
  if ( !consumeList )
LABEL_19:
    sub_B2C434(this, consumeList);
  max_length = consumeList->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    v8 = consumeList->m_Items[v7];
    this = (EventExpeditionListViewObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    v10 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (EventExpeditionListViewObject_o *)NetworkManager__get_UserId(0LL);
    if ( !v8 || !v10 )
      goto LABEL_19;
    this = (EventExpeditionListViewObject_o *)UserItemMaster__TryGetEntity(
                                                v10,
                                                &entity,
                                                (int64_t)this,
                                                v8->fields.objectId,
                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( !entity )
      goto LABEL_19;
    if ( v8->fields.num > entity->fields.num )
      return 0;
    max_length = consumeList->max_length;
    if ( (int)++v7 >= max_length )
      return 1;
  }
}


void __fastcall EventExpeditionListViewObject__OnClickSelect(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418A3BA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9954/*"OnClickListView"*/, method);
    byte_418A3BA = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B2C434(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9954/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetItem(
        EventExpeditionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetupDisp(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventExpeditionListViewItemDraw_o *v10; // x0

  if ( (byte_418A3B8 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A3B8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == EventExpeditionListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    EventExpeditionListViewItemDraw__SetItem(v10, (EventExpeditionListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall EventExpeditionListViewObject__Update(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  EventExpeditionListViewItem_c *v6; // x10
  EventExpeditionListViewItem_o *v7; // x20
  EventExpeditionListViewItemDraw_o *itemDraw; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_418A3B5 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewItem_TypeInfo, method);
    byte_418A3B5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == EventExpeditionListViewItem_TypeInfo ? (EventExpeditionListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventExpeditionListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        EventExpeditionListViewObject__Init(this, 0LL, v2);
        if ( !itemDraw )
          sub_B2C434(v9, v10);
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

  if ( (byte_418A3B2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A3B2 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A3B3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A3B3 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  EventExpeditionListViewObject__Awake(v11, v12);
}