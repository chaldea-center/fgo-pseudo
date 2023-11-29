void __fastcall EventInfoProductivityGrowthDialog___ctor(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA159 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA159 = 1;
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
  System_String_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v18; // w21
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FA156 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA156 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, v7, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v8, v9, v10);
        sub_B170A0();
      }
      v19 = dispObjList->m_Items[v18];
      if ( !v19 )
        break;
      UnityEngine_GameObject__SetActive(v19, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v10, v11, v12, v13, v14, v15);
}


void __fastcall EventInfoProductivityGrowthDialog__OnClickCloseButton(
        EventInfoProductivityGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FA158 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoProductivityGrowthDialog__OnClickCloseButton_b__17_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA158 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x1
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int max_length; // w8
  __int64 v41; // x26
  EventConquestInfo_o *v42; // x19
  GiftEntity_o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Text_StringBuilder_o *v48; // x23
  System_String_o *v49; // x24
  Il2CppObject *v50; // x0
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x0
  int size; // w27
  int v55; // w8
  EventInfoProductivityGrowthDialog_o *v56; // x14
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v61; // x19
  System_Int32_array **v62; // x1
  UnityEngine_GameObject_o *v63; // x8
  struct UILabel_array *v64; // x20
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x28
  System_Text_StringBuilder_o *v70; // x0
  unsigned int v71; // w23
  int32_t *v72; // x8
  UILabel_o *v73; // x25
  int32_t v74; // w3
  UILabel_o *titleLabel; // x21
  System_String_o *v76; // x0
  UILabel_o *v77; // x21
  System_String_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UnityEngine_GameObject_o *v85; // [xsp+8h] [xbp-78h]
  UILabel_o **p_messageLabel; // [xsp+10h] [xbp-70h]
  EventInfoProductivityGrowthDialog_o *v87; // [xsp+18h] [xbp-68h]
  System_Action_o *action; // [xsp+20h] [xbp-60h]
  int32_t productAdd; // [xsp+28h] [xbp-58h] BYREF
  int32_t productNum; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FA157 & 1) == 0 )
  {
    sub_B16FFC(&GiftEntity_TypeInfo, closeAction);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v18);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_5590, v20);
    sub_B16FFC(&StringLiteral_5589, v21);
    sub_B16FFC(&StringLiteral_5588, v22);
    sub_B16FFC(&StringLiteral_5591, v23);
    byte_40FA157 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v24->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    v87 = this;
    action = closeAction;
    v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    closeAction,
                                                                                                    method,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v26,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v27,
                                                                                                    v28,
                                                                                                    v29,
                                                                                                    v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
    max_length = eventConquestInfos->max_length;
    if ( max_length >= 1 )
    {
      v41 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v41 >= max_length )
        {
LABEL_64:
          sub_B17100(v32, v33, v34);
          sub_B170A0();
        }
        v42 = eventConquestInfos->m_Items[v41];
        v43 = (GiftEntity_o *)sub_B170CC(GiftEntity_TypeInfo, v33, v34, v35, v36);
        GiftEntity___ctor(v43, 0LL);
        if ( !v42 )
          break;
        if ( !v43 )
          break;
        v43->fields.type = v42->fields.type;
        v43->fields.objectId = v42->fields.objectId;
        v43->fields.num = v42->fields.productAdd;
        if ( !v26 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        v48 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v44, v45, v46, v47);
        System_Text_StringBuilder___ctor(v48, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5589, 0LL);
        productNum = v42->fields.productNum;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productNum);
        if ( !v48 )
          break;
        System_Text_StringBuilder__AppendFormat(v48, v49, v50, 0LL);
        if ( v42->fields.productAdd >= 1 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5588, 0LL);
          productAdd = v42->fields.productAdd;
          v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &productAdd);
          System_Text_StringBuilder__AppendFormat(v48, v51, v52, 0LL);
        }
        v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                                                                       v48,
                                                                       v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( !v31 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          v53,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = eventConquestInfos->max_length;
        if ( (int)++v41 >= max_length )
          goto LABEL_27;
      }
