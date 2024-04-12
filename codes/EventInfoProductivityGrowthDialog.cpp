void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0E31 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B0E31 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21
  __int64 v15; // x0

  if ( (byte_42B0E2E & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0E2E = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v15 = sub_B52A88(titleLabel);
        sub_B52A28(v15, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B52A5C(titleLabel, v3);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B0E30 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0E30 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Open(
        EventInfoProductivityGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int max_length; // w8
  __int64 v18; // x26
  EventConquestInfo_o *v19; // x19
  GiftEntity_o *v20; // x23
  System_Text_StringBuilder_o *v21; // x23
  System_String_o *v22; // x24
  System_String_o *v23; // x24
  Il2CppObject *v24; // x0
  int size; // w27
  int v26; // w8
  EventInfoProductivityGrowthDialog_o *v27; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v32; // x19
  System_Int32_array **v33; // x1
  UnityEngine_GameObject_o *v34; // x8
  struct UILabel_array *v35; // x20
  __int64 v36; // x28
  System_Text_StringBuilder_o *v37; // x0
  unsigned int v38; // w23
  int32_t *v39; // x8
  UILabel_o *v40; // x25
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  UnityEngine_GameObject_o *v52; // [xsp+8h] [xbp-78h]
  UILabel_o **p_messageLabel; // [xsp+10h] [xbp-70h]
  EventInfoProductivityGrowthDialog_o *v54; // [xsp+18h] [xbp-68h]
  System_Action_o *action; // [xsp+20h] [xbp-60h]
  int32_t productAdd; // [xsp+28h] [xbp-58h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B0E2F & 1) == 0 )
  {
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_5647/*"EVENT_CONQUEST_UP_MESSAGE"*/);
    sub_B52984(&StringLiteral_5646/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/);
    sub_B52984(&StringLiteral_5645/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/);
    sub_B52984(&StringLiteral_5648/*"EVENT_CONQUEST_UP_TITLE"*/);
    byte_42B0E2F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v5->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    v54 = this;
    action = closeAction;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
        {
LABEL_64:
          v51 = sub_B52A88(v9);
          sub_B52A28(v51, 0LL);
        }
        v19 = eventConquestInfos->m_Items[v18];
        v20 = (GiftEntity_o *)sub_B52A54(GiftEntity_TypeInfo);
        GiftEntity___ctor(v20, 0LL);
        if ( !v19 )
          break;
        if ( !v20 )
          break;
        v20->fields.type = v19->fields.type;
        v20->fields.objectId = v19->fields.objectId;
        v20->fields.num = v19->fields.productAdd;
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        v21 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v21, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v19->fields.productNum;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v21 )
          break;
        System_Text_StringBuilder__AppendFormat(v21, v22, v9, 0LL);
        if ( v19->fields.productAdd >= 1 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v19->fields.productAdd;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v21, v23, v24, 0LL);
        }
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                               v21,
                               v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = eventConquestInfos->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_27;
      }
LABEL_63:
      sub_B52A5C(v9, v10);
    }
    if ( !v7 )
      goto LABEL_63;
LABEL_27:
    size = v7->fields._size;
    if ( size <= 0 )
    {
LABEL_30:
      ActionExtensions__Call(closeAction, 0LL);
    }
    else
    {
      v26 = size - 1;
      switch ( size )
      {
        case 1:
          v27 = v54;
          p_countIconList01 = &v54->fields.countIconList01;
          p_countLabelList01 = &v54->fields.countLabelList01;
          goto LABEL_34;
        case 2:
          v27 = v54;
          p_countIconList01 = &v54->fields.countIconList02;
          p_countLabelList01 = &v54->fields.countLabelList02;
          goto LABEL_34;
        case 3:
          v27 = v54;
          p_countIconList01 = &v54->fields.countIconList03;
          p_countLabelList01 = &v54->fields.countLabelList03;
          goto LABEL_34;
        case 4:
          v27 = v54;
          p_countIconList01 = &v54->fields.countIconList04;
          p_countLabelList01 = &v54->fields.countLabelList04;
LABEL_34:
          dispObjList = v27->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v26 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v27->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v26 >= messageList->max_length )
            goto LABEL_64;
          v32 = *p_countIconList01;
          v33 = (System_Int32_array **)messageList->m_Items[v26];
          v34 = dispObjList->m_Items[v26];
          v35 = *p_countLabelList01;
          v27->fields.messageLabel = (struct UILabel_o *)v33;
          v52 = v34;
          p_messageLabel = &v27->fields.messageLabel;
          sub_B52920((BattleServantConfConponent_o *)&v27->fields.messageLabel, v33, v11, v12, v13, v14, v15, v16);
          v36 = 4LL;
          break;
        default:
          goto LABEL_30;
      }
      do
      {
        v37 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v37, 0LL);
        if ( !v32 )
          goto LABEL_63;
        v38 = v36 - 4;
        if ( (unsigned int)(v36 - 4) >= v32->max_length )
          goto LABEL_64;
        if ( v7->fields._size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v35 )
          goto LABEL_63;
        if ( v38 >= v35->max_length )
          goto LABEL_64;
        v39 = (int32_t *)*((_QWORD *)&v7->fields._items->obj.klass + v36);
        if ( !v39 || !*((_QWORD *)&v32->obj.klass + v36) )
          goto LABEL_63;
        v40 = (UILabel_o *)*((_QWORD *)&v35->obj.klass + v36);
        v41 = v39[7] <= 1 ? -1 : v39[7];
        ItemIconComponent__SetGift(*((ItemIconComponent_o **)&v32->obj.klass + v36), v39[5], v39[6], v41, 0, 0LL);
        if ( !v8 )
          goto LABEL_63;
        if ( v8->fields._size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v40 )
          goto LABEL_63;
        UILabel__set_text(v40, *((System_String_o **)&v8->fields._items->obj.klass + v36++), 0LL);
      }
      while ( (int)v36 - 4 < size );
      EventInfoProductivityGrowthDialog__Init(v54, v42);
      v9 = (Il2CppObject *)v52;
      if ( !v52 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v52, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v54, 0LL, 0, 0LL);
      titleLabel = v54->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)v9, 0LL);
      v44 = *p_messageLabel;
      v9 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v44 )
        goto LABEL_63;
      UILabel__set_text(v44, (System_String_o *)v9, 0LL);
      v54->fields.closeAction = action;
      sub_B52920(
        (BattleServantConfConponent_o *)&v54->fields.closeAction,
        (System_Int32_array **)action,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
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