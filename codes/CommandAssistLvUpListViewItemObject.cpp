void __fastcall CommandAssistLvUpListViewItemObject___ctor(
        CommandAssistLvUpListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C262EB & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C262EB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpListViewItemObject__Awake(
        CommandAssistLvUpListViewItemObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4C262E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___, method);
    byte_4C262E9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
  this->fields.itemDraw = (struct CommandAssistLvUpListViewItemDraw_o *)Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


void __fastcall CommandAssistLvUpListViewItemObject__SetItem(
        CommandAssistLvUpListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandAssistLvUpListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4C262EA & 1) == 0 )
  {
    sub_1C3B764(&CommandAssistLvUpListViewItem_TypeInfo, item);
    byte_4C262EA = 1;
  }
  ListViewObject__SetItem_42230072((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C3B9C0(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(CommandAssistLvUpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandAssistLvUpListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandAssistLvUpListViewItem_TypeInfo )
    {
      sub_1C3BC80(item);
      goto LABEL_9;
    }
  }
  CommandAssistLvUpListViewItemDraw__UpdateUi(itemDraw, (CommandAssistLvUpListViewItem_o *)item, v8);
}