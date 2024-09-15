void __fastcall EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A32282 & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A32282 = 1;
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
    sub_1B76164(p_closeCallbackFunc, 0, v3, v4);
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
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
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
  System_Action_o *v7; // x20

  if ( (byte_4A32280 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__, v3);
    sub_1B761C0(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__, v4);
    byte_4A32280 = 1;
  }
  v5 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B761D8(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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

  if ( (byte_4A32281 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15637/*"Window/CloseButton"*/, method);
    byte_4A32281 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41759436(transform, (System_String_o *)StringLiteral_15637/*"Window/CloseButton"*/, 0LL);
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
  EventTradePopularSweetsNotificationDialogComponent___c_c *v56; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v59; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  il2cpp_array_size_t v65; // w26
  struct UISprite_array *v66; // x8
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  il2cpp_array_size_t max_length; // w8
  Il2CppClass **v71; // x23
  Il2CppClass *v72; // x9
  __int64 *v73; // x23
  Il2CppClass *v74; // t1
  Il2CppClass *klass; // x8
  Il2CppObject *v76; // x0
  System_String_o *v77; // x22
  __int64 v78; // x8
  __int64 v79; // x9
  System_String_o **v80; // x9
  struct UISprite_array *v81; // x10
  int32_t v82; // w24
  System_String_o *v83; // x23
  UISprite_o *v84; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v86; // x0
  struct System_Action_o *v87; // [xsp+0h] [xbp-80h]
  int data; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v90; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8
  System_DateTime_o v96; // 0:x0.8
  System_DateTime_o v97; // 0:x0.8
  System_DateTime_o v98; // 0:x0.8

  if ( (byte_4A3227F & 1) == 0 )
  {
    sub_1B761C0(&System_Action_UISprite__TypeInfo, itemList);
    sub_1B761C0(&AtlasManager_TypeInfo, v9);
    sub_1B761C0(&Method_BasicHelper_ForEach_UISprite___, v10);
    sub_1B761C0(&System_DateTime_TypeInfo, v11);
    sub_1B761C0(&EventTradeTimeCalculation_TypeInfo, v12);
    sub_1B761C0(&int_TypeInfo, v13);
    sub_1B761C0(&LocalizationManager_TypeInfo, v14);
    sub_1B761C0(&NetworkManager_TypeInfo, v15);
    sub_1B761C0(&object___TypeInfo, v16);
    sub_1B761C0(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__, v17);
    sub_1B761C0(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v18);
    sub_1B761C0(&StringLiteral_13386/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, v19);
    sub_1B761C0(&StringLiteral_13387/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, v20);
    sub_1B761C0(&StringLiteral_13385/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, v21);
    sub_1B761C0(&StringLiteral_20388/*"img_popularitem_{0}"*/, v22);
    sub_1B761C0(&StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B761C0(&StringLiteral_18489/*"ddd"*/, v24);
    sub_1B761C0(&StringLiteral_20159/*"icon_popularitem_unknown"*/, v25);
    sub_1B761C0(&StringLiteral_25454/*"？？？"*/, v26);
    byte_4A3227F = 1;
  }
  v90 = 0LL;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13387/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v30.fields._dateData = NetworkManager__getLocalDateTime_38297144(updateTime, 0LL).fields._dateData;
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
  v92.fields._dateData = (uint64_t)&dateData;
  v90 = System_DateTime__AddSeconds(v92, (double)ONE_DAY_SECOND, 0LL).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13385/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v35 = (System_Object_array *)sub_1B76268(object___TypeInfo, 6LL);
  v93.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v93, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !v35 )
    goto LABEL_69;
  v38 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !v35->max_length )
    goto LABEL_70;
  v35->m_Items[0] = v38;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v35->m_Items, (int32_t)v38, v36, v37);
  v94.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v94, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v41 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_70;
  v35->m_Items[1] = v41;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v35->m_Items[1], (int32_t)v41, v39, v40);
  v95.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62225704(
                                             v95,
                                             (System_String_o *)StringLiteral_18489/*"ddd"*/,
                                             0LL);
  v44 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_70;
  v35->m_Items[2] = v44;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v35->m_Items[2], (int32_t)v44, v42, v43);
  v96.fields._dateData = (uint64_t)&v90;
  Month = System_DateTime__get_Month(v96, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v47 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_70;
  v35->m_Items[3] = v47;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v35->m_Items[3], (int32_t)v47, v45, v46);
  v97.fields._dateData = (uint64_t)&v90;
  Month = System_DateTime__get_Day(v97, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0LL);
  v50 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_70;
  v35->m_Items[4] = v50;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v35->m_Items[4], (int32_t)v50, v48, v49);
  v98.fields._dateData = (uint64_t)&v90;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_62225704(
                                             v98,
                                             (System_String_o *)StringLiteral_18489/*"ddd"*/,
                                             0LL);
  v53 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B762FC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v86 = sub_1B76440(gameObject);
      sub_1B762E8(v86, 0LL);
    }
  }
  if ( v35->max_length <= 5 )
LABEL_70:
    sub_1B76424(gameObject, v28);
  v35->m_Items[5] = v53;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v35->m_Items[5], (int32_t)v53, v51, v52);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61549568(v34, v35, 0LL);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0LL);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13386/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0LL);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0LL);
  v56 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    v56 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  v87 = closeCallback;
  _9__8_0 = (System_Action_object__o *)v56->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1B7640C(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v59,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0LL);
    static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v61, v62);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2E4F7C0 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( (int)itemList->max_length >= 1 )
  {
    v65 = 0;
    while ( 1 )
    {
      v66 = this->fields.iconSpriteList;
      if ( !v66 )
        break;
      if ( v65 >= v66->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v66->m_Items[v65];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      max_length = itemList->max_length;
      if ( v65 >= max_length )
        goto LABEL_70;
      v71 = &itemList->obj.klass + (int)v65;
      v74 = v71[4];
      v73 = (__int64 *)(v71 + 4);
      v72 = v74;
      if ( !v74 )
        break;
      if ( BYTE4(v72->_1.properties) )
      {
        klass = v72->_1.klass;
        if ( !klass )
          break;
        data = (int)klass->_1.byval_arg.data;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &data, v67, v68, v69);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_20388/*"img_popularitem_{0}"*/, v76, 0LL);
        max_length = itemList->max_length;
        v77 = (System_String_o *)gameObject;
      }
      else
      {
        v77 = (System_String_o *)StringLiteral_20159/*"icon_popularitem_unknown"*/;
      }
      if ( v65 >= max_length )
        goto LABEL_70;
      v78 = *v73;
      if ( !*v73 )
        break;
      if ( *(_BYTE *)(v78 + 148) )
      {
        v79 = *(_QWORD *)(v78 + 120);
        if ( !v79 )
          break;
        v80 = (System_String_o **)(v79 + 24);
      }
      else
      {
        v80 = (System_String_o **)&StringLiteral_25454/*"？？？"*/;
      }
      v81 = this->fields.iconSpriteList;
      if ( !v81 )
        break;
      if ( v65 >= v81->max_length )
        goto LABEL_70;
      v82 = *(_DWORD *)(v78 + 144);
      v83 = *v80;
      v84 = v81->m_Items[v65];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_37679488(v82, v84, v77, 0LL);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v65 >= nameLabelList->max_length )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v65];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v83, 0LL);
      if ( (signed int)++v65 >= (signed int)itemList->max_length )
        goto LABEL_68;
    }
LABEL_69:
    sub_1B7641C(gameObject, v28);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v87;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)v87, v63, v64);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A32283 & 1) == 0 )
  {
    sub_1B761C0(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v1);
    byte_4A32283 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}