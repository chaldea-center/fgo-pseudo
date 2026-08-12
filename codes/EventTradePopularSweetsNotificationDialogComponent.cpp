void EventTradePopularSweetsNotificationDialogComponent___ctor(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AD7E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AD7E = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__EndClose(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventTradePopularSweetsNotificationDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void EventTradePopularSweetsNotificationDialogComponent__Init(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradePopularSweetsNotificationDialogComponent__OnClickCloseButton(
        EventTradePopularSweetsNotificationDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596AD7C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTradePopularSweetsNotificationDialogComponent_EndClose__);
    sub_2213A60(&Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
    byte_596AD7C = 1;
  }
  v3 = Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventTradePopularSweetsNotificationDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596AD7D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16261/*"Window/CloseButton"*/);
    byte_596AD7D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16261/*"Window/CloseButton"*/, 0);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *titleLabel; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_DateTime_o v16; // x0
  System_DateTime_o v17; // x1
  System_DateTime_o v18; // x2
  EventTradeTimeCalculation_c *v19; // x8
  __int64 ONE_DAY_SECOND; // x22
  System_DateTime_o v21; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v23; // x23
  System_Object_array *v24; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x25
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x25
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *v46; // x25
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  Il2CppObject *v53; // x25
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x25
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *v67; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  EventTradePopularSweetsNotificationDialogComponent___c_c *v72; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v76; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  unsigned int v90; // w26
  struct UISprite_array *v91; // x8
  __int64 v92; // x2
  unsigned int max_length; // w8
  Il2CppClass **v94; // x23
  Il2CppClass *v95; // x9
  __int64 *v96; // x23
  Il2CppClass *v97; // t1
  _DWORD *fields; // x8
  Il2CppObject *v99; // x0
  System_String_o *v100; // x22
  __int64 v101; // x8
  __int64 v102; // x9
  System_String_o **v103; // x9
  struct UISprite_array *v104; // x10
  System_String_o *v105; // x23
  int32_t v106; // w24
  UISprite_o *v107; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v109; // x0
  struct System_Action_o *v110; // [xsp+0h] [xbp-80h]
  int v111; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v113; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596AD7B & 1) == 0 )
  {
    sub_2213A60(&System_Action_UISprite__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_UISprite___);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__);
    sub_2213A60(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_14040/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/);
    sub_2213A60(&StringLiteral_14041/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_14039/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_21486/*"img_popularitem_{0}"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_19334/*"ddd"*/);
    sub_2213A60(&StringLiteral_21193/*"icon_popularitem_unknown"*/);
    sub_2213A60(&StringLiteral_26985/*"？？？"*/);
    byte_596AD7B = 1;
  }
  v113 = 0;
  dateData = 0;
  Month = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14041/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
  v16.fields._dateData = NetworkManager__getLocalDateTime_48347428(updateTime, 0).fields._dateData;
  v19 = EventTradeTimeCalculation_TypeInfo;
  dateData = v16.fields._dateData;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v17.fields._dateData, v18.fields._dateData);
    v19 = EventTradeTimeCalculation_TypeInfo;
  }
  ONE_DAY_SECOND = v19->static_fields->ONE_DAY_SECOND;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v17.fields._dateData, v18.fields._dateData);
  v21.fields._dateData = System_DateTime__AddSeconds((System_DateTime_o)&dateData, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v113 = v21.fields._dateData;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_14039/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v24 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v24 )
    goto LABEL_69;
  v31 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v24->max_length) )
    goto LABEL_70;
  v24->m_Items[0] = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v24->m_Items, (int32_t)v31, v25, v26, v27, v28, v29, v30);
  Month = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v39 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( (v24->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_70;
  v24->m_Items[1] = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->m_Items[1], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_77027772(
                                             (System_DateTime_o)&dateData,
                                             (System_String_o *)StringLiteral_19334/*"ddd"*/,
                                             0);
  v46 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v24->max_length) <= 2 )
    goto LABEL_70;
  v24->m_Items[2] = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->m_Items[2], (int32_t)v46, v40, v41, v42, v43, v44, v45);
  Month = System_DateTime__get_Month((System_DateTime_o)&v113, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v53 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( (v24->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_70;
  v24->m_Items[3] = v53;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->m_Items[3], (int32_t)v53, v47, v48, v49, v50, v51, v52);
  Month = System_DateTime__get_Day((System_DateTime_o)&v113, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v60 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v24->max_length) <= 4 )
    goto LABEL_70;
  v24->m_Items[4] = v60;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->m_Items[4], (int32_t)v60, v54, v55, v56, v57, v58, v59);
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_77027772(
                                             (System_DateTime_o)&v113,
                                             (System_String_o *)StringLiteral_19334/*"ddd"*/,
                                             0);
  v67 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v24->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v109 = sub_2213D00(gameObject, v32);
      sub_2213BA0(v109, 0);
    }
  }
  if ( LODWORD(v24->max_length) <= 5 )
LABEL_70:
    sub_2213CE4(gameObject);
  v24->m_Items[5] = v67;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->m_Items[5], (int32_t)v67, v61, v62, v63, v64, v65, v66);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_75698016(v23, v24, 0);
  if ( !detailLabel )
    goto LABEL_69;
  UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0);
  closeButtonLb = this->fields.closeButtonLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLb )
    goto LABEL_69;
  UILabel__set_text(closeButtonLb, (System_String_o *)gameObject, 0);
  pickupListLabel = this->fields.pickupListLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14040/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_PICKUP_LIST_TITLE"*/, 0);
  if ( !pickupListLabel )
    goto LABEL_69;
  UILabel__set_text(pickupListLabel, (System_String_o *)gameObject, 0);
  v72 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !*(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v70, v71);
    v72 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  static_fields = v72->static_fields;
  v110 = closeCallback;
  _9__8_0 = (System_Action_object__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v72->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v72, v70, v71);
      static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_2213CCC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v76,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    v77 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    v77->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v77->__9__8_0, (int32_t)_9__8_0, v78, v79, v80, v81, v82, v83);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v90 = 0;
    while ( 1 )
    {
      v91 = this->fields.iconSpriteList;
      if ( !v91 )
        break;
      if ( v90 >= LODWORD(v91->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v91->m_Items[v90];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v90 >= max_length )
        goto LABEL_70;
      v94 = &itemList->obj.klass + (int)v90;
      v97 = v94[4];
      v96 = (__int64 *)(v94 + 4);
      v95 = v97;
      if ( !v97 )
        break;
      if ( BYTE4(v95->_1.methods) )
      {
        fields = v95->_1.fields;
        if ( !fields )
          break;
        v111 = fields[10];
        v99 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v111);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21486/*"img_popularitem_{0}"*/, v99, 0);
        max_length = itemList->max_length;
        v100 = (System_String_o *)gameObject;
      }
      else
      {
        v100 = (System_String_o *)StringLiteral_21193/*"icon_popularitem_unknown"*/;
      }
      if ( v90 >= max_length )
        goto LABEL_70;
      v101 = *v96;
      if ( !*v96 )
        break;
      if ( *(_BYTE *)(v101 + 156) )
      {
        v102 = *(_QWORD *)(v101 + 128);
        if ( !v102 )
          break;
        v103 = (System_String_o **)(v102 + 32);
      }
      else
      {
        v103 = (System_String_o **)&StringLiteral_26985/*"？？？"*/;
      }
      v104 = this->fields.iconSpriteList;
      if ( !v104 )
        break;
      if ( v90 >= LODWORD(v104->max_length) )
        goto LABEL_70;
      v105 = *v103;
      v106 = *(_DWORD *)(v101 + 152);
      v107 = v104->m_Items[v90];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v92);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_47569484(v106, v107, v100, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v90 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v90];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v105, 0);
      if ( (signed int)++v90 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_2213CDC(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v110;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)v110,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void EventTradePopularSweetsNotificationDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AD7F & 1) == 0 )
  {
    sub_2213A60(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
    byte_596AD7F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradePopularSweetsNotificationDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}