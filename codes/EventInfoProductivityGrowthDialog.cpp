void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418868C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418868C = 1;
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
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v16; // w21
  __int64 v17; // x0

  if ( (byte_4188689 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188689 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v17 = sub_B2C460(titleLabel);
        sub_B2C400(v17, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v16];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(titleLabel, v5);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_418868B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418868B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int max_length; // w8
  __int64 v35; // x26
  EventConquestInfo_o *v36; // x19
  GiftEntity_o *v37; // x23
  System_Text_StringBuilder_o *v38; // x23
  System_String_o *v39; // x24
  System_String_o *v40; // x24
  Il2CppObject *v41; // x0
  int size; // w27
  int v43; // w8
  EventInfoProductivityGrowthDialog_o *v44; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v49; // x19
  System_Int32_array **v50; // x1
  UnityEngine_GameObject_o *v51; // x8
  struct UILabel_array *v52; // x20
  __int64 v53; // x28
  System_Text_StringBuilder_o *v54; // x0
  unsigned int v55; // w23
  int32_t *v56; // x8
  UILabel_o *v57; // x25
  int32_t v58; // w3
  const MethodInfo *v59; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x0
  UnityEngine_GameObject_o *v69; // [xsp+8h] [xbp-78h]
  UILabel_o **p_messageLabel; // [xsp+10h] [xbp-70h]
  EventInfoProductivityGrowthDialog_o *v71; // [xsp+18h] [xbp-68h]
  System_Action_o *action; // [xsp+20h] [xbp-60h]
  int32_t productAdd; // [xsp+28h] [xbp-58h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_418868A & 1) == 0 )
  {
    sub_B2C35C(&GiftEntity_TypeInfo, closeAction);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_5605/*"EVENT_CONQUEST_UP_MESSAGE"*/, v18);
    sub_B2C35C(&StringLiteral_5604/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, v19);
    sub_B2C35C(&StringLiteral_5603/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, v20);
    sub_B2C35C(&StringLiteral_5606/*"EVENT_CONQUEST_UP_TITLE"*/, v21);
    byte_418868A = 1;
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
    v71 = this;
    action = closeAction;
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v35 >= max_length )
        {
LABEL_64:
          v68 = sub_B2C460(v26);
          sub_B2C400(v68, 0LL);
        }
        v36 = eventConquestInfos->m_Items[v35];
        v37 = (GiftEntity_o *)sub_B2C42C(GiftEntity_TypeInfo);
        GiftEntity___ctor(v37, 0LL);
        if ( !v36 )
          break;
        if ( !v37 )
          break;
        v37->fields.type = v36->fields.type;
        v37->fields.objectId = v36->fields.objectId;
        v37->fields.num = v36->fields.productAdd;
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        v38 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v38, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v36->fields.productNum;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v38 )
          break;
        System_Text_StringBuilder__AppendFormat(v38, v39, v26, 0LL);
        if ( v36->fields.productAdd >= 1 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v36->fields.productAdd;
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v38, v40, v41, 0LL);
        }
        v26 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
                                v38,
                                v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v25 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = eventConquestInfos->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_27;
      }
LABEL_63:
      sub_B2C434(v26, v27);
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
      v43 = size - 1;
      switch ( size )
      {
        case 1:
          v44 = v71;
          p_countIconList01 = &v71->fields.countIconList01;
          p_countLabelList01 = &v71->fields.countLabelList01;
          goto LABEL_34;
        case 2:
          v44 = v71;
          p_countIconList01 = &v71->fields.countIconList02;
          p_countLabelList01 = &v71->fields.countLabelList02;
          goto LABEL_34;
        case 3:
          v44 = v71;
          p_countIconList01 = &v71->fields.countIconList03;
          p_countLabelList01 = &v71->fields.countLabelList03;
          goto LABEL_34;
        case 4:
          v44 = v71;
          p_countIconList01 = &v71->fields.countIconList04;
          p_countLabelList01 = &v71->fields.countLabelList04;
LABEL_34:
          dispObjList = v44->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v43 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v44->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v43 >= messageList->max_length )
            goto LABEL_64;
          v49 = *p_countIconList01;
          v50 = (System_Int32_array **)messageList->m_Items[v43];
          v51 = dispObjList->m_Items[v43];
          v52 = *p_countLabelList01;
          v44->fields.messageLabel = (struct UILabel_o *)v50;
          v69 = v51;
          p_messageLabel = &v44->fields.messageLabel;
          sub_B2C2F8((BattleServantConfConponent_o *)&v44->fields.messageLabel, v50, v28, v29, v30, v31, v32, v33);
          v53 = 4LL;
          break;
        default:
          goto LABEL_30;
      }
      do
      {
        v54 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v54, 0LL);
        if ( !v49 )
          goto LABEL_63;
        v55 = v53 - 4;
        if ( (unsigned int)(v53 - 4) >= v49->max_length )
          goto LABEL_64;
        if ( v24->fields._size <= v55 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v52 )
          goto LABEL_63;
        if ( v55 >= v52->max_length )
          goto LABEL_64;
        v56 = (int32_t *)*((_QWORD *)&v24->fields._items->obj.klass + v53);
        if ( !v56 || !*((_QWORD *)&v49->obj.klass + v53) )
          goto LABEL_63;
        v57 = (UILabel_o *)*((_QWORD *)&v52->obj.klass + v53);
        v58 = v56[7] <= 1 ? -1 : v56[7];
        ItemIconComponent__SetGift(*((ItemIconComponent_o **)&v49->obj.klass + v53), v56[5], v56[6], v58, 0, 0LL);
        if ( !v25 )
          goto LABEL_63;
        if ( v25->fields._size <= v55 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v57 )
          goto LABEL_63;
        UILabel__set_text(v57, *((System_String_o **)&v25->fields._items->obj.klass + v53++), 0LL);
      }
      while ( (int)v53 - 4 < size );
      EventInfoProductivityGrowthDialog__Init(v71, v59);
      v26 = (Il2CppObject *)v69;
      if ( !v69 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v69, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v71, 0LL, 0, 0LL);
      titleLabel = v71->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)v26, 0LL);
      v61 = *p_messageLabel;
      v26 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v61 )
        goto LABEL_63;
      UILabel__set_text(v61, (System_String_o *)v26, 0LL);
      v71->fields.closeAction = action;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v71->fields.closeAction,
        (System_Int32_array **)action,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
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