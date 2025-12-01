void SampleEventListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC4B92 & 1) == 0 )
  {
    sub_1C713B0(&SampleEventListViewItemDraw_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_16747/*"ai_quest_free"*/);
    sub_1C713B0(&StringLiteral_16746/*"ai_quest_event"*/);
    byte_4CC4B92 = 1;
  }
  v1 = sub_1C71458(string___TypeInfo, 2);
  if ( !v1 )
    sub_1C71608(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_16746/*"ai_quest_event"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_16746/*"ai_quest_event"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        *(_DWORD *)(v9 + 24) <= 1u) )
  {
    sub_1C71610(v1);
  }
  v17 = StringLiteral_16747/*"ai_quest_free"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_16747/*"ai_quest_free"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  SampleEventListViewItemDraw_TypeInfo->static_fields->eventTypeSpriteList = (struct System_String_array *)v9;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)SampleEventListViewItemDraw_TypeInfo->static_fields,
    v9,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  SampleEventListViewItem_o *v5; // x21
  int32_t eventType; // w23
  UISprite_o *iconImageSprite; // x22
  UILabel_o *eventTextLabel; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  Il2CppObject *Component_object; // x21
  float v12; // s0 OVERLAPPED
  float v13; // s3
  float v14; // s1
  float v15; // s2

  v5 = item;
  if ( (byte_4CC4B91 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SampleEventListViewItemDraw_TypeInfo);
    byte_4CC4B91 = 1;
  }
  if ( v5 && mode )
  {
    eventType = v5->fields.eventType;
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
        sub_1C71610(eventTextLabel);
      if ( !iconImageSprite )
        goto LABEL_27;
      UISprite__set_spriteName(iconImageSprite, *((System_String_o **)&klass->_1.byval_arg.data + eventType), 0);
      this->fields.eventType = eventType;
    }
    item = (SampleEventListViewItem_o *)v5->fields.eventText;
    if ( item )
    {
      eventTextLabel = this->fields.eventTextLabel;
      if ( !eventTextLabel )
        goto LABEL_27;
      UILabel__set_text(eventTextLabel, (System_String_o *)item, 0);
    }
    eventTextLabel = (UILabel_o *)this->fields.iconImageSprite;
    if ( eventTextLabel )
    {
      eventTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventTextLabel, 0);
      if ( eventTextLabel )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)eventTextLabel,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v12 = 1.0;
        if ( mode == 1 )
          v12 = 0.5;
        if ( eventTextLabel )
        {
          v13 = 1.0;
          v14 = v12;
          v15 = v12;
          UIWidget__set_color((UIWidget_o *)eventTextLabel, *(UnityEngine_Color_o *)&v12, 0);
          return;
        }
      }
    }
LABEL_27:
    sub_1C71608(eventTextLabel, item);
  }
  this->fields.eventType = -1;
}