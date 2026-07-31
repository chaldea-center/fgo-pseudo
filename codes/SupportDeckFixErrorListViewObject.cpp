void SupportDeckFixErrorListViewObject___ctor(SupportDeckFixErrorListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934AD0 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5934AD0 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SupportDeckFixErrorListViewObject__Awake(SupportDeckFixErrorListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5934ACE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
    byte_5934ACE = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
  this->fields.itemDraw = (struct SupportDeckFixErrorListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
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
  __int64 v2; // x2
  System_String_o **linkItem; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x20
  UILabel_o *messageLabel; // x0
  __int64 v8; // x1
  struct SupportDeckFixErrorListViewItemDraw_o *v9; // x8

  if ( (byte_5934ACF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SupportDeckFixErrorListViewItem_TypeInfo);
    byte_5934ACF = 1;
  }
  linkItem = (System_String_o **)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SupportDeckFixErrorListViewItem_TypeInfo->_2.naturalAligment;
    if ( LOBYTE((*linkItem)[12].fields._stringLength) >= (unsigned int)naturalAligment
      && *((SupportDeckFixErrorListViewItem_c **)(*linkItem)[8].monitor + naturalAligment - 1) == SupportDeckFixErrorListViewItem_TypeInfo )
    {
      itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      messageLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
      if ( ((unsigned __int8)messageLabel & 1) != 0 )
      {
        v9 = this->fields.itemDraw;
        if ( !v9 || (messageLabel = v9->fields.messageLabel) == 0 )
          sub_21FFECC(messageLabel, v8);
        UILabel__set_text(messageLabel, linkItem[15], 0);
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