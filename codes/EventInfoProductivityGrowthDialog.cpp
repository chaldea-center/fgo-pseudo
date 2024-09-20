void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C7CC & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5C7CC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Init(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v10; // w21

  if ( (byte_4A5C7C9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C7C9 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
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
        sub_1B88814(titleLabel, v3);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v10];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5C7CB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_4A5C7CB = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Open(
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
  int max_length; // w8
  __int64 v14; // x26
  EventConquestInfo_o *v15; // x28
  __int64 v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Text_StringBuilder_o *v23; // x23
  System_String_o *v24; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x24
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass *v38; // x1
  Il2CppClass **v39; // x0
  int v40; // w19
  unsigned int v41; // w8
  EventInfoProductivityGrowthDialog_o *v42; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v47; // x20
  struct UILabel_o *v48; // x1
  UnityEngine_GameObject_o *v49; // x8
  struct UILabel_array *v50; // x28
  int32_t v51; // w25
  System_Text_StringBuilder_o *v52; // x0
  ItemIconComponent_o *v53; // x26
  UILabel_o *v54; // x27
  int32_t v55; // w3
  const MethodInfo *v56; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v62; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v64; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5C7CA & 1) == 0 )
  {
    sub_1B885B0(&GiftEntity_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5597/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5596/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_1B885B0(&StringLiteral_5595/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_1B885B0(&StringLiteral_5598/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_4A5C7CA = 1;
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
    v64 = this;
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
LABEL_64:
          sub_1B88814(Item, v10);
        v15 = eventConquestInfos->m_Items[v14];
        v16 = sub_1B887FC(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v16, 0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v16, v17, v18);
        }
        v23 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v23, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v15->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum, v25, v26, v27);
        if ( !v23 )
          break;
        System_Text_StringBuilder__AppendFormat(v23, v24, (Il2CppObject *)Item, 0LL);
        if ( v15->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v15->fields.productAdd;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd, v29, v30, v31);
          System_Text_StringBuilder__AppendFormat(v23, v28, v32, 0LL);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                         v23,
                         v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v8 )
          break;
        v35 = v8->fields._items;
        v36 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !v35 )
          break;
        v37 = v8->fields._size;
        v38 = (Il2CppClass *)Item;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &v35->obj.klass + v37;
          v8->fields._size = v37 + 1;
          v39[4] = v38;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1B8880C(Item, v10);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_32:
    v40 = v7->fields._size;
    if ( v40 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0LL);
    }
    else
    {
      v41 = v40 - 1;
      switch ( v40 )
      {
        case 1:
          v42 = v64;
          p_countIconList01 = &v64->fields.countIconList01;
          p_countLabelList01 = &v64->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v42 = v64;
          p_countIconList01 = &v64->fields.countIconList02;
          p_countLabelList01 = &v64->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v42 = v64;
          p_countIconList01 = &v64->fields.countIconList03;
          p_countLabelList01 = &v64->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v42 = v64;
          p_countIconList01 = &v64->fields.countIconList04;
          p_countLabelList01 = &v64->fields.countLabelList04;
LABEL_39:
          dispObjList = v42->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v41 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v42->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v41 >= messageList->max_length )
            goto LABEL_64;
          v47 = *p_countIconList01;
          v48 = messageList->m_Items[v41];
          v49 = dispObjList->m_Items[v41];
          v50 = *p_countLabelList01;
          v42->fields.messageLabel = v48;
          p_messageLabel = &v42->fields.messageLabel;
          v62 = v49;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v42->fields.messageLabel, (int32_t)v48, v11, v12);
          v51 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v52 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v52, 0LL);
        if ( !v47 )
          goto LABEL_63;
        if ( v51 >= v47->max_length )
          goto LABEL_64;
        v53 = v47->m_Items[v51];
        Item = System_Collections_Generic_List_object___get_Item(
                 v7,
                 v51,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v50 )
          goto LABEL_63;
        if ( v51 >= v50->max_length )
          goto LABEL_64;
        if ( !Item || !v53 )
          goto LABEL_63;
        v54 = v50->m_Items[v51];
        v55 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_38144896(v53, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v55, 0, 0LL);
        if ( !v8 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v51,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v54 )
          goto LABEL_63;
        UILabel__set_text(v54, (System_String_o *)Item, 0LL);
        ++v51;
      }
      while ( v40 != v51 );
      EventInfoProductivityGrowthDialog__Init(v64, v56);
      Item = v62;
      if ( !v62 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v62, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v64, 0LL, 0, 0LL);
      titleLabel = v64->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0LL);
      v58 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v58 )
        goto LABEL_63;
      UILabel__set_text(v58, (System_String_o *)Item, 0LL);
      v64->fields.closeAction = action;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v64->fields.closeAction, (int32_t)action, v59, v60);
    }
  }
  else
  {
    ActionExtensions__Call(closeAction, 0LL);
  }
}


void __fastcall EventInfoProductivityGrowthDialog___OnClickCloseButton_b__17_0(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  EventInfoProductivityGrowthDialog__Init(this, v3);
}