void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x21

  if ( (byte_4BD7573 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Color___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BD7573 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C21EE0(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C21DDC(&this->fields.viewChangeButtonLabelEffectColors, v3);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C21DDC(&this->fields.fallEffectObjList, v4);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fallEffectObjList; // x0
  int size; // w22
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  __int64 v7; // x1

  if ( (byte_4BD756F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD756F = 1;
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
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Item, 0LL);
          }
          if ( size == ++v5 )
            break;
          fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_1C22094(0LL, v7);
        }
      }
    }
  }
}


void __fastcall TreasureBoxDialogComponent__Close(
        TreasureBoxDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD7568 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_TreasureBoxDialogComponent_EndClose__);
    byte_4BD7568 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall TreasureBoxDialogComponent__EndClose(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
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
    *p_closeCallbackFunc = 0LL;
    sub_1C21DDC(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_4BD7567 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TreasureBoxDialogComponent_OnClickCloseButton__);
    byte_4BD7567 = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C22094(skipCollider, v5);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v6; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v14; // w20
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7570 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
    byte_4BD7570 = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_18:
    sub_1C22094(viewChangeButtonLabel, v6);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !isShowPossessionNum )
  {
    if ( max_length > 1 )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
      if ( !viewChangeButtonLabel )
        goto LABEL_18;
      goto LABEL_12;
    }
LABEL_20:
    sub_1C2209C(viewChangeButtonLabel, v6);
  }
  if ( !max_length )
    goto LABEL_20;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
LABEL_12:
  v15.fields.a = *p_r;
  v15.fields.b = *p_a;
  v15.fields.g = *p_b;
  v15.fields.r = *p_g;
  UILabel__set_effectColor(viewChangeButtonLabel, v15, 0LL);
  viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
  v14 = 0;
  while ( v14 < SLODWORD(viewChangeButtonLabel->fields.m_CancellationTokenSource) )
  {
    viewChangeButtonLabel = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)viewChangeButtonLabel,
                                           v14,
                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
        ++v14;
        if ( viewChangeButtonLabel )
          continue;
      }
    }
    goto LABEL_18;
  }
}