LABEL_63:
      sub_B170D4();
    }
    if ( !v26 )
      goto LABEL_63;
LABEL_27:
    size = v26->fields._size;
    if ( size <= 0 )
    {
LABEL_30:
      ActionExtensions__Call(closeAction, 0LL);
    }
    else
    {
      v55 = size - 1;
      switch ( size )
      {
        case 1:
          v56 = v87;
          p_countIconList01 = &v87->fields.countIconList01;
          p_countLabelList01 = &v87->fields.countLabelList01;
          goto LABEL_34;
        case 2:
          v56 = v87;
          p_countIconList01 = &v87->fields.countIconList02;
          p_countLabelList01 = &v87->fields.countLabelList02;
          goto LABEL_34;
        case 3:
          v56 = v87;
          p_countIconList01 = &v87->fields.countIconList03;
          p_countLabelList01 = &v87->fields.countLabelList03;
          goto LABEL_34;
        case 4:
          v56 = v87;
          p_countIconList01 = &v87->fields.countIconList04;
          p_countLabelList01 = &v87->fields.countLabelList04;
LABEL_34:
          dispObjList = v56->fields.dispObjList;
          if ( !dispObjList )
            goto LABEL_63;
          if ( v55 >= dispObjList->max_length )
            goto LABEL_64;
          messageList = v56->fields.messageList;
          if ( !messageList )
            goto LABEL_63;
          if ( v55 >= messageList->max_length )
            goto LABEL_64;
          v61 = *p_countIconList01;
          v62 = (System_Int32_array **)messageList->m_Items[v55];
          v63 = dispObjList->m_Items[v55];
          v64 = *p_countLabelList01;
          v56->fields.messageLabel = (struct UILabel_o *)v62;
          v85 = v63;
          p_messageLabel = &v56->fields.messageLabel;
          sub_B16F98((BattleServantConfConponent_o *)&v56->fields.messageLabel, v62, v34, v35, v36, v37, v38, v39);
          v69 = 4LL;
          break;
        default:
          goto LABEL_30;
      }
      do
      {
        v70 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v65, v66, v67, v68);
        System_Text_StringBuilder___ctor(v70, 0LL);
        if ( !v61 )
          goto LABEL_63;
        v71 = v69 - 4;
        if ( (unsigned int)(v69 - 4) >= v61->max_length )
          goto LABEL_64;
        if ( v26->fields._size <= v71 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v64 )
          goto LABEL_63;
        if ( v71 >= v64->max_length )
          goto LABEL_64;
        v72 = (int32_t *)*((_QWORD *)&v26->fields._items->obj.klass + v69);
        if ( !v72 || !*((_QWORD *)&v61->obj.klass + v69) )
          goto LABEL_63;
        v73 = (UILabel_o *)*((_QWORD *)&v64->obj.klass + v69);
        v74 = v72[7] <= 1 ? -1 : v72[7];
        ItemIconComponent__SetGift(*((ItemIconComponent_o **)&v61->obj.klass + v69), v72[5], v72[6], v74, 0, 0LL);
        if ( !v31 )
          goto LABEL_63;
        if ( v31->fields._size <= v71 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v73 )
          goto LABEL_63;
        UILabel__set_text(v73, *((System_String_o **)&v31->fields._items->obj.klass + v69++), 0LL);
      }
      while ( (int)v69 - 4 < size );
      EventInfoProductivityGrowthDialog__Init(v87, v65);
      if ( !v85 )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive(v85, 1, 0LL);
      BaseDialog__Open((BaseDialog_o *)v87, 0LL, 0, 0LL);
      titleLabel = v87->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_5591, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, v76, 0LL);
      v77 = *p_messageLabel;
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_5590, 0LL);
      if ( !v77 )
        goto LABEL_63;
      UILabel__set_text(v77, v78, 0LL);
      v87->fields.closeAction = action;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v87->fields.closeAction,
        (System_Int32_array **)action,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
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