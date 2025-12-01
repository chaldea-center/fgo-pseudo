void EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CC7805 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7805 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.beforeText, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UILabel_o *v12; // x8
  struct System_String_o *mText; // x1

  if ( (byte_4CC7804 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC7804 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v12 = this->fields.label;
    if ( !v12
      || (mText = v12->fields.mText,
          this->fields.beforeText = mText,
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.beforeText, (int32_t)mText, v6, v7, v8, v9, v10, v11),
          (v4 = this->fields.label) == 0) )
    {
      sub_1C71608(v4, v5);
    }
    UILabel__SetCondensedScale(v4, this->fields.condensedWidth, 0, 0);
  }
}


void EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4CC7802 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CC7802 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.label, (int32_t)Component_object, v6, v7, v8, v9, v10, v11);
  EventInfoCondenseLabel__SetCondensedScale(this, v12);
}


void EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4CC7803 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC7803 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.label;
    if ( !v6 )
      sub_1C71608(v4, v5);
    if ( System_String__op_Inequality(this->fields.beforeText, v6->fields.mText, 0) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}