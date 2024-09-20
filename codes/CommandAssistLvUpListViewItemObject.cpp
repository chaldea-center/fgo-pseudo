void __fastcall CommandAssistLvUpListViewItemObject___ctor(
        CommandAssistLvUpListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F1D2 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5F1D2 = 1;
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F1D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
    byte_4A5F1D0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
  this->fields.itemDraw = (struct CommandAssistLvUpListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
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

  if ( (byte_4A5F1D1 & 1) == 0 )
  {
    sub_1B885B0(&CommandAssistLvUpListViewItem_TypeInfo);
    byte_4A5F1D1 = 1;
  }
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B8880C(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(CommandAssistLvUpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandAssistLvUpListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandAssistLvUpListViewItem_TypeInfo )
    {
      sub_1B88ACC(item);
      goto LABEL_9;
    }
  }
  CommandAssistLvUpListViewItemDraw__UpdateUi(itemDraw, (CommandAssistLvUpListViewItem_o *)item, v8);
}