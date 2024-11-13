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
      sub_1BCAA3C(IsServant, itemData);
    }
  }
}


void __fastcall GiftListViewItemIcon__Set(GiftListViewItemIcon_o *this, GiftEntity_o *indata, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct GiftEntity_o **p_itemData; // x20
  ItemIconComponent_o *IsServant; // x0
  __int64 gifttype; // x1
  int32_t type; // w0
  struct GiftEntity_o *itemData; // x8
  struct GiftEntity_o *v14; // x8
  struct GiftEntity_o *v15; // x8

  this->fields.itemData = indata;
  p_itemData = &this->fields.itemData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemData,
    (int64_t)indata,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA3C(IsServant, gifttype);
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
    ItemIconComponent__SetCommandCodeImage(IsServant, v14->fields.objectId, v14->fields.num, 0LL);
  }
  else
  {
    IsServant = this->fields.item;
    v15 = this->fields.itemData;
    if ( (_DWORD)gifttype == 2 )
    {
      if ( !v15 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetItem(IsServant, v15->fields.objectId, v15->fields.num, 0LL);
    }
    else
    {
      if ( !v15 || !IsServant )
        goto LABEL_17;
      ItemIconComponent__SetGift_38855180(IsServant, gifttype, v15->fields.objectId, v15->fields.num, 0, 0LL);
    }
  }
}


void __fastcall GiftListViewItemIcon__SetCallBack(
        GiftListViewItemIcon_o *this,
        GiftListViewItemIcon_ClickDelegate_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = call;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)call,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftListViewItemIcon__SetTouch(GiftListViewItemIcon_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B181E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B181E8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    sub_1BCAA3C(gameObject, v8);
  }
}


void __fastcall GiftListViewItemIcon__Show(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftListViewItemIcon_ClickDelegate___ctor(
        GiftListViewItemIcon_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0EE40;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0EF3C;
          else
            v13 = (Il2CppObject *)sub_1A0EF00;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0EE7C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0EE50;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0EE20;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EDD8;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall GiftListViewItemIcon_ClickDelegate__EndInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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