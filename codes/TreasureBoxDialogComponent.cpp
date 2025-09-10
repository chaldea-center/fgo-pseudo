void TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21

  if ( (byte_4C21CFF & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C21CFF = 1;
  }
  *(_QWORD *)&this->fields.TYPE_SPRITE_POS_Y = 0x74C278CCCDLL;
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1C2D538(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2);
  sub_1C2D434(&this->fields.viewChangeButtonLabelEffectColors);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434(&this->fields.fallEffectObjList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fallEffectObjList; // x0
  int size; // w22
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  __int64 v7; // x1

  if ( (byte_4C21CFC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21CFC = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
    this->fields.isSkip = 1;
    if ( fallEffectObjList )
    {
      size = fallEffectObjList->fields._size;
      if ( size >= 1 )
      {
        v5 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   fallEffectObjList,
                   v5,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Item, 0);
          }
          if ( size == ++v5 )
            break;
          fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_1C2D6EC(0, v7);
        }
      }
    }
  }
}


void TreasureBoxDialogComponent__Close(
        TreasureBoxDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C21CF5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_TreasureBoxDialogComponent_EndClose__);
    byte_4C21CF5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void TreasureBoxDialogComponent__EndClose(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TreasureBoxDialogComponent__Init(this, method);
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


void TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TreasureBoxDialogComponent__OnClickCloseButton(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isShowPointReward; // w20
  System_Reflection_MethodBase_o *v5; // x0
  int32_t v6; // w1
  __int64 v7; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_4C21CF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_TreasureBoxDialogComponent_OnClickCloseButton__);
    byte_4C21CF4 = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  isShowPointReward = this->fields.isShowPointReward;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isShowPointReward )
    v6 = 8;
  else
    v6 = 1;
  OverwriteAssetSoundName__PlaySystemSe(v5, v6, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(skipCollider, v7);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0);
}


void TreasureBoxDialogComponent__OnClickSwitchShowMode(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v15; // w20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C21CFD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
    byte_4C21CFD = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_18:
    sub_1C2D6EC(viewChangeButtonLabel, v6);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !isShowPossessionNum )
  {
    if ( max_length > 1 )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
      if ( !viewChangeButtonLabel )
        goto LABEL_18;
      goto LABEL_12;
    }
LABEL_20:
    sub_1C2D6F4(viewChangeButtonLabel, v6, v7);
  }
  if ( !max_length )
    goto LABEL_20;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
LABEL_12:
  v16.fields.a = *p_a;
  v16.fields.b = *p_b;
  v16.fields.g = *p_g;
  v16.fields.r = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v16, 0);
  viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
  v15 = 0;
  while ( v15 < SLODWORD(viewChangeButtonLabel->fields.m_CancellationTokenSource) )
  {
    viewChangeButtonLabel = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)viewChangeButtonLabel,
                                           v15,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0);
        viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
        ++v15;
        if ( viewChangeButtonLabel )
          continue;
      }
    }
    goto LABEL_18;
  }
}


