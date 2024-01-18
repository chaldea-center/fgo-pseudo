void __fastcall CommandAssistListViewItemObject___ctor(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188079 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4188079 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemObject__Awake(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CommandAssistListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188077 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___, method);
    byte_4188077 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct CommandAssistListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        dispObject,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___);
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


void __fastcall CommandAssistListViewItemObject__SetItem(
        CommandAssistListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandAssistListViewItemDraw_o *itemDraw; // x0
  __int64 v10; // x9

  if ( (byte_4188078 & 1) == 0 )
  {
    sub_B2C35C(&CommandAssistListViewItem_TypeInfo, item);
    byte_4188078 = 1;
  }
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_B2C434(itemDraw, v7);
  if ( item )
  {
    v10 = *(&CommandAssistListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (CommandAssistListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != CommandAssistListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistListViewItemDraw_o *)sub_B2C728(item);
      goto LABEL_9;
    }
  }
  CommandAssistListViewItemDraw__UpdateUi(itemDraw, (CommandAssistListViewItem_o *)item, v8);
}