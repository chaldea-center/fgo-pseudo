void EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C517AA & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C517AA = 1;
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
    sub_1C3E508(p_closeCallbackFunc, 0);
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
    sub_1C3E7C0(0, v4);
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

  if ( (byte_4C517A8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_1C3E564(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_4C517A8 = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C517A9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15653/*"Window/CloseButton"*/);
    byte_4C517A9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_15653/*"Window/CloseButton"*/, 0);
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
  Il2CppObject *v20; // x25
  System_DateTime_o v21; // x0
  Il2CppObject *v22; // x25
  System_DateTime_o v23; // x0
  Il2CppObject *v24; // x25
  System_DateTime_o v25; // x0
  Il2CppObject *v26; // x25
  System_DateTime_o v27; // x0
  Il2CppObject *v28; // x25
  System_DateTime_o v29; // x0
  Il2CppObject *v30; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  EventTradePopularSweetsNotificationDialogComponent___c_c *v33; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v36; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  unsigned int v38; // w26
  struct UISprite_array *v39; // x8
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  unsigned int max_length; // w8
  Il2CppClass **v47; // x23
  Il2CppClass *v48; // x9
  __int64 *v49; // x23
  Il2CppClass *v50; // t1
  _DWORD *fields; // x8
  Il2CppObject *v52; // x0
  System_String_o *v53; // x22
  __int64 v54; // x8
  __int64 v55; // x9
  System_String_o **v56; // x9
  struct UISprite_array *v57; // x10
  int32_t v58; // w24
  System_String_o *v59; // x23
  UISprite_o *v60; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v62; // x0
  struct System_Action_o *v63; // [xsp+0h] [xbp-80h]
  int v64; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v66; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C517A7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_UISprite__TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&EventTradeTimeCalculation_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_1C3E564(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_13493/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_1C3E564(&StringLiteral_13494/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_13492/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_20514/*"img_popularitem_{0}"*/);
    sub_1C3E564(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C3E564(&StringLiteral_18518/*"ddd"*/);
    sub_1C3E564(&StringLiteral_20235/*"icon_popularitem_unknown"*/);
    sub_1C3E564(&StringLiteral_25605/*"？？？"*/);
    byte_4C517A7 = 1;
  }
  v66 = 0;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13494/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v12.fields._dateData = NetworkManager__getLocalDateTime_41415840(updateTime, 0).fields._dateData;
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
  v66 = System_DateTime__AddSeconds(v15, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13492/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v18 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 6);
  v19.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v19, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v18 )
    goto LABEL_69;
  v20 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_70;
  v18->m_Items[0] = v20;
  sub_1C3E508(v18->m_Items, v20);
  v21.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v21, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v22 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_70;
  v18->m_Items[1] = v22;
  sub_1C3E508(&v18->m_Items[1], v22);
  v23.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_65036264(
                                             v23,
                                             (System_String_o *)StringLiteral_18518/*"ddd"*/,
                                             0);
  v24 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_70;
  v18->m_Items[2] = v24;
  sub_1C3E508(&v18->m_Items[2], v24);
  v25.fields._dateData = (uint64_t)&v66;
  Month = System_DateTime__get_Month(v25, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v26 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_70;
  v18->m_Items[3] = v26;
  sub_1C3E508(&v18->m_Items[3], v26);
  v27.fields._dateData = (uint64_t)&v66;
  Month = System_DateTime__get_Day(v27, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v28 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v18->max_length) <= 4 )
    goto LABEL_70;
  v18->m_Items[4] = v28;
  sub_1C3E508(&v18->m_Items[4], v28);
  v29.fields._dateData = (uint64_t)&v66;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_65036264(
                                             v29,
                                             (System_String_o *)StringLiteral_18518/*"ddd"*/,
                                             0);
  v30 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E6A0(gameObject, v18->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v62 = sub_1C3E7E4();
      sub_1C3E68C(v62, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 5 )
LABEL_70:
    sub_1C3E7C8(gameObject, v10);
  v18->m_Items[5] = v30;
  sub_1C3E508(&v18->m_Items[5], v30);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677896(v17, v18, 0);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13493/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0);
  v33 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v33 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v63 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v33->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v36,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1C3E508(&static_fields->__9__8_0, _9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      v39 = this->fields.iconSpriteList;
      if ( !v39 )
        break;
      if ( v38 >= LODWORD(v39->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v39->m_Items[v38];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v38 >= max_length )
        goto LABEL_70;
      v47 = &itemList->obj.klass + (int)v38;
      v50 = v47[4];
      v49 = (__int64 *)(v47 + 4);
      v48 = v50;
      if ( !v50 )
        break;
      if ( BYTE4(v48->_1.methods) )
      {
        fields = v48->_1.fields;
        if ( !fields )
          break;
        v64 = fields[10];
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v40, v41, v42, v43, v44, v45);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20514/*"img_popularitem_{0}"*/, v52, 0);
        max_length = itemList->max_length;
        v53 = (System_String_o *)gameObject;
      }
      else
      {
        v53 = (System_String_o *)StringLiteral_20235/*"icon_popularitem_unknown"*/;
      }
      if ( v38 >= max_length )
        goto LABEL_70;
      v54 = *v49;
      if ( !*v49 )
        break;
      if ( *(_BYTE *)(v54 + 156) )
      {
        v55 = *(_QWORD *)(v54 + 128);
        if ( !v55 )
          break;
        v56 = (System_String_o **)(v55 + 32);
      }
      else
      {
        v56 = (System_String_o **)&StringLiteral_25605/*"？？？"*/;
      }
      v57 = this->fields.iconSpriteList;
      if ( !v57 )
        break;
      if ( v38 >= LODWORD(v57->max_length) )
        goto LABEL_70;
      v58 = *(_DWORD *)(v54 + 152);
      v59 = *v56;
      v60 = v57->m_Items[v38];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_40653244(v58, v60, v53, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v38 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v38];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v59, 0);
      if ( (signed int)++v38 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_1C3E7C0(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v63;
  sub_1C3E508(&this->fields.closeCallbackFunc, v63);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C517AB & 1) == 0 )
  {
    sub_1C3E564(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_4C517AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_1C3E508(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C3E7C0(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}