void TreasureBoxDialogComponent__Open(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        int32_t type,
        TreasureBoxEntity_o *treasureBoxEnt,
        System_Action_o *closeCallback,
        System_String_o *eventItemName,
        const MethodInfo *method)
{
  Il2CppObject *v14; // x20
  __int64 viewChangeButton; // x0
  __int64 v16; // x1
  System_Array_o **p_monitor; // x24
  Il2CppObject *v18; // x23
  Il2CppObject *Component_object; // x27
  TreasureBoxEntity_o *v20; // x22
  GiftEntity_array *GiftListById; // x28
  __int64 v22; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x29
  unsigned int v25; // w25
  Il2CppClass **v26; // x8
  Il2CppClass *v27; // x27
  Il2CppObject *v28; // x21
  System_Collections_Generic_List_object__o *v29; // x26
  System_Collections_Generic_List_object__o *v30; // x26
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v33; // w9
  int32_t dialogType; // w8
  TreasureBoxEntity_o *v35; // x28
  int32_t eventId; // w23
  Il2CppObject *monitor; // x24
  UILabel_o *v38; // x25
  System_String_o *v39; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  System_String_o *v42; // x0
  UISprite_o *eventPointBg; // x24
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x0
  int32_t v46; // w23
  EventRewardEntity_o *v47; // x25
  const MethodInfo *v48; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x23
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  System_Int32_array *v57; // x25
  int v58; // w20
  int32_t iconId; // w20
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x4
  System_Action_o *v62; // x20
  UILabel_o *v63; // x25
  Il2CppObject *v64; // x25
  int32_t v65; // w26
  UISprite_o *totalEventPointIcon; // x28
  UILabel_o *getTitleLabel; // x26
  System_String_o *v68; // x0
  UILabel_o *getNumLabel; // x26
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_String_o *v73; // x28
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  int64_t v76; // x0
  UILabel_o *totalTitleLabel; // x27
  int64_t v78; // x26
  System_String_o *v79; // x0
  UILabel_o *totalNumLabel; // x25
  System_String_o *v81; // x27
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v87; // w8
  UILabel_o *v88; // x23
  struct System_Action_o *v90; // [xsp+8h] [xbp-88h]
  Il2CppObject *object; // [xsp+10h] [xbp-80h]
  int64_t v92; // [xsp+18h] [xbp-78h] BYREF
  int v93; // [xsp+24h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21CF3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78016584);
    sub_1C2D490(&Method_DataManager_GetMaster_EventRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__0__);
    sub_1C2D490(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__1__);
    sub_1C2D490(&TreasureBoxDialogComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C2D490(&StringLiteral_13536/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C2D490(&StringLiteral_13516/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_13514/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    sub_1C2D490(&StringLiteral_13518/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_13515/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C2D490(&StringLiteral_24186/*"treasurechest_img_bg_reward"*/);
    sub_1C2D490(&StringLiteral_13517/*"TREASURE_BOX_EVENT_POINT_REWARD"*/);
    sub_1C2D490(&StringLiteral_13519/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/);
    sub_1C2D490(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    byte_4C21CF3 = 1;
  }
  entity = 0;
  v14 = (Il2CppObject *)sub_1C2D6DC(TreasureBoxDialogComponent___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v14, 0);
  if ( !v14 )
    goto LABEL_106;
  v14[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v14[1]);
  v14[1].monitor = giftIds;
  p_monitor = (System_Array_o **)&v14[1].monitor;
  sub_1C2D434(&v14[1].monitor);
  v14[2].klass = (Il2CppClass *)pointRewards;
  v18 = v14 + 2;
  object = v14;
  sub_1C2D434(&v14[2]);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_106;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  if ( !treasureBoxEnt )
    goto LABEL_106;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v90 = closeCallback;
  viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_106;
  v20 = treasureBoxEnt;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)viewChangeButton, treasureBoxEnt->fields.extraGiftId, 0);
  viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_106;
  max_length = GiftListById->max_length;
  if ( max_length >= 1 )
  {
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton;
    v25 = 0;
    while ( v25 < max_length )
    {
      v26 = &GiftListById->obj.klass + (int)v25;
      v27 = v26[4];
      if ( !v27 )
        goto LABEL_106;
      viewChangeButton = GiftEntity__checkGiftType((GiftEntity_o *)v26[4], 2, 0);
      if ( (viewChangeButton & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_106;
        viewChangeButton = DataMasterBase_object__object__int___TryGetEntity(
                             v24,
                             &entity,
                             (int32_t)v27->_1.namespaze,
                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (viewChangeButton & 1) != 0 )
        {
          v28 = entity;
          if ( !entity )
            goto LABEL_106;
          if ( LODWORD(entity[3].klass) == 14 )
            goto LABEL_23;
        }
      }
      max_length = GiftListById->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_22;
    }
LABEL_107:
    sub_1C2D6F4(viewChangeButton, v16, v22);
  }
LABEL_22:
  v28 = 0;
  v27 = 0;
LABEL_23:
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  this->fields.isShowPointReward = 0;
  v29 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v29;
  sub_1C2D434(&this->fields.resultItemObjList);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  viewChangeButton = sub_1C2D434(&this->fields.resultIconHideObjList);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    v33 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v33;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0);
  }
  dialogType = this->fields.dialogType;
  v35 = v20;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13516/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0);
    viewChangeButton = (__int64)System_String__Format(v50, (Il2CppObject *)eventItemName, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
      viewChangeButton = (__int64)this->fields.viewChangeButton;
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)viewChangeButton,
                                      0);
        if ( viewChangeButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0);
          viewChangeButton = (__int64)this->fields.scrollView;
          if ( viewChangeButton )
          {
            (*(void (__fastcall **)(__int64, _QWORD, float, float, float, float))(*(_QWORD *)viewChangeButton + 600LL))(
              viewChangeButton,
              *(_QWORD *)(*(_QWORD *)viewChangeButton + 608LL),
              0.0,
              0.0,
              (float)this->fields.width,
              (float)this->fields.height);
            viewChangeButton = (__int64)this->fields.listBg;
            if ( viewChangeButton )
            {
              UIWidget__set_width((UIWidget_o *)viewChangeButton, this->fields.width, 0);
              viewChangeButton = (__int64)this->fields.listBg;
              if ( viewChangeButton )
              {
                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height + 10, 0);
                viewChangeButton = (__int64)this->fields.listBg;
                if ( viewChangeButton )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
                  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0);
                  viewChangeButton = (__int64)this->fields.listBg;
                  if ( viewChangeButton )
                  {
                    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)viewChangeButton,
                                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v95.fields.z = 0.0;
                      v95.fields.y = (float)(this->fields.height + 10);
                      v95.fields.x = (float)this->fields.width;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v95, 0);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v52, 0);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0);
                          if ( viewChangeButton )
                          {
                            v53 = (UnityEngine_GameObject_o *)viewChangeButton;
                            viewChangeButton = (__int64)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)viewChangeButton,
                                                          0);
                            if ( viewChangeButton )
                            {
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)viewChangeButton,
                                this->fields.basePos,
                                0);
                              viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                            v53,
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v54 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)viewChangeButton,
                                          0);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v54, 0, 0);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v55 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)viewChangeButton,
                                              0);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v55, 0, 0);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v56 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                    0);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v56, 1, 0);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                              if ( viewChangeButton )
                                              {
                                                UIWidget__set_height(
                                                  (UIWidget_o *)viewChangeButton,
                                                  this->fields.height,
                                                  0);
                                                goto LABEL_68;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_106;
  }
  if ( dialogType != 1 )
  {
    if ( dialogType != 2 )
    {
LABEL_68:
      v57 = 0;
      v58 = 0;
      goto LABEL_69;
    }
    if ( v28 )
    {
      eventId = v20->fields.eventId;
      monitor = (Il2CppObject *)v28[1].monitor;
      v38 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13518/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0);
      viewChangeButton = (__int64)System_String__Format(v39, monitor, 0);
      if ( v38 )
      {
        UILabel__set_text(v38, (System_String_o *)viewChangeButton, 0);
        titleNextItemLabel = this->fields.titleNextItemLabel;
        viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
        if ( titleNextItemLabel )
        {
          UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0);
          titleAtLabel = this->fields.titleAtLabel;
          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13517/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0);
          viewChangeButton = (__int64)System_String__Format(v42, monitor, 0);
          if ( titleAtLabel )
          {
            UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0);
            viewChangeButton = (__int64)this->fields.atNameLabel;
            if ( viewChangeButton )
            {
              UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)monitor, 0);
              viewChangeButton = (__int64)this->fields.pointRewardRoot;
              if ( viewChangeButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
                eventPointBg = this->fields.eventPointBg;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
                AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
                EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventRewardMaster___);
                if ( viewChangeButton )
                {
                  NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                            (EventRewardMaster_o *)viewChangeButton,
                                            eventId,
                                            EventPointNoGroup,
                                            0);
                  v46 = (int32_t)v28[2].monitor;
                  v47 = NextEventRewardEntity;
                  AtlasManager__SetItem(this->fields.eventPointSprite, v46, 0);
                  AtlasManager__SetItem(this->fields.titleIcon, v46, 0);
                  TreasureBoxDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v47, v48);
                  goto LABEL_68;
                }
              }
            }
          }
        }
      }
    }
