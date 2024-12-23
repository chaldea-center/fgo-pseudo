void __fastcall StoneShopDetailListViewObject___ctor(StoneShopDetailListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B6317F & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B6317F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall StoneShopDetailListViewObject__Awake(StoneShopDetailListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B6317D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_StoneShopDetailListViewItemDraw___, method);
    byte_4B6317D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_StoneShopDetailListViewItemDraw___);
  this->fields.itemDraw = (struct StoneShopDetailListViewItemDraw_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


void __fastcall StoneShopDetailListViewObject__SetupDisp(
        StoneShopDetailListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  StoneShopDetailListViewItemDraw_o *v10; // x0

  if ( (byte_4B6317E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StoneShopDetailListViewItem_TypeInfo, v3);
    byte_4B6317E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(StoneShopDetailListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (StoneShopDetailListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StoneShopDetailListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v6 != 0LL, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BE4D28(0LL, v8);
    StoneShopDetailListViewItemDraw__SetItem(v10, (StoneShopDetailListViewItem_o *)v6, v9);
  }
}