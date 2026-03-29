void EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B29E & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B29E = 1;
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
    sub_1C93A78(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void EventTradePopularSweetsNotificationDialogComponent__Init(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2B29C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_1C93AD4(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_4D2B29C = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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

  if ( (byte_4D2B29D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15743/*"Window/CloseButton"*/);
    byte_4D2B29D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15743/*"Window/CloseButton"*/, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__Open(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        EventTradeListViewItem_array *itemList,
        System_Action_o *closeCallback,
        int64_t updateTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *titleLabel; // x23
  System_DateTime_o v12; // x0
  EventTradeTimeCalculation_c *v13; // x8
  __int64 ONE_DAY_SECOND; // x22
  UILabel_o *detailLabel; // x22
  System_String_o *v16; // x23
  System_Object_array *v17; // x24
  Il2CppObject *v18; // x25
  Il2CppObject *v19; // x25
  Il2CppObject *v20; // x25
  Il2CppObject *v21; // x25
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  EventTradePopularSweetsNotificationDialogComponent___c_c *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v29; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  unsigned int v31; // w26
  struct UISprite_array *v32; // x8
  unsigned int max_length; // w8
  Il2CppClass **v34; // x23
  Il2CppClass *v35; // x9
  __int64 *v36; // x23
  Il2CppClass *v37; // t1
  _DWORD *fields; // x8
  Il2CppObject *v39; // x0
  System_String_o *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x9
  System_String_o **v43; // x9
  struct UISprite_array *v44; // x10
  int32_t v45; // w24
  System_String_o *v46; // x23
  UISprite_o *v47; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v49; // x0
  struct System_Action_o *v50; // [xsp+0h] [xbp-80h]
  int v51; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v53; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D2B29B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_UISprite__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_1C93AD4(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_13581/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_1C93AD4(&StringLiteral_13582/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_13580/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_20729/*"img_popularitem_{0}"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_18656/*"ddd"*/);
    sub_1C93AD4(&StringLiteral_20442/*"icon_popularitem_unknown"*/);
    sub_1C93AD4(&StringLiteral_25910/*"？？？"*/);
    byte_4D2B29B = 1;
  }
  v53 = 0;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13582/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v12.fields._dateData = NetworkManager__getLocalDateTime_42096920(updateTime, 0).fields._dateData;
  v13 = EventTradeTimeCalculation_TypeInfo;
  dateData = v12.fields._dateData;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v13 = EventTradeTimeCalculation_TypeInfo;
  }
  ONE_DAY_SECOND = v13->static_fields->ONE_DAY_SECOND;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v53 = System_DateTime__AddSeconds((System_DateTime_o)&dateData, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13580/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v17 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 6);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v17 )
    goto LABEL_69;
  v18 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_70;
  v17->m_Items[0] = v18;
  sub_1C93A78(v17->m_Items, v18);
  Month = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v19 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_70;
  v17->m_Items[1] = v19;
  sub_1C93A78(&v17->m_Items[1], v19);
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_65823908(
                                             (System_DateTime_o)&dateData,
                                             (System_String_o *)StringLiteral_18656/*"ddd"*/,
                                             0);
  v20 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_70;
  v17->m_Items[2] = v20;
  sub_1C93A78(&v17->m_Items[2], v20);
  Month = System_DateTime__get_Month((System_DateTime_o)&v53, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v21 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 3 )
    goto LABEL_70;
  v17->m_Items[3] = v21;
  sub_1C93A78(&v17->m_Items[3], v21);
  Month = System_DateTime__get_Day((System_DateTime_o)&v53, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v22 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v17->max_length) <= 4 )
    goto LABEL_70;
  v17->m_Items[4] = v22;
  sub_1C93A78(&v17->m_Items[4], v22);
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_65823908(
                                             (System_DateTime_o)&v53,
                                             (System_String_o *)StringLiteral_18656/*"ddd"*/,
                                             0);
  v23 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v49 = sub_1C93D50();
      sub_1C93BFC(v49, 0);
    }
  }
  if ( LODWORD(v17->max_length) <= 5 )
LABEL_70:
    sub_1C93D34(gameObject);
  v17->m_Items[5] = v23;
  sub_1C93A78(&v17->m_Items[5], v23);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64467168(v16, v17, 0);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0);
  v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v50 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v26->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1C93D20(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v29,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1C93A78(&static_fields->__9__8_0, _9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = this->fields.iconSpriteList;
      if ( !v32 )
        break;
      if ( v31 >= LODWORD(v32->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v32->m_Items[v31];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v31 >= max_length )
        goto LABEL_70;
      v34 = &itemList->obj.klass + (int)v31;
      v37 = v34[4];
      v36 = (__int64 *)(v34 + 4);
      v35 = v37;
      if ( !v37 )
        break;
      if ( BYTE4(v35->_1.methods) )
      {
        fields = v35->_1.fields;
        if ( !fields )
          break;
        v51 = fields[10];
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20729/*"img_popularitem_{0}"*/, v39, 0);
        max_length = itemList->max_length;
        v40 = (System_String_o *)gameObject;
      }
      else
      {
        v40 = (System_String_o *)StringLiteral_20442/*"icon_popularitem_unknown"*/;
      }
      if ( v31 >= max_length )
        goto LABEL_70;
      v41 = *v36;
      if ( !*v36 )
        break;
      if ( *(_BYTE *)(v41 + 156) )
      {
        v42 = *(_QWORD *)(v41 + 128);
        if ( !v42 )
          break;
        v43 = (System_String_o **)(v42 + 32);
      }
      else
      {
        v43 = (System_String_o **)&StringLiteral_25910/*"？？？"*/;
      }
      v44 = this->fields.iconSpriteList;
      if ( !v44 )
        break;
      if ( v31 >= LODWORD(v44->max_length) )
        goto LABEL_70;
      v45 = *(_DWORD *)(v41 + 152);
      v46 = *v43;
      v47 = v44->m_Items[v31];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_41320352(v45, v47, v40, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v31 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v31];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v46, 0);
      if ( (signed int)++v31 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_1C93D2C(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v50;
  sub_1C93A78(&this->fields.closeCallbackFunc, v50);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2B29F & 1) == 0 )
  {
    sub_1C93AD4(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_4D2B29F = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_1C93A78(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C93D2C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}