void __fastcall TreasureBoxDialogComponent__Open(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        int32_t type,
        TreasureBoxEntity_o *treasureBoxEnt,
        System_Action_o *closeCallback,
        System_String_o *eventItemName,
        const MethodInfo *method)
{
  Il2CppObject *v15; // x22
  __int64 viewChangeButton; // x0
  __int64 v17; // x1
  System_Array_o **p_monitor; // x24
  Il2CppObject *v19; // x23
  Il2CppObject *Component_object; // x27
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x25
  System_Collections_Generic_List_object__o *v23; // x27
  System_Collections_Generic_List_object__o *v24; // x27
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v27; // w9
  int32_t dialogType; // w8
  int32_t eventId; // w23
  Il2CppObject *MasterData_object; // x24
  GiftEntity_array *GiftListById; // x26
  System_String_o *v32; // x0
  UILabel_o *v33; // x28
  Il2CppObject *v34; // x27
  System_String_o *v35; // x0
  UILabel_o *titleNextItemLabel; // x28
  UILabel_o *titleAtLabel; // x28
  UISprite_o *eventPointBg; // x27
  int64_t v39; // x27
  GiftEntity_o *v40; // x8
  EventRewardEntity_o *v41; // x23
  int32_t v42; // w24
  const MethodInfo *v43; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x23
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  System_Int32_array *v52; // x25
  int v53; // w21
  __int64 v54; // x26
  UILabel_o *v55; // x27
  __int64 v56; // x8
  int32_t v57; // w25
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x25
  UILabel_o *getNumLabel; // x25
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x8
  System_String_o *v65; // x27
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v70; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v72; // x27
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v78; // w8
  UILabel_o *v79; // x23
  int32_t iconId; // w20
  System_Action_o *v81; // x21
  const MethodInfo *v82; // x4
  System_Action_o *v83; // x20
  struct System_Action_o *v84; // [xsp+8h] [xbp-78h]
  __int64 v85; // [xsp+10h] [xbp-70h] BYREF
  int v86; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7566 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77649088);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__);
    sub_1C21E38(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__);
    sub_1C21E38(&TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13703/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C21E38(&StringLiteral_13682/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_13680/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/);
    sub_1C21E38(&StringLiteral_858/*"+"*/);
    sub_1C21E38(&StringLiteral_13685/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_24499/*"treasurechest_btn"*/);
    sub_1C21E38(&StringLiteral_13681/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C21E38(&StringLiteral_24505/*"treasurechest_img_bg_reward"*/);
    sub_1C21E38(&StringLiteral_13684/*"TREASURE_BOX_EVENT_POINT_REWARD"*/);
    sub_1C21E38(&StringLiteral_13686/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/);
    sub_1C21E38(&StringLiteral_2978/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_1C21E38(&StringLiteral_13683/*"TREASURE_BOX_EVENT_POINT"*/);
    byte_4BD7566 = 1;
  }
  v15 = (Il2CppObject *)sub_1C22084(TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_105;
  v15[1].klass = (Il2CppClass *)this;
  v84 = closeCallback;
  sub_1C21DDC(&v15[1], this);
  v15[1].monitor = giftIds;
  p_monitor = (System_Array_o **)&v15[1].monitor;
  sub_1C21DDC(&v15[1].monitor, giftIds);
  v15[2].klass = (Il2CppClass *)pointRewards;
  v19 = v15 + 2;
  sub_1C21DDC(&v15[2], pointRewards);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_105;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_object,
                       (System_String_o *)StringLiteral_24499/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_105;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_1C21DDC(&this->fields.resultItemObjList, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_1C21DDC(&this->fields.resultIconHideObjList, v24);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    v27 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v27;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
  }
  dialogType = this->fields.dialogType;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13682/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v45, (Il2CppObject *)eventItemName, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
      viewChangeButton = (__int64)this->fields.viewChangeButton;
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)viewChangeButton,
                                      0LL);
        if ( viewChangeButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
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
              UIWidget__set_width((UIWidget_o *)viewChangeButton, this->fields.width, 0LL);
              viewChangeButton = (__int64)this->fields.listBg;
              if ( viewChangeButton )
              {
                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height + 10, 0LL);
                viewChangeButton = (__int64)this->fields.listBg;
                if ( viewChangeButton )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
                  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0LL);
                  viewChangeButton = (__int64)this->fields.listBg;
                  if ( viewChangeButton )
                  {
                    viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)viewChangeButton,
                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v87.fields.z = 0.0;
                      v87.fields.y = (float)(this->fields.height + 10);
                      v87.fields.x = (float)this->fields.width;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v87, 0LL);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v47, 0LL);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0LL);
                          if ( viewChangeButton )
                          {
                            v48 = (UnityEngine_GameObject_o *)viewChangeButton;
                            viewChangeButton = (__int64)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)viewChangeButton,
                                                          0LL);
                            if ( viewChangeButton )
                            {
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)viewChangeButton,
                                this->fields.basePos,
                                0LL);
                              viewChangeButton = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                            v48,
                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v49 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)viewChangeButton,
                                          0LL);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v49, 0, 0LL);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0LL);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v50 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)viewChangeButton,
                                              0LL);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v50, 0, 0LL);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0LL);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v51 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                    0LL);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v51, 1, 0LL);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                              if ( viewChangeButton )
                                              {
                                                UIWidget__set_height(
                                                  (UIWidget_o *)viewChangeButton,
                                                  this->fields.height,
                                                  0LL);
                                                goto LABEL_60;
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
    goto LABEL_105;
  }
  if ( dialogType != 1 )
  {
    if ( dialogType != 2 )
    {
LABEL_60:
      v52 = 0LL;
      v53 = 0;
      goto LABEL_100;
    }
    eventId = treasureBoxEnt->fields.eventId;
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)viewChangeButton,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRewardMaster___);
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)viewChangeButton,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !viewChangeButton )
      goto LABEL_105;
    GiftListById = GiftMaster__GetGiftListById(
                     (GiftMaster_o *)viewChangeButton,
                     treasureBoxEnt->fields.extraGiftId,
                     0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13683/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
    v33 = this->fields.titleLabel;
    v34 = (Il2CppObject *)v32;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13685/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v35, v34, 0LL);
    if ( !v33 )
      goto LABEL_105;
    UILabel__set_text(v33, (System_String_o *)viewChangeButton, 0LL);
    titleNextItemLabel = this->fields.titleNextItemLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( !titleNextItemLabel )
      goto LABEL_105;
    UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
    titleAtLabel = this->fields.titleAtLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13684/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
    if ( !titleAtLabel )
      goto LABEL_105;
    UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)this->fields.atNameLabel;
    if ( !viewChangeButton )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v34, 0LL);
    viewChangeButton = (__int64)this->fields.pointRewardRoot;
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
    eventPointBg = this->fields.eventPointBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24505/*"treasurechest_img_bg_reward"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24505/*"treasurechest_img_bg_reward"*/, 0LL);
    viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( !MasterData_object
      || (v39 = viewChangeButton,
          viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)MasterData_object,
                                        eventId,
                                        viewChangeButton,
                                        0LL),
          !GiftListById) )
    {
LABEL_105:
      sub_1C22094(viewChangeButton, v17);
    }
    if ( GiftListById->max_length )
    {
      v40 = GiftListById->m_Items[0];
      if ( v40 )
      {
        if ( v22 )
        {
          v41 = (EventRewardEntity_o *)viewChangeButton;
          viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        v22,
                                        v40->fields.objectId,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( viewChangeButton )
          {
            v42 = *(_DWORD *)(viewChangeButton + 40);
            AtlasManager__SetItem(this->fields.eventPointSprite, v42, 0LL);
            AtlasManager__SetItem(this->fields.titleIcon, v42, 0LL);
            TreasureBoxDialogComponent__SetNextItemLabel(this, v39, v41, v43);
            goto LABEL_60;
          }
        }
      }
      goto LABEL_105;
    }
