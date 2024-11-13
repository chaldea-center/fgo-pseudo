void __fastcall EventTradePointRewardDialogComponent___ctor(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B112D3 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B112D3 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(&this->fields.viewChangeButtonLabelEffectColors, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v7);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__EndClose(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__OnClickCloseButton(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B112D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventTradePointRewardDialogComponent_EndClose__, v10, v11);
    sub_1BCA7E0(&Method_EventTradePointRewardDialogComponent_OnClickCloseButton__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B112D0 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v18 = Method_EventTradePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BCAA3C(0LL, v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v29.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
  }
}


void __fastcall EventTradePointRewardDialogComponent__OnClickSwitchShowMode(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v21; // x8
  UISprite_o *v22; // x20
  __int64 v23; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v31; // w20
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B112D1 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B112D1 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v21 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v21, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v22 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v22, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BCAA3C(viewChangeButton, v18);
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
    sub_1BCAA44(viewChangeButton, v18);
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
  v32.fields.a = *p_r;
  v32.fields.b = *p_a;
  v32.fields.g = *p_b;
  v32.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v32, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v31 = 0;
  while ( v31 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v31,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v31;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  EventTradePointRewardDialogComponent_o *v55; // x8
  int basePanelList_high; // w25
  signed int max_length; // w22
  __int64 v58; // x1
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v61; // x1
  UILabel_o *viewChangeButtonLabel; // x25
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Collections_Generic_List_object__o *v66; // x25
  __int64 v67; // x1
  Il2CppObject *v68; // x25
  EventEntity_o *v69; // x26
  EventTradePointRewardDialogComponent_o *v70; // x27
  bool IsEventPeriod; // w0
  __int64 v72; // x1
  UILabel_o *v73; // x26
  uint32_t cctor_finished; // w9
  __int64 *v75; // x8
  __int64 v76; // x1
  UILabel_o *titleLabel; // x24
  System_String_o *v78; // x0
  UILabel_o *titleNextItemLabel; // x24
  UILabel_o *titleAtLabel; // x24
  __int64 v81; // x1
  UISprite_o *eventPointBg; // x24
  __int64 v83; // x1
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x23
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Action_o *v90; // x21
  const MethodInfo *v91; // x3

  v12 = this;
  if ( (byte_4B112CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventPointItemId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRewardMaster___, v23, v24);
    sub_1BCA7E0(&DataManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_EventTradePointRewardDialogComponent__Open_b__24_0__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_13550/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13552/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_13551/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13549/*"TRADE_EVENT_POINT"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_13565/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v51, v52);
    this = (EventTradePointRewardDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13553/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, v53, v54);
    byte_4B112CD = 1;
  }
  v12->fields.state = 1;
  if ( !tradeRewards )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.listRoot;
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_49;
  v55 = this;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.scrollBar;
  if ( !this )
    goto LABEL_49;
  basePanelList_high = HIDWORD(v55->fields.basePanelList);
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  v12->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_49;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v12->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_49;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1BCAA44(this, *(_QWORD *)&eventPointItemId);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v12->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13565/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_49;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v66 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v63,
                                                       v64,
                                                       v65);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v12->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v66;
  sub_1BCA784(&v12->fields.resultItemObjList, v66);
  v68 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13549/*"TRADE_EVENT_POINT"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     eventId,
                                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !v12->fields.closeButton )
    goto LABEL_49;
  v69 = (EventEntity_o *)this;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v12->fields.closeButton,
                                                     0LL);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     1,
                                                     (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !v69 )
    goto LABEL_49;
  v70 = this;
  IsEventPeriod = EventEntity__IsEventPeriod(v69, 0LL, 0LL);
  v73 = IsEventPeriod ? (UILabel_o *)v70 : 0LL;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( !IsEventPeriod || isReceiveAll )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v75 = &StringLiteral_13551/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/;
    v73 = (UILabel_o *)v70;
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v75 = &StringLiteral_13552/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/;
  }
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)*v75, 0LL);
  if ( !v73 )
    goto LABEL_49;
  UILabel__set_text(v73, (System_String_o *)this, 0LL);
  titleLabel = v12->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_13553/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)System_String__Format(v78, v68, 0LL);
  if ( !titleLabel )
    goto LABEL_49;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v12->fields.titleNextItemLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_49;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v12->fields.titleAtLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13550/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_49;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.atNameLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v68, 0LL);
  eventPointBg = v12->fields.eventPointBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v81);
  AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v12->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v83);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRewardMaster___);
  if ( !this
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)this,
                                  eventId,
                                  EventPointNoGroup,
                                  0LL),
        AtlasManager__SetItem(v12->fields.eventPointSprite, eventPointItemId, 0LL),
        EventTradePointRewardDialogComponent__SetNextItemLabel(v12, EventPointNoGroup, NextEventRewardEntity, v86),
        v12->fields.closeCallbackFunc = closeCallback,
        sub_1BCA784(&v12->fields.closeCallbackFunc, closeCallback),
        (this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0LL)) == 0LL) )
  {
LABEL_49:
    sub_1BCAA3C(this, *(_QWORD *)&eventPointItemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
  System_Action___ctor(v90, (Il2CppObject *)v12, Method_EventTradePointRewardDialogComponent__Open_b__24_0__, 0LL);
  EventTradePointRewardDialogComponent__SetResultData(v12, tradeRewards, v90, v91);
}


void __fastcall EventTradePointRewardDialogComponent__SetNextItemLabel(
        EventTradePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UILabel_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *isQp; // x0
  __int64 v22; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v24; // x1
  UILabel_o *atLabel; // x20
  int64_t v26; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B112CF & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, userEventPoint, eventRewardEnt);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v15, v16);
    byte_4B112CF = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(isQp, v22);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v18 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v26 = eventRewardEnt->fields.point - userEventPoint;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
  isQp = System_String__Format(v19, v20, 0LL);
  if ( !v18 )
    goto LABEL_17;
  UILabel__set_text(v18, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_62412480(nameText, (System_String_o *)StringLiteral_116/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v24 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v24 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v24, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__SetResultData(
        EventTradePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  signed int max_length; // w8
  __int64 v15; // x27
  BattleDropItem_o *v16; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v19; // x10
  int v20; // w19
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *prefabResultItem; // x26
  EventTradePointRewardDialogComponent_o *v23; // x23
  __int64 v24; // x2
  EventTradePointRewardDialogComponent_o *v25; // x26
  int32_t v26; // w3
  ItemIconComponent_o *v27; // x26
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v31; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4B112CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, callBack);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v10, v11);
    this = (EventTradePointRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B112CE = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1BCAA44(this, rewards);
        v16 = rewards->m_Items[v15];
        if ( !v16 )
          break;
        type = v16->fields.type;
        objectId = v16->fields.objectId;
        v19 = 44LL;
        if ( v16->fields.originalNum > 0 )
          v19 = 52LL;
        v20 = *(_DWORD *)((char *)&v16->klass + v19);
        listRoot = v5->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                           prefabResultItem,
                                                           listRoot,
                                                           (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( !this )
          break;
        v23 = this;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        v25 = this;
        if ( !byte_4B109C1 )
        {
          this = (EventTradePointRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v24);
          byte_4B109C1 = 1;
        }
        if ( !v25 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v25,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v23,
                                                           0LL);
        if ( !this )
          break;
        v33.fields.x = v5->fields.iconScale;
        v33.fields.y = v33.fields.x;
        v33.fields.z = v33.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v23,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v26 = v20 <= 1 ? -1 : v20;
        v27 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v26, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v27, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 1, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        v28 = *(_QWORD *)&this->fields.m_CachedPtr;
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v28 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v23,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v31 + 32) = v23;
          sub_1BCA784(v31 + 32, v23);
        }
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)((__int64 (__fastcall *)(EventTradePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                           this,
                                                           this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_29;
      }
LABEL_31:
      sub_1BCAA3C(this, rewards);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B112D4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTradePointRewardDialogComponent__Open_b__24_1__, v5, v6);
    byte_4B112D4 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent__Open_b__24_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B112D2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B112D2 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}