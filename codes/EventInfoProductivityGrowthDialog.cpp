void EventInfoProductivityGrowthDialog___ctor(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB785A & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB785A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoProductivityGrowthDialog__Init(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v10; // w21

  if ( (byte_4CB7857 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7857 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C6BC68(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v10];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C6BC60(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB7859 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_4CB7859 = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventInfoProductivityGrowthDialog__Open(
        EventInfoProductivityGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_object__o *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  void *Item; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int max_length; // w8
  __int64 v14; // x26
  EventConquestInfo_o *v15; // x28
  __int64 v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Text_StringBuilder_o *v23; // x23
  System_String_o *v24; // x24
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass *v32; // x1
  Il2CppClass **v33; // x0
  int v34; // w19
  unsigned int v35; // w8
  EventInfoProductivityGrowthDialog_o *v36; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v41; // x20
  struct UILabel_o *v42; // x1
  UnityEngine_GameObject_o *v43; // x8
  struct UILabel_array *v44; // x28
  int32_t v45; // w25
  System_Text_StringBuilder_o *v46; // x0
  ItemIconComponent_o *v47; // x26
  UILabel_o *v48; // x27
  int v49; // w8
  const MethodInfo *v50; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v56; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v58; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB7858 & 1) == 0 )
  {
    sub_1C6BA08(&GiftEntity_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5570/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_5569/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5568/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5571/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_4CB7858 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v5->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    action = closeAction;
    v58 = this;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
LABEL_64:
          sub_1C6BC68(Item);
        v15 = eventConquestInfos->m_Items[v14];
        v16 = sub_1C6BC54(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v16, 0);
        if ( !v15 )
          break;
        if ( !v16 )
          break;
        *(_QWORD *)(v16 + 20) = *(_QWORD *)&v15->fields.type;
        *(_DWORD *)(v16 + 28) = v15->fields.productAdd;
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v16,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v16;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), v16, v17, v18);
        }
        v23 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v23, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0);
        productNum = v15->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v23 )
          break;
        System_Text_StringBuilder__AppendFormat(v23, v24, (Il2CppObject *)Item, 0);
        if ( v15->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0);
          productAdd = v15->fields.productAdd;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v23, v25, v26, 0);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v23->klass->vtable._3_ToString.methodPtr)(
                         v23,
                         v23->klass->vtable._3_ToString.method);
        if ( !v8 )
          break;
        v29 = v8->fields._items;
        v30 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !v29 )
          break;
        v31 = v8->fields._size;
        v32 = (Il2CppClass *)Item;
        if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v29->obj.klass + v31;
          v8->fields._size = v31 + 1;
          v33[4] = v32;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1C6BC60(Item, v10);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_32:
    v34 = v7->fields._size;
    if ( v34 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0);
    }
    else
    {
      v35 = v34 - 1;
      switch ( v34 )
      {
        case 1:
          v36 = v58;
          p_countIconList01 = &v58->fields.countIconList01;
          p_countLabelList01 = &v58->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v36 = v58;
          p_countIconList01 = &v58->fields.countIconList02;
          p_countLabelList01 = &v58->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v36 = v58;
          p_countIconList01 = &v58->fields.countIconList03;
          p_countLabelList01 = &v58->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v36 = v58;
          p_countIconList01 = &v58->fields.countIconList04;
          p_countLabelList01 = &v58->fields.countLabelList04;
LABEL_39:
          dispObjList = v36->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v35 >= LODWORD(dispObjList->max_length) )
            goto LABEL_64;
          messageList = v36->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v35 >= LODWORD(messageList->max_length) )
            goto LABEL_64;
          v41 = *p_countIconList01;
          v42 = messageList->m_Items[v35];
          v43 = dispObjList->m_Items[v35];
          v44 = *p_countLabelList01;
          v36->fields.messageLabel = v42;
          p_messageLabel = &v36->fields.messageLabel;
          v56 = v43;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields.messageLabel, (int32_t)v42, v11, v12);
          v45 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v46 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v46, 0);
        if ( !v41 )
          goto LABEL_63;
        if ( (unsigned int)v45 >= LODWORD(v41->max_length) )
          goto LABEL_64;
        v47 = v41->m_Items[v45];
        Item = System_Collections_Generic_List_object___get_Item(
                 v7,
                 v45,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v44 )
          goto LABEL_63;
        if ( (unsigned int)v45 >= LODWORD(v44->max_length) )
          goto LABEL_64;
        if ( !Item || !v47 )
          goto LABEL_63;
        v48 = v44->m_Items[v45];
        v49 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_41153640(v47, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v49, 0, 0);
        if ( !v8 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v45,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v48 )
          goto LABEL_63;
        UILabel__set_text(v48, (System_String_o *)Item, 0);
        ++v45;
      }
      while ( v34 != v45 );
      EventInfoProductivityGrowthDialog__Init(v58, v50);
      Item = v56;
      if ( !v56 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v56, 1, 0);
      BaseDialog__Open((BaseDialog_o *)v58, 0, 0, 0, 0);
      titleLabel = v58->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5571/*"EVENT_CONQUEST_UP_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0);
      v52 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0);
      if ( !v52 )
        goto LABEL_63;
      UILabel__set_text(v52, (System_String_o *)Item, 0);
      v58->fields.closeAction = action;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v58->fields.closeAction, (int32_t)action, v53, v54);
    }
  }
  else
  {
    ActionExtensions__Call(closeAction, 0);
  }
}


void EventInfoProductivityGrowthDialog___OnClickCloseButton_b__17_0(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  EventInfoProductivityGrowthDialog__Init(this, v3);
}