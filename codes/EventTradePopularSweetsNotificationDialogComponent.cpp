void __fastcall EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A563B8 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A563B8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__EndClose(
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
    *p_closeCallbackFunc = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__Init(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A563B6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_1B885B0(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_4A563B6 = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnEnable(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A563B7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A563B7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__Open(
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
  il2cpp_array_size_t v31; // w26
  struct UISprite_array *v32; // x8
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  il2cpp_array_size_t max_length; // w8
  Il2CppClass **v37; // x23
  Il2CppClass *v38; // x9
  __int64 *v39; // x23
  Il2CppClass *v40; // t1
  Il2CppClass *klass; // x8
  Il2CppObject *v42; // x0
  System_String_o *v43; // x22
  __int64 v44; // x8
  __int64 v45; // x9
  System_String_o **v46; // x9
  struct UISprite_array *v47; // x10
  int32_t v48; // w24
  System_String_o *v49; // x23
  UISprite_o *v50; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v52; // x0
  struct System_Action_o *v53; // [xsp+0h] [xbp-80h]
  int data; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v56; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x0.8
  System_DateTime_o v61; // 0:x0.8
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x0.8
  System_DateTime_o v64; // 0:x0.8

  if ( (byte_4A563B5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_UISprite__TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_UISprite___);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_1B885B0(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13392/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_1B885B0(&StringLiteral_13393/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_13391/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_20395/*"img_popularitem_{0}"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_18496/*"ddd"*/);
    sub_1B885B0(&StringLiteral_20166/*"icon_popularitem_unknown"*/);
    sub_1B885B0(&StringLiteral_25467/*"？？？"*/);
    byte_4A563B5 = 1;
  }
  v56 = 0LL;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13393/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v12.fields._dateData = NetworkManager__getLocalDateTime_38479004(updateTime, 0LL).fields._dateData;
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
  v58.fields._dateData = (uint64_t)&dateData;
  v56 = System_DateTime__AddSeconds(v58, (double)ONE_DAY_SECOND, 0LL).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13391/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v17 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  v59.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v59, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !v17 )
    goto LABEL_69;
  v18 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !v17->max_length )
    goto LABEL_70;
  v17->m_Items[0] = v18;
  sub_1B88554(v17->m_Items, v18);
  v60.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v60, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v19 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_70;
  v17->m_Items[1] = v19;
  sub_1B88554(&v17->m_Items[1], v19);
  v61.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62397676(
                                             v61,
                                             (System_String_o *)StringLiteral_18496/*"ddd"*/,
                                             0LL);
  v20 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_70;
  v17->m_Items[2] = v20;
  sub_1B88554(&v17->m_Items[2], v20);
  v62.fields._dateData = (uint64_t)&v56;
  Month = System_DateTime__get_Month(v62, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v21 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_70;
  v17->m_Items[3] = v21;
  sub_1B88554(&v17->m_Items[3], v21);
  v63.fields._dateData = (uint64_t)&v56;
  Month = System_DateTime__get_Day(v63, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v22 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v17->max_length <= 4 )
    goto LABEL_70;
  v17->m_Items[4] = v22;
  sub_1B88554(&v17->m_Items[4], v22);
  v64.fields._dateData = (uint64_t)&v56;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62397676(
                                             v64,
                                             (System_String_o *)StringLiteral_18496/*"ddd"*/,
                                             0LL);
  v23 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v17->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v52 = sub_1B88830();
      sub_1B886D8(v52, 0LL);
    }
  }
  if ( v17->max_length <= 5 )
LABEL_70:
    sub_1B88814(gameObject, v10);
  v17->m_Items[5] = v23;
  sub_1B88554(&v17->m_Items[5], v23);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721540(v16, v17, 0LL);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0LL);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0LL);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0LL);
  v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v53 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v26->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1B887FC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v29,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0LL);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1B88554(&static_fields->__9__8_0, _9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( (int)itemList->max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = this->fields.iconSpriteList;
      if ( !v32 )
        break;
      if ( v31 >= v32->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v32->m_Items[v31];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      max_length = itemList->max_length;
      if ( v31 >= max_length )
        goto LABEL_70;
      v37 = &itemList->obj.klass + (int)v31;
      v40 = v37[4];
      v39 = (__int64 *)(v37 + 4);
      v38 = v40;
      if ( !v40 )
        break;
      if ( BYTE4(v38->_1.properties) )
      {
        klass = v38->_1.klass;
        if ( !klass )
          break;
        data = (int)klass->_1.byval_arg.data;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &data, v33, v34, v35);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20395/*"img_popularitem_{0}"*/, v42, 0LL);
        max_length = itemList->max_length;
        v43 = (System_String_o *)gameObject;
      }
      else
      {
        v43 = (System_String_o *)StringLiteral_20166/*"icon_popularitem_unknown"*/;
      }
      if ( v31 >= max_length )
        goto LABEL_70;
      v44 = *v39;
      if ( !*v39 )
        break;
      if ( *(_BYTE *)(v44 + 148) )
      {
        v45 = *(_QWORD *)(v44 + 120);
        if ( !v45 )
          break;
        v46 = (System_String_o **)(v45 + 24);
      }
      else
      {
        v46 = (System_String_o **)&StringLiteral_25467/*"？？？"*/;
      }
      v47 = this->fields.iconSpriteList;
      if ( !v47 )
        break;
      if ( v31 >= v47->max_length )
        goto LABEL_70;
      v48 = *(_DWORD *)(v44 + 144);
      v49 = *v46;
      v50 = v47->m_Items[v31];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_37859364(v48, v50, v43, 0LL);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v31 >= nameLabelList->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v31];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v49, 0LL);
      if ( (signed int)++v31 >= (signed int)itemList->max_length )
        goto LABEL_68;
    }
LABEL_69:
    sub_1B8880C(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v53;
  sub_1B88554(&this->fields.closeCallbackFunc, v53);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A563B9 & 1) == 0 )
  {
    sub_1B885B0(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_4A563B9 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_1B88554(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___ctor(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___Open_b__8_0(
        EventTradePopularSweetsNotificationDialogComponent___c_o *this,
        UISprite_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (EventTradePopularSweetsNotificationDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)obj,
                                                                             0LL)) == 0LL )
  {
    sub_1B8880C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}