void SampleEventListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C350FE & 1) == 0 )
  {
    sub_1C32C20(&SampleEventListViewItemDraw_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_16727/*"ai_quest_free"*/);
    sub_1C32C20(&StringLiteral_16726/*"ai_quest_event"*/);
    byte_4C350FE = 1;
  }
  v1 = sub_1C32CC8(string___TypeInfo, 2);
  if ( !v1 )
    sub_1C32E7C(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v5 = StringLiteral_16726/*"ai_quest_event"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_16726/*"ai_quest_event"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3),
        *(_DWORD *)(v4 + 24) <= 1u) )
  {
    sub_1C32E84(v1);
  }
  v8 = StringLiteral_16727/*"ai_quest_free"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_16727/*"ai_quest_free"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7);
  SampleEventListViewItemDraw_TypeInfo->static_fields->eventTypeSpriteList = (struct System_String_array *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)SampleEventListViewItemDraw_TypeInfo->static_fields, v4, v9, v10);
}


void SampleEventListViewItemDraw___ctor(SampleEventListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.eventType = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SampleEventListViewItemDraw__SetItem(
        SampleEventListViewItemDraw_o *this,
        SampleEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t eventType; // w23
  UISprite_o *iconImageSprite; // x22
  UILabel_o *eventTextLabel; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  System_String_o *eventText; // x1
  Il2CppObject *Component_object; // x21
  float v13; // s0 OVERLAPPED
  float v14; // s3
  float v15; // s1
  float v16; // s2

  if ( (byte_4C350FD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SampleEventListViewItemDraw_TypeInfo);
    byte_4C350FD = 1;
  }
  if ( item && mode )
  {
    eventType = item->fields.eventType;
    if ( this->fields.eventType != eventType )
    {
      iconImageSprite = this->fields.iconImageSprite;
      eventTextLabel = (UILabel_o *)SampleEventListViewItemDraw_TypeInfo;
      if ( !SampleEventListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SampleEventListViewItemDraw_TypeInfo);
        eventTextLabel = (UILabel_o *)SampleEventListViewItemDraw_TypeInfo;
      }
      klass = eventTextLabel->fields.onChange->klass;
      if ( !klass )
        goto LABEL_27;
      if ( (unsigned int)eventType >= LODWORD(klass->_1.namespaze) )
        sub_1C32E84(eventTextLabel);
      if ( !iconImageSprite )
        goto LABEL_27;
      UISprite__set_spriteName(iconImageSprite, *((System_String_o **)&klass->_1.byval_arg.data + eventType), 0);
      this->fields.eventType = eventType;
    }
    eventText = item->fields.eventText;
    if ( eventText )
    {
      eventTextLabel = this->fields.eventTextLabel;
      if ( !eventTextLabel )
        goto LABEL_27;
      UILabel__set_text(eventTextLabel, eventText, 0);
    }
    eventTextLabel = (UILabel_o *)this->fields.iconImageSprite;
    if ( eventTextLabel )
    {
      eventTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventTextLabel, 0);
      if ( eventTextLabel )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)eventTextLabel,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        eventTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)eventTextLabel & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_27;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
        eventTextLabel = (UILabel_o *)this->fields.baseImageTexture;
        v13 = 1.0;
        if ( mode == 1 )
          v13 = 0.5;
        if ( eventTextLabel )
        {
          v14 = 1.0;
          v15 = v13;
          v16 = v13;
          UIWidget__set_color((UIWidget_o *)eventTextLabel, *(UnityEngine_Color_o *)&v13, 0);
          return;
        }
      }
    }
LABEL_27:
    sub_1C32E7C(eventTextLabel);
  }
  this->fields.eventType = -1;
}