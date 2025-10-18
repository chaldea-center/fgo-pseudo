void EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3DA2A & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3DA2A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__EndClose(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventTradePopularSweetsNotificationDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void EventTradePopularSweetsNotificationDialogComponent__Init(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C3DA28 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_1C37058(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_4C3DA28 = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__OnEnable(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3DA29 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4C3DA29 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__Open(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        EventTradeListViewItem_array *itemList,
        System_Action_o *closeCallback,
        int64_t updateTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x23
  System_DateTime_o v11; // x0
  EventTradeTimeCalculation_c *v12; // x8
  __int64 ONE_DAY_SECOND; // x22
  System_DateTime_o v14; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v16; // x23
  System_Object_array *v17; // x24
  System_DateTime_o v18; // x0
  Il2CppObject *v19; // x25
  System_DateTime_o v20; // x0
  Il2CppObject *v21; // x25
  System_DateTime_o v22; // x0
  Il2CppObject *v23; // x25
  System_DateTime_o v24; // x0
  Il2CppObject *v25; // x25
  System_DateTime_o v26; // x0
  Il2CppObject *v27; // x25
  System_DateTime_o v28; // x0
  Il2CppObject *v29; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  EventTradePopularSweetsNotificationDialogComponent___c_c *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v35; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  unsigned int v37; // w26
  struct UISprite_array *v38; // x8
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  unsigned int max_length; // w8
  Il2CppClass **v46; // x23
  Il2CppClass *v47; // x9
  __int64 *v48; // x23
  Il2CppClass *v49; // t1
  _DWORD *fields; // x8
  Il2CppObject *v51; // x0
  System_String_o *v52; // x22
  __int64 v53; // x8
  __int64 v54; // x9
  System_String_o **v55; // x9
  struct UISprite_array *v56; // x10
  int32_t v57; // w24
  System_String_o *v58; // x23
  UISprite_o *v59; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v61; // x0
  struct System_Action_o *v62; // [xsp+0h] [xbp-80h]
  int v63; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v65; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3DA27 & 1) == 0 )
  {
    sub_1C37058(&System_Action_UISprite__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&EventTradeTimeCalculation_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_1C37058(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_13483/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_1C37058(&StringLiteral_13484/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_13482/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_20496/*"img_popularitem_{0}"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_18500/*"ddd"*/);
    sub_1C37058(&StringLiteral_20217/*"icon_popularitem_unknown"*/);
    sub_1C37058(&StringLiteral_25585/*"？？？"*/);
    byte_4C3DA27 = 1;
  }
  v65 = 0;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v11.fields._dateData = NetworkManager__getLocalDateTime_41367312(updateTime, 0).fields._dateData;
  v12 = EventTradeTimeCalculation_TypeInfo;
  dateData = v11.fields._dateData;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v12 = EventTradeTimeCalculation_TypeInfo;
  }
  ONE_DAY_SECOND = v12->static_fields->ONE_DAY_SECOND;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v14.fields._dateData = (uint64_t)&dateData;
  v65 = System_DateTime__AddSeconds(v14, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13482/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v17 = (System_Object_array *)sub_1C37100(object___TypeInfo, 6);
  v18.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v18, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v17 )
    goto LABEL_69;
  v19 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_70;
  v17->m_Items[0] = v19;
  sub_1C36FFC(v17->m_Items, v19);
  v20.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v20, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v21 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_70;
  v17->m_Items[1] = v21;
  sub_1C36FFC(&v17->m_Items[1], v21);
  v22.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_64961452(
                                             v22,
                                             (System_String_o *)StringLiteral_18500/*"ddd"*/,
                                             0);
  v23 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_70;
  v17->m_Items[2] = v23;
  sub_1C36FFC(&v17->m_Items[2], v23);
  v24.fields._dateData = (uint64_t)&v65;
  Month = System_DateTime__get_Month(v24, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v25 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 3 )
    goto LABEL_70;
  v17->m_Items[3] = v25;
  sub_1C36FFC(&v17->m_Items[3], v25);
  v26.fields._dateData = (uint64_t)&v65;
  Month = System_DateTime__get_Day(v26, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v27 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 4 )
    goto LABEL_70;
  v17->m_Items[4] = v27;
  sub_1C36FFC(&v17->m_Items[4], v27);
  v28.fields._dateData = (uint64_t)&v65;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_64961452(
                                             v28,
                                             (System_String_o *)StringLiteral_18500/*"ddd"*/,
                                             0);
  v29 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37194(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v61 = sub_1C372D8();
      sub_1C37180(v61, 0);
    }
  }
  if ( LODWORD(v17->max_length) <= 5 )
LABEL_70:
    sub_1C372BC(gameObject);
  v17->m_Items[5] = v29;
  sub_1C36FFC(&v17->m_Items[5], v29);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63603084(v16, v17, 0);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13483/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0);
  v32 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v32 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v62 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v32->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1C372A4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v35,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1C36FFC(&static_fields->__9__8_0, _9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      v38 = this->fields.iconSpriteList;
      if ( !v38 )
        break;
      if ( v37 >= LODWORD(v38->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v38->m_Items[v37];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v37 >= max_length )
        goto LABEL_70;
      v46 = &itemList->obj.klass + (int)v37;
      v49 = v46[4];
      v48 = (__int64 *)(v46 + 4);
      v47 = v49;
      if ( !v49 )
        break;
      if ( BYTE4(v47->_1.methods) )
      {
        fields = v47->_1.fields;
        if ( !fields )
          break;
        v63 = fields[10];
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v39, v40, v41, v42, v43, v44);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20496/*"img_popularitem_{0}"*/, v51, 0);
        max_length = itemList->max_length;
        v52 = (System_String_o *)gameObject;
      }
      else
      {
        v52 = (System_String_o *)StringLiteral_20217/*"icon_popularitem_unknown"*/;
      }
      if ( v37 >= max_length )
        goto LABEL_70;
      v53 = *v48;
      if ( !*v48 )
        break;
      if ( *(_BYTE *)(v53 + 156) )
      {
        v54 = *(_QWORD *)(v53 + 128);
        if ( !v54 )
          break;
        v55 = (System_String_o **)(v54 + 32);
      }
      else
      {
        v55 = (System_String_o **)&StringLiteral_25585/*"？？？"*/;
      }
      v56 = this->fields.iconSpriteList;
      if ( !v56 )
        break;
      if ( v37 >= LODWORD(v56->max_length) )
        goto LABEL_70;
      v57 = *(_DWORD *)(v53 + 152);
      v58 = *v55;
      v59 = v56->m_Items[v37];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_40606984(v57, v59, v52, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v37 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v37];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v58, 0);
      if ( (signed int)++v37 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_1C372B4(gameObject);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v62;
  sub_1C36FFC(&this->fields.closeCallbackFunc, v62);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3DA2B & 1) == 0 )
  {
    sub_1C37058(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_4C3DA2B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_1C36FFC(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields, v1);
}


void EventTradePopularSweetsNotificationDialogComponent___c___ctor(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___Open_b__8_0(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        UISprite_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (EventTradePopularSweetsNotificationDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)obj,
                                                                             0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}