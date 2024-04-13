void __fastcall EventExpeditionListViewObject___ctor(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB1FD & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1FD = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventExpeditionListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB1F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42EB1F6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct EventExpeditionListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          dispObject,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


EventExpeditionListViewItem_o *__fastcall EventExpeditionListViewObject__GetItem(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EB1F8 & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1F8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventExpeditionListViewItem_TypeInfo )
    return (EventExpeditionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventExpeditionListViewObject__Init(
        EventExpeditionListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  EventExpeditionListViewItem_o *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  EventExpeditionListViewObject_c *klass; // x8
  int32_t v21; // w9
  EventExpeditionListViewObject_c *v22; // x8
  ListViewObject_o *v23; // x0
  bool v24; // w1
  EventExpeditionListViewObject_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_o *v34; // x19

  if ( (byte_42EB1F9 & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewItem_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    byte_42EB1F9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v7 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == EventExpeditionListViewItem_TypeInfo )
      v8 = (EventExpeditionListViewItem_o *)this->fields.linkItem;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v10);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( v8 && v8->fields.isRelease )
  {
    EventExpeditionListViewItem__CheckExpeditionCondition(v8, v18);
    if ( v8->fields.isComplete )
    {
      klass = this->klass;
      v21 = 4;
    }
    else
    {
      EventExpeditionListViewItem__CheckExpeditionCondition(v8, v19);
      if ( v8->fields.isRunning )
      {
        klass = this->klass;
        v21 = 3;
      }
      else if ( EventExpeditionListViewObject__IsAllUserItemEnough(v25, v8->fields.commonConsumeEntity, v26) )
      {
        klass = this->klass;
        v21 = 1;
      }
      else
      {
        klass = this->klass;
        v21 = 2;
      }
    }
    this->fields.dispMode = v21;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, __int64, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
      this,
      1LL,
      klass->vtable._10_Invalidation.methodPtr);
    v24 = 1;
    v23 = (ListViewObject_o *)this;
  }
  else
  {
    v22 = this->klass;
    this->fields.dispMode = 0;
    ((void (__fastcall *)(EventExpeditionListViewObject_o *, _QWORD, Il2CppMethodPointer))v22->vtable._9_SetInput.method)(
      this,
      0LL,
      v22->vtable._10_Invalidation.methodPtr);
    v23 = (ListViewObject_o *)this;
    v24 = 0;
  }
  ListViewObject__SetVisible(v23, v24, 0LL);
  EventExpeditionListViewObject__SetupDisp(this, v27);
  v34 = this->fields.callbackFunc;
  if ( v34 )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
    System_Action__Invoke(v34, 0LL);
  }
}


bool __fastcall EventExpeditionListViewObject__IsAllUserItemEnough(
        EventExpeditionListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  signed int max_length; // w8
  unsigned int v12; // w21
  CommonConsumeEntity_o *v13; // x25
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemMaster_o *v15; // x20
  __int64 v17; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB1FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)consumeList, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    this = (EventExpeditionListViewObject_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v8,
                                                v9,
                                                v10);
    byte_42EB1FB = 1;
  }
  entity = 0LL;
  if ( !consumeList )
LABEL_19:
    sub_B5D69C(this, consumeList);
  max_length = consumeList->max_length;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
    }
    v13 = consumeList->m_Items[v12];
    this = (EventExpeditionListViewObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    v15 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (EventExpeditionListViewObject_o *)NetworkManager__get_UserId(0LL);
    if ( !v13 || !v15 )
      goto LABEL_19;
    this = (EventExpeditionListViewObject_o *)UserItemMaster__TryGetEntity(
                                                v15,
                                                &entity,
                                                (int64_t)this,
                                                v13->fields.objectId,
                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( !entity )
      goto LABEL_19;
    if ( v13->fields.num > entity->fields.num )
      return 0;
    max_length = consumeList->max_length;
    if ( (int)++v12 >= max_length )
      return 1;
  }
}


void __fastcall EventExpeditionListViewObject__OnClickSelect(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EB1FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42EB1FC = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetItem(
        EventExpeditionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventExpeditionListViewObject__SetupDisp(
        EventExpeditionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  EventExpeditionListViewItemDraw_o *v14; // x0

  if ( (byte_42EB1FA & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB1FA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == EventExpeditionListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    EventExpeditionListViewItemDraw__SetItem(v14, (EventExpeditionListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


void __fastcall EventExpeditionListViewObject__Update(EventExpeditionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  EventExpeditionListViewItem_c *v7; // x10
  EventExpeditionListViewItem_o *v8; // x20
  EventExpeditionListViewItemDraw_o *itemDraw; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB1F7 & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB1F7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&EventExpeditionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      v7 = (EventExpeditionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1];
      v8 = v7 == EventExpeditionListViewItem_TypeInfo ? (EventExpeditionListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v7 == EventExpeditionListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        EventExpeditionListViewObject__Init(this, 0LL, v2);
        if ( !itemDraw )
          sub_B5D69C(v10, v11);
        EventExpeditionListViewItemDraw__UpdateItem(itemDraw, v8, this->fields.dispMode, v12);
      }
    }
  }
}


void __fastcall EventExpeditionListViewObject__add_callbackFunc(
        EventExpeditionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventExpeditionListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB1F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB1F4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EventExpeditionListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventExpeditionListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB1F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB1F5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EventExpeditionListViewObject__Awake(v12, v13);
}