LABEL_106:
    sub_1C2D6EC(viewChangeButton, v16);
  }
  viewChangeButton = (__int64)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0);
  if ( !*p_monitor )
    goto LABEL_106;
  viewChangeButton = (__int64)this->fields.getPointRoot;
  this->fields.maxPlayCnt = (int32_t)(*p_monitor)[1].monitor;
  if ( !viewChangeButton )
    goto LABEL_106;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v63 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13515/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0);
  if ( !v63 )
    goto LABEL_106;
  UILabel__set_text(v63, (System_String_o *)viewChangeButton, 0);
  if ( !v28 )
    goto LABEL_106;
  v64 = (Il2CppObject *)v28[1].monitor;
  v65 = (int32_t)v28[2].monitor;
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v65, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v65, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  getTitleLabel = this->fields.getTitleLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_13514/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0);
  viewChangeButton = (__int64)System_String__Format(v68, v64, 0);
  if ( !getTitleLabel )
    goto LABEL_106;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  if ( !v27 )
    goto LABEL_106;
  v73 = (System_String_o *)viewChangeButton;
  v93 = this->fields.maxPlayCnt * HIDWORD(v27->_1.namespaze);
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v70, v71, v72);
  v75 = System_String__Format(v73, v74, 0);
  viewChangeButton = (__int64)System_String__Concat_63457864((System_String_o *)StringLiteral_803/*"+"*/, v75, 0);
  if ( !getNumLabel )
    goto LABEL_106;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  v35 = v20;
  v76 = UserEventPointMaster__GetEventPointNoGroup(v20->fields.eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v78 = v76;
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_13519/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0);
  viewChangeButton = (__int64)System_String__Format(v79, v64, 0);
  if ( !totalTitleLabel )
    goto LABEL_106;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v92 = v78;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v92, v82, v83, v84);
  viewChangeButton = (__int64)System_String__Format(v81, v85, 0);
  if ( !totalNumLabel )
    goto LABEL_106;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = sub_1C2D538(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_106;
  v57 = (System_Int32_array *)viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_107;
  *(_DWORD *)(viewChangeButton + 32) = v20->fields.extraGiftId;
  System_Array__Copy_65120656(*p_monitor, 0, (System_Array_o *)viewChangeButton, 1, this->fields.maxPlayCnt, 0);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v87 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v87;
  if ( v87 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_106;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
    if ( !viewChangeButton )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0);
  }
  if ( v18->klass && v18->klass->_1.namespaze )
  {
    viewChangeButton = (__int64)this->fields.closeButton;
    if ( !viewChangeButton )
      goto LABEL_106;
    viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
    if ( !viewChangeButton )
      goto LABEL_106;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  1,
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78016584);
    if ( !viewChangeButton )
      goto LABEL_106;
    if ( !*(_DWORD *)(viewChangeButton + 24) )
      goto LABEL_107;
    v88 = *(UILabel_o **)(viewChangeButton + 32);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
    if ( !v88 )
      goto LABEL_106;
    UILabel__set_text(v88, (System_String_o *)viewChangeButton, 0);
    v58 = 1;
    this->fields.isShowPointReward = 1;
  }
  else
  {
    v58 = 1;
  }
