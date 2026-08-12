void EventInfoProductivityGrowthDialog___ctor(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59725E7 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59725E7 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoProductivityGrowthDialog__Init(EventInfoProductivityGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  UILabel_o *closeLabel; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  __int64 v15; // x21

  if ( (byte_59725E4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59725E4 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_2213CE4(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v15];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v7, v8, v9, v10, v11, v12);
}


void EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_59725E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
    sub_2213A60(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    byte_59725E6 = 1;
  }
  v3 = Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventInfoProductivityGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w8
  __int64 v18; // x26
  EventConquestInfo_o *v19; // x20
  __int64 v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Text_StringBuilder_o *v31; // x23
  __int64 v32; // x1
  System_String_o *v33; // x24
  __int64 v34; // x1
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass *v46; // x1
  Il2CppClass **v47; // x0
  int v48; // w19
  EventInfoProductivityGrowthDialog_o *v49; // x14
  struct ItemIconComponent_array **p_countIconList03; // x8
  struct UILabel_array **p_countLabelList03; // x9
  struct UnityEngine_GameObject_array *dispObjList; // x10
  __int64 v53; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v55; // x20
  struct UILabel_array *v56; // x28
  struct UILabel_o *v57; // x1
  UnityEngine_GameObject_o *v58; // x8
  __int64 v59; // x25
  System_Text_StringBuilder_o *v60; // x0
  ItemIconComponent_o *v61; // x26
  int v62; // w8
  UILabel_o *v63; // x27
  const MethodInfo *v64; // x1
  __int64 v65; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v67; // x21
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  UILabel_o **p_messageLabel; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o *v75; // [xsp+10h] [xbp-80h]
  System_Action_o *action; // [xsp+18h] [xbp-78h]
  EventInfoProductivityGrowthDialog_o *v77; // [xsp+20h] [xbp-70h]
  int32_t productAdd; // [xsp+28h] [xbp-68h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_59725E5 & 1) == 0 )
  {
    sub_2213A60(&GiftEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_5780/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5779/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_2213A60(&StringLiteral_5778/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_2213A60(&StringLiteral_5781/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_59725E5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, closeAction);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v5->static_fields->eventConquestInfos;
  if ( !eventConquestInfos )
  {
    ActionExtensions__Call(closeAction, 0);
    return;
  }
  action = closeAction;
  v77 = this;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  max_length = eventConquestInfos->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( (unsigned int)v18 < max_length )
    {
      v19 = eventConquestInfos->m_Items[v18];
      v20 = sub_2213CCC(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v20, 0);
      if ( !v19 )
        goto LABEL_64;
      if ( !v20 )
        goto LABEL_64;
      *(_QWORD *)(v20 + 20) = *(_QWORD *)&v19->fields.type;
      *(_DWORD *)(v20 + 28) = v19->fields.productAdd;
      if ( !v7 )
        goto LABEL_64;
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_64;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
      }
      v31 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v31, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5779/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0);
      productNum = v19->fields.productNum;
      Item = (void *)j_il2cpp_value_box_0(qword_5984348, &productNum);
      if ( !v31 )
        goto LABEL_64;
      System_Text_StringBuilder__AppendFormat(v31, v33, (Il2CppObject *)Item, 0);
      if ( v19->fields.productAdd >= 1 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5778/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0);
        productAdd = v19->fields.productAdd;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &productAdd);
        System_Text_StringBuilder__AppendFormat(v31, v35, v36, 0);
      }
      Item = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v31->klass->vtable._3_ToString.methodPtr)(
                       v31,
                       v31->klass->vtable._3_ToString.method);
      if ( !v8 )
        goto LABEL_64;
      v43 = v8->fields._items;
      v44 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !v43 )
        goto LABEL_64;
      v45 = v8->fields._size;
      v46 = (Il2CppClass *)Item;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Item,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &v43->obj.klass + v45;
        v8->fields._size = v45 + 1;
        v47[4] = v46;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v46, v37, v38, v39, v40, v41, v42);
      }
      max_length = eventConquestInfos->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_32;
    }