LABEL_106:
    sub_1C2209C(viewChangeButton, v17);
  }
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)viewChangeButton,
                                treasureBoxEnt->fields.extraGiftId,
                                0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_105;
  v54 = viewChangeButton;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
  if ( !*p_monitor )
    goto LABEL_105;
  viewChangeButton = (__int64)this->fields.getPointRoot;
  this->fields.maxPlayCnt = (int32_t)(*p_monitor)[1].monitor;
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v55 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13681/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !v55 )
    goto LABEL_105;
  UILabel__set_text(v55, (System_String_o *)viewChangeButton, 0LL);
  if ( !v54 )
    goto LABEL_105;
  if ( !*(_DWORD *)(v54 + 24) )
    goto LABEL_106;
  v56 = *(_QWORD *)(v54 + 32);
  if ( !v56 )
    goto LABEL_105;
  if ( !v22 )
    goto LABEL_105;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                v22,
                                *(_DWORD *)(v56 + 24),
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_105;
  v57 = *(_DWORD *)(viewChangeButton + 40);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v57, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v57, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24505/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24505/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13680/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_105;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  if ( !*(_DWORD *)(v54 + 24) )
    goto LABEL_106;
  v64 = *(_QWORD *)(v54 + 32);
  if ( !v64 )
    goto LABEL_105;
  v65 = (System_String_o *)viewChangeButton;
  v86 = this->fields.maxPlayCnt * *(_DWORD *)(v64 + 28);
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v61, v62, v63);
  v67 = System_String__Format(v65, v66, 0LL);
  viewChangeButton = (__int64)System_String__Concat_63115476((System_String_o *)StringLiteral_858/*"+"*/, v67, 0LL);
  if ( !getNumLabel )
    goto LABEL_105;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(treasureBoxEnt->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v70 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13686/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_105;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v85 = v70;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v85, v73, v74, v75);
  viewChangeButton = (__int64)System_String__Format(v72, v76, 0LL);
  if ( !totalNumLabel )
    goto LABEL_105;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = sub_1C21EE0(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_105;
  v52 = (System_Int32_array *)viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_106;
  *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
  System_Array__Copy_64071432(*p_monitor, 0, (System_Array_o *)viewChangeButton, 1, this->fields.maxPlayCnt, 0LL);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v78 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v78;
  if ( v78 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
  }
  if ( v19->klass && v19->klass->_1.namespaze )
  {
    viewChangeButton = (__int64)this->fields.closeButton;
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  1,
                                  (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77649088);
    if ( !viewChangeButton )
      goto LABEL_105;
    if ( !*(_DWORD *)(viewChangeButton + 24) )
      goto LABEL_106;
    v79 = *(UILabel_o **)(viewChangeButton + 32);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13703/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !v79 )
      goto LABEL_105;
    UILabel__set_text(v79, (System_String_o *)viewChangeButton, 0LL);
  }
  v53 = 1;