LABEL_69:
  this->fields.closeCallbackFunc = v90;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  if ( v58 )
  {
    iconId = v35->fields.iconId;
    v60 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v60, object, Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__0__, 0);
    TreasureBoxDialogComponent__SetResultData(this, v57, iconId, v60, v61);
  }
  else
  {
    v62 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v62, object, Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__1__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0);
  }
}


void TreasureBoxDialogComponent__SetIcon(
        TreasureBoxDialogComponent_o *this,
        GiftEntity_o *gift,
        BattleDropItem_o *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x19
  int32_t *p_originalNum; // x20
  int32_t originalNum; // t1
  int32_t *p_type; // x9
  int32_t *p_num; // x8
  int32_t *p_objectId; // x10
  int v12; // w24
  int32_t v13; // w22
  int32_t v14; // w21
  Il2CppObject *prefabResultItem; // x20
  TreasureBoxDialogComponent_o *v16; // x20
  TreasureBoxDialogComponent_o *v17; // x23
  int v18; // w8
  ItemIconComponent_o *v19; // x23
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C21CFA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (TreasureBoxDialogComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21CFA = 1;
  }
  if ( !pointRewards )
  {
    if ( !gift )
      goto LABEL_31;
    goto LABEL_10;
  }
  if ( gift )
  {
LABEL_10:
    p_num = &gift->fields.num;
    p_type = &gift->fields.type;
    p_objectId = &gift->fields.objectId;
    goto LABEL_11;
  }
  originalNum = pointRewards->fields.originalNum;
  p_originalNum = &pointRewards->fields.originalNum;
  p_type = p_originalNum - 8;
  if ( originalNum <= 0 )
    p_num = p_originalNum - 2;
  else
    p_num = p_originalNum;
  p_objectId = p_originalNum - 7;
LABEL_11:
  v12 = *p_num;
  v13 = *p_type;
  v14 = *p_objectId;
  prefabResultItem = (Il2CppObject *)v6->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           prefabResultItem,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  v17 = this;
  if ( !byte_4C20DA1 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v17 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  if ( !this )
    goto LABEL_31;
  v24.fields.x = v6->fields.iconScale;
  v24.fields.y = v24.fields.x;
  v24.fields.z = v24.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v16,
                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v18 = v12 <= 1 ? -1 : v12;
  v19 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)this, v13, v14, v18, 0, 0);
  ItemIconComponent__SetCondensedScale(v19, v6->fields.CounterLabelMaxWidth, 0);
  ItemIconComponent__CalcSetPossession(v19, v13, v14, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  m_CachedPtr = this->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v23 + 32) = v16;
    sub_1C2D434(v23 + 32);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
  {
LABEL_31:
    sub_1C2D6EC(this, gift);
  }
  ((void (__fastcall *)(TreasureBoxDialogComponent_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
}


void TreasureBoxDialogComponent__SetListData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  il2cpp_array_size_t v9; // x8
  GiftMaster_o *v10; // x21
  unsigned __int64 v11; // x23
  const MethodInfo *v12; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  TreasureBoxDialogComponent_o *v14; // x22
  unsigned __int64 v15; // x24

  v6 = this;
  if ( (byte_4C21CF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    this = (TreasureBoxDialogComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21CF9 = 1;
  }
  if ( pointRewards )
  {
    if ( !giftIds )
    {
      max_length = pointRewards->max_length;
      if ( (int)max_length >= 1 )
      {
        v8 = 0;
        while ( v8 < (unsigned int)max_length )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0, pointRewards->m_Items[v8], method);
          LODWORD(max_length) = pointRewards->max_length;
          if ( (__int64)++v8 >= (int)max_length )
            goto LABEL_9;
        }
LABEL_23:
        sub_1C2D6F4(this, giftIds, pointRewards);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_1C2D6EC(this, giftIds);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    v9 = giftIds->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = (GiftMaster_o *)this;
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 )
          goto LABEL_23;
        if ( !v10 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v10, giftIds->m_Items[v11], 0);
        if ( !this )
          goto LABEL_24;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v14 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
LABEL_21:
        LODWORD(v9) = giftIds->max_length;
        if ( (__int64)++v11 >= (int)v9 )
          return;
      }
      v15 = 0;
      while ( v15 < (unsigned int)m_CancellationTokenSource )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v14->fields.basePanel + v15), 0, v12);
        LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
        if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
          goto LABEL_21;
      }
      goto LABEL_23;
    }
  }
}


