void EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21CA5 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21CA5 = 1;
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
    sub_1C2D434(p_closeCallbackFunc);
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
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C21CA3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_1C2D490(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_4C21CA3 = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C21CA4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15640/*"Window/CloseButton"*/);
    byte_4C21CA4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/, 0);
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
  System_DateTime_o v15; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v17; // x23
  System_Object_array *v18; // x24
  System_DateTime_o v19; // x0
  __int64 v20; // x2
  Il2CppObject *v21; // x25
  System_DateTime_o v22; // x0
  Il2CppObject *v23; // x25
  System_DateTime_o v24; // x0
  Il2CppObject *v25; // x25
  System_DateTime_o v26; // x0
  Il2CppObject *v27; // x25
  System_DateTime_o v28; // x0
  Il2CppObject *v29; // x25
  System_DateTime_o v30; // x0
  Il2CppObject *v31; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  EventTradePopularSweetsNotificationDialogComponent___c_c *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v37; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  unsigned int v39; // w26
  struct UISprite_array *v40; // x8
  __int64 v41; // x3
  __int64 v42; // x4
  unsigned int max_length; // w8
  Il2CppClass **v44; // x23
  Il2CppClass *v45; // x9
  __int64 *v46; // x23
  Il2CppClass *v47; // t1
  _DWORD *fields; // x8
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  System_String_o **v53; // x9
  struct UISprite_array *v54; // x10
  int32_t v55; // w24
  System_String_o *v56; // x23
  UISprite_o *v57; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v59; // x0
  struct System_Action_o *v60; // [xsp+0h] [xbp-80h]
  int v61; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v63; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C21CA2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_UISprite__TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_1C2D490(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_13479/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_1C2D490(&StringLiteral_13480/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_13478/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_20481/*"img_popularitem_{0}"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_18492/*"ddd"*/);
    sub_1C2D490(&StringLiteral_20202/*"icon_popularitem_unknown"*/);
    sub_1C2D490(&StringLiteral_25560/*"？？？"*/);
    byte_4C21CA2 = 1;
  }
  v63 = 0;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13480/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v12.fields._dateData = NetworkManager__getLocalDateTime_41145888(updateTime, 0).fields._dateData;
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
  v15.fields._dateData = (uint64_t)&dateData;
  v63 = System_DateTime__AddSeconds(v15, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13478/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v18 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 6);
  v19.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v19, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v18 )
    goto LABEL_69;
  v21 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_70;
  v18->m_Items[0] = v21;
  sub_1C2D434(v18->m_Items);
  v22.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v22, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v23 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_70;
  v18->m_Items[1] = v23;
  sub_1C2D434(&v18->m_Items[1]);
  v24.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_64858404(
                                             v24,
                                             (System_String_o *)StringLiteral_18492/*"ddd"*/,
                                             0);
  v25 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_70;
  v18->m_Items[2] = v25;
  sub_1C2D434(&v18->m_Items[2]);
  v26.fields._dateData = (uint64_t)&v63;
  Month = System_DateTime__get_Month(v26, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v27 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_70;
  v18->m_Items[3] = v27;
  sub_1C2D434(&v18->m_Items[3]);
  v28.fields._dateData = (uint64_t)&v63;
  Month = System_DateTime__get_Day(v28, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v29 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 4 )
    goto LABEL_70;
  v18->m_Items[4] = v29;
  sub_1C2D434(&v18->m_Items[4]);
  v30.fields._dateData = (uint64_t)&v63;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_64858404(
                                             v30,
                                             (System_String_o *)StringLiteral_18492/*"ddd"*/,
                                             0);
  v31 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D5CC(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v59 = sub_1C2D710();
      sub_1C2D5B8(v59, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 5 )
LABEL_70:
    sub_1C2D6F4(gameObject, v10, v20);
  v18->m_Items[5] = v31;
  sub_1C2D434(&v18->m_Items[5]);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499292(v17, v18, 0);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13479/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0);
  v34 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v34 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v60 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v34->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v37,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1C2D434(&static_fields->__9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = this->fields.iconSpriteList;
      if ( !v40 )
        break;
      if ( v39 >= LODWORD(v40->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v40->m_Items[v39];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v39 >= max_length )
        goto LABEL_70;
      v44 = &itemList->obj.klass + (int)v39;
      v47 = v44[4];
      v46 = (__int64 *)(v44 + 4);
      v45 = v47;
      if ( !v47 )
        break;
      if ( BYTE4(v45->_1.methods) )
      {
        fields = v45->_1.fields;
        if ( !fields )
          break;
        v61 = fields[10];
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v20, v41, v42);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20481/*"img_popularitem_{0}"*/, v49, 0);
        max_length = itemList->max_length;
        v50 = (System_String_o *)gameObject;
      }
      else
      {
        v50 = (System_String_o *)StringLiteral_20202/*"icon_popularitem_unknown"*/;
      }
      if ( v39 >= max_length )
        goto LABEL_70;
      v51 = *v46;
      if ( !*v46 )
        break;
      if ( *(_BYTE *)(v51 + 156) )
      {
        v52 = *(_QWORD *)(v51 + 128);
        if ( !v52 )
          break;
        v53 = (System_String_o **)(v52 + 32);
      }
      else
      {
        v53 = (System_String_o **)&StringLiteral_25560/*"？？？"*/;
      }
      v54 = this->fields.iconSpriteList;
      if ( !v54 )
        break;
      if ( v39 >= LODWORD(v54->max_length) )
        goto LABEL_70;
      v55 = *(_DWORD *)(v51 + 152);
      v56 = *v53;
      v57 = v54->m_Items[v39];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_40385372(v55, v57, v50, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v39 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v39];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v56, 0);
      if ( (signed int)++v39 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_1C2D6EC(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v60;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21CA6 & 1) == 0 )
  {
    sub_1C2D490(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_4C21CA6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_1C2D434(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}