LABEL_100:
  this->fields.closeCallbackFunc = v84;
  sub_1C21DDC(&this->fields.closeCallbackFunc, v84);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v53 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v81 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v81, v15, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, 0LL);
    TreasureBoxDialogComponent__SetResultData(this, v52, iconId, v81, v82);
  }
  else
  {
    v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v83, v15, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__SetIcon(
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
  int32_t v18; // w3
  ItemIconComponent_o *v19; // x23
  TreasureBoxDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BD756D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (TreasureBoxDialogComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD756D = 1;
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
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  v17 = this;
  if ( !byte_4BD6BB1 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v17 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this )
    goto LABEL_31;
  v26.fields.x = v6->fields.iconScale;
  v26.fields.y = v26.fields.x;
  v26.fields.z = v26.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v16,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v18 = v12 <= 1 ? -1 : v12;
  v19 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)this, v13, v14, v18, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v20, v19, v14, v21);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  v22 = *(_QWORD *)&this->fields.m_CachedPtr;
  v23 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v22 )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v25 + 32) = v16;
    sub_1C21DDC(v25 + 32, v16);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_31:
    sub_1C22094(this, gift);
  }
  ((void (__fastcall *)(TreasureBoxDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall TreasureBoxDialogComponent__SetListData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x8
  GiftMaster_o *v10; // x21
  unsigned __int64 v11; // x23
  const MethodInfo *v12; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  TreasureBoxDialogComponent_o *v14; // x22
  unsigned __int64 v15; // x24

  v6 = this;
  if ( (byte_4BD756C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    this = (TreasureBoxDialogComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD756C = 1;
  }
  if ( pointRewards )
  {
    if ( !giftIds )
    {
      v7 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v7 >= 1 )
      {
        v8 = 0LL;
        while ( v8 < (unsigned int)v7 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v8], method);
          LODWORD(v7) = pointRewards->max_length;
          if ( (__int64)++v8 >= (int)v7 )
            goto LABEL_9;
        }
LABEL_23:
        sub_1C2209C(this, giftIds);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_1C22094(this, giftIds);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    v9 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = (GiftMaster_o *)this;
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 )
          goto LABEL_23;
        if ( !v10 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v10, giftIds->m_Items[v11 + 1], 0LL);
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
      v15 = 0LL;
      while ( v15 < (unsigned int)m_CancellationTokenSource )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v14->fields.basePanel + v15), 0LL, v12);
        LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
        if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
          goto LABEL_21;
      }
      goto LABEL_23;
    }
  }
}