void TreasureBoxDialogComponent__SetNextItemLabel(
        TreasureBoxDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v14; // x1
  char v15; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v18; // x1
  int64_t v19; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C21CFB & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C2D490(&StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C2D490(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21CFB = 1;
  }
  nameText = 0;
  countText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C2D6EC(nextItemNameLabel, v14);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v19 = eventRewardEnt->fields.point - userEventPoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v9, v10, v11);
  nextItemNameLabel = System_String__Format(v8, v12, 0);
  if ( !v7 )
    goto LABEL_20;
  UILabel__set_text(v7, nextItemNameLabel, 0);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v15 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v15 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v18 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v18, 0);
}


void TreasureBoxDialogComponent__SetResultData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *resultIds,
        int32_t treasureIconId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x29
  int v12; // w8
  int *v13; // x25
  unsigned int v14; // w19
  Il2CppObject *prefabResultItem; // x26
  int32_t *v16; // x28
  UnityEngine_GameObject_o *v17; // x26
  UnityEngine_Transform_o *v18; // x27
  int v19; // w8
  ItemIconComponent_o *v20; // x27
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  Il2CppObject *v25; // x27
  UnityEngine_GameObject_o *v26; // x27
  UnityEngine_Transform_o *transform; // x28
  ItemIconComponent_o *v28; // x26
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  int *v33; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21CF6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21CF6 = 1;
  }
  if ( resultIds )
  {
    Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_53:
      sub_1C2D6EC(Instance, v8);
    Instance = (int *)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    max_length = resultIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      v33 = Instance;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_54;
        if ( !Instance )
          goto LABEL_53;
        Instance = (int *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v11], 0);
        if ( !Instance )
          goto LABEL_53;
        v12 = Instance[6];
        v13 = Instance;
        if ( v12 >= 1 )
          break;
