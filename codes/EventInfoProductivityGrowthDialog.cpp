void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDDB9F & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDDB9F = 1;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21

  if ( (byte_4BDDB9C & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDB9C = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
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
        sub_1C2209C(titleLabel, v3);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C22094(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BDDB9E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_1C21E38(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_4BDDB9E = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int max_length; // w8
  __int64 v18; // x26
  EventConquestInfo_o *v19; // x28
  int64_t v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Text_StringBuilder_o *v31; // x23
  System_String_o *v32; // x24
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_String_o *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  int64_t v50; // x1
  Il2CppClass **v51; // x0
  int v52; // w19
  unsigned int v53; // w8
  EventInfoProductivityGrowthDialog_o *v54; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v59; // x20
  int64_t v60; // x1
  UnityEngine_GameObject_o *v61; // x8
  struct UILabel_array *v62; // x28
  int32_t v63; // w25
  System_Text_StringBuilder_o *v64; // x0
  ItemIconComponent_o *v65; // x26
  UILabel_o *v66; // x27
  int32_t v67; // w3
  const MethodInfo *v68; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v70; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v78; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v80; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BDDB9D & 1) == 0 )
  {
    sub_1C21E38(&GiftEntity_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5720/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_5719/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5718/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5721/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_4BDDB9D = 1;
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
    v80 = this;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
LABEL_64:
          sub_1C2209C(Item, v10);
        v19 = eventConquestInfos->m_Items[v18];
        v20 = sub_1C22084(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v20, 0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v20,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
        }
        v31 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v31, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5719/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v19->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum, v33, v34, v35);
        if ( !v31 )
          break;
        System_Text_StringBuilder__AppendFormat(v31, v32, (Il2CppObject *)Item, 0LL);
        if ( v19->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v19->fields.productAdd;
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd, v37, v38, v39);
          System_Text_StringBuilder__AppendFormat(v31, v36, v40, 0LL);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                         v31,
                         v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v8 )
          break;
        v47 = v8->fields._items;
        v48 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !v47 )
          break;
        v49 = v8->fields._size;
        v50 = (int64_t)Item;
        if ( (unsigned int)v49 >= v47->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v47->obj.klass + v49;
          v8->fields._size = v49 + 1;
          v51[4] = (Il2CppClass *)v50;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v51 + 4), v50, v41, v42, v43, v44, v45, v46);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1C22094(Item, v10);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_32:
    v52 = v7->fields._size;
    if ( v52 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0LL);
    }
    else
    {
      v53 = v52 - 1;
      switch ( v52 )
      {
        case 1:
          v54 = v80;
          p_countIconList01 = &v80->fields.countIconList01;
          p_countLabelList01 = &v80->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v54 = v80;
          p_countIconList01 = &v80->fields.countIconList02;
          p_countLabelList01 = &v80->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v54 = v80;
          p_countIconList01 = &v80->fields.countIconList03;
          p_countLabelList01 = &v80->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v54 = v80;
          p_countIconList01 = &v80->fields.countIconList04;
          p_countLabelList01 = &v80->fields.countLabelList04;
LABEL_39:
          dispObjList = v54->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v53 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v54->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v53 >= messageList->max_length )
            goto LABEL_64;
          v59 = *p_countIconList01;
          v60 = (int64_t)messageList->m_Items[v53];
          v61 = dispObjList->m_Items[v53];
          v62 = *p_countLabelList01;
          v54->fields.messageLabel = (struct UILabel_o *)v60;
          p_messageLabel = &v54->fields.messageLabel;
          v78 = v61;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v54->fields.messageLabel, v60, v11, v12, v13, v14, v15, v16);
          v63 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v64 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v64, 0LL);
        if ( !v59 )
          goto LABEL_63;
        if ( v63 >= v59->max_length )
          goto LABEL_64;
        v65 = v59->m_Items[v63];
        Item = System_Collections_Generic_List_object___get_Item(
                 v7,
                 v63,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v62 )
          goto LABEL_63;
        if ( v63 >= v62->max_length )
          goto LABEL_64;
        if ( !Item || !v65 )
          goto LABEL_63;
        v66 = v62->m_Items[v63];
        v67 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_39386620(v65, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v67, 0, 0LL);
        if ( !v8 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v63,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v66 )
          goto LABEL_63;
        UILabel__set_text(v66, (System_String_o *)Item, 0LL);
        ++v63;
      }
      while ( v52 != v63 );
      EventInfoProductivityGrowthDialog__Init(v80, v68);
      Item = v78;
      if ( !v78 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v78, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v80, 0LL, 0, 0LL);
      titleLabel = v80->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0LL);
      v70 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v70 )
        goto LABEL_63;
      UILabel__set_text(v70, (System_String_o *)Item, 0LL);
      v80->fields.closeAction = action;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v80->fields.closeAction, (int64_t)action, v71, v72, v73, v74, v75, v76);
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