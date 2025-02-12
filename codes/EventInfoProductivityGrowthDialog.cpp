void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB5D13 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB5D13 = 1;
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
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v16; // w21

  if ( (byte_4BB5D10 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB5D10 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C13F88(titleLabel, v5);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v16];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C13F80(titleLabel, v5);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BB5D12 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__, v3);
    sub_1C13D24(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v4);
    byte_4BB5D12 = 1;
  }
  v5 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C13D3C(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  System_Collections_Generic_List_object__o *v25; // x22
  void *Item; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int max_length; // w8
  __int64 v35; // x26
  EventConquestInfo_o *v36; // x28
  int64_t v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Text_StringBuilder_o *v48; // x23
  System_String_o *v49; // x24
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_String_o *v53; // x24
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  int64_t v67; // x1
  Il2CppClass **v68; // x0
  int v69; // w19
  unsigned int v70; // w8
  EventInfoProductivityGrowthDialog_o *v71; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v76; // x20
  int64_t v77; // x1
  UnityEngine_GameObject_o *v78; // x8
  struct UILabel_array *v79; // x28
  int32_t v80; // w25
  System_Text_StringBuilder_o *v81; // x0
  ItemIconComponent_o *v82; // x26
  UILabel_o *v83; // x27
  int32_t v84; // w3
  const MethodInfo *v85; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v95; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v97; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BB5D11 & 1) == 0 )
  {
    sub_1C13D24(&GiftEntity_TypeInfo, closeAction);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1C13D24(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_5706/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, v18);
    sub_1C13D24(&StringLiteral_5705/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, v19);
    sub_1C13D24(&StringLiteral_5704/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, v20);
    sub_1C13D24(&StringLiteral_5707/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, v21);
    byte_4BB5D11 = 1;
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
    v97 = this;
    v24 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v35 >= max_length )
LABEL_64:
          sub_1C13F88(Item, v27);
        v36 = eventConquestInfos->m_Items[v35];
        v37 = sub_1C13F70(GiftEntity_TypeInfo);
        GiftEntity___ctor((GiftEntity_o *)v37, 0LL);
        if ( !v36 )
          break;
        if ( !v37 )
          break;
        *(_QWORD *)(v37 + 20) = *(_QWORD *)&v36->fields.type;
        *(_DWORD *)(v37 + 28) = v36->fields.productAdd;
        if ( !v24 )
          break;
        items = v24->fields._items;
        v45 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v24->fields._version;
        if ( !items )
          break;
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)v37,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v37;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v47 + 4), v37, v38, v39, v40, v41, v42, v43);
        }
        v48 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v48, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0LL);
        productNum = v36->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum, v50, v51, v52);
        if ( !v48 )
          break;
        System_Text_StringBuilder__AppendFormat(v48, v49, (Il2CppObject *)Item, 0LL);
        if ( v36->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0LL);
          productAdd = v36->fields.productAdd;
          v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd, v54, v55, v56);
          System_Text_StringBuilder__AppendFormat(v48, v53, v57, 0LL);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                         v48,
                         v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v25 )
          break;
        v64 = v25->fields._items;
        v65 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !v64 )
          break;
        v66 = v25->fields._size;
        v67 = (int64_t)Item;
        if ( (unsigned int)v66 >= v64->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)Item,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &v64->obj.klass + v66;
          v25->fields._size = v66 + 1;
          v68[4] = (Il2CppClass *)v67;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v68 + 4), v67, v58, v59, v60, v61, v62, v63);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1C13F80(Item, v27);
    }
    if ( !v24 )
      goto LABEL_63;
LABEL_32:
    v69 = v24->fields._size;
    if ( v69 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0LL);
    }
    else
    {
      v70 = v69 - 1;
      switch ( v69 )
      {
        case 1:
          v71 = v97;
          p_countIconList01 = &v97->fields.countIconList01;
          p_countLabelList01 = &v97->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v71 = v97;
          p_countIconList01 = &v97->fields.countIconList02;
          p_countLabelList01 = &v97->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v71 = v97;
          p_countIconList01 = &v97->fields.countIconList03;
          p_countLabelList01 = &v97->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v71 = v97;
          p_countIconList01 = &v97->fields.countIconList04;
          p_countLabelList01 = &v97->fields.countLabelList04;
LABEL_39:
          dispObjList = v71->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v70 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v71->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v70 >= messageList->max_length )
            goto LABEL_64;
          v76 = *p_countIconList01;
          v77 = (int64_t)messageList->m_Items[v70];
          v78 = dispObjList->m_Items[v70];
          v79 = *p_countLabelList01;
          v71->fields.messageLabel = (struct UILabel_o *)v77;
          p_messageLabel = &v71->fields.messageLabel;
          v95 = v78;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v71->fields.messageLabel, v77, v28, v29, v30, v31, v32, v33);
          v80 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v81 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v81, 0LL);
        if ( !v76 )
          goto LABEL_63;
        if ( v80 >= v76->max_length )
          goto LABEL_64;
        v82 = v76->m_Items[v80];
        Item = System_Collections_Generic_List_object___get_Item(
                 v24,
                 v80,
                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v79 )
          goto LABEL_63;
        if ( v80 >= v79->max_length )
          goto LABEL_64;
        if ( !Item || !v82 )
          goto LABEL_63;
        v83 = v79->m_Items[v80];
        v84 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_39286592(v82, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v84, 0, 0LL);
        if ( !v25 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v25,
                 v80,
                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v83 )
          goto LABEL_63;
        UILabel__set_text(v83, (System_String_o *)Item, 0LL);
        ++v80;
      }
      while ( v69 != v80 );
      EventInfoProductivityGrowthDialog__Init(v97, v85);
      Item = v95;
      if ( !v95 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v95, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v97, 0LL, 0, 0LL);
      titleLabel = v97->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0LL);
      v87 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0LL);
      if ( !v87 )
        goto LABEL_63;
      UILabel__set_text(v87, (System_String_o *)Item, 0LL);
      v97->fields.closeAction = action;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v97->fields.closeAction, (int64_t)action, v88, v89, v90, v91, v92, v93);
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