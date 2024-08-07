void __fastcall GiftListViewItemIcon___ctor(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GiftListViewItemIcon__OnClick(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  _BOOL8 IsServant; // x0
  struct GiftEntity_o *itemData; // x1
  struct GiftListViewItemIcon_ClickDelegate_o *callbackFunc; // x8

  IsServant = Gift__IsServant(this->fields.gifttype, 0LL);
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
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))callbackFunc->fields.m_target)(callbackFunc->fields.original_method_info);
        return;
      }
LABEL_8:
      sub_1B64C5C(IsServant, itemData);
    }
  }
}


void __fastcall GiftListViewItemIcon__Set(GiftListViewItemIcon_o *this, GiftEntity_o *indata, const MethodInfo *method)
{
  int32_t v3; // w3
  struct GiftEntity_o **p_itemData; // x20
  ItemIconComponent_o *IsServant; // x0
  __int64 gifttype; // x1
  int32_t type; // w0
  struct GiftEntity_o *itemData; // x8
  struct GiftEntity_o *v10; // x8
  struct GiftEntity_o *v11; // x8

  this->fields.itemData = indata;
  p_itemData = &this->fields.itemData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemData, (int32_t)indata, (int32_t)method, v3);
  if ( !*p_itemData )
    goto LABEL_17;
  type = (*p_itemData)->fields.type;
  this->fields.gifttype = type;
  IsServant = (ItemIconComponent_o *)Gift__IsServant(type, 0LL);
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
          0LL);
        return;
      }
    }
LABEL_17:
    sub_1B64C5C(IsServant, gifttype);
  }
  gifttype = (unsigned int)this->fields.gifttype;
  if ( (_DWORD)gifttype == 11 )
  {
    v10 = this->fields.itemData;
    if ( !v10 )
      goto LABEL_17;
    IsServant = this->fields.item;
    if ( !IsServant )
      goto LABEL_17;
    ItemIconComponent__SetCommandCodeImage(IsServant, v10->fields.objectId, v10->fields.num, 0LL);
  }
  else
  {
    IsServant = this->fields.item;
    v11 = this->fields.itemData;
    if ( (_DWORD)gifttype == 2 )
    {
      if ( !v11 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetItem(IsServant, v11->fields.objectId, v11->fields.num, 0LL);
    }
    else
    {
      if ( !v11 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetGift_37834024(IsServant, gifttype, v11->fields.objectId, v11->fields.num, 0, 0LL);
    }
  }
}


void __fastcall GiftListViewItemIcon__SetCallBack(
        GiftListViewItemIcon_o *this,
        GiftListViewItemIcon_ClickDelegate_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackFunc = call;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)call, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftListViewItemIcon__SetTouch(GiftListViewItemIcon_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4A00D30 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A00D30 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1B64C5C(gameObject, v7);
  }
}


void __fastcall GiftListViewItemIcon__Show(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftListViewItemIcon_ClickDelegate___ctor(
        GiftListViewItemIcon_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AEC10;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B64AB8(v6);
        v12 = sub_1B64F74(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19AED0C;
          else
            v9 = (Il2CppObject *)sub_19AECD0;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AEC4C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AEC20;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AEBF0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AEBA8;
}


System_IAsyncResult_o *__fastcall GiftListViewItemIcon_ClickDelegate__BeginInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GiftEntity_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = gift;
  return (System_IAsyncResult_o *)sub_1B649B4(this, &v6, callback, object);
}


void __fastcall GiftListViewItemIcon_ClickDelegate__EndInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall GiftListViewItemIcon_ClickDelegate__Invoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, GiftEntity_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    gift,
    *(_QWORD *)&this->fields.extra_arg);
}