LABEL_50:
        Instance = v33;
        ++v11;
        LODWORD(max_length) = resultIds->max_length;
        if ( (__int64)v11 >= (int)max_length )
          goto LABEL_51;
      }
      v14 = 0;
      while ( v14 < v12 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v16 = *(int32_t **)&v13[2 * v14 + 8];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (int *)UnityEngine_Object__Instantiate_object_(
                            prefabResultItem,
                            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_53;
        v17 = (UnityEngine_GameObject_o *)Instance;
        Instance = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_53;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
        Instance = (int *)UnityEngine_GameObject__get_transform(v17, 0);
        v18 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4C20DA1 )
        {
          Instance = (int *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v18 )
          goto LABEL_53;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Instance = (int *)UnityEngine_GameObject__get_transform(v17, 0);
        if ( !Instance )
          goto LABEL_53;
        v36.fields.x = this->fields.iconScale;
        v36.fields.y = v36.fields.x;
        v36.fields.z = v36.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v36, 0);
        Instance = (int *)UnityEngine_GameObject__GetComponent_object_(
                            v17,
                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v16 )
          goto LABEL_53;
        v19 = v16[7];
        v20 = (ItemIconComponent_o *)Instance;
        if ( v19 <= 1 )
          v19 = -1;
        if ( !v11 )
          v19 *= LODWORD(resultIds->max_length) - 1;
        if ( !Instance )
          goto LABEL_53;
        ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v16[5], v16[6], v19, 0, 0);
        ItemIconComponent__SetCondensedScale(v20, this->fields.CounterLabelMaxWidth, 0);
        ItemIconComponent__CalcSetPossession(v20, v16[5], v16[6], 0);
        Instance = (int *)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_53;
        v21 = *((_QWORD *)Instance + 2);
        v22 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++Instance[7];
        if ( !v21 )
          goto LABEL_53;
        v23 = Instance[6];
        if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v17,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * v23;
          Instance[6] = v23 + 1;
          *(_QWORD *)(v24 + 32) = v17;
          sub_1C2D434(v24 + 32);
        }
        v25 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (int *)UnityEngine_Object__Instantiate_object_(
                            v25,
                            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_53;
        v26 = (UnityEngine_GameObject_o *)Instance;
        Instance = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_53;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0);
        transform = UnityEngine_GameObject__get_transform(v26, 0);
        Instance = (int *)UnityEngine_GameObject__get_transform(v17, 0);
        if ( !Instance )
          goto LABEL_53;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
        if ( !transform )
          goto LABEL_53;
        UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
        Instance = (int *)UnityEngine_GameObject__get_transform(v26, 0);
        if ( !Instance )
          goto LABEL_53;
        v38.fields.x = this->fields.iconScale;
        v38.fields.y = v38.fields.x;
        v38.fields.z = v38.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v38, 0);
        Instance = (int *)UnityEngine_GameObject__GetComponent_object_(
                            v26,
                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_53;
        v28 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 1, 0);
        UnityEngine_GameObject__SetActive(v26, 1, 0);
        ItemIconComponent__setTypeSpritePositionY(v28, this->fields.TYPE_SPRITE_POS_Y, 0);
        Instance = (int *)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_53;
        v29 = *((_QWORD *)Instance + 2);
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++Instance[7];
        if ( !v29 )
          goto LABEL_53;
        v31 = Instance[6];
        if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v26,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * v31;
          Instance[6] = v31 + 1;
          *(_QWORD *)(v32 + 32) = v26;
          sub_1C2D434(v32 + 32);
        }
        Instance = (int *)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_53;
        Instance = (int *)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_53;
        (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = (int *)this->fields.iconListRoot;
        if ( !Instance )
          goto LABEL_53;
        Instance = (int *)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_53;
        Instance = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                            Instance,
                            *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v12 = v13[6];
        if ( (int)++v14 >= v12 )
          goto LABEL_50;
      }
LABEL_54:
      sub_1C2D6F4(Instance, v8, v9);
    }
LABEL_51:
    ActionExtensions__Call(callBack, 0);
  }
}


