void __fastcall EventTradePointRewardDialogComponent___ctor(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A006EA & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color___TypeInfo, v3);
    byte_4A006EA = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__EndClose(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall EventTradePointRewardDialogComponent__Init(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__OnClickCloseButton(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A006E7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_EventTradePointRewardDialogComponent_EndClose__, v6);
    sub_1B640C8(&Method_EventTradePointRewardDialogComponent_OnClickCloseButton__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A006E7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_EventTradePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B640E0(Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall EventTradePointRewardDialogComponent__OnClickSwitchShowMode(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v12; // x8
  UISprite_o *v13; // x20
  System_String_o *normalSprite; // x21
  __int64 v15; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v22; // w20
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A006E8 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B640C8(&SoundManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v8);
    sub_1B640C8(&StringLiteral_23968/*"treasurechest_btn_on"*/, v9);
    byte_4A006E8 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v12 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23966/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23968/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v12, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v13 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v13, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B64324(viewChangeButton);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1B6432C(viewChangeButton, v15);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v23.fields.a = *p_r;
  v23.fields.b = *p_a;
  v23.fields.g = *p_b;
  v23.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v23, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v22 = 0;
  while ( v22 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v22,
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v22;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradePointRewardDialogComponent__Open(
        EventTradePointRewardDialogComponent_o *this,
        int32_t eventPointItemId,
        int32_t eventId,
        BattleDropItem_array *tradeRewards,
        bool isReceiveAll,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v12; // x20
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  EventTradePointRewardDialogComponent_o *v34; // x8
  int basePanelList_high; // w25
  signed int max_length; // w22
  Il2CppObject *Component_object; // x25
  __int64 v38; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_object__o *v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x25
  EventEntity_o *v47; // x26
  EventTradePointRewardDialogComponent_o *v48; // x27
  bool IsEventPeriod; // w0
  UILabel_o *v50; // x26
  uint32_t cctor_finished; // w9
  __int64 *v52; // x8
  UILabel_o *titleLabel; // x24
  System_String_o *v54; // x0
  UILabel_o *titleNextItemLabel; // x24
  UILabel_o *titleAtLabel; // x24
  UISprite_o *eventPointBg; // x24
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x23
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x21
  const MethodInfo *v66; // x3

  v12 = this;
  if ( (byte_4A006E4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventPointItemId);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760, v14);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_EventRewardMaster___, v18);
    sub_1B640C8(&DataManager_TypeInfo, v19);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v20);
    sub_1B640C8(&Method_EventTradePointRewardDialogComponent__Open_b__24_0__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v22);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v23);
    sub_1B640C8(&LocalizationManager_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_13318/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, v25);
    sub_1B640C8(&StringLiteral_13320/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/, v26);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v27);
    sub_1B640C8(&StringLiteral_13319/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/, v28);
    sub_1B640C8(&StringLiteral_23972/*"treasurechest_img_bg_reward"*/, v29);
    sub_1B640C8(&StringLiteral_13317/*"TRADE_EVENT_POINT"*/, v30);
    sub_1B640C8(&StringLiteral_13333/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, v31);
    sub_1B640C8(&StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v32);
    this = (EventTradePointRewardDialogComponent_o *)sub_1B640C8(&StringLiteral_13321/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, v33);
    byte_4A006E4 = 1;
  }
  v12->fields.state = 1;
  if ( !tradeRewards )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.listRoot;
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_49;
  v34 = this;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.scrollBar;
  if ( !this )
    goto LABEL_49;
  basePanelList_high = HIDWORD(v34->fields.basePanelList);
  max_length = tradeRewards->max_length;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  if ( !this )
    goto LABEL_49;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  v12->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_49;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v12->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_49;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1B6432C(this, v38);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v12->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13333/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_49;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v43 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v12->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.resultItemObjList, (int32_t)v43, v44, v45);
  v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13317/*"TRADE_EVENT_POINT"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     eventId,
                                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !v12->fields.closeButton )
    goto LABEL_49;
  v47 = (EventEntity_o *)this;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v12->fields.closeButton,
                                                     0LL);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     1,
                                                     (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !v47 )
    goto LABEL_49;
  v48 = this;
  IsEventPeriod = EventEntity__IsEventPeriod(v47, 0LL, 0LL);
  v50 = IsEventPeriod ? (UILabel_o *)v48 : 0LL;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( !IsEventPeriod || isReceiveAll )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = &StringLiteral_13319/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/;
    v50 = (UILabel_o *)v48;
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = &StringLiteral_13320/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/;
  }
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)*v52, 0LL);
  if ( !v50 )
    goto LABEL_49;
  UILabel__set_text(v50, (System_String_o *)this, 0LL);
  titleLabel = v12->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_13321/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)System_String__Format(v54, v46, 0LL);
  if ( !titleLabel )
    goto LABEL_49;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v12->fields.titleNextItemLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_49;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v12->fields.titleAtLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13318/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_49;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.atNameLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v46, 0LL);
  eventPointBg = v12->fields.eventPointBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v12->fields.eventPointRewardBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventRewardMaster___);
  if ( !this
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)this,
                                  eventId,
                                  EventPointNoGroup,
                                  0LL),
        AtlasManager__SetItem(v12->fields.eventPointSprite, eventPointItemId, 0LL),
        EventTradePointRewardDialogComponent__SetNextItemLabel(v12, EventPointNoGroup, NextEventRewardEntity, v60),
        v12->fields.closeCallbackFunc = closeCallback,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v12->fields.closeCallbackFunc,
          (int32_t)closeCallback,
          v61,
          v62),
        (this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0LL)) == 0LL) )
  {
LABEL_49:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v65 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v63, v64);
  System_Action___ctor(v65, (Il2CppObject *)v12, Method_EventTradePointRewardDialogComponent__Open_b__24_0__, 0LL);
  EventTradePointRewardDialogComponent__SetResultData(v12, tradeRewards, v65, v66);
}


void __fastcall EventTradePointRewardDialogComponent__SetNextItemLabel(
        EventTradePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *isQp; // x0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v17; // x1
  UILabel_o *atLabel; // x20
  int64_t v19; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A006E6 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, userEventPoint);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_117/*" "*/, v8);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9);
    sub_1B640C8(&StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v10);
    sub_1B640C8(&StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    byte_4A006E6 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(isQp);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v19 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
  isQp = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_17;
  UILabel__set_text(v12, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_61386656(nameText, (System_String_o *)StringLiteral_117/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v17 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v17 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v17, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__SetResultData(
        EventTradePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  signed int max_length; // w8
  __int64 v11; // x27
  BattleDropItem_o *v12; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v15; // x10
  int v16; // w19
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *prefabResultItem; // x26
  EventTradePointRewardDialogComponent_o *v19; // x23
  __int64 v20; // x1
  EventTradePointRewardDialogComponent_o *v21; // x26
  int32_t v22; // w3
  ItemIconComponent_o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4A006E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v8);
    this = (EventTradePointRewardDialogComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A006E5 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1B6432C(this, rewards);
        v12 = rewards->m_Items[v11];
        if ( !v12 )
          break;
        type = v12->fields.type;
        objectId = v12->fields.objectId;
        v15 = 44LL;
        if ( v12->fields.originalNum > 0 )
          v15 = 52LL;
        v16 = *(_DWORD *)((char *)&v12->klass + v15);
        listRoot = v5->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__49003980(
                                                           prefabResultItem,
                                                           listRoot,
                                                           (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( !this )
          break;
        v19 = this;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        v21 = this;
        if ( !byte_49F7111 )
        {
          this = (EventTradePointRewardDialogComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
          byte_49F7111 = 1;
        }
        if ( !v21 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v21,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v19,
                                                           0LL);
        if ( !this )
          break;
        v31.fields.x = v5->fields.iconScale;
        v31.fields.y = v31.fields.x;
        v31.fields.z = v31.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v31, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v19,
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v22 = v16 <= 1 ? -1 : v16;
        v23 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, type, objectId, v22, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v23, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        v26 = *(_QWORD *)&this->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v26 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v29 + 32) = v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v19, v24, v25);
        }
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)((__int64 (__fastcall *)(EventTradePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                           this,
                                                           this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_29;
      }
LABEL_31:
      sub_1B64324(this);
    }
  }
LABEL_29:
  this = (EventTradePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent___Open_b__24_0(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A006EB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventTradePointRewardDialogComponent__Open_b__24_1__, v4);
    byte_4A006EB = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent__Open_b__24_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v5, 0, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent___Open_b__24_1(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventTradePointRewardDialogComponent__get_closeBtnObject(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A006E9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A006E9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}