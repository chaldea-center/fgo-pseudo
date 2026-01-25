void EventInfoProductivityGrowthDialog___ctor(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFAB2 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEFAB2 = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21

  if ( (byte_4CEFAAF & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFAAF = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C7BD48(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C7BD40(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, 0, v6, v7, v8, v9, v10, v11);
}


void EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CEFAB1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_1C7BAE8(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_4CEFAB1 = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int max_length; // w8
  __int64 v18; // x26
  EventConquestInfo_o *v19; // x28
  __int64 v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Text_StringBuilder_o *v31; // x23
  System_String_o *v32; // x24
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass *v44; // x1
  Il2CppClass **v45; // x0
  int v46; // w19
  unsigned int v47; // w8
  EventInfoProductivityGrowthDialog_o *v48; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v53; // x20
  struct UILabel_o *v54; // x1
  UnityEngine_GameObject_o *v55; // x8
  struct UILabel_array *v56; // x28
  int32_t v57; // w25
  System_Text_StringBuilder_o *v58; // x0
  ItemIconComponent_o *v59; // x26
  UILabel_o *v60; // x27
  int v61; // w8
  const MethodInfo *v62; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v72; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v74; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CEFAB0 & 1) == 0 )
  {
    sub_1C7BAE8(&GiftEntity_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5587/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_5586/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_5585/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_5588/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_4CEFAB0 = 1;
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
    v74 = this;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
LABEL_64:
          sub_1C7BD48(Item);
        v19 = eventConquestInfos->m_Items[v18];
        v20 = sub_1C7BD34(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v20, 0);
        if ( !v19 )
          break;
        if ( !v20 )
          break;
        *(_QWORD *)(v20 + 20) = *(_QWORD *)&v19->fields.type;
        *(_DWORD *)(v20 + 28) = v19->fields.productAdd;
        if ( !v7 )
          break;
        items = v7->fields._items;
        v28 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v20,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
        }
        v31 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v31, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5586/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0);
        productNum = v19->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v31 )
          break;
        System_Text_StringBuilder__AppendFormat(v31, v32, (Il2CppObject *)Item, 0);
        if ( v19->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5585/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0);
          productAdd = v19->fields.productAdd;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v31, v33, v34, 0);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v31->klass->vtable._3_ToString.methodPtr)(
                         v31,
                         v31->klass->vtable._3_ToString.method);
        if ( !v8 )
          break;
        v41 = v8->fields._items;
        v42 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !v41 )
          break;
        v43 = v8->fields._size;
        v44 = (Il2CppClass *)Item;
        if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v41->obj.klass + v43;
          v8->fields._size = v43 + 1;
          v45[4] = v44;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1C7BD40(Item, v10);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_32:
    v46 = v7->fields._size;
    if ( v46 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0);
    }
    else
    {
      v47 = v46 - 1;
      switch ( v46 )
      {
        case 1:
          v48 = v74;
          p_countIconList01 = &v74->fields.countIconList01;
          p_countLabelList01 = &v74->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v48 = v74;
          p_countIconList01 = &v74->fields.countIconList02;
          p_countLabelList01 = &v74->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v48 = v74;
          p_countIconList01 = &v74->fields.countIconList03;
          p_countLabelList01 = &v74->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v48 = v74;
          p_countIconList01 = &v74->fields.countIconList04;
          p_countLabelList01 = &v74->fields.countLabelList04;
LABEL_39:
          dispObjList = v48->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v47 >= LODWORD(dispObjList->max_length) )
            goto LABEL_64;
          messageList = v48->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v47 >= LODWORD(messageList->max_length) )
            goto LABEL_64;
          v53 = *p_countIconList01;
          v54 = messageList->m_Items[v47];
          v55 = dispObjList->m_Items[v47];
          v56 = *p_countLabelList01;
          v48->fields.messageLabel = v54;
          p_messageLabel = &v48->fields.messageLabel;
          v72 = v55;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v48->fields.messageLabel,
            (int32_t)v54,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          v57 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v58 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v58, 0);
        if ( !v53 )
          goto LABEL_63;
        if ( (unsigned int)v57 >= LODWORD(v53->max_length) )
          goto LABEL_64;
        v59 = v53->m_Items[v57];
        Item = System_Collections_Generic_List_object___get_Item(
                 v7,
                 v57,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v56 )
          goto LABEL_63;
        if ( (unsigned int)v57 >= LODWORD(v56->max_length) )
          goto LABEL_64;
        if ( !Item || !v59 )
          goto LABEL_63;
        v60 = v56->m_Items[v57];
        v61 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_41487788(v59, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v61, 0, 0);
        if ( !v8 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v57,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v60 )
          goto LABEL_63;
        UILabel__set_text(v60, (System_String_o *)Item, 0);
        ++v57;
      }
      while ( v46 != v57 );
      EventInfoProductivityGrowthDialog__Init(v74, v62);
      Item = v72;
      if ( !v72 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v72, 1, 0);
      BaseDialog__Open((BaseDialog_o *)v74, 0, 0, 0, 0);
      titleLabel = v74->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_CONQUEST_UP_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0);
      v64 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5587/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0);
      if ( !v64 )
        goto LABEL_63;
      UILabel__set_text(v64, (System_String_o *)Item, 0);
      v74->fields.closeAction = action;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v74->fields.closeAction,
        (int32_t)action,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
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