LABEL_65:
    sub_2213CE4(Item);
  }
  if ( !v7 )
LABEL_64:
    sub_2213CDC(Item, v10);
LABEL_32:
  v48 = v7->fields._size;
  if ( v48 <= 0 )
    goto LABEL_39;
  if ( v48 > 2 )
  {
    v49 = v77;
    if ( v48 == 3 )
    {
      p_countIconList03 = &v77->fields.countIconList03;
      p_countLabelList03 = &v77->fields.countLabelList03;
      goto LABEL_42;
    }
    if ( v48 == 4 )
    {
      p_countIconList03 = &v77->fields.countIconList04;
      p_countLabelList03 = &v77->fields.countLabelList04;
      goto LABEL_42;
    }
LABEL_39:
    ActionExtensions__Call(action, 0);
    return;
  }
  v49 = v77;
  if ( v48 == 1 )
  {
    p_countIconList03 = &v77->fields.countIconList01;
    p_countLabelList03 = &v77->fields.countLabelList01;
  }
  else
  {
    p_countIconList03 = &v77->fields.countIconList02;
    p_countLabelList03 = &v77->fields.countLabelList02;
  }
LABEL_42:
  dispObjList = v49->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_64;
  v53 = (unsigned int)(v48 - 1);
  if ( (unsigned int)v53 >= LODWORD(dispObjList->max_length) )
    goto LABEL_65;
  messageList = v49->fields.messageList;
  if ( !messageList )
    goto LABEL_64;
  if ( (unsigned int)v53 >= LODWORD(messageList->max_length) )
    goto LABEL_65;
  v55 = *p_countIconList03;
  v56 = *p_countLabelList03;
  v57 = messageList->m_Items[v53];
  v58 = dispObjList->m_Items[v53];
  v49->fields.messageLabel = v57;
  p_messageLabel = &v49->fields.messageLabel;
  v75 = v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->fields.messageLabel, (int32_t)v57, v11, v12, v13, v14, v15, v16);
  v59 = 0;
  do
  {
    v60 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v60, 0);
    if ( !v55 )
      goto LABEL_64;
    if ( (unsigned int)v59 >= LODWORD(v55->max_length) )
      goto LABEL_65;
    v61 = v55->m_Items[v59];
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v59,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v56 )
      goto LABEL_64;
    if ( (unsigned int)v59 >= LODWORD(v56->max_length) )
      goto LABEL_65;
    if ( !Item || !v61 )
      goto LABEL_64;
    v62 = *((_DWORD *)Item + 7);
    v63 = v56->m_Items[v59];
    if ( v62 <= 1 )
      v62 = -1;
    ItemIconComponent__SetGift_47884936(v61, *((_DWORD *)Item + 5), *((_DWORD *)Item + 6), v62, 0, 0);
    if ( !v8 )
      goto LABEL_64;
    Item = System_Collections_Generic_List_object___get_Item(
             v8,
             v59,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !v63 )
      goto LABEL_64;
    UILabel__set_text(v63, (System_String_o *)Item, 0);
    ++v59;
  }
  while ( v48 != (_DWORD)v59 );
  EventInfoProductivityGrowthDialog__Init(v77, v64);
  Item = v75;
  if ( !v75 )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(v75, 1, 0);
  BaseDialog__Open((BaseDialog_o *)v77, 0, 0, 0, 0);
  titleLabel = v77->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
  Item = LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EVENT_CONQUEST_UP_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_64;
  UILabel__set_text(titleLabel, (System_String_o *)Item, 0);
  v67 = *p_messageLabel;
  Item = LocalizationManager__Get((System_String_o *)StringLiteral_5780/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0);
  if ( !v67 )
    goto LABEL_64;
  UILabel__set_text(v67, (System_String_o *)Item, 0);
  v77->fields.closeAction = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v77->fields.closeAction,
    (int32_t)action,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
}


void EventInfoProductivityGrowthDialog___OnClickCloseButton_b__17_0(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  EventInfoProductivityGrowthDialog__Init(this, v3);
}