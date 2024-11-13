void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B177CE & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B177CE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Init(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v20; // w21

  if ( (byte_4B177CB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B177CB = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(titleLabel, v8);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v20];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(titleLabel, v8);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B177CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v6, v7);
    byte_4B177CD = 1;
  }
  v8 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Open(
        EventInfoProductivityGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  TerminalPramsManager_c *v40; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_object__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x22
  void *Item; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  __int64 v50; // x3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int max_length; // w8
  __int64 v56; // x26
  EventConquestInfo_o *v57; // x28
  int64_t v58; // x23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Text_StringBuilder_o *v72; // x23
  __int64 v73; // x1
  System_String_o *v74; // x24
  __int64 v75; // x1
  System_String_o *v76; // x24
  Il2CppObject *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  int64_t v87; // x1
  Il2CppClass **v88; // x0
  int v89; // w19
  unsigned int v90; // w8
  EventInfoProductivityGrowthDialog_o *v91; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v96; // x20
  int64_t v97; // x1
  UnityEngine_GameObject_o *v98; // x8
  struct UILabel_array *v99; // x28
  const MethodInfo *v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  int32_t v103; // w25
  System_Text_StringBuilder_o *v104; // x0
  ItemIconComponent_o *v105; // x26
  UILabel_o *v106; // x27
  int32_t v107; // w3
  __int64 v108; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v110; // x21
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v118; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v120; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B177CC & 1) == 0 )
  {
    sub_1BCA7E0(&GiftEntity_TypeInfo, closeAction, method);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v28, v29);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_5681/*"EVENT_CONQUEST_UP_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_5680/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_5679/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_5682/*"EVENT_CONQUEST_UP_TITLE"*/, v38, v39);
    byte_4B177CC = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, closeAction);
    v40 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v40->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    action = closeAction;
    v120 = this;
    v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         closeAction,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v43,
                                                         v44,
                                                         v45);
    System_Collections_Generic_List_object____ctor(
      v46,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v56 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v56 >= max_length )
LABEL_64:
          sub_1BCAA44(Item, v48);
        v57 = eventConquestInfos->m_Items[v56];
        v58 = sub_1BCAA2C(GiftEntity_TypeInfo, v48, v49, v50);
        GiftEntity___ctor((GiftEntity_o *)v58, 0LL);
        if ( !v57 )
          break;
        if ( !v58 )
          break;
        *(_QWORD *)(v58 + 20) = *(_QWORD *)&v57->fields.type;
        *(_DWORD *)(v58 + 28) = v57->fields.productAdd;
        if ( !v42 )
          break;
        items = v42->fields._items;
        v66 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v42->fields._version;
        if ( !items )
          break;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            (Il2CppObject *)v58,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v58;
          sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), v58, v59, v60, v61, v62, v63, v64);
        }
        v72 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v69, v70, v71);
        System_Text_StringBuilder___ctor(v72, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v57->fields.productNum;
        Item = (void *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v72 )
          break;
        System_Text_StringBuilder__AppendFormat(v72, v74, (Il2CppObject *)Item, 0LL);
        if ( v57->fields.productAdd >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_5679/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v57->fields.productAdd;
          v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v72, v76, v77, 0LL);
        }
        Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v72->klass->vtable._3_ToString.method)(
                         v72,
                         v72->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v46 )
          break;
        v84 = v46->fields._items;
        v85 = Method_System_Collections_Generic_List_string__Add__;
        ++v46->fields._version;
        if ( !v84 )
          break;
        v86 = v46->fields._size;
        v87 = (int64_t)Item;
        if ( (unsigned int)v86 >= v84->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            (Il2CppObject *)Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &v84->obj.klass + v86;
          v46->fields._size = v86 + 1;
          v88[4] = (Il2CppClass *)v87;
          sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v87, v78, v79, v80, v81, v82, v83);
        }
        max_length = eventConquestInfos->max_length;
        if ( (int)++v56 >= max_length )
          goto LABEL_32;
      }
LABEL_63:
      sub_1BCAA3C(Item, v48);
    }
    if ( !v42 )
      goto LABEL_63;
LABEL_32:
    v89 = v42->fields._size;
    if ( v89 <= 0 )
    {
LABEL_35:
      ActionExtensions__Call(action, 0LL);
    }
    else
    {
      v90 = v89 - 1;
      switch ( v89 )
      {
        case 1:
          v91 = v120;
          p_countIconList01 = &v120->fields.countIconList01;
          p_countLabelList01 = &v120->fields.countLabelList01;
          goto LABEL_39;
        case 2:
          v91 = v120;
          p_countIconList01 = &v120->fields.countIconList02;
          p_countLabelList01 = &v120->fields.countLabelList02;
          goto LABEL_39;
        case 3:
          v91 = v120;
          p_countIconList01 = &v120->fields.countIconList03;
          p_countLabelList01 = &v120->fields.countLabelList03;
          goto LABEL_39;
        case 4:
          v91 = v120;
          p_countIconList01 = &v120->fields.countIconList04;
          p_countLabelList01 = &v120->fields.countLabelList04;
LABEL_39:
          dispObjList = v91->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v90 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v91->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v90 >= messageList->max_length )
            goto LABEL_64;
          v96 = *p_countIconList01;
          v97 = (int64_t)messageList->m_Items[v90];
          v98 = dispObjList->m_Items[v90];
          v99 = *p_countLabelList01;
          v91->fields.messageLabel = (struct UILabel_o *)v97;
          p_messageLabel = &v91->fields.messageLabel;
          v118 = v98;
          sub_1BCA784((PartyOrganizationUtility_o *)&v91->fields.messageLabel, v97, v49, v50, v51, v52, v53, v54);
          v103 = 0;
          break;
        default:
          goto LABEL_35;
      }
      do
      {
        v104 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v100, v101, v102);
        System_Text_StringBuilder___ctor(v104, 0LL);
        if ( !v96 )
          goto LABEL_63;
        if ( v103 >= v96->max_length )
          goto LABEL_64;
        v105 = v96->m_Items[v103];
        Item = System_Collections_Generic_List_object___get_Item(
                 v42,
                 v103,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !v99 )
          goto LABEL_63;
        if ( v103 >= v99->max_length )
          goto LABEL_64;
        if ( !Item || !v105 )
          goto LABEL_63;
        v106 = v99->m_Items[v103];
        v107 = *((int *)Item + 7) <= 1 ? -1 : *((_DWORD *)Item + 7);
        ItemIconComponent__SetGift_38855180(v105, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v107, 0, 0LL);
        if ( !v46 )
          goto LABEL_63;
        Item = System_Collections_Generic_List_object___get_Item(
                 v46,
                 v103,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v106 )
          goto LABEL_63;
        UILabel__set_text(v106, (System_String_o *)Item, 0LL);
        ++v103;
      }
      while ( v89 != v103 );
      EventInfoProductivityGrowthDialog__Init(v120, v100);
      Item = v118;
      if ( !v118 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v118, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v120, 0LL, 0, 0LL);
      titleLabel = v120->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)Item, 0LL);
      v110 = *p_messageLabel;
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v110 )
        goto LABEL_63;
      UILabel__set_text(v110, (System_String_o *)Item, 0LL);
      v120->fields.closeAction = action;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v120->fields.closeAction,
        (int64_t)action,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
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