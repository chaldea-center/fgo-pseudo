void GiftListViewItemIcon___ctor(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GiftListViewItemIcon__OnClick(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  _BOOL8 IsServant; // x0
  struct GiftEntity_o *itemData; // x1
  struct GiftListViewItemIcon_ClickDelegate_o *callbackFunc; // x8

  IsServant = Gift__IsServant(this->fields.gifttype, 0);
  if ( IsServant || this->fields.gifttype == 2 )
  {
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_8;
    if ( itemData->fields.objectId >= 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        ((void (__fastcall *)(intptr_t))callbackFunc->fields.invoke_impl)(callbackFunc->fields.method_code);
        return;
      }
LABEL_8:
      sub_1C71608(IsServant, itemData);
    }
  }
}


void GiftListViewItemIcon__Set(GiftListViewItemIcon_o *this, GiftEntity_o *indata, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct GiftEntity_o **p_itemData; // x20
  ItemIconComponent_o *IsServant; // x0
  __int64 gifttype; // x1
  int32_t type; // w0
  struct GiftEntity_o *itemData; // x8
  struct GiftEntity_o *v14; // x8
  struct GiftEntity_o *v15; // x8

  this->fields.itemData = indata;
  p_itemData = &this->fields.itemData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemData,
    (int32_t)indata,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_itemData )
    goto LABEL_17;
  type = (*p_itemData)->fields.type;
  this->fields.gifttype = type;
  IsServant = (ItemIconComponent_o *)Gift__IsServant(type, 0);
  if ( ((unsigned __int8)IsServant & 1) != 0 )
  {
    itemData = this->fields.itemData;
    if ( itemData )
    {
      IsServant = this->fields.item;
      if ( IsServant )
      {
        ItemIconComponent__SetFaceImage(
          IsServant,
          itemData->fields.objectId,
          itemData->fields.limitCount,
          itemData->fields.num,
          1,
          0,
          0);
        return;
      }
    }
LABEL_17:
    sub_1C71608(IsServant, gifttype);
  }
  gifttype = (unsigned int)this->fields.gifttype;
  if ( (_DWORD)gifttype == 11 )
  {
    v14 = this->fields.itemData;
    if ( !v14 )
      goto LABEL_17;
    IsServant = this->fields.item;
    if ( !IsServant )
      goto LABEL_17;
    ItemIconComponent__SetCommandCodeImage(IsServant, v14->fields.objectId, v14->fields.num, 0);
  }
  else
  {
    IsServant = this->fields.item;
    v15 = this->fields.itemData;
    if ( (_DWORD)gifttype == 2 )
    {
      if ( !v15 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetItem(IsServant, v15->fields.objectId, v15->fields.num, 1, 0);
    }
    else
    {
      if ( !v15 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetGift_41196280(IsServant, gifttype, v15->fields.objectId, v15->fields.num, 0, 0);
    }
  }
}


void GiftListViewItemIcon__SetCallBack(
        GiftListViewItemIcon_o *this,
        GiftListViewItemIcon_ClickDelegate_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackFunc = call;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)call,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftListViewItemIcon__SetTouch(GiftListViewItemIcon_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CC9C8D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9C8D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
      return;
    }
LABEL_10:
    sub_1C71608(gameObject, v6);
  }
}


void GiftListViewItemIcon__Show(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void GiftListViewItemIcon_ClickDelegate___ctor(
        GiftListViewItemIcon_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AA9538;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C71468(method);
        v16 = sub_1C719FC(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AA9634;
          else
            v13 = sub_1AA95F8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AA9574;
        }
        else
        {
          v13 = sub_1AA9548;
        }
      }
      else
      {
        v13 = sub_1AA9518;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA94D0;
}


System_IAsyncResult_o *GiftListViewItemIcon_ClickDelegate__BeginInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GiftEntity_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = gift;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void GiftListViewItemIcon_ClickDelegate__EndInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void GiftListViewItemIcon_ClickDelegate__Invoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, GiftEntity_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    gift,
    this->fields.method);
}