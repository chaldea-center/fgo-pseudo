void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FDBFA & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FDBFA = 1;
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
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v12; // w21

  if ( (byte_49FDBF7 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FDBF7 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B6432C(titleLabel, v7);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v12];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(titleLabel);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v8, v9);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FDBF9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__, v3);
    sub_1B640C8(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v4);
    byte_49FDBF9 = 1;
  }
  v5 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Open(
        EventInfoProductivityGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x22
  void *Item; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w3
  int max_length; // w8
  __int64 v33; // x26
  EventConquestInfo_o *v34; // x28
  __int64 v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_Text_StringBuilder_o *v44; // x23
  System_String_o *v45; // x24
  System_String_o *v46; // x24
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass *v53; // x1
  Il2CppClass **v54; // x0
  int v55; // w19
  unsigned int v56; // w8
  EventInfoProductivityGrowthDialog_o *v57; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v62; // x20
  struct UILabel_o *v63; // x1
  UnityEngine_GameObject_o *v64; // x8
  struct UILabel_array *v65; // x28
  const MethodInfo *v66; // x1
  __int64 v67; // x2
  int32_t v68; // w25
  System_Text_StringBuilder_o *v69; // x0
  ItemIconComponent_o *v70; // x26
  UILabel_o *v71; // x27
  int32_t v72; // w3
  UILabel_o *titleLabel; // x21
  UILabel_o *v74; // x21
  int32_t v75; // w2
  int32_t v76; // w3
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v78; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v80; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FDBF8 & 1) == 0 )
  {
    sub_1B640C8(&GiftEntity_TypeInfo, closeAction);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_5571/*"EVENT_CONQUEST_UP_MESSAGE"*/, v18);
    sub_1B640C8(&StringLiteral_5570/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, v19);
    sub_1B640C8(&StringLiteral_5569/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, v20);
    sub_1B640C8(&StringLiteral_5572/*"EVENT_CONQUEST_UP_TITLE"*/, v21);
    byte_49FDBF8 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v22->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    action = closeAction;
    v80 = this;
    v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         closeAction,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v25,
                                                         v26);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v33 >= max_length )
LABEL_64:
          sub_1B6432C(Item, v29);
        v34 = eventConquestInfos->m_Items[v33];
        v35 = sub_1B64314(GiftEntity_TypeInfo, v29, v30);
        GiftEntity___ctor((GiftEntity_o *)v35, 0LL);
        if ( !v34 )
          break;
        if ( !v35 )
          break;
        *(_QWORD *)(v35 + 20) = *(_QWORD *)&v34->fields.type;
        *(_DWORD *)(v35 + 28) = v34->fields.productAdd;
        if ( !v24 )
          break;
        items = v24->fields._items;
        v39 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v24->fields._version;
        if ( !items )
          break;
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)v35,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v35;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), v35, v36, v37);
        }
        v44 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v42, v43);
        System_Text_StringBuilder___ctor(v44, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v34->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v44 )
          break;
        System_Text_StringBuilder__AppendFormat(v44, v45, (Il2CppObject *)Item, 0LL);
        if ( v34->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v34->fields.productAdd;
          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v44, v46, v47, 0LL);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                         v44,
                         v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v27 )
          break;
        v50 = v27->fields._items;
        v51 = Method_System_Collections_Generic_List_string__Add__;
        ++v27->fields._version;
        if ( !v50 )
          break;
        v52 = v27->fields._size;
        v53 = (Il2CppClass *)Item;
        if ( (unsigned int)v52 >= v50->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &v50->obj.klass + v52;
          v27->fields._size = v52 + 1;
          v54[4] = v53;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v53, v48, v49);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v33 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1B64324(Item);
    }
    if ( !v24 )
      goto LABEL_63;
LABEL_32:
    v55 = v24->fields._size;
    if ( v55 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0LL);
    }
    else
    {
      v56 = v55 - 1;
      switch ( v55 )
      {
        case 1:
          v57 = v80;
          p_countIconList01 = &v80->fields.countIconList01;
          p_countLabelList01 = &v80->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v57 = v80;
          p_countIconList01 = &v80->fields.countIconList02;
          p_countLabelList01 = &v80->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v57 = v80;
          p_countIconList01 = &v80->fields.countIconList03;
          p_countLabelList01 = &v80->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v57 = v80;
          p_countIconList01 = &v80->fields.countIconList04;
          p_countLabelList01 = &v80->fields.countLabelList04;
LABEL_39:
          dispObjList = v57->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v56 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v57->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v56 >= messageList->max_length )
            goto LABEL_64;
          v62 = *p_countIconList01;
          v63 = messageList->m_Items[v56];
          v64 = dispObjList->m_Items[v56];
          v65 = *p_countLabelList01;
          v57->fields.messageLabel = v63;
          p_messageLabel = &v57->fields.messageLabel;
          v78 = v64;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->fields.messageLabel, (int32_t)v63, v30, v31);
          v68 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v69 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v66, v67);
        System_Text_StringBuilder___ctor(v69, 0LL);
        if ( !v62 )
          goto LABEL_63;
        if ( v68 >= v62->max_length )
          goto LABEL_64;
        v70 = v62->m_Items[v68];
        Item = System_Collections_Generic_List_object___get_Item(
                 v24,
                 v68,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v65 )
          goto LABEL_63;
        if ( v68 >= v65->max_length )
          goto LABEL_64;
        if ( !Item || !v70 )
          goto LABEL_63;
        v71 = v65->m_Items[v68];
        v72 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_37829292(v70, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v72, 0, 0LL);
        if ( !v27 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v27,
                 v68,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v71 )
          goto LABEL_63;
        UILabel__set_text(v71, (System_String_o *)Item, 0LL);
        ++v68;
      }
      while ( v55 != v68 );
      EventInfoProductivityGrowthDialog__Init(v80, v66);
      Item = v78;
      if ( !v78 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v78, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v80, 0LL, 0, 0LL);
      titleLabel = v80->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0LL);
      v74 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5571/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v74 )
        goto LABEL_63;
      UILabel__set_text(v74, (System_String_o *)Item, 0LL);
      v80->fields.closeAction = action;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v80->fields.closeAction, (int32_t)action, v75, v76);
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