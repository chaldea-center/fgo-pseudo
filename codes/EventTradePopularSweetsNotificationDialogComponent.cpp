void __fastcall EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A006EF & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A006EF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__EndClose(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventTradePopularSweetsNotificationDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__Init(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A006ED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__, v3);
    sub_1B640C8(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__, v4);
    byte_4A006ED = 1;
  }
  v5 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent__OnEnable(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A006EE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15575/*"Window/CloseButton"*/, method);
    byte_4A006EE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15575/*"Window/CloseButton"*/, 0LL);
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
  UILabel_o *titleLabel; // x23
  System_DateTime_o v29; // x0
  EventTradeTimeCalculation_c *v30; // x8
  __int64 ONE_DAY_SECOND; // x22
  UILabel_o *detailLabel; // x22
  System_String_o *v33; // x23
  System_Object_array *v34; // x24
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x25
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x25
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  EventTradePopularSweetsNotificationDialogComponent___c_c *v58; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v61; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  il2cpp_array_size_t v67; // w26
  struct UISprite_array *v68; // x8
  il2cpp_array_size_t max_length; // w8
  Il2CppClass **v70; // x23
  Il2CppClass *v71; // x9
  __int64 *v72; // x23
  Il2CppClass *v73; // t1
  Il2CppClass *klass; // x8
  Il2CppObject *v75; // x0
  System_String_o *v76; // x22
  __int64 v77; // x8
  __int64 v78; // x9
  System_String_o **v79; // x9
  struct UISprite_array *v80; // x10
  int32_t v81; // w24
  System_String_o *v82; // x23
  UISprite_o *v83; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v85; // x0
  struct System_Action_o *v86; // [xsp+0h] [xbp-80h]
  int data; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v89; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8
  System_DateTime_o v96; // 0:x0.8
  System_DateTime_o v97; // 0:x0.8

  if ( (byte_4A006EC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_UISprite__TypeInfo, itemList);
    sub_1B640C8(&AtlasManager_TypeInfo, v9);
    sub_1B640C8(&Method_BasicHelper_ForEach_UISprite___, v10);
    sub_1B640C8(&System_DateTime_TypeInfo, v11);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&object___TypeInfo, v16);
    sub_1B640C8(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__, v17);
    sub_1B640C8(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_13323/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, v19);
    sub_1B640C8(&StringLiteral_13324/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, v20);
    sub_1B640C8(&StringLiteral_13322/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, v21);
    sub_1B640C8(&StringLiteral_20315/*"img_popularitem_{0}"*/, v22);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B640C8(&StringLiteral_18424/*"ddd"*/, v24);
    sub_1B640C8(&StringLiteral_20086/*"icon_popularitem_unknown"*/, v25);
    sub_1B640C8(&StringLiteral_25365/*"？？？"*/, v26);
    byte_4A006EC = 1;
  }
  v89 = 0LL;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13324/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v29.fields._dateData = NetworkManager__getLocalDateTime_38162428(updateTime, 0LL).fields._dateData;
  v30 = EventTradeTimeCalculation_TypeInfo;
  dateData = v29.fields._dateData;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v30 = EventTradeTimeCalculation_TypeInfo;
  }
  ONE_DAY_SECOND = v30->static_fields->ONE_DAY_SECOND;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v91.fields._dateData = (uint64_t)&dateData;
  v89 = System_DateTime__AddSeconds(v91, (double)ONE_DAY_SECOND, 0LL).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13322/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v34 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  v92.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v92, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !v34 )
    goto LABEL_69;
  v38 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !v34->max_length )
    goto LABEL_70;
  v34->m_Items[0] = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v34->m_Items, (int32_t)v38, v36, v37);
  v93.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v93, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v41 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_70;
  v34->m_Items[1] = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], (int32_t)v41, v39, v40);
  v94.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62066032(
                                             v94,
                                             (System_String_o *)StringLiteral_18424/*"ddd"*/,
                                             0LL);
  v44 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_70;
  v34->m_Items[2] = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[2], (int32_t)v44, v42, v43);
  v95.fields._dateData = (uint64_t)&v89;
  Month = System_DateTime__get_Month(v95, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v47 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_70;
  v34->m_Items[3] = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[3], (int32_t)v47, v45, v46);
  v96.fields._dateData = (uint64_t)&v89;
  Month = System_DateTime__get_Day(v96, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v50 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_70;
  v34->m_Items[4] = v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[4], (int32_t)v50, v48, v49);
  v97.fields._dateData = (uint64_t)&v89;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62066032(
                                             v97,
                                             (System_String_o *)StringLiteral_18424/*"ddd"*/,
                                             0LL);
  v53 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(gameObject, v34->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v85 = sub_1B64348(gameObject);
      sub_1B641F0(v85, 0LL);
    }
  }
  if ( v34->max_length <= 5 )
LABEL_70:
    sub_1B6432C(gameObject, v35);
  v34->m_Items[5] = v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[5], (int32_t)v53, v51, v52);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61389904(v33, v34, 0LL);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0LL);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13323/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0LL);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0LL);
  v58 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v58 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v86 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v58->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v58->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1B64314(System_Action_UISprite__TypeInfo, v56, v57);
    System_Action_object____ctor(
      _9__8_0,
      v61,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0LL);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v63, v64);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( (int)itemList->max_length >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      v68 = this->fields.iconSpriteList;
      if ( !v68 )
        break;
      if ( v67 >= v68->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v68->m_Items[v67];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      max_length = itemList->max_length;
      if ( v67 >= max_length )
        goto LABEL_70;
      v70 = &itemList->obj.klass + (int)v67;
      v73 = v70[4];
      v72 = (__int64 *)(v70 + 4);
      v71 = v73;
      if ( !v73 )
        break;
      if ( BYTE4(v71->_1.properties) )
      {
        klass = v71->_1.klass;
        if ( !klass )
          break;
        data = (int)klass->_1.byval_arg.data;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &data);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20315/*"img_popularitem_{0}"*/, v75, 0LL);
        max_length = itemList->max_length;
        v76 = (System_String_o *)gameObject;
      }
      else
      {
        v76 = (System_String_o *)StringLiteral_20086/*"icon_popularitem_unknown"*/;
      }
      if ( v67 >= max_length )
        goto LABEL_70;
      v77 = *v72;
      if ( !*v72 )
        break;
      if ( *(_BYTE *)(v77 + 148) )
      {
        v78 = *(_QWORD *)(v77 + 120);
        if ( !v78 )
          break;
        v79 = (System_String_o **)(v78 + 24);
      }
      else
      {
        v79 = (System_String_o **)&StringLiteral_25365/*"？？？"*/;
      }
      v80 = this->fields.iconSpriteList;
      if ( !v80 )
        break;
      if ( v67 >= v80->max_length )
        goto LABEL_70;
      v81 = *(_DWORD *)(v77 + 144);
      v82 = *v79;
      v83 = v80->m_Items[v67];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_37544692(v81, v83, v76, 0LL);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v67 >= nameLabelList->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v67];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v82, 0LL);
      if ( (signed int)++v67 >= (signed int)itemList->max_length )
        goto LABEL_68;
    }
LABEL_69:
    sub_1B64324(gameObject);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v86;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)v86, v65, v66);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A006F0 & 1) == 0 )
  {
    sub_1B640C8(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v1);
    byte_4A006F0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}