System_Collections_IEnumerator_o *TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C21CF7 & 1) == 0 )
  {
    sub_1C2D490(&TreasureBoxDialogComponent__StartDisp_d__61_TypeInfo);
    byte_4C21CF7 = 1;
  }
  v3 = sub_1C2D6DC(TreasureBoxDialogComponent__StartDisp_d__61_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C21CF8 & 1) == 0 )
  {
    sub_1C2D490(&TreasureBoxDialogComponent__StartRewardAction_d__62_TypeInfo);
    byte_4C21CF8 = 1;
  }
  v5 = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)sub_1C2D6DC(TreasureBoxDialogComponent__StartRewardAction_d__62_TypeInfo);
  TreasureBoxDialogComponent__StartRewardAction_d__62___ctor(v5, 0, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5->fields.__4__this = this;
  sub_1C2D434(&v5->fields.__4__this);
  v5->fields.rewardAction = rewardAction;
  sub_1C2D434(&v5->fields.rewardAction);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21CFE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21CFE = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void TreasureBoxDialogComponent_RewardAction___ctor(
        TreasureBoxDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TreasureBoxDialogComponent__StartDisp_d__61___ctor(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TreasureBoxDialogComponent__StartDisp_d__61__MoveNext(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent__StartDisp_d__61_o *v2; // x19
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v4; // x20
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v8; // w21
  UIProgressBar_o *v9; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v12; // w8
  System_Collections_Generic_List_object__o *v13; // x22
  TreasureBoxDialogComponent__StartDisp_d__61_o **p_listRewardAction_5__2; // x21
  int v15; // w23
  __int64 v16; // x22
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 _2__current_low; // x10
  __int64 v20; // x8
  int _2__current; // w9
  int32_t v22; // w22
  TreasureBoxDialogComponent__StartDisp_d__61_o *v23; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t playCnt; // w8
  int32_t v28; // w21
  int32_t v29; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v32; // x20
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4C21D03 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TreasureBoxDialogComponent_RewardAction_TypeInfo);
    this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C21D03 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v4, 0.3, 0);
      v2->fields.__2__current = (Il2CppObject *)v4;
      sub_1C2D434(&v2->fields.__2__current);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.scrollBar;
      v8 = maxPlayCnt % listRewardAction_5__2_high
         ? maxPlayCnt / listRewardAction_5__2_high + 1
         : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v9 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
      UIProgressBar__set_value(v9, (float)(1.0 / (float)((float)((float)v8 * 0.5) + -1.0)) + value, 0);
      v2->fields.__2__current = 0;
      p__2__current = &v2->fields.__2__current;
      sub_1C2D434(p__2__current);
      v12 = 4;
      goto LABEL_76;
    case 4:
      v2->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v2->fields._listRewardAction_5__2 = 0;
    sub_1C2D434(&v2->fields._listRewardAction_5__2);
LABEL_19:
    v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    v2->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v13;
    p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__61_o **)&v2->fields._listRewardAction_5__2;
    this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)sub_1C2D434(&v2->fields._listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v16 = sub_1C2D6DC(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0);
        if ( !v16 )
          goto LABEL_59;
        *(_DWORD *)(v16 + 16) = v15;
        *(_DWORD *)(v16 + 20) = v15 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v17 = *(_QWORD *)&this->fields.__1__state;
        v18 = Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v17 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v16,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v20 + 32) = v16;
          sub_1C2D434(v20 + 32);
        }
        ++v15;
      }
      while ( v15 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v22 = 0;
      do
      {
        this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)this,
                                                                  v22,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v23 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v22,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        started = TreasureBoxDialogComponent__StartRewardAction(
                    _4__this,
                    (TreasureBoxDialogComponent_RewardAction_o *)Item,
                    v25);
        this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                  started,
                                                                  0);
        if ( !v23 )
          goto LABEL_59;
        v23->fields.__4__this = (struct TreasureBoxDialogComponent_o *)this;
        sub_1C2D434(&v23->fields.__4__this);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v22 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              LODWORD(this->fields.__2__current) - 1,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
    if ( !this )
      goto LABEL_59;
    if ( LOBYTE(this->fields.__2__current) )
    {
      if ( !_4__this )
        goto LABEL_59;
      goto LABEL_43;
    }
    if ( !_4__this )
      goto LABEL_59;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_43:
    if ( _4__this->fields.isSkip )
    {
      this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)v2->fields._listRewardAction_5__2;
      if ( this )
      {
        v28 = 0;
        while ( v28 < SLODWORD(this->fields.__2__current) )
        {
          this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v28,
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_71149896(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0);
            this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)v2->fields._listRewardAction_5__2;
            ++v28;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v29 = 0;
          while ( v29 < SLODWORD(this->fields.__2__current) )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v29,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.resultItemObjList;
              ++v29;
              if ( this )
                continue;
            }
            goto LABEL_59;
          }
          this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( this )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
LABEL_63:
              this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.skipCollider;
              if ( this )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
                this = (TreasureBoxDialogComponent__StartDisp_d__61_o *)_4__this->fields.resultIconHideObjList;
                if ( this )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v33,
                            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v33.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v33,
                    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1C2D6EC(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v32 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v32, scrollWait, 0);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v2->fields.__2__current;
      sub_1C2D434(p__2__current);
      v12 = 3;
      goto LABEL_76;
    }
  }
  v2->fields.__2__current = 0;
  p__2__current = &v2->fields.__2__current;
  sub_1C2D434(p__2__current);
  v12 = 2;
