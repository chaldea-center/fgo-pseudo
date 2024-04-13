void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9522 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9522 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Init(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v22; // w21
  __int64 v23; // x0

  if ( (byte_42E951F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E951F = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v23 = sub_B5D6C8(titleLabel);
        sub_B5D668(v23, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v22];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(titleLabel, v11);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E9521 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9521 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall EventInfoProductivityGrowthDialog__Open(
        EventInfoProductivityGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  TerminalPramsManager_c *v57; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x22
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int max_length; // w8
  __int64 v70; // x26
  EventConquestInfo_o *v71; // x19
  GiftEntity_o *v72; // x23
  System_Text_StringBuilder_o *v73; // x23
  System_String_o *v74; // x24
  System_String_o *v75; // x24
  Il2CppObject *v76; // x0
  int size; // w27
  int v78; // w8
  EventInfoProductivityGrowthDialog_o *v79; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v84; // x19
  System_Int32_array **v85; // x1
  UnityEngine_GameObject_o *v86; // x8
  struct UILabel_array *v87; // x20
  __int64 v88; // x28
  System_Text_StringBuilder_o *v89; // x0
  unsigned int v90; // w23
  int32_t *v91; // x8
  UILabel_o *v92; // x25
  int32_t v93; // w3
  const MethodInfo *v94; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *v96; // x21
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x0
  UnityEngine_GameObject_o *v104; // [xsp+8h] [xbp-78h]
  UILabel_o **p_messageLabel; // [xsp+10h] [xbp-70h]
  EventInfoProductivityGrowthDialog_o *v106; // [xsp+18h] [xbp-68h]
  System_Action_o *action; // [xsp+20h] [xbp-60h]
  int32_t productAdd; // [xsp+28h] [xbp-58h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42E9520 & 1) == 0 )
  {
    sub_B5D5C4(&GiftEntity_TypeInfo, (_DWORD)closeAction, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_5682/*"EVENT_CONQUEST_UP_MESSAGE"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_5681/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_5680/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_5683/*"EVENT_CONQUEST_UP_TITLE"*/, v54, v55, v56);
    byte_42E9520 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v57->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    v106 = this;
    action = closeAction;
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v59,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v60,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v70 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v70 >= max_length )
        {
LABEL_64:
          v103 = sub_B5D6C8(v61);
          sub_B5D668(v103, 0LL);
        }
        v71 = eventConquestInfos->m_Items[v70];
        v72 = (GiftEntity_o *)sub_B5D694(GiftEntity_TypeInfo);
        GiftEntity___ctor(v72, 0LL);
        if ( !v71 )
          break;
        if ( !v72 )
          break;
        v72->fields.type = v71->fields.type;
        v72->fields.objectId = v71->fields.objectId;
        v72->fields.num = v71->fields.productAdd;
        if ( !v59 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v59,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        v73 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v73, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EVENT_CONQUEST_UP_ITEM_FORMAT"*/, 0LL);
        productNum = v71->fields.productNum;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v73 )
          break;
        System_Text_StringBuilder__AppendFormat(v73, v74, v61, 0LL);
        if ( v71->fields.productAdd >= 1 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_CONQUEST_UP_ITEM_ADD_FORMAT"*/, 0LL);
          productAdd = v71->fields.productAdd;
          v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v73, v75, v76, 0LL);
        }
        v61 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                                v73,
                                v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v60 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v60,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = eventConquestInfos->max_length;
        if ( (int)++v70 >= max_length )
          goto LABEL_27;
      }
LABEL_63:
      sub_B5D69C(v61, v62);
    }
    if ( !v59 )
      goto LABEL_63;
LABEL_27:
    size = v59->fields._size;
    if ( size <= 0 )
    {
LABEL_30:
      ActionExtensions__Call(closeAction, 0LL);
    }
    else
    {
      v78 = size - 1;
      switch ( size )
      {
        case 1:
          v79 = v106;
          p_countIconList01 = &v106->fields.countIconList01;
          p_countLabelList01 = &v106->fields.countLabelList01;
          goto LABEL_34;
        case 2:
          v79 = v106;
          p_countIconList01 = &v106->fields.countIconList02;
          p_countLabelList01 = &v106->fields.countLabelList02;
          goto LABEL_34;
        case 3:
          v79 = v106;
          p_countIconList01 = &v106->fields.countIconList03;
          p_countLabelList01 = &v106->fields.countLabelList03;
          goto LABEL_34;
        case 4:
          v79 = v106;
          p_countIconList01 = &v106->fields.countIconList04;
          p_countLabelList01 = &v106->fields.countLabelList04;
LABEL_34:
          dispObjList = v79->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v78 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v79->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v78 >= messageList->max_length )
            goto LABEL_64;
          v84 = *p_countIconList01;
          v85 = (System_Int32_array **)messageList->m_Items[v78];
          v86 = dispObjList->m_Items[v78];
          v87 = *p_countLabelList01;
          v79->fields.messageLabel = (struct UILabel_o *)v85;
          v104 = v86;
          p_messageLabel = &v79->fields.messageLabel;
          sub_B5D560((BattleServantConfConponent_o *)&v79->fields.messageLabel, v85, v63, v64, v65, v66, v67, v68);
          v88 = 4LL;
          break;
        default:
          goto LABEL_30;
      }
      do
      {
        v89 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(v89, 0LL);
        if ( !v84 )
          goto LABEL_63;
        v90 = v88 - 4;
        if ( (unsigned int)(v88 - 4) >= v84->max_length )
          goto LABEL_64;
        if ( v59->fields._size <= v90 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v87 )
          goto LABEL_63;
        if ( v90 >= v87->max_length )
          goto LABEL_64;
        v91 = (int32_t *)*((_QWORD *)&v59->fields._items->obj.klass + v88);
        if ( !v91 || !*((_QWORD *)&v84->obj.klass + v88) )
          goto LABEL_63;
        v92 = (UILabel_o *)*((_QWORD *)&v87->obj.klass + v88);
        v93 = v91[7] <= 1 ? -1 : v91[7];
        ItemIconComponent__SetGift(*((ItemIconComponent_o **)&v84->obj.klass + v88), v91[5], v91[6], v93, 0, 0LL);
        if ( !v60 )
          goto LABEL_63;
        if ( v60->fields._size <= v90 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v92 )
          goto LABEL_63;
        UILabel__set_text(v92, *((System_String_o **)&v60->fields._items->obj.klass + v88++), 0LL);
      }
      while ( (int)v88 - 4 < size );
      EventInfoProductivityGrowthDialog__Init(v106, v94);
      v61 = (Il2CppObject *)v104;
      if ( !v104 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v104, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v106, 0LL, 0, 0LL);
      titleLabel = v106->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_CONQUEST_UP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)v61, 0LL);
      v96 = *p_messageLabel;
      v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_CONQUEST_UP_MESSAGE"*/, 0LL);
      if ( !v96 )
        goto LABEL_63;
      UILabel__set_text(v96, (System_String_o *)v61, 0LL);
      v106->fields.closeAction = action;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v106->fields.closeAction,
        (System_Int32_array **)action,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
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