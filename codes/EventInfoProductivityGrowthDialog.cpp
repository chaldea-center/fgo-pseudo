void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4215606 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4215606 = 1;
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
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v15; // w21
  __int64 v16; // x0

  if ( (byte_4215603 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215603 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v16 = sub_B0D9A8(titleLabel);
        sub_B0D948(v16, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v15];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(titleLabel);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4215605 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4215605 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int max_length; // w8
  __int64 v37; // x26
  EventConquestInfo_o *v38; // x19
  GiftEntity_o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Text_StringBuilder_o *v42; // x23
  System_String_o *v43; // x24
  System_String_o *v44; // x24
  Il2CppObject *v45; // x0
  int size; // w27
  int v47; // w8
  EventInfoProductivityGrowthDialog_o *v48; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v53; // x19
  System_Int32_array **v54; // x1
  UnityEngine_GameObject_o *v55; // x8
  struct UILabel_array *v56; // x20
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  __int64 v59; // x28
  System_Text_StringBuilder_o *v60; // x0
  unsigned int v61; // w23
  int32_t *v62; // x8
  UILabel_o *v63; // x25
  int32_t v64; // w3
  UILabel_o *titleLabel; // x21
  UILabel_o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  UnityEngine_GameObject_o *v74; // [xsp+8h] [xbp-78h]
  UILabel_o **p_messageLabel; // [xsp+10h] [xbp-70h]
  EventInfoProductivityGrowthDialog_o *v76; // [xsp+18h] [xbp-68h]
  System_Action_o *action; // [xsp+20h] [xbp-60h]
  int32_t productAdd; // [xsp+28h] [xbp-58h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4215604 & 1) == 0 )
  {
    sub_B0D8A4(&GiftEntity_TypeInfo, closeAction);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_5621/*"EVENT_CONQUEST_UP_MESSAGE"*/, v18);
    sub_B0D8A4(&StringLiteral_5620/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, v19);
    sub_B0D8A4(&StringLiteral_5619/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, v20);
    sub_B0D8A4(&StringLiteral_5622/*"EVENT_CONQUEST_UP_TITLE"*/, v21);
    byte_4215604 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v22->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    v76 = this;
    action = closeAction;
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    closeAction,
                                                                                                    method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v25,
                                                                                                    v26);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v37 >= max_length )
        {
LABEL_64:
          v73 = sub_B0D9A8(v28);
          sub_B0D948(v73, 0LL);
        }
        v38 = eventConquestInfos->m_Items[v37];
        v39 = (GiftEntity_o *)sub_B0D974(GiftEntity_TypeInfo, v29, v30);
        GiftEntity___ctor(v39, 0LL);
        if ( !v38 )
          break;
        if ( !v39 )
          break;
        v39->fields.type = v38->fields.type;
        v39->fields.objectId = v38->fields.objectId;
        v39->fields.num = v38->fields.productAdd;
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        v42 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v40, v41);
        System_Text_StringBuilder___ctor(v42, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v38->fields.productNum;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v42 )
          break;
        System_Text_StringBuilder__AppendFormat(v42, v43, v28, 0LL);
        if ( v38->fields.productAdd >= 1 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v38->fields.productAdd;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v42, v44, v45, 0LL);
        }
        v28 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v42->klass->vtable._3_ToString.method)(
                                v42,
                                v42->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v27 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = eventConquestInfos->max_length;
        if ( (int)++v37 >= max_length )
          goto LABEL_27;
      }
LABEL_63:
      sub_B0D97C(v28);
    }
    if ( !v24 )
      goto LABEL_63;
LABEL_27:
    size = v24->fields._size;
    if ( size <= 0 )
    {
LABEL_30:
      ActionExtensions__Call(closeAction, 0LL);
    }
    else
    {
      v47 = size - 1;
      switch ( size )
      {
        case 1:
          v48 = v76;
          p_countIconList01 = &v76->fields.countIconList01;
          p_countLabelList01 = &v76->fields.countLabelList01;
          goto LABEL_34;
        case 2:
          v48 = v76;
          p_countIconList01 = &v76->fields.countIconList02;
          p_countLabelList01 = &v76->fields.countLabelList02;
          goto LABEL_34;
        case 3:
          v48 = v76;
          p_countIconList01 = &v76->fields.countIconList03;
          p_countLabelList01 = &v76->fields.countLabelList03;
          goto LABEL_34;
        case 4:
          v48 = v76;
          p_countIconList01 = &v76->fields.countIconList04;
          p_countLabelList01 = &v76->fields.countLabelList04;
LABEL_34:
          dispObjList = v48->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v47 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v48->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v47 >= messageList->max_length )
            goto LABEL_64;
          v53 = *p_countIconList01;
          v54 = (System_Int32_array **)messageList->m_Items[v47];
          v55 = dispObjList->m_Items[v47];
          v56 = *p_countLabelList01;
          v48->fields.messageLabel = (struct UILabel_o *)v54;
          v74 = v55;
          p_messageLabel = &v48->fields.messageLabel;
          sub_B0D840((BattleServantConfConponent_o *)&v48->fields.messageLabel, v54, v30, v31, v32, v33, v34, v35);
          v59 = 4LL;
          break;
        default:
          goto LABEL_30;
      }
      do
      {
        v60 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v57, v58);
        System_Text_StringBuilder___ctor(v60, 0LL);
        if ( !v53 )
          goto LABEL_63;
        v61 = v59 - 4;
        if ( (unsigned int)(v59 - 4) >= v53->max_length )
          goto LABEL_64;
        if ( v24->fields._size <= v61 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v56 )
          goto LABEL_63;
        if ( v61 >= v56->max_length )
          goto LABEL_64;
        v62 = (int32_t *)*((_QWORD *)&v24->fields._items->obj.klass + v59);
        if ( !v62 || !*((_QWORD *)&v53->obj.klass + v59) )
          goto LABEL_63;
        v63 = (UILabel_o *)*((_QWORD *)&v56->obj.klass + v59);
        v64 = v62[7] <= 1 ? -1 : v62[7];
        ItemIconComponent__SetGift(*((ItemIconComponent_o **)&v53->obj.klass + v59), v62[5], v62[6], v64, 0, 0LL);
        if ( !v27 )
          goto LABEL_63;
        if ( v27->fields._size <= v61 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v63 )
          goto LABEL_63;
        UILabel__set_text(v63, *((System_String_o **)&v27->fields._items->obj.klass + v59++), 0LL);
      }
      while ( (int)v59 - 4 < size );
      EventInfoProductivityGrowthDialog__Init(v76, v57);
      v28 = (Il2CppObject *)v74;
      if ( !v74 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v74, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v76, 0LL, 0, 0LL);
      titleLabel = v76->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5622/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)v28, 0LL);
      v66 = *p_messageLabel;
      v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v66 )
        goto LABEL_63;
      UILabel__set_text(v66, (System_String_o *)v28, 0LL);
      v76->fields.closeAction = action;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v76->fields.closeAction,
        (System_Int32_array **)action,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
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