void __fastcall EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCAE9 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFCAE9 = 1;
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
    sub_1BC2FAC(p_closeCallbackFunc);
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
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4AFCAE7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__, v3);
    sub_1BC3008(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__, v4);
    byte_4AFCAE7 = 1;
  }
  v5 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnEnable(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AFCAE8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15497/*"Window/CloseButton"*/, method);
    byte_4AFCAE8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_15497/*"Window/CloseButton"*/, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__Open(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        EventTradeListViewItem_array *itemList,
        System_Action_o *closeCallback,
        int64_t updateTime,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UILabel_o *titleLabel; // x23
  System_DateTime_o v30; // x0
  EventTradeTimeCalculation_c *v31; // x8
  __int64 ONE_DAY_SECOND; // x22
  UILabel_o *detailLabel; // x22
  System_String_o *v34; // x23
  System_Object_array *v35; // x24
  __int64 v36; // x2
  Il2CppObject *v37; // x25
  Il2CppObject *v38; // x25
  Il2CppObject *v39; // x25
  Il2CppObject *v40; // x25
  Il2CppObject *v41; // x25
  Il2CppObject *v42; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  EventTradePopularSweetsNotificationDialogComponent___c_c *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v48; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  il2cpp_array_size_t v50; // w26
  struct UISprite_array *v51; // x8
  __int64 v52; // x3
  __int64 v53; // x4
  il2cpp_array_size_t max_length; // w8
  Il2CppClass **v55; // x23
  Il2CppClass *v56; // x9
  __int64 *v57; // x23
  Il2CppClass *v58; // t1
  Il2CppClass *klass; // x8
  Il2CppObject *v60; // x0
  System_String_o *v61; // x22
  __int64 v62; // x8
  __int64 v63; // x9
  System_String_o **v64; // x9
  struct UISprite_array *v65; // x10
  int32_t v66; // w24
  System_String_o *v67; // x23
  UISprite_o *v68; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v70; // x0
  struct System_Action_o *v71; // [xsp+0h] [xbp-80h]
  unsigned int bits; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v74; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v76; // 0:x0.8
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x0.8
  System_DateTime_o v79; // 0:x0.8
  System_DateTime_o v80; // 0:x0.8
  System_DateTime_o v81; // 0:x0.8
  System_DateTime_o v82; // 0:x0.8

  if ( (byte_4AFCAE6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_UISprite__TypeInfo, itemList);
    sub_1BC3008(&AtlasManager_TypeInfo, v9);
    sub_1BC3008(&Method_BasicHelper_ForEach_UISprite___, v10);
    sub_1BC3008(&System_DateTime_TypeInfo, v11);
    sub_1BC3008(&EventTradeTimeCalculation_TypeInfo, v12);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&object___TypeInfo, v16);
    sub_1BC3008(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__, v17);
    sub_1BC3008(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_13355/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, v19);
    sub_1BC3008(&StringLiteral_13356/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, v20);
    sub_1BC3008(&StringLiteral_13354/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, v21);
    sub_1BC3008(&StringLiteral_20295/*"img_popularitem_{0}"*/, v22);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1BC3008(&StringLiteral_18330/*"ddd"*/, v24);
    sub_1BC3008(&StringLiteral_20023/*"icon_popularitem_unknown"*/, v25);
    sub_1BC3008(&StringLiteral_25338/*"？？？"*/, v26);
    byte_4AFCAE6 = 1;
  }
  v74 = 0LL;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13356/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v30.fields._dateData = NetworkManager__getLocalDateTime_40386836(updateTime, 0LL).fields._dateData;
  v31 = EventTradeTimeCalculation_TypeInfo;
  dateData = v30.fields._dateData;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v31 = EventTradeTimeCalculation_TypeInfo;
  }
  ONE_DAY_SECOND = v31->static_fields->ONE_DAY_SECOND;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v76.fields._dateData = (uint64_t)&dateData;
  v74 = System_DateTime__AddSeconds(v76, (double)ONE_DAY_SECOND, 0LL).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13354/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v35 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
  v77.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v77, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !v35 )
    goto LABEL_69;
  v37 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !v35->max_length )
    goto LABEL_70;
  v35->m_Items[0] = v37;
  sub_1BC2FAC(v35->m_Items);
  v78.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v78, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v38 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_70;
  v35->m_Items[1] = v38;
  sub_1BC2FAC(&v35->m_Items[1]);
  v79.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_63747048(
                                             v79,
                                             (System_String_o *)StringLiteral_18330/*"ddd"*/,
                                             0LL);
  v39 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_70;
  v35->m_Items[2] = v39;
  sub_1BC2FAC(&v35->m_Items[2]);
  v80.fields._dateData = (uint64_t)&v74;
  Month = System_DateTime__get_Month(v80, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v40 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_70;
  v35->m_Items[3] = v40;
  sub_1BC2FAC(&v35->m_Items[3]);
  v81.fields._dateData = (uint64_t)&v74;
  Month = System_DateTime__get_Day(v81, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v41 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_70;
  v35->m_Items[4] = v41;
  sub_1BC2FAC(&v35->m_Items[4]);
  v82.fields._dateData = (uint64_t)&v74;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_63747048(
                                             v82,
                                             (System_String_o *)StringLiteral_18330/*"ddd"*/,
                                             0LL);
  v42 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BC3144(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v70 = sub_1BC3288();
      sub_1BC3130(v70, 0LL);
    }
  }
  if ( v35->max_length <= 5 )
LABEL_70:
    sub_1BC326C(gameObject, v28, v36);
  v35->m_Items[5] = v42;
  sub_1BC2FAC(&v35->m_Items[5]);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62390076(v34, v35, 0LL);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0LL);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13355/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0LL);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0LL);
  v45 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v45 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v71 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v45->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1BC3254(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v48,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0LL);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1BC2FAC(&static_fields->__9__8_0);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( (int)itemList->max_length >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      v51 = this->fields.iconSpriteList;
      if ( !v51 )
        break;
      if ( v50 >= v51->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v51->m_Items[v50];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      max_length = itemList->max_length;
      if ( v50 >= max_length )
        goto LABEL_70;
      v55 = &itemList->obj.klass + (int)v50;
      v58 = v55[4];
      v57 = (__int64 *)(v55 + 4);
      v56 = v58;
      if ( !v58 )
        break;
      if ( BYTE4(v56->_1.properties) )
      {
        klass = v56->_1.klass;
        if ( !klass )
          break;
        bits = klass->_1.byval_arg.bits;
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bits, v36, v52, v53);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20295/*"img_popularitem_{0}"*/, v60, 0LL);
        max_length = itemList->max_length;
        v61 = (System_String_o *)gameObject;
      }
      else
      {
        v61 = (System_String_o *)StringLiteral_20023/*"icon_popularitem_unknown"*/;
      }
      if ( v50 >= max_length )
        goto LABEL_70;
      v62 = *v57;
      if ( !*v57 )
        break;
      if ( *(_BYTE *)(v62 + 148) )
      {
        v63 = *(_QWORD *)(v62 + 120);
        if ( !v63 )
          break;
        v64 = (System_String_o **)(v63 + 32);
      }
      else
      {
        v64 = (System_String_o **)&StringLiteral_25338/*"？？？"*/;
      }
      v65 = this->fields.iconSpriteList;
      if ( !v65 )
        break;
      if ( v50 >= v65->max_length )
        goto LABEL_70;
      v66 = *(_DWORD *)(v62 + 144);
      v67 = *v64;
      v68 = v65->m_Items[v50];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_39643540(v66, v68, v61, 0LL);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v50 >= nameLabelList->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v50];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v67, 0LL);
      if ( (signed int)++v50 >= (signed int)itemList->max_length )
        goto LABEL_68;
    }
LABEL_69:
    sub_1BC3264(gameObject, v28);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v71;
  sub_1BC2FAC(&this->fields.closeCallbackFunc);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCAEA & 1) == 0 )
  {
    sub_1BC3008(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v1);
    byte_4AFCAEA = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v2;
  sub_1BC2FAC(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}