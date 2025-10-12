void EventInfoProductivityGrowthDialog___ctor(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C38F2A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C38F2A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoProductivityGrowthDialog__Init(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v9; // w21

  if ( (byte_4C38F27 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38F27 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C32E84(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v9];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(titleLabel);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v5, v6);
}


void EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C38F29 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_4C38F29 = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  __int64 Item; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int max_length; // w8
  __int64 v13; // x26
  EventConquestInfo_o *v14; // x28
  __int64 v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Text_StringBuilder_o *v22; // x23
  System_String_o *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  System_String_o *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x1
  Il2CppClass **v44; // x0
  int v45; // w19
  unsigned int v46; // w8
  EventInfoProductivityGrowthDialog_o *v47; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v52; // x20
  struct UILabel_o *v53; // x1
  UnityEngine_GameObject_o *v54; // x8
  struct UILabel_array *v55; // x28
  int32_t v56; // w25
  System_Text_StringBuilder_o *v57; // x0
  ItemIconComponent_o *v58; // x26
  UILabel_o *v59; // x27
  int v60; // w8
  const MethodInfo *v61; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v67; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v69; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C38F28 & 1) == 0 )
  {
    sub_1C32C20(&GiftEntity_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5579/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_5578/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_1C32C20(&StringLiteral_5577/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_1C32C20(&StringLiteral_5580/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_4C38F28 = 1;
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
    v69 = this;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
LABEL_64:
          sub_1C32E84(Item);
        v14 = eventConquestInfos->m_Items[v13];
        v15 = sub_1C32E6C(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v15, 0);
        if ( !v14 )
          break;
        if ( !v15 )
          break;
        *(_QWORD *)(v15 + 20) = *(_QWORD *)&v14->fields.type;
        *(_DWORD *)(v15 + 28) = v14->fields.productAdd;
        if ( !v7 )
          break;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v15;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), v15, v16, v17);
        }
        v22 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v22, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0);
        productNum = v14->fields.productNum;
        Item = j_il2cpp_value_box_0(int_TypeInfo, &productNum, v24, v25, v26, v27, v28, v29);
        if ( !v22 )
          break;
        System_Text_StringBuilder__AppendFormat(v22, v23, (Il2CppObject *)Item, 0);
        if ( v14->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5577/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0);
          productAdd = v14->fields.productAdd;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd, v31, v32, v33, v34, v35, v36);
          System_Text_StringBuilder__AppendFormat(v22, v30, v37, 0);
        }
        Item = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v22->klass->vtable._3_ToString.methodPtr)(
                 v22,
                 v22->klass->vtable._3_ToString.method);
        if ( !v8 )
          break;
        v40 = v8->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !v40 )
          break;
        v42 = v8->fields._size;
        v43 = Item;
        if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v40->obj.klass + v42;
          v8->fields._size = v42 + 1;
          v44[4] = (Il2CppClass *)v43;
          sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), v43, v38, v39);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1C32E7C(Item);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_32:
    v45 = v7->fields._size;
    if ( v45 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0);
    }
    else
    {
      v46 = v45 - 1;
      switch ( v45 )
      {
        case 1:
          v47 = v69;
          p_countIconList01 = &v69->fields.countIconList01;
          p_countLabelList01 = &v69->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v47 = v69;
          p_countIconList01 = &v69->fields.countIconList02;
          p_countLabelList01 = &v69->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v47 = v69;
          p_countIconList01 = &v69->fields.countIconList03;
          p_countLabelList01 = &v69->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v47 = v69;
          p_countIconList01 = &v69->fields.countIconList04;
          p_countLabelList01 = &v69->fields.countLabelList04;
LABEL_39:
          dispObjList = v47->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v46 >= LODWORD(dispObjList->max_length) )
            goto LABEL_64;
          messageList = v47->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v46 >= LODWORD(messageList->max_length) )
            goto LABEL_64;
          v52 = *p_countIconList01;
          v53 = messageList->m_Items[v46];
          v54 = dispObjList->m_Items[v46];
          v55 = *p_countLabelList01;
          v47->fields.messageLabel = v53;
          p_messageLabel = &v47->fields.messageLabel;
          v67 = v54;
          sub_1C32BC4((CGThumbnailListItem_o *)&v47->fields.messageLabel, (int32_t)v53, v10, v11);
          v56 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v57 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v57, 0);
        if ( !v52 )
          goto LABEL_63;
        if ( (unsigned int)v56 >= LODWORD(v52->max_length) )
          goto LABEL_64;
        v58 = v52->m_Items[v56];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v7,
                          v56,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v55 )
          goto LABEL_63;
        if ( (unsigned int)v56 >= LODWORD(v55->max_length) )
          goto LABEL_64;
        if ( !Item || !v58 )
          goto LABEL_63;
        v59 = v55->m_Items[v56];
        v60 = *(int *)(Item + 28) <= 1 ? -1 : *(_DWORD *)(Item + 28);
        ItemIconComponent__SetGift_40822420(v58, *(_DWORD *)(Item + 20), *(_DWORD *)(Item + 24), v60, 0, 0);
        if ( !v8 )
          goto LABEL_63;
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v8,
                          v56,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v59 )
          goto LABEL_63;
        UILabel__set_text(v59, (System_String_o *)Item, 0);
        ++v56;
      }
      while ( v45 != v56 );
      EventInfoProductivityGrowthDialog__Init(v69, v61);
      Item = (__int64)v67;
      if ( !v67 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v67, 1, 0);
      BaseDialog__Open((BaseDialog_o *)v69, 0, 0, 0, 0);
      titleLabel = v69->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5580/*"EVENT_CONQUEST_UP_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0);
      v63 = *p_messageLabel;
      Item = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5579/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0);
      if ( !v63 )
        goto LABEL_63;
      UILabel__set_text(v63, (System_String_o *)Item, 0);
      v69->fields.closeAction = action;
      sub_1C32BC4((CGThumbnailListItem_o *)&v69->fields.closeAction, (int32_t)action, v64, v65);
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