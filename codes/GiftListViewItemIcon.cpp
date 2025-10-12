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
      sub_1C32E7C(IsServant);
    }
  }
}


void GiftListViewItemIcon__Set(GiftListViewItemIcon_o *this, GiftEntity_o *indata, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GiftEntity_o **p_itemData; // x20
  ItemIconComponent_o *IsServant; // x0
  int32_t type; // w0
  struct GiftEntity_o *itemData; // x8
  int32_t gifttype; // w1
  struct GiftEntity_o *v10; // x8
  struct GiftEntity_o *v11; // x8

  this->fields.itemData = indata;
  p_itemData = &this->fields.itemData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)indata, (int32_t)method, v3);
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
    sub_1C32E7C(IsServant);
  }
  gifttype = this->fields.gifttype;
  if ( gifttype == 11 )
  {
    v10 = this->fields.itemData;
    if ( !v10 )
      goto LABEL_17;
    IsServant = this->fields.item;
    if ( !IsServant )
      goto LABEL_17;
    ItemIconComponent__SetCommandCodeImage(IsServant, v10->fields.objectId, v10->fields.num, 0);
  }
  else
  {
    IsServant = this->fields.item;
    v11 = this->fields.itemData;
    if ( gifttype == 2 )
    {
      if ( !v11 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetItem(IsServant, v11->fields.objectId, v11->fields.num, 1, 0);
    }
    else
    {
      if ( !v11 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetGift_40822420(IsServant, gifttype, v11->fields.objectId, v11->fields.num, 0, 0);
    }
  }
}


void GiftListViewItemIcon__SetCallBack(
        GiftListViewItemIcon_o *this,
        GiftListViewItemIcon_ClickDelegate_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = call;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)call, (int32_t)method, v3);
}


void GiftListViewItemIcon__SetTouch(GiftListViewItemIcon_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C3A2FC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A2FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C32E7C(gameObject);
  }
}


void GiftListViewItemIcon__Show(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void GiftListViewItemIcon_ClickDelegate___ctor(
        GiftListViewItemIcon_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A799D8;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A79AD4;
          else
            v9 = sub_1A79A98;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A79A14;
        }
        else
        {
          v9 = sub_1A799E8;
        }
      }
      else
      {
        v9 = sub_1A799B8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A79970;
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
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void GiftListViewItemIcon_ClickDelegate__EndInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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