void __fastcall TreasureBoxDialogComponent__SetNextItemLabel(
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

  if ( (byte_4BD756E & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C21E38(&StringLiteral_2981/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C21E38(&StringLiteral_2979/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD756E = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
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
    sub_1C22094(nextItemNameLabel, v14);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v19 = eventRewardEnt->fields.point - userEventPoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v9, v10, v11);
  nextItemNameLabel = System_String__Format(v8, v12, 0LL);
  if ( !v7 )
    goto LABEL_20;
  UILabel__set_text(v7, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v15 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
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
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v18, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7571 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7571 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1C22094(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__SetResultData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *resultIds,
        int32_t treasureIconId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x29
  int v11; // w8
  int *v12; // x25
  unsigned int v13; // w19
  Il2CppObject *prefabResultItem; // x26
  int32_t *v15; // x28
  UnityEngine_GameObject_o *v16; // x26
  UnityEngine_Transform_o *v17; // x27
  ItemIconComponent_o *v18; // x27
  int32_t v19; // w3
  TreasureBoxDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  Il2CppObject *v26; // x27
  UnityEngine_GameObject_o *v27; // x27
  UnityEngine_Transform_o *transform; // x28
  int v29; // s0
  ItemIconComponent_o *v32; // x26
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  int *v37; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7569 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7569 = 1;
  }
  if ( resultIds )
  {
    Instance = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_54:
      sub_1C22094(Instance, v8);
    Instance = (int *)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    v9 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      v37 = Instance;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v9 )
          goto LABEL_55;
        if ( !Instance )
          goto LABEL_54;
        Instance = (int *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v10 + 1], 0LL);
        if ( !Instance )
          goto LABEL_54;
        v11 = Instance[6];
        v12 = Instance;
        if ( v11 >= 1 )
          break;
LABEL_51:
        Instance = v37;
        ++v10;
        LODWORD(v9) = resultIds->max_length;
        if ( (__int64)v10 >= (int)v9 )
          goto LABEL_52;
      }
      v13 = 0;
      while ( v13 < v11 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v15 = *(int32_t **)&v12[2 * v13 + 8];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (int *)UnityEngine_Object__Instantiate_object_(
                            prefabResultItem,
                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v16 = (UnityEngine_GameObject_o *)Instance;
        Instance = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (int *)UnityEngine_GameObject__get_transform(v16, 0LL);
        v17 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4BD6BB1 )
        {
          Instance = (int *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        if ( !v17 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (int *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v40.fields.x = this->fields.iconScale;
        v40.fields.y = v40.fields.x;
        v40.fields.z = v40.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v40, 0LL);
        Instance = (int *)UnityEngine_GameObject__GetComponent_object_(
                            v16,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v15 )
          goto LABEL_54;
        v18 = (ItemIconComponent_o *)Instance;
        if ( v15[7] <= 1 )
          v19 = -1;
        else
          v19 = v15[7];
        if ( !v10 )
          v19 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_54;
        ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)Instance, v15[5], v15[6], v19, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v20, v18, v15[6], v21);
        Instance = (int *)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_54;
        v22 = *((_QWORD *)Instance + 2);
        v23 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++Instance[7];
        if ( !v22 )
          goto LABEL_54;
        v24 = Instance[6];
        if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v16,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * v24;
          Instance[6] = v24 + 1;
          *(_QWORD *)(v25 + 32) = v16;
          sub_1C21DDC(v25 + 32, v16);
        }
        v26 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (int *)UnityEngine_Object__Instantiate_object_(
                            v26,
                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v27 = (UnityEngine_GameObject_o *)Instance;
        Instance = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v27, 0LL);
        Instance = (int *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !Instance )
          goto LABEL_54;
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !transform )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
        Instance = (int *)UnityEngine_GameObject__get_transform(v27, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v41.fields.x = this->fields.iconScale;
        v41.fields.y = v41.fields.x;
        v41.fields.z = v41.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v41, 0LL);
        Instance = (int *)UnityEngine_GameObject__GetComponent_object_(
                            v27,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_54;
        v32 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 1, 0LL);
        UnityEngine_GameObject__SetActive(v27, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v32, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = (int *)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_54;
        v33 = *((_QWORD *)Instance + 2);
        v34 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++Instance[7];
        if ( !v33 )
          goto LABEL_54;
        v35 = Instance[6];
        if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v27,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * v35;
          Instance[6] = v35 + 1;
          *(_QWORD *)(v36 + 32) = v27;
          sub_1C21DDC(v36 + 32, v27);
        }
        Instance = (int *)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (int *)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_54;
        (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = (int *)this->fields.iconListRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (int *)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_54;
        Instance = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                            Instance,
                            *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v11 = v12[6];
        if ( (int)++v13 >= v11 )
          goto LABEL_51;
      }
LABEL_55:
      sub_1C2209C(Instance, v8);
    }
LABEL_52:
    ActionExtensions__Call(callBack, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4BD756A & 1) == 0 )
  {
    sub_1C21E38(&TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo);
    byte_4BD756A = 1;
  }
  v3 = sub_1C22084(TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BD756B & 1) == 0 )
  {
    sub_1C21E38(&TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo);
    byte_4BD756B = 1;
  }
  v5 = sub_1C22084(TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C21DDC(v5 + 40, rewardAction);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BD7572 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7572 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall TreasureBoxDialogComponent_RewardAction___ctor(
        TreasureBoxDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__StartDisp_d__59___ctor(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TreasureBoxDialogComponent__StartDisp_d__59__MoveNext(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent__StartDisp_d__59_o *v2; // x19
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
  TreasureBoxDialogComponent__StartDisp_d__59_o **p_listRewardAction_5__2; // x21
  int v15; // w23
  __int64 v16; // x22
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 _2__current_low; // x10
  __int64 v20; // x8
  int _2__current; // w9
  int32_t v22; // w22
  TreasureBoxDialogComponent__StartDisp_d__59_o *v23; // x23
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
  if ( (byte_4BD7577 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TreasureBoxDialogComponent_RewardAction_TypeInfo);
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BD7577 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v4, 0.3, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v4;
      sub_1C21DDC(&v2->fields.__2__current, v4);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.scrollBar;
      v8 = maxPlayCnt % listRewardAction_5__2_high
         ? maxPlayCnt / listRewardAction_5__2_high + 1
         : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v9 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v9, (float)(1.0 / (float)((float)((float)v8 * 0.5) + -1.0)) + value, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL);
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
    v2->fields._listRewardAction_5__2 = 0LL;
    sub_1C21DDC(&v2->fields._listRewardAction_5__2, 0LL);
LABEL_19:
    v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    v2->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v13;
    p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__59_o **)&v2->fields._listRewardAction_5__2;
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1C21DDC(&v2->fields._listRewardAction_5__2, v13);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v16 = sub_1C22084(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0LL);
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
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v20 + 32) = v16;
          sub_1C21DDC(v20 + 32, v16);
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
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)this,
                                                                  v22,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v23 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v22,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        started = TreasureBoxDialogComponent__StartRewardAction(
                    _4__this,
                    (TreasureBoxDialogComponent_RewardAction_o *)Item,
                    v25);
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                  started,
                                                                  0LL);
        if ( !v23 )
          goto LABEL_59;
        v23->fields.__4__this = (struct TreasureBoxDialogComponent_o *)this;
        sub_1C21DDC(&v23->fields.__4__this, this);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v22 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              LODWORD(this->fields.__2__current) - 1,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
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
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v2->fields._listRewardAction_5__2;
      if ( this )
      {
        v28 = 0;
        while ( v28 < SLODWORD(this->fields.__2__current) )
        {
          this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v28,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70855504(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v2->fields._listRewardAction_5__2;
            ++v28;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v29 = 0;
          while ( v29 < SLODWORD(this->fields.__2__current) )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v29,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
              ++v29;
              if ( this )
                continue;
            }
            goto LABEL_59;
          }
          this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( this )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_63:
              this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.skipCollider;
              if ( this )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
                this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultIconHideObjList;
                if ( this )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v33,
                            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v33.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v33,
                    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1C22094(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v32 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v32, scrollWait, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v2->fields.__2__current;
      sub_1C21DDC(p__2__current, v32);
      v12 = 3;
      goto LABEL_76;
    }
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL);
  v12 = 2;
