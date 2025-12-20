void SupportDeckFixErrorListViewObject___ctor(SupportDeckFixErrorListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D28D22 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D28D22 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SupportDeckFixErrorListViewObject__Awake(SupportDeckFixErrorListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D28D20 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
    byte_4D28D20 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
  this->fields.itemDraw = (struct SupportDeckFixErrorListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void SupportDeckFixErrorListViewObject__Init(SupportDeckFixErrorListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  SupportDeckFixErrorListViewItem_c *v5; // x10
  struct ListViewItem_o *v6; // x21
  UnityEngine_Object_o *itemDraw; // x20
  UILabel_o *messageLabel; // x0
  __int64 v9; // x1
  struct SupportDeckFixErrorListViewItemDraw_o *v10; // x8

  if ( (byte_4D28D21 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SupportDeckFixErrorListViewItem_TypeInfo);
    byte_4D28D21 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SupportDeckFixErrorListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (SupportDeckFixErrorListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == SupportDeckFixErrorListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v5 == SupportDeckFixErrorListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        messageLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
        if ( ((unsigned __int8)messageLabel & 1) != 0 )
        {
          if ( !v6 || (v10 = this->fields.itemDraw) == 0 || (messageLabel = v10->fields.messageLabel) == 0 )
            sub_1C942F0(messageLabel, v9);
          UILabel__set_text(messageLabel, (System_String_o *)v6[1].klass, 0);
        }
      }
    }
  }
}


void SupportDeckFixErrorListViewObject__SetMode(
        SupportDeckFixErrorListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ((void (__fastcall *)(SupportDeckFixErrorListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    mode == 2,
    this->klass->vtable._9_SetInput.method);
}