LABEL_76:
  *((_DWORD *)p__2__current - 2) = v12;
  return 1;
}


Il2CppObject *TreasureBoxDialogComponent__StartDisp_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TreasureBoxDialogComponent__StartDisp_d__61__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_TreasureBoxDialogComponent__StartDisp_d__61_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *TreasureBoxDialogComponent__StartDisp_d__61__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TreasureBoxDialogComponent__StartDisp_d__61__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartDisp_d__61_o *this,
        const MethodInfo *method)
{
  ;
}


void TreasureBoxDialogComponent__StartRewardAction_d__62___ctor(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TreasureBoxDialogComponent__StartRewardAction_d__62__MoveNext(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v2; // x19
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v6; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v7; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *v10; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v16; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v17; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v18; // x21
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 _2__current_low; // x10
  __int64 v22; // x8
  float v23; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **v25; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C21DD0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)sub_1C2D490(&StringLiteral_18859/*"ef_treasure_drop"*/);
    byte_4C21DD0 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v2->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        rewardAction->fields.playCnt,
                                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    v6 = v2->fields.rewardAction;
    if ( v6 )
    {
      this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)this,
                                                                          v6->fields.playCnt,
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v7 = v2->fields.rewardAction;
          if ( v7 )
          {
            result = 0;
            v7->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v2->fields._i_5__2;
    v2->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v2->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v2->fields._i_5__2 = 0;
  }
  v10 = v2->fields.rewardAction;
  if ( !v10 || !_4__this )
    goto LABEL_39;
  if ( _1__state < v10->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, itemDispWaitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &v2->fields.__2__current;
    sub_1C2D434(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v10->fields.playCnt,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    0);
  if ( !this )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                    (System_String_o *)StringLiteral_18859/*"ef_treasure_drop"*/,
                                                                    transform,
                                                                    0);
  if ( !this )
    goto LABEL_39;
  v16 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0);
  v17 = v2->fields.rewardAction;
  if ( !v17 )
    goto LABEL_39;
  v18 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v17->fields.playCnt,
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0);
  if ( !this )
    goto LABEL_39;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !v18 )
    goto LABEL_39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v18, localPosition, 0);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)v16,
                                                                    0);
  if ( !this )
    goto LABEL_39;
  v27.fields.x = 1.25;
  v27.fields.y = 1.25;
  v27.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.fallEffectObjList;
  if ( !this )
    goto LABEL_39;
  v19 = *(_QWORD *)&this->fields.__1__state;
  v20 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v19 )
    goto LABEL_39;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v22 + 32) = v16;
    sub_1C2D434(v22 + 32);
  }
  v23 = _4__this->fields.itemDispWaitTime;
  v24 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v24, v23, 0);
  v2->fields.__2__current = (Il2CppObject *)v24;
  v25 = &v2->fields.__2__current;
  sub_1C2D434(v25);
  *((_DWORD *)v25 - 2) = 2;
  return 1;
}


Il2CppObject *TreasureBoxDialogComponent__StartRewardAction_d__62__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TreasureBoxDialogComponent__StartRewardAction_d__62__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_TreasureBoxDialogComponent__StartRewardAction_d__62_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *TreasureBoxDialogComponent__StartRewardAction_d__62__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TreasureBoxDialogComponent__StartRewardAction_d__62__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartRewardAction_d__62_o *this,
        const MethodInfo *method)
{
  ;
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___ctor(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___Open_b__0(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4C21D00 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (TreasureBoxDialogComponent___c__DisplayClass57_0_o *)sub_1C2D490(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__2__);
    byte_4C21D00 = 1;
  }
  monitor = (System_Action_o *)v2[2].monitor;
  klass = (BaseDialog_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__2__, 0);
    v2[2].monitor = monitor;
    this = (TreasureBoxDialogComponent___c__DisplayClass57_0_o *)sub_1C2D434(&v2[2].monitor);
  }
  if ( !klass )
    sub_1C2D6EC(this, method);
  BaseDialog__Open(klass, monitor, 0, 0);
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_4C21D02 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C21D02 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v2),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0);
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4C21D01 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13050/*"StartDisp"*/);
    byte_4C21D01 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13050/*"StartDisp"*/, 0);
}