LABEL_76:
  *((_DWORD *)p__2__current - 2) = v12;
  return 1;
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartDisp_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TreasureBoxDialogComponent__StartDisp_d__59__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TreasureBoxDialogComponent__StartDisp_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartDisp_d__59__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TreasureBoxDialogComponent__StartDisp_d__59__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartDisp_d__59_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TreasureBoxDialogComponent__StartRewardAction_d__60___ctor(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxDialogComponent__StartRewardAction_d__60__MoveNext(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v2; // x19
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
  const MethodInfo *v16; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v17; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v18; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v19; // x21
  int v20; // s0
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 _2__current_low; // x10
  __int64 v26; // x8
  float v27; // s8
  UnityEngine_WaitForSeconds_o *v28; // x20
  Il2CppObject **v29; // x19
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD7578 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)sub_1C21E38(&StringLiteral_19189/*"ef_treasure_drop"*/);
    byte_4BD7578 = 1;
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
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        rewardAction->fields.playCnt,
                                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v6 = v2->fields.rewardAction;
    if ( v6 )
    {
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)this,
                                                                          v6->fields.playCnt,
                                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
    sub_1C22094(this, method);
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
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, itemDispWaitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &v2->fields.__2__current;
    sub_1C21DDC(p__2__current, v12);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v10->fields.playCnt,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                    (System_String_o *)StringLiteral_19189/*"ef_treasure_drop"*/,
                                                                    transform,
                                                                    v16);
  if ( !this )
    goto LABEL_39;
  v17 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  v18 = v2->fields.rewardAction;
  if ( !v18 )
    goto LABEL_39;
  v19 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v18->fields.playCnt,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v19 )
    goto LABEL_39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)v17,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  v30.fields.x = 1.25;
  v30.fields.y = 1.25;
  v30.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.fallEffectObjList;
  if ( !this )
    goto LABEL_39;
  v23 = *(_QWORD *)&this->fields.__1__state;
  v24 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v23 )
    goto LABEL_39;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v17,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v26 + 32) = v17;
    sub_1C21DDC(v26 + 32, v17);
  }
  v27 = _4__this->fields.itemDispWaitTime;
  v28 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v28, v27, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v28;
  v29 = &v2->fields.__2__current;
  sub_1C21DDC(v29, v28);
  *((_DWORD *)v29 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartRewardAction_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TreasureBoxDialogComponent__StartRewardAction_d__60__System_Collections_IEnumerator_Reset(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TreasureBoxDialogComponent__StartRewardAction_d__60_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TreasureBoxDialogComponent__StartRewardAction_d__60__System_Collections_IEnumerator_get_Current(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TreasureBoxDialogComponent__StartRewardAction_d__60__System_IDisposable_Dispose(
        TreasureBoxDialogComponent__StartRewardAction_d__60_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___ctor(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__0(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4BD7574 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1C21E38(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__);
    byte_4BD7574 = 1;
  }
  monitor = (System_Action_o *)v2[2].monitor;
  klass = (BaseDialog_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__, 0LL);
    v2[2].monitor = monitor;
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1C21DDC(&v2[2].monitor, monitor);
  }
  if ( !klass )
    sub_1C22094(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_4BD7576 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4BD7576 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v2),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4BD7575 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13208/*"StartDisp"*/);
    byte_4BD7575 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13208/*"StartDisp"*/, 0LL);
}