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
  System_DateTime_o v22; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v24; // x23
  System_Object_array *v25; // x24
  System_DateTime_o v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x25
  __int64 v34; // x1
  System_DateTime_o v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x25
  System_DateTime_o v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x25
  System_DateTime_o v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x25
  System_DateTime_o v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  Il2CppObject *v66; // x25
  System_DateTime_o v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x25
  UILabel_o *closeButtonLb; // x22
  UILabel_o *pickupListLabel; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  EventTradePopularSweetsNotificationDialogComponent___c_c *v79; // x0
  System_Collections_Generic_IEnumerable_T__o *iconSpriteList; // x22
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__8_0; // x23
  Il2CppObject *v83; // x24
  struct EventTradePopularSweetsNotificationDialogComponent___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  unsigned int v97; // w26
  struct UISprite_array *v98; // x8
  __int64 v99; // x2
  unsigned int max_length; // w8
  Il2CppClass **v101; // x23
  Il2CppClass *v102; // x9
  __int64 *v103; // x23
  Il2CppClass *v104; // t1
  _DWORD *fields; // x8
  Il2CppObject *v106; // x0
  System_String_o *v107; // x22
  __int64 v108; // x8
  __int64 v109; // x9
  System_String_o **v110; // x9
  struct UISprite_array *v111; // x10
  System_String_o *v112; // x23
  int32_t v113; // w24
  UISprite_o *v114; // x25
  struct UILabel_array *nameLabelList; // x8
  __int64 v116; // x0
  struct System_Action_o *v117; // [xsp+0h] [xbp-80h]
  int v118; // [xsp+8h] [xbp-78h] BYREF
  int32_t Month; // [xsp+Ch] [xbp-74h] BYREF
  uint64_t v120; // [xsp+10h] [xbp-70h] BYREF
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
  v120 = 0;
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
  v21.fields._dateData = (uint64_t)&dateData;
  v22.fields._dateData = System_DateTime__AddSeconds(v21, (double)ONE_DAY_SECOND, 0).fields._dateData;
  detailLabel = this->fields.detailLabel;
  v120 = v22.fields._dateData;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_14039/*"TRADE_EVENT_POPULAR_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v25 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
  v26.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v26, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  if ( !v25 )
    goto LABEL_69;
  v33 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_70;
  v25->m_Items[0] = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v25->m_Items, (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v35.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v35, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v42 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( (v25->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_70;
  v25->m_Items[1] = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[1], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  v43.fields._dateData = (uint64_t)&dateData;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_77027772(
                                             v43,
                                             (System_String_o *)StringLiteral_19334/*"ddd"*/,
                                             0);
  v50 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_70;
  v25->m_Items[2] = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[2], (int32_t)v50, v44, v45, v46, v47, v48, v49);
  v51.fields._dateData = (uint64_t)&v120;
  Month = System_DateTime__get_Month(v51, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v58 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( (v25->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_70;
  v25->m_Items[3] = v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[3], (int32_t)v58, v52, v53, v54, v55, v56, v57);
  v59.fields._dateData = (uint64_t)&v120;
  Month = System_DateTime__get_Day(v59, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&Month, 0);
  v66 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_71;
  }
  if ( LODWORD(v25->max_length) <= 4 )
    goto LABEL_70;
  v25->m_Items[4] = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[4], (int32_t)v66, v60, v61, v62, v63, v64, v65);
  v67.fields._dateData = (uint64_t)&v120;
  gameObject = (UnityEngine_GameObject_o *)System_DateTime__ToString_77027772(
                                             v67,
                                             (System_String_o *)StringLiteral_19334/*"ddd"*/,
                                             0);
  v74 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v25->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_71:
      v116 = sub_2213D00(gameObject, v34);
      sub_2213BA0(v116, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 5 )
LABEL_70:
    sub_2213CE4(gameObject);
  v25->m_Items[5] = v74;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[5], (int32_t)v74, v68, v69, v70, v71, v72, v73);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_75698016(v24, v25, 0);
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
  v79 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  iconSpriteList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconSpriteList;
  if ( !*(&EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo, v77, v78);
    v79 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo;
  }
  static_fields = v79->static_fields;
  v117 = closeCallback;
  _9__8_0 = (System_Action_object__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v79->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v79, v77, v78);
      static_fields = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_2213CCC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v83,
      Method_EventTradePopularSweetsNotificationDialogComponent___c__Open_b__8_0__,
      0);
    v84 = EventTradePopularSweetsNotificationDialogComponent___c_TypeInfo->static_fields;
    v84->__9__8_0 = (struct System_Action_UISprite__o *)_9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v84->__9__8_0, (int32_t)_9__8_0, v85, v86, v87, v88, v89, v90);
  }
  BasicHelper__ForEach_object_(
    iconSpriteList,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UISprite___);
  if ( !itemList )
    goto LABEL_69;
  if ( SLODWORD(itemList->max_length) >= 1 )
  {
    v97 = 0;
    while ( 1 )
    {
      v98 = this->fields.iconSpriteList;
      if ( !v98 )
        break;
      if ( v97 >= LODWORD(v98->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)v98->m_Items[v97];
      if ( !gameObject )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      max_length = itemList->max_length;
      if ( v97 >= max_length )
        goto LABEL_70;
      v101 = &itemList->obj.klass + (int)v97;
      v104 = v101[4];
      v103 = (__int64 *)(v101 + 4);
      v102 = v104;
      if ( !v104 )
        break;
      if ( BYTE4(v102->_1.methods) )
      {
        fields = v102->_1.fields;
        if ( !fields )
          break;
        v118 = fields[10];
        v106 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v118);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21486/*"img_popularitem_{0}"*/, v106, 0);
        max_length = itemList->max_length;
        v107 = (System_String_o *)gameObject;
      }
      else
      {
        v107 = (System_String_o *)StringLiteral_21193/*"icon_popularitem_unknown"*/;
      }
      if ( v97 >= max_length )
        goto LABEL_70;
      v108 = *v103;
      if ( !*v103 )
        break;
      if ( *(_BYTE *)(v108 + 156) )
      {
        v109 = *(_QWORD *)(v108 + 128);
        if ( !v109 )
          break;
        v110 = (System_String_o **)(v109 + 32);
      }
      else
      {
        v110 = (System_String_o **)&StringLiteral_26985/*"？？？"*/;
      }
      v111 = this->fields.iconSpriteList;
      if ( !v111 )
        break;
      if ( v97 >= LODWORD(v111->max_length) )
        goto LABEL_70;
      v112 = *v110;
      v113 = *(_DWORD *)(v108 + 152);
      v114 = v111->m_Items[v97];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v99);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI_47569484(v113, v114, v107, 0);
      nameLabelList = this->fields.nameLabelList;
      if ( !nameLabelList )
        break;
      if ( v97 >= LODWORD(nameLabelList->max_length) )
        goto LABEL_70;
      gameObject = (UnityEngine_GameObject_o *)nameLabelList->m_Items[v97];
      if ( !gameObject )
        break;
      UILabel__set_text((UILabel_o *)gameObject, v112, 0);
      if ( (signed int)++v97 >= SLODWORD(itemList->max_length) )
        goto LABEL_68;
    }
LABEL_69:
    sub_2213CDC(gameObject, v10);
  }
LABEL_68:
  this->fields.closeCallbackFunc = v